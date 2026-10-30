// roc 2012-06 009a3c20  unit: CXTPCommandBar  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a3c20
//
// 009a3c20  57                   push edi
// 009a3c21  8bf9                 mov edi, ecx
// 009a3c23  8b4734               mov eax, dword ptr [edi + 0x34]
// 009a3c26  85c0                 test eax, eax
// 009a3c28  745d                 je 0x9a3c87
// 009a3c2a  56                   push esi
// 009a3c2b  33f6                 xor esi, esi
// 009a3c2d  85c0                 test eax, eax
// 009a3c2f  7e34                 jle 0x9a3c65
// 009a3c31  85f6                 test esi, esi
// 009a3c33  7c54                 jl 0x9a3c89
// 009a3c35  3b7734               cmp esi, dword ptr [edi + 0x34]
// 009a3c38  7d4f                 jge 0x9a3c89
// 009a3c3a  8b4730               mov eax, dword ptr [edi + 0x30]
// 009a3c3d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009a3c40  8b11                 mov edx, dword ptr [ecx]
// 009a3c42  8b4268               mov eax, dword ptr [edx + 0x68]
// 009a3c45  ffd0                 call eax
// 009a3c47  3b7734               cmp esi, dword ptr [edi + 0x34]
// 009a3c4a  7d3d                 jge 0x9a3c89
// 009a3c4c  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 009a3c4f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009a3c52  85c9                 test ecx, ecx
// 009a3c54  7409                 je 0x9a3c5f
// 009a3c56  8b11                 mov edx, dword ptr [ecx]
// 009a3c58  8b4204               mov eax, dword ptr [edx + 4]
// 009a3c5b  6a01                 push 1
// 009a3c5d  ffd0                 call eax
// 009a3c5f  46                   inc esi
// 009a3c60  3b7734               cmp esi, dword ptr [edi + 0x34]
// 009a3c63  7ccc                 jl 0x9a3c31
// 009a3c65  6aff                 push -1
// 009a3c67  6a00                 push 0
// 009a3c69  8d4f2c               lea ecx, [edi + 0x2c]
// 009a3c6c  e8ef45ffff           call 0x998260
// 009a3c71  c7474000000000       mov dword ptr [edi + 0x40], 0
// 009a3c78  c7474400000000       mov dword ptr [edi + 0x44], 0
// 009a3c7f  c7474800000000       mov dword ptr [edi + 0x48], 0
// 009a3c86  5e                   pop esi
// 009a3c87  5f                   pop edi
// 009a3c88  c3                   ret 
// 009a3c89  e832e7fdff           call 0x9823c0
// copied from an identical function in another client (function ?HideKeyboardTips@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp