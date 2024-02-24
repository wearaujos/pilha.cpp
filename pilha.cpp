#include<iostream>
#include<stack>

int main() {
    std::stack<int> pilha;

    // Adicionando elementos na pilha
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);

    // Exibindo o topo da pilha
    std::cout << "Topo da pilha: " << pilha.top() << std::endl;

    // Removendo elementos da pilha
    pilha.pop();
    std::cout << "Topo da pilha após remover um elemento: " << pilha.top() << std::endl;

    return 0;
}
