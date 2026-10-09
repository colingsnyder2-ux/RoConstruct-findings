// roc 2009-12 0086e3a0  unit: CXTPResourceManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e3a0
//
// 0086e3a0  8b542404             mov edx, dword ptr [esp + 4]
// 0086e3a4  33c9                 xor ecx, ecx
// 0086e3a6  33c0                 xor eax, eax
// 0086e3a8  56                   push esi
// 0086e3a9  8da42400000000       lea esp, [esp]
// 0086e3b0  0fb7b0087cb600       movzx esi, word ptr [eax + 0xb67c08]
// 0086e3b7  3bd6                 cmp edx, esi
// 0086e3b9  740f                 je 0x86e3ca
// 0086e3bb  83c01c               add eax, 0x1c
// 0086e3be  41                   inc ecx
// 0086e3bf  3db8030000           cmp eax, 0x3b8
// 0086e3c4  72ea                 jb 0x86e3b0
// 0086e3c6  33c0                 xor eax, eax
// 0086e3c8  5e                   pop esi
// 0086e3c9  c3                   ret 
// 0086e3ca  8d04cd00000000       lea eax, [ecx*8]
// 0086e3d1  2bc1                 sub eax, ecx
// 0086e3d3  8d0485087cb600       lea eax, [eax*4 + 0xb67c08]
// 0086e3da  5e                   pop esi
// 0086e3db  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetLanguageInfo@CXTPResourceManager@@SAPAUXTP_RESOURCEMANAGER_LANGINFO@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
