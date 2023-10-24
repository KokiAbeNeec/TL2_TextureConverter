#pragma once
#include <string>
#include "DirectXTex/DirectXTex.h"


// �e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:
	///<summary>
	/// �e�N�X�`����WIC����DDS�ɕϊ�����
	///</summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void ConverterTextureWICToDDS(const std::string& filePath);
private:
	///<summary>
	/// �e�N�X�`���t�@�C���ǂݍ���
	///</summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void LoadWICTextureFromFile(const std::string& filePath);
private:
	///<summary>
	/// �}���`�o�C�g����������C�h������ɕϊ�
	///</summary>
	/// <param name="mString">�}���`�o�C�g������</param>
	/// <returns>���C�h������</returns>
	static std::wstring ConverterMultiByteStringToWideString(const std::string& mString);
};