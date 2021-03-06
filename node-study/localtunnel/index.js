const express = require('express');
const path = require('path');

const app = express();
app.set('port', process.envPORT || 19000);

app.use(morgan('dev'));
app.use('/', express.static(path.join(__dirname,'public')));
app.get('/', (req, res) => {
        res.sendFile(path.join(__dirname, '/index.html'));
});


app.listen(app.get('port'), () => {
        console.log(app.get('port'), ' port ready')
});
