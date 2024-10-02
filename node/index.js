const express = require('express');
const app = express();
const port = 3000;

const taskX = require('./node/taskX');
const taskY = require('./node/taskY');
const taskZ = require('./node/taskZ');


app.get('/taskX', (req, res) => {
    taskX.executeTaskX();
    res.send('task 1 xxx l1ve709');
});

app.get('/taskZ', (req, res) => {
    taskY.executeTaskZ();
    res.send('task xyz running');
});

app.get('/taskY', (req, res) => {
    taskZ.executeTaskY();
    res.send('task xyz running');
});


app.get('/taskW', (req, res) => {
    taskW.executeTaskW();
    res.send('task xyzW running');
});

app.listen(port, () => {
    console.log(`Node.js server is running at http://localhost:${port}`);
});
