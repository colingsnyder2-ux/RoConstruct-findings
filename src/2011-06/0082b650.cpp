// roc 2011-06 0082b650  unit: CXTPCommandBar  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082b650
//
// 0082b650  57                   push edi
// 0082b651  8bf9                 mov edi, ecx
// 0082b653  8b4734               mov eax, dword ptr [edi + 0x34]
// 0082b656  85c0                 test eax, eax
// 0082b658  745d                 je 0x82b6b7
// 0082b65a  56                   push esi
// 0082b65b  33f6                 xor esi, esi
// 0082b65d  85c0                 test eax, eax
// 0082b65f  7e34                 jle 0x82b695
// 0082b661  85f6                 test esi, esi
// 0082b663  7c54                 jl 0x82b6b9
// 0082b665  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0082b668  7d4f                 jge 0x82b6b9
// 0082b66a  8b4730               mov eax, dword ptr [edi + 0x30]
// 0082b66d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0082b670  8b11                 mov edx, dword ptr [ecx]
// 0082b672  8b4268               mov eax, dword ptr [edx + 0x68]
// 0082b675  ffd0                 call eax
// 0082b677  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0082b67a  7d3d                 jge 0x82b6b9
// 0082b67c  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0082b67f  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0082b682  85c9                 test ecx, ecx
// 0082b684  7409                 je 0x82b68f
// 0082b686  8b11                 mov edx, dword ptr [ecx]
// 0082b688  8b4204               mov eax, dword ptr [edx + 4]
// 0082b68b  6a01                 push 1
// 0082b68d  ffd0                 call eax
// 0082b68f  46                   inc esi
// 0082b690  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0082b693  7ccc                 jl 0x82b661
// 0082b695  6aff                 push -1
// 0082b697  6a00                 push 0
// 0082b699  8d4f2c               lea ecx, [edi + 0x2c]
// 0082b69c  e89f340100           call 0x83eb40
// 0082b6a1  c7474000000000       mov dword ptr [edi + 0x40], 0
// 0082b6a8  c7474400000000       mov dword ptr [edi + 0x44], 0
// 0082b6af  c7474800000000       mov dword ptr [edi + 0x48], 0
// 0082b6b6  5e                   pop esi
// 0082b6b7  5f                   pop edi
// 0082b6b8  c3                   ret 
// 0082b6b9  e84cecfdff           call 0x80a30a
// copied from an identical function in another client (function ?HideKeyboardTips@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp