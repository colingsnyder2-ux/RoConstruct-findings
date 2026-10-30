// roc 2012-06 009f7ff0  unit: CXTPResourceManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7ff0
//
// 009f7ff0  8b542404             mov edx, dword ptr [esp + 4]
// 009f7ff4  33c9                 xor ecx, ecx
// 009f7ff6  33c0                 xor eax, eax
// 009f7ff8  56                   push esi
// 009f7ff9  8da42400000000       lea esp, [esp]
// 009f8000  0fb7b05050e000       movzx esi, word ptr [eax + 0xe05050]
// 009f8007  3bd6                 cmp edx, esi
// 009f8009  740f                 je 0x9f801a
// 009f800b  83c01c               add eax, 0x1c
// 009f800e  41                   inc ecx
// 009f800f  3db8030000           cmp eax, 0x3b8
// 009f8014  72ea                 jb 0x9f8000
// 009f8016  33c0                 xor eax, eax
// 009f8018  5e                   pop esi
// 009f8019  c3                   ret 
// 009f801a  8d04cd00000000       lea eax, [ecx*8]
// 009f8021  2bc1                 sub eax, ecx
// 009f8023  8d04855050e000       lea eax, [eax*4 + 0xe05050]
// 009f802a  5e                   pop esi
// 009f802b  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetLanguageInfo@CXTPResourceManager@@SAPAUXTP_RESOURCEMANAGER_LANGINFO@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
