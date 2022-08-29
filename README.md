# cryptography-xor
Nessa atividade foi utilizado o meu RU como chave (3529473), como texto “Este
texto deve ser criptografado.” o que resultou no seguinte “D¨Ae!¯Pxu´§dd-P r¾G
b©\pu´Rr`½Tdnõ”.
Texto criptografado utilizando criptografia simétrica pelo algoritmo elementar XOR.
O programa inicia definindo bibliotecas para utilização do comando printf e
bibliotecas para utilização do sistema de cores, afim de aprimorar o programa
visualmente, após isso são definidas as cores e o comando SIZE_I seguido de uma
typedef union com duas variáveis, nomeada cifra. Nas linhas seguintes observa-se uma
função nomeada cifrar que tem como objetivo realizar o processo de criptografia e
conversão.
Após a função temos o int main(void), o “início” do programa aonde definimos
a linguagem a ser utilizada como português e criamos um cabeçalho para melhor
desempenho visual da aplicação.
Seguido do cabeçalho temos definido const o typedef “cifra” com a criação da
variável RU que define um número para esta variável, essencial para a criação da chave,
e em seguida a criação da variável frase, que será a frase a ser criptografada, seguida de
um for criando a chave para o criptografia.
Abaixo disso a criação de mais duas variáveis de teste para serem adicionadas nos
prints abaixo e darem o resultado esperado pela atividade e com isso finalizamos o
programa, simples mas que cumpre os exatos requisitos solicitados pela atividade
proposta.
