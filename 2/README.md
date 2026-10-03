# Exercício 2 — Média de notas

Faça um programa em C++ que:

- peça ao usuário 3 notas;
- calcule a média delas;
- mostre as três notas;
- mostre a média final.

**Exemplo:**

```
Digite a primeira nota: 7.5
Digite a segunda nota: 8
Digite a terceira nota: 6.5

Nota 1: 7.5
Nota 2: 8
Nota 3: 6.5
Media: 7.33333
```

> pedido feito por: **ChatGPT**

> usou IA durante o processo? **Não**


> adição de novo recurso **implementado por conta própria**
- verficar se o status é: **aprovado**, **recuperação** ou **reprovado**

```
//status do aluno
string status;

if (media_escolar >= 7){
    status = "aprovado";
} else if (media_escolar >= 5){
    status = "recuperação";
} else {
    status = "reprovado";
}
```