const express = require('express');
const app = express();
const port = 3000;

const task1 = require('./tasks/task1');
const task2 = require('./tasks/task2');

app.get('/task1', (req, res) => {
    task1.executeTask1();
    res.send('task 1 xxx l1ve709');
});

app.get('/task2', (req, res) => {
    task2.executeTask2();
    res.send('task 2 xxx l1ve709');
});

app.listen(port, () => {
    console.log(`Node.js server is running at http://localhost:${port}`);
});
