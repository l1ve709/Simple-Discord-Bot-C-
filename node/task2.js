const userMessages = new Map();

function checkSalakEvladı(message) {
    const userId = message.author.id;
    const now = Date.now();

    if (!userMessages.has(userId)) 
        userMessages.set(userId, []);
    }

    const timestamps = userMessages.get(userId);
    timestamps.push(now);

    if (timestamps.length > 5) {
        const firstTimestamp = timestamps[0];
        if (now - firstTimestamp < 5000) {
            message.reply("Çok hızlı mesaj gönderiyorsunuz! Az yavaş ol orospu evladı.");
            message.delete();
            timestamps.length = 0;  
        }
    }
}

module.exports = { checkSalakEvladı };
