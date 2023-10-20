# Write your MySQL query statement below
SELECT S.student_id, S.student_name, B.subject_name, count(E.subject_name) AS attended_exams
FROM Students S

INNER JOIN Subjects B
LEFT JOIN Examinations E
ON S.student_id = E.student_id 
AND E.subject_name = B.subject_name

GROUP BY S.student_id, S.student_name, B.subject_name
ORDER BY S.student_id, S.student_name, B.subject_name
;