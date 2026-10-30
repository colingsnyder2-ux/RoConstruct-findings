// roc 2009-12 008602b0  unit: CXTPToolTipContext::CHTMLToolTip  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008602b0
//
// 008602b0  56                   push esi
// 008602b1  57                   push edi
// 008602b2  8bf1                 mov esi, ecx
// 008602b4  ff1590d69800         call dword ptr [0x98d690]
// 008602ba  8b3d9cca9800         mov edi, dword ptr [0x98ca9c]
// 008602c0  33c0                 xor eax, eax
// 008602c2  894608               mov dword ptr [esi + 8], eax
// 008602c5  894620               mov dword ptr [esi + 0x20], eax
// 008602c8  89461c               mov dword ptr [esi + 0x1c], eax
// 008602cb  8d460c               lea eax, [esi + 0xc]
// 008602ce  50                   push eax
// 008602cf  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 008602d6  ffd7                 call edi
// 008602d8  83c628               add esi, 0x28
// 008602db  56                   push esi
// 008602dc  ffd7                 call edi
// 008602de  5f                   pop edi
// 008602df  5e                   pop esi
// 008602e0  c3                   ret 
// copied from an identical function in another client (function ?Reset@TOOLITEM@CXTPToolTipContextToolTip@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp