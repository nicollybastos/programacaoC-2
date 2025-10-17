# Aula 02 - Estruturas de Decisão em C

Nesta aula, aprofundamos o uso das **estruturas de decisão** na linguagem C, entendendo como criar programas que **tomam decisões** com base em condições lógicas e valores comparados. Além disso, aplicamos esses conceitos no desenvolvimento de **jogos e programas interativos**, reforçando a importância da lógica condicional na programação.

---

## 🧠 Tópicos Abordados

### 🔹 Operadores Relacionais e Lógicos
Aprendemos a comparar valores utilizando operadores relacionais (`>`, `<`, `==`, `!=`, `>=`, `<=`) e a combinar condições por meio dos operadores lógicos (`&&`, `||`, `!`).  
Esses operadores são essenciais para criar expressões condicionais que direcionam o fluxo do programa.

---

### 🔹 Estruturas de Decisão Simples e Compostas
Exploramos o uso dos comandos `if` e `if-else` para criar decisões que permitem ao programa responder de maneiras diferentes conforme as condições verificadas.

```c
if (idade >= 18) {
    printf("Maior de idade!");
} else {
    printf("Menor de idade!");
}
