// roc 2008-06 0071f540  unit: CXTPResourceManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f540
//
// 0071f540  8b542404             mov edx, dword ptr [esp + 4]
// 0071f544  33c9                 xor ecx, ecx
// 0071f546  33c0                 xor eax, eax
// 0071f548  56                   push esi
// 0071f549  8da42400000000       lea esp, [esp]
// 0071f550  0fb7b0c8899600       movzx esi, word ptr [eax + 0x9689c8]
// 0071f557  3bd6                 cmp edx, esi
// 0071f559  740f                 je 0x71f56a
// 0071f55b  83c01c               add eax, 0x1c
// 0071f55e  41                   inc ecx
// 0071f55f  3db8030000           cmp eax, 0x3b8
// 0071f564  72ea                 jb 0x71f550
// 0071f566  33c0                 xor eax, eax
// 0071f568  5e                   pop esi
// 0071f569  c3                   ret 
// 0071f56a  8d04cd00000000       lea eax, [ecx*8]
// 0071f571  2bc1                 sub eax, ecx
// 0071f573  8d0485c8899600       lea eax, [eax*4 + 0x9689c8]
// 0071f57a  5e                   pop esi
// 0071f57b  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetLanguageInfo@CXTPResourceManager@@SAPAUXTP_RESOURCEMANAGER_LANGINFO@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
