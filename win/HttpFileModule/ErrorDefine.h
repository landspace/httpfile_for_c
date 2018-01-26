#pragma once

enum ERROR_ENUM
{
	ERROR_SUCCESS_DEFAULT=0x00000000,					/* �ɹ� */
	ERROR_INPUT_PARAM=0x00000001,						/* ����������� */
	ERROR_REMOTE_FILE_NOT_FOUND,						/* url �ļ������� */
	ERROR_LOCAL_FILE_NOT_FOUND,							/* �����ļ������� */
	ERROR_LOCAL_FILE_CAN_NOT_ACCESS,					/* �����ļ�û�з���Ȩ�� */
	ERROR_LAST_TASK_IS_WORKING,							/* ��һ���������ڹ��� */
	ERROR_CREATE_TASK_THREAD_FAILED,					/* ���������߳�ʧ�� */
	ERROR_ANALYSIS_URL,									/* ����URLʧ�� */
	ERROR_GET_HTTP_CONNECTION,							/* ��ȡhttp����ʧ�� */
	ERROR_QUARY_CONTENT_LENGTH,							/* ��ѯhttp�ļ�����Ϊ0 */
	ERROR_HTTP_EXCEPTION,								/* http �쳣��ͨ��GetLastError()����ȡ��Ӧ������ */
};
