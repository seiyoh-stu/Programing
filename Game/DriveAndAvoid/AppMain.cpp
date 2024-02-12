/**********************************
*�ԏ����Q�[��������Ă݂悤�I
***********************************/
#include "DxLib.h"
#include "Scene/SceneManager.h"

//���C���֐��i�v���O�����͂�������n�܂�܂��B�j
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmpLine, _In_ int cCmdShow)
{
	//��O�����i�ُ킪����������Acatch���ɔ�т܂��j
	try
	{
		//�V�[���}�l�[�W���[����̐���
		SceneManager manager;

		//�V�[���}�l�[�W���[�@�\�̏���������
		manager.Initialize();

		//�V�[���}�l�[�W���[�@�\�̏���������
		manager.Update();

		//�V�[���}�l�[�W���[�@�\�̏I��������
		manager.Finalize();
	}
	catch (const char* err_log)
	{
		//�G���[�������e�̏o��
		OutputDebugString(err_log);

		//�G���[�I����ʒm
		return -1;
	}

	//����I����ʒm
	return 0;
}