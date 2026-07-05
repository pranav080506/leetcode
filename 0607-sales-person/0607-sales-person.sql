# Write your MySQL query statement below
SELECT name FROM salesPerson
WHERE sales_id NOT IN (
    select o.sales_id
    FROM Orders O
    JOIN Company c
    ON o.com_id=c.com_id
    WHERE c.name='RED'
);