const { mainModule } = require('process');
const prompt = require('prompt');

prompt.start();

function msToTime(ms) {
    return new Date(ms).toISOString().slice(11, -1);
}

function onErr(err) {
    console.log(err);
    return 1;
}

    var curnum;
    var trynum;
    var i;
    var divcount;
    var dg;
    var listpos;
    var numlist;
    var Strt;
    var Stp;

    i = 0;
    curnum = 2;
    divcount = 0;
    listpos = 0;
    numlist = [];
        prompt.get(['mist'], function (err, result) {
            if (err) { return onErr(err); }
            console.log('mist ' + result.mist);
            dg = result.mist;
            main();
        });
        //numlist.length = dg;
        /*console.log('asi to neni cislo nebo nevim uz');
        console.log('pres');
        prompt.get('', function (err, result) {
            if (err) { return onError(err); }
        });
        all();*/

function main() {
    Strt = Date.now();
    console.log('vypocitavam...');
    while (curnum <= dg) {
        //writeln('zkousim ' + IntToStr(curnum));
        if ((Math.sqrt(curnum) % 1) == 0) {

            //writeln('neni nic')
        }
        else {
            //writeln('zkus');
            trynum = 2;
            while (trynum < Math.sqrt(curnum)) {
                if (((curnum / trynum) % 1) == 0) {
                    divcount++;
                    trynum++;
                }
                else {
                    trynum++;
                }
            }
            //writeln(divcount);
            //writeln(trynum);
            if (divcount == 0) {
                //writeln(IntToStr(curnum) + ' je prvocislo' + #13#10);
                numlist[listpos] = curnum;
                listpos++;
            }
            else {
                //writeln(IntToStr(curnum) + ' neni prvocislo' + #13#10);
                divcount = 0;
            }
        }
        curnum++;
    }

    Stp = Date.now();
    
    console.log('Nalezena prvocisla: ');
    //write whole numlist
    for (i = 0; i < listpos - 1; i++) {
        process.stdout.write(numlist[i].toString());
        process.stdout.write(', ');
    }
    console.log('');
    console.log('Nalezeno prvocisel: ' + listpos.toString());

    var ser = "Time taken: " + (msToTime(Stp - Strt)).toString();
    console.log(ser);

    /*Writeln('Press any key...');
    readln();*/
}