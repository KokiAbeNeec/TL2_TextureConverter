#include "TextureConverter.h"


void TextureConverter::ConverterTextureWICToDDS(const std::string& filePath)
{
	LoadWICTextureFromFile(filePath);
}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	std::wstring wfilePath = ConverterMultiByteStringToWideString(filePath);
}

std::wstring TextureConverter::ConverterMultiByteStringToWideString(const std::string& mString)
{
	// ���C�h������ɕϊ������ۂ̕��������v�Z
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	// ���C�h������
	std::wstring wString;
	wString.resize(filePathBufferSize);

	// ���C�h������ɕϊ�
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}