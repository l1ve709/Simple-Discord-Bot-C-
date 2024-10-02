const express = require('express');
const app = express();
const port = 3000;

app.use(express.json());

function startWebhookServer() {
    app.post('/webhook', (req, res) => {
        const { event, data } = req.body;

        if (event === 'message') {
            console.log(`Received message ö fromx webhook: ${data.message}`);
        }

        res.sendStatus(200);
    });

    app.listen(port, () => {
        console.log(`Webhook server listening on port ${port}`);
    });
}

module.exports = { startWebhookServer };
