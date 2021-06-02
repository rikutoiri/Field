#pragma once

#define TILE_SIZE 12
#define MAP_WIDTH  14               // フィールドの幅
#define MAP_HEIGHT 25               // フィールドの高さ
//#define NUM  WIDTH * HEIGHT // フィールドのマスの数




void Game_Initialize();//初期化
void Game_Finalize();//終了処理
void Game_Update();//更新
void Game_Draw();//描画

