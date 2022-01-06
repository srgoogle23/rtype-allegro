void redesenhaTela();
void redesenhaBackground();

void redesenhaTela()
{
    // limpa a tela com a cor preta
    al_clear_to_color(al_map_rgb(0, 0, 0));

    // redesenha objetos
    redesenhaBackground();
    redesenhaNave();
    redesenhaAsteroids();
}

void redesenhaBackground()
{
    al_draw_bitmap(background, 0, 0, 0);
}