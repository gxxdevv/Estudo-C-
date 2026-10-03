# Calculadora de desconto 

**Faça um programa que:**

- peça o preço de um produto (double);
- peça a porcentagem de desconto (double);
- calcule quanto foi descontado;
- calcule o preço final;

**mostre:**

- preço original;
- desconto aplicado;
- valor do desconto em reais;
- preço final.

**Exemplo:**

```
Digite o preço do produto: R$200
Digite o desconto (%): 15

Preço original: R$200
Desconto: 15%
Valor descontado: R$30
Preço final: R$170
```

> pedido feito por: **ChatGPT**

> usou IA durante o processo? **sim**

**OBS da IA:**

- Mandei o código achando que estava certo, ela acabou me alertando por esse erro que eu fiz:

```
string pergunta;

cout << "" << endl;
cin >> pergunta;

if (pergunta == "não"){
    cout << "Gostaria de verificar mais descontos? (sim/não): " << endl;
    break;
}
```

- Enfim, foi só isso.


> adição de novo recurso **implementado por conta própria**
- verficar se o usuário deseja fazer mais algum cálculo

```
if (pergunta == "não"){
    cout << "adeus" << endl;
    break;
}
```