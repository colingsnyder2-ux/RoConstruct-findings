// roc 2011-06 0087fa40  unit: CXTPResourceManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087fa40
//
// 0087fa40  8b542404             mov edx, dword ptr [esp + 4]
// 0087fa44  33c9                 xor ecx, ecx
// 0087fa46  33c0                 xor eax, eax
// 0087fa48  56                   push esi
// 0087fa49  8da42400000000       lea esp, [esp]
// 0087fa50  0fb7b07880c900       movzx esi, word ptr [eax + 0xc98078]
// 0087fa57  3bd6                 cmp edx, esi
// 0087fa59  740f                 je 0x87fa6a
// 0087fa5b  83c01c               add eax, 0x1c
// 0087fa5e  41                   inc ecx
// 0087fa5f  3db8030000           cmp eax, 0x3b8
// 0087fa64  72ea                 jb 0x87fa50
// 0087fa66  33c0                 xor eax, eax
// 0087fa68  5e                   pop esi
// 0087fa69  c3                   ret 
// 0087fa6a  8d04cd00000000       lea eax, [ecx*8]
// 0087fa71  2bc1                 sub eax, ecx
// 0087fa73  8d04857880c900       lea eax, [eax*4 + 0xc98078]
// 0087fa7a  5e                   pop esi
// 0087fa7b  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetLanguageInfo@CXTPResourceManager@@SAPAUXTP_RESOURCEMANAGER_LANGINFO@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
