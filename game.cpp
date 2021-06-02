#include "Game.h"
#include "SceneMgr.h"
#include "DxLib.h"

int Tile[11]; //�^�C��
int s;
int x;
int y;

static int mImageHandle; //�摜�n���h���i�[�p�ϐ�

int mField[MAP_HEIGHT][MAP_WIDTH] ={
	{9,9,9,9,9,7,7,7,7,9,9,9,9,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,7,7,7,7,7,7,7,7,7,7,8,9},
	{9,8,8,8,8,8,8,8,8,8,8,8,8,9},
	{9,8,9,9,9,9,9,9,9,9,9,9,9,9},
};
//������
void Game_Initialize() {
	//mImageHandle = LoadGraph("images/tile.png");

}
//�I������
void Game_Finalize() {

	DeleteGraph(mImageHandle); //�摜�̉��
}
//�X�V
void Game_Update() {
	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) { //Esc�L�[��������Ă�����
		SceneMgr_ChangeScene(eScene_Menu);//�V�[�������j���[�ɕύX
	}
}
//�`��
void Game_Draw() {
	//int s = TILE_SIZE;

	LoadDivGraph("images/tile.png", 11, 11, 1, TILE_SIZE, TILE_SIZE, Tile);

	s = TILE_SIZE * 2;
	for (y = 0; y < MAP_HEIGHT; y++) {
		for (x = 0; x < MAP_WIDTH; x++) {
			DrawExtendGraph(x * s, y * s, x * s + s, y * s + s, Tile[mField[y][x]], FALSE);
		}
	}
	//DrawGraph(0, 0, mImageHandle, TRUE);//����
}