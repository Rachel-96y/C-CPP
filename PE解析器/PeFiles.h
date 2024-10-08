// PeFiles.h: interface for the PeFiles class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PEFILES_H__4CB7594F_38DA_4A00_831C_9449AB0744FC__INCLUDED_)
#define AFX_PEFILES_H__4CB7594F_38DA_4A00_831C_9449AB0744FC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

DWORD ChangeRvaToFoa32(IN DWORD RVA, IN LPVOID fpFileBuffer);
//////////////////////////////////////////////////////////////////////
// 函数功能说明:
// 此函数接收一个 Rva 及一个 FileBuffer 指针 返回一个 Foa
//
// 参数说明:
// Rva							在内存中的偏移
// pFileBuffer					FileBuffer 缓冲区指针
//
// 返回值说明:
// 如果执行成功则返回该值在文件中的偏移 失败则返回0
//////////////////////////////////////////////////////////////////////

DWORD ChangeRvaToFoa64(IN DWORD RVA, IN LPVOID fpFileBuffer);
//////////////////////////////////////////////////////////////////////
// 同ChangeRvaToFoa32
//////////////////////////////////////////////////////////////////////


DWORD ChangeFoaToRva32(IN UINT FOA, IN LPVOID fpFileBuffer);
//////////////////////////////////////////////////////////////////////
// 函数功能说明:
// 此函数接收一个 Foa 及一个 FileBuffer 指针 返回一个 Rva
//
// 参数说明:
// Foa							在文件中的偏移
// pFileBuffer					FileBuffer 缓冲区指针
//
// 返回值说明:
// 如果执行成功则返回该值在文件中的偏移 失败则返回0
//////////////////////////////////////////////////////////////////////

DWORD ChangeFoaToRva64(IN UINT FOA, IN LPVOID fpFileBuffer);
//////////////////////////////////////////////////////////////////////
// 同ChangeFoaToRva32位
//////////////////////////////////////////////////////////////////////

DWORD IsPeFile(IN LPTSTR szFilePath, IN PTLSDirectory g_pStTLS);
//////////////////////////////////////////////////////////////////////
// 函数功能说明:
// 根据传入的文件缓冲区 检测文件是否是PE文件
//
// 参数说明:
// szFilePath					文件在内存中的缓冲区指针
// g_pStTLS								
// 
// 返回值说明:
// 如果是PE文件则返回RETURN_SUCESS
// 如果返回ERROR_DOS_MZ则代表是错误的DOS_MZ头
// 如果返回ERROR_PE_SIGNATURE则代表是错误的PE标识
//////////////////////////////////////////////////////////////////////

#endif // !defined(AFX_PEFILES_H__4CB7594F_38DA_4A00_831C_9449AB0744FC__INCLUDED_)
