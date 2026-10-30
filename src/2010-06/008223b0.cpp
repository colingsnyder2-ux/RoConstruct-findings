// roc 2010-06 008223b0  unit: CXTPResourceManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008223b0
//
// 008223b0  8b542404             mov edx, dword ptr [esp + 4]
// 008223b4  33c9                 xor ecx, ecx
// 008223b6  33c0                 xor eax, eax
// 008223b8  56                   push esi
// 008223b9  8da42400000000       lea esp, [esp]
// 008223c0  0fb7b0b889be00       movzx esi, word ptr [eax + 0xbe89b8]
// 008223c7  3bd6                 cmp edx, esi
// 008223c9  740f                 je 0x8223da
// 008223cb  83c01c               add eax, 0x1c
// 008223ce  41                   inc ecx
// 008223cf  3db8030000           cmp eax, 0x3b8
// 008223d4  72ea                 jb 0x8223c0
// 008223d6  33c0                 xor eax, eax
// 008223d8  5e                   pop esi
// 008223d9  c3                   ret 
// 008223da  8d04cd00000000       lea eax, [ecx*8]
// 008223e1  2bc1                 sub eax, ecx
// 008223e3  8d0485b889be00       lea eax, [eax*4 + 0xbe89b8]
// 008223ea  5e                   pop esi
// 008223eb  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?GetLanguageInfo@CXTPResourceManager@@SAPAUXTP_RESOURCEMANAGER_LANGINFO@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
