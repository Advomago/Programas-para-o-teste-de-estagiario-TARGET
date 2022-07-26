

let myData = require('./dados.json')
let valorAux, diaAux, mediaFatMensal, faturamentoMensal = 0, qtdDias = 0;


for (let i in myData) {
    //indicando um valor como base para calcular os valores maiores ou menores
    if (myData[i].valor != 0) {
        valorAux = myData[i].valor;
        diaAux = myData[i].dia;
    }
    //fazendo a contagem de dias validos para calcular a media do faturamento  
    if (myData[i].dia > qtdDias && myData[i].valor != 0) {
        qtdDias = myData[i].dia;
    }
    faturamentoMensal += myData[i].valor;
}

mediaFatMensal = faturamentoMensal / qtdDias;


for (let i in myData) {
    //calculando o maior valor de faturamento em um unico dia
    if (myData[i].valor > valorAux) {
        valorAux = myData[i].valor;
        diaAux = myData[i].dia;
    }
}

let maiorValor = valorAux;
let diaMaiorValor = diaAux, contDiasMedia = 0;

for (let i in myData) {
    //calculando o menor valor de faturamento em um unico dia
    if (myData[i].valor < valorAux && myData[i].valor != 0) {
        valorAux = myData[i].valor;
        diaAux = myData[i].dia;
    }
    if (myData[i].valor > mediaFatMensal){
        contDiasMedia++;
    }
}
let menorValor = valorAux;
let diaMenorValor = diaAux;


console.log('O dia '+diaMaiorValor+' Teve o maior faturamento entre todos os outros dias do mês com: R$ '+maiorValor);
console.log('O dia '+diaMenorValor+' Teve o menor faturamento entre todos os outros dias do mês com: R$ '+menorValor);
console.log('Nesse mês tivemos a quantidade de '+contDiasMedia+' dias onde ultrapassamos a média do valor mensal de: R$ '+mediaFatMensal);
