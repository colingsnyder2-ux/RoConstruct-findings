// roc 2008-06 006f0de0  unit: CXTPPopupToolBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f0de0
//
// 006f0de0  56                   push esi
// 006f0de1  8bf1                 mov esi, ecx
// 006f0de3  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 006f0dea  0f8587000000         jne 0x6f0e77
// 006f0df0  57                   push edi
// 006f0df1  bf01000000           mov edi, 1
// 006f0df6  39bea4010000         cmp dword ptr [esi + 0x1a4], edi
// 006f0dfc  7578                 jne 0x6f0e76
// 006f0dfe  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 006f0e04  85c9                 test ecx, ecx
// 006f0e06  7405                 je 0x6f0e0d
// 006f0e08  e843ae0100           call 0x70bc50
// 006f0e0d  6a00                 push 0
// 006f0e0f  6aff                 push -1
// 006f0e11  8bce                 mov ecx, esi
// 006f0e13  89beac010000         mov dword ptr [esi + 0x1ac], edi
// 006f0e19  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 006f0e1f  e8ac60fcff           call 0x6b6ed0
// 006f0e24  8b06                 mov eax, dword ptr [esi]
// 006f0e26  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006f0e2c  6a00                 push 0
// 006f0e2e  6aff                 push -1
// 006f0e30  8bce                 mov ecx, esi
// 006f0e32  ffd2                 call edx
// 006f0e34  8b06                 mov eax, dword ptr [esi]
// 006f0e36  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 006f0e3c  8bce                 mov ecx, esi
// 006f0e3e  ffd2                 call edx
// 006f0e40  6810306a00           push 0x6a3010
// 006f0e45  b99ced9700           mov ecx, 0x97ed9c
// 006f0e4a  e88bb10c00           call 0x7bbfda
// 006f0e4f  85c0                 test eax, eax
// 006f0e51  7505                 jne 0x6f0e58
// 006f0e53  e8ecfafaff           call 0x6a0944
// 006f0e58  6810306a00           push 0x6a3010
// 006f0e5d  b99ced9700           mov ecx, 0x97ed9c
// 006f0e62  897828               mov dword ptr [eax + 0x28], edi
// 006f0e65  e870b10c00           call 0x7bbfda
// 006f0e6a  85c0                 test eax, eax
// 006f0e6c  7505                 jne 0x6f0e73
// 006f0e6e  e8d1fafaff           call 0x6a0944
// 006f0e73  897840               mov dword ptr [eax + 0x40], edi
// 006f0e76  5f                   pop edi
// 006f0e77  5e                   pop esi
// 006f0e78  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?ExpandBar@CXTPPopupBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
