// roc 2008-06 0070a1a0  unit: CXTPToolTipContext::CHTMLToolTip  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a1a0
//
// 0070a1a0  56                   push esi
// 0070a1a1  57                   push edi
// 0070a1a2  8bf1                 mov esi, ecx
// 0070a1a4  ff15843e8000         call dword ptr [0x803e84]
// 0070a1aa  8b3d7c2c8000         mov edi, dword ptr [0x802c7c]
// 0070a1b0  33c0                 xor eax, eax
// 0070a1b2  894608               mov dword ptr [esi + 8], eax
// 0070a1b5  894620               mov dword ptr [esi + 0x20], eax
// 0070a1b8  89461c               mov dword ptr [esi + 0x1c], eax
// 0070a1bb  8d460c               lea eax, [esi + 0xc]
// 0070a1be  50                   push eax
// 0070a1bf  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0070a1c6  ffd7                 call edi
// 0070a1c8  83c628               add esi, 0x28
// 0070a1cb  56                   push esi
// 0070a1cc  ffd7                 call edi
// 0070a1ce  5f                   pop edi
// 0070a1cf  5e                   pop esi
// 0070a1d0  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?Reset@TOOLITEM@CXTPToolTipContextToolTip@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
