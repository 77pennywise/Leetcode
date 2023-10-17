SELECT DISTINCT w1.Id
FROM Weather w1,Weather w2
WHERE w1.Temperature > w2.Temperature
AND DATEDIFF(w1.Recorddate,w2.Recorddate) = 1