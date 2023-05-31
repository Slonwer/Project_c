-- Função para criar uma matriz com o tamanho especificado
function criarMatriz(linhas, colunas)
  local matriz = {}
  for i = 1, linhas do
    matriz[i] = {}
    for j = 1, colunas do
      matriz[i][j] = 0
    end
  end
  return matriz
end

-- Função para imprimir a matriz
function imprimirMatriz(matriz)
  for i = 1, #matriz do
    for j = 1, #matriz[i] do
      io.write(matriz[i][j] .. " ")
    end
    print()
  end
end

-- Solicita ao usuário o tamanho da matriz
print("Digite o número de linhas da matriz:")
local linhas = tonumber(io.read())

print("Digite o número de colunas da matriz:")
local colunas = tonumber(io.read())

-- Cria a matriz com o tamanho especificado
local matriz = criarMatriz(linhas, colunas)

-- Preenche a matriz com os valores fornecidos pelo usuário
for i = 1, linhas do
  for j = 1, colunas do
    print("Digite o valor para a posição [" .. i .. "][" .. j .. "]:")
    matriz[i][j] = tonumber(io.read())
  end
end

-- Imprime a matriz
print("Matriz:")
imprimirMatriz(matriz)
