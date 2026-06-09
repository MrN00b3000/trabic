#include "raylib.h"

int main(void) {
    // Inicializa a janela com largura, altura e o título
    InitWindow(800, 450, "Raylib em C Puro!");

    SetTargetFPS(60); // Controla o jogo a 60 frames por segundo

    // Loop principal do jogo
    while (!WindowShouldClose()) {
        // 1. Atualizar variáveis (se necessário)

        // 2. Desenhar na tela
        BeginDrawing();
            ClearBackground(BLACK); // Limpa a tela com a cor preta
            DrawText("Parabéns! Raylib configurada em C.", 190, 200, 20, RAYWHITE);
        EndDrawing();
    }

    // Fecha a janela e o contexto OpenGL
    CloseWindow();

    return 0;
}