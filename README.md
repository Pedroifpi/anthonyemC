Crie 10 fluxogramas acadêmicos em português utilizando corretamente os símbolos padrões de fluxograma.

REGRAS OBRIGATÓRIAS:
- Usar OVAL para “Início” e “Fim”.
- Usar PARALELOGRAMO para entrada e saída de dados.
- Usar RETÂNGULO para cálculos e processamento.
- Usar LOSANGO para decisões e condições.
- Todos os blocos devem estar conectados com setas.
- Organizar os fluxogramas na vertical.
- Utilizar estilo simples, limpo e profissional.
- Colocar os textos dentro das formas geométricas.
- Em decisões, identificar os caminhos com “Sim” e “Não”.

==================================================
EXERCÍCIO 1 — SALÁRIO DIÁRIO
==================================================

Descrição:
Receber o valor do salário de um trabalhador, calcular e mostrar o valor diário deste salário.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler salário

↓

[Retângulo]
salario_diario = salario / 30

↓

[Paralelogramo]
Mostrar salario_diario

↓

[Oval]
Fim

==================================================
EXERCÍCIO 2 — METADE DE UM NÚMERO
==================================================

Descrição:
Calcular e mostrar a metade de um número informado pelo usuário.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler número

↓

[Retângulo]
metade = numero / 2

↓

[Paralelogramo]
Mostrar metade

↓

[Oval]
Fim

==================================================
EXERCÍCIO 3 — SOMA DE TRÊS NÚMEROS
==================================================

Descrição:
Ler três números quaisquer e mostrar o resultado da soma destes números.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler numero1

↓

[Paralelogramo]
Ler numero2

↓

[Paralelogramo]
Ler numero3

↓

[Retângulo]
soma = numero1 + numero2 + numero3

↓

[Paralelogramo]
Mostrar soma

↓

[Oval]
Fim

==================================================
EXERCÍCIO 4 — MÉDIA DE QUATRO NÚMEROS
==================================================

Descrição:
Ler quatro números quaisquer e mostrar o resultado da média destes números.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler n1

↓

[Paralelogramo]
Ler n2

↓

[Paralelogramo]
Ler n3

↓

[Paralelogramo]
Ler n4

↓

[Retângulo]
media = (n1 + n2 + n3 + n4) / 4

↓

[Paralelogramo]
Mostrar media

↓

[Oval]
Fim

==================================================
EXERCÍCIO 5 — ÁREA DO RETÂNGULO
==================================================

Descrição:
Calcular a área de um retângulo.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler base

↓

[Paralelogramo]
Ler altura

↓

[Retângulo]
area = base * altura

↓

[Paralelogramo]
Mostrar area

↓

[Oval]
Fim

==================================================
EXERCÍCIO 6 — ÁREA DO CÍRCULO
==================================================

Descrição:
Calcular a área de um círculo.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler raio

↓

[Retângulo]
area = 3.14 * raio * raio

↓

[Paralelogramo]
Mostrar area

↓

[Oval]
Fim

==================================================
EXERCÍCIO 7 — IDADE EM DIAS
==================================================

Descrição:
Ler a idade de uma pessoa expressa em anos, meses e dias e mostrar a idade expressa apenas em dias.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler anos

↓

[Paralelogramo]
Ler meses

↓

[Paralelogramo]
Ler dias

↓

[Retângulo]
total_dias = (anos * 365) + (meses * 30) + dias

↓

[Paralelogramo]
Mostrar total_dias

↓

[Oval]
Fim

==================================================
EXERCÍCIO 8 — MAIOR OU MENOR QUE 10
==================================================

Descrição:
Ler um número qualquer e verificar se este número é maior ou igual a 10.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler numero

↓

[Losango]
numero >= 10 ?

├── Sim →
[Paralelogramo]
Mostrar "Maior"

└── Não →
[Paralelogramo]
Mostrar "Menor"

↓

[Oval]
Fim

==================================================
EXERCÍCIO 9 — MÉDIA MAIOR QUE 100
==================================================

Descrição:
Ler 5 valores, calcular a média aritmética destes valores e verificar se o resultado é maior que 100.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler v1

↓

[Paralelogramo]
Ler v2

↓

[Paralelogramo]
Ler v3

↓

[Paralelogramo]
Ler v4

↓

[Paralelogramo]
Ler v5

↓

[Retângulo]
media = (v1 + v2 + v3 + v4 + v5) / 5

↓

[Losango]
media > 100 ?

├── Sim →
[Paralelogramo]
Mostrar "Maior"

└── Não →
[Paralelogramo]
Mostrar "Menor"

↓

[Oval]
Fim

==================================================
EXERCÍCIO 10 — POSITIVO, NEGATIVO OU ZERO
==================================================

Descrição:
Mostrar se um número qualquer é positivo, negativo ou zero.

Fluxograma:

[Oval]
Início

↓

[Paralelogramo]
Ler numero

↓

[Losango]
numero > 0 ?

├── Sim →
[Paralelogramo]
Mostrar "Positivo"

└── Não →

    [Losango]
    numero < 0 ?

    ├── Sim →
    [Paralelogramo]
    Mostrar "Negativo"

    └── Não →
    [Paralelogramo]
    Mostrar "Zero"

↓

[Oval]
Fim