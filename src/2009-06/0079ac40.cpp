// roc 2009-06 0079ac40  unit: CXTPResourceManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079ac40
//
// 0079ac40  8b542404             mov edx, dword ptr [esp + 4]
// 0079ac44  33c9                 xor ecx, ecx
// 0079ac46  33c0                 xor eax, eax
// 0079ac48  56                   push esi
// 0079ac49  8da42400000000       lea esp, [esp]
// 0079ac50  0fb7b0187da200       movzx esi, word ptr [eax + 0xa27d18]
// 0079ac57  3bd6                 cmp edx, esi
// 0079ac59  740f                 je 0x79ac6a
// 0079ac5b  83c01c               add eax, 0x1c
// 0079ac5e  41                   inc ecx
// 0079ac5f  3db8030000           cmp eax, 0x3b8
// 0079ac64  72ea                 jb 0x79ac50
// 0079ac66  33c0                 xor eax, eax
// 0079ac68  5e                   pop esi
// 0079ac69  c3                   ret 
// 0079ac6a  8d04cd00000000       lea eax, [ecx*8]
// 0079ac71  2bc1                 sub eax, ecx
// 0079ac73  8d0485187da200       lea eax, [eax*4 + 0xa27d18]
// 0079ac7a  5e                   pop esi
// 0079ac7b  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetLanguageInfo@CXTPResourceManager@@SAPAUXTP_RESOURCEMANAGER_LANGINFO@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
