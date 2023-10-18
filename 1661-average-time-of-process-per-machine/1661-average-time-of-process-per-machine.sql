# Write your MySQL query statement below
SELECT machine_id, ROUND(SUM(end_time - start_time) / SUM(process_count), 3) AS processing_time
FROM (
    SELECT machine_id, process_id,
           MAX(CASE WHEN activity_type = 'end' THEN timestamp END) AS end_time,
           MIN(CASE WHEN activity_type = 'start' THEN timestamp END) AS start_time,
           COUNT(DISTINCT process_id) AS process_count
    FROM Activity
    GROUP BY machine_id, process_id
) AS process_times
GROUP BY machine_id;
