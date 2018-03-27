# Tarefa II

Tarefa solicitada no curso de Métodos Numéricos II, pelo professor @thadeupenna

## Método do Ponto Fixo

Este método consiste em encontrar raízes de equações, transformando a equação em uma composição de funções, gerando desta forma uma sequência de aproximações para a raiz da equação.

O método possui a seguinte relação para a sequência de aproximações:

![Relação da sequência de aproximações](eq1.gif)

Precisamos assim de três condições para a utilização deste método:

![Condições do método](eq2.gif)

Após isto, será possível que consiga-se descobrir o valor da raiz de qualque função que satisfaça as condições dadas.


## Aplicação do método.

Utilizando a função cos(x)-x, aplicamos o método em linguagem C para gerar o número de interações e as raizes geradas pelo método. Após os cálculos feitos pelo computador, chegamos aos seguintes pontos:

![Gráfico lin-lin dos pontos gerados pelo programa](pflin-lin1.png)

![Gráfico lin-log dos pontos gerados pelo programa](pflin-log1.png)

![Gráfico log-log dos pontos gerados pelo programa](pflog-log1.png)

Com isso é possível ver que o método com o valor inicial igual a 0.75 tem uma aproximação exponencial, pois o gráfico que melhor se aproxima de uma reta seria o lin-log. Já para o valor inicial de 1.5, fica umito complicado, pois os valores oscilam muito no começo do método, porém, logo após isto se estabiliza, chegando em uma similaridade ao intervalo criado pelo valor inicial de 0.75.

## Conclusões

Desta forma podemos chegar que, para esta função, o melhor gráfico que pode representar o método é uma exponecial. Vimos também que quanto mais distante o valor inicial da raiz, o comportamento do intervalo pode ser variante, não sendo tendencioso, desta forma ocorrem mais interações dentro do programa e fica difícil a visualização de qual a melhor função que se pode aproximar o gráfico dos pontos gerados.
