// roc 2008-06 0070a1e0  unit: CXTPToolTipContext::CHTMLToolTip  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a1e0
//
// 0070a1e0  8b442404             mov eax, dword ptr [esp + 4]
// 0070a1e4  56                   push esi
// 0070a1e5  57                   push edi
// 0070a1e6  33ff                 xor edi, edi
// 0070a1e8  8bf1                 mov esi, ecx
// 0070a1ea  3bc7                 cmp eax, edi
// 0070a1ec  740b                 je 0x70a1f9
// 0070a1ee  50                   push eax
// 0070a1ef  e8ccf8ffff           call 0x709ac0
// 0070a1f4  5f                   pop edi
// 0070a1f5  5e                   pop esi
// 0070a1f6  c20400               ret 4
// 0070a1f9  ff15843e8000         call dword ptr [0x803e84]
// 0070a1ff  8d460c               lea eax, [esi + 0xc]
// 0070a202  897e08               mov dword ptr [esi + 8], edi
// 0070a205  897e20               mov dword ptr [esi + 0x20], edi
// 0070a208  897e1c               mov dword ptr [esi + 0x1c], edi
// 0070a20b  8b3d7c2c8000         mov edi, dword ptr [0x802c7c]
// 0070a211  50                   push eax
// 0070a212  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0070a219  ffd7                 call edi
// 0070a21b  83c628               add esi, 0x28
// 0070a21e  56                   push esi
// 0070a21f  ffd7                 call edi
// 0070a221  5f                   pop edi
// 0070a222  5e                   pop esi
// 0070a223  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?Assign@TOOLITEM@CXTPToolTipContextToolTip@@QAEXPAU12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
