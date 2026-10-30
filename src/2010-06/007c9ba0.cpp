// roc 2010-06 007c9ba0  unit: CXTPCommandBar  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c9ba0
//
// 007c9ba0  57                   push edi
// 007c9ba1  8bf9                 mov edi, ecx
// 007c9ba3  8b4734               mov eax, dword ptr [edi + 0x34]
// 007c9ba6  85c0                 test eax, eax
// 007c9ba8  745d                 je 0x7c9c07
// 007c9baa  56                   push esi
// 007c9bab  33f6                 xor esi, esi
// 007c9bad  85c0                 test eax, eax
// 007c9baf  7e34                 jle 0x7c9be5
// 007c9bb1  85f6                 test esi, esi
// 007c9bb3  7c54                 jl 0x7c9c09
// 007c9bb5  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007c9bb8  7d4f                 jge 0x7c9c09
// 007c9bba  8b4730               mov eax, dword ptr [edi + 0x30]
// 007c9bbd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007c9bc0  8b11                 mov edx, dword ptr [ecx]
// 007c9bc2  8b4268               mov eax, dword ptr [edx + 0x68]
// 007c9bc5  ffd0                 call eax
// 007c9bc7  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007c9bca  7d3d                 jge 0x7c9c09
// 007c9bcc  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 007c9bcf  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007c9bd2  85c9                 test ecx, ecx
// 007c9bd4  7409                 je 0x7c9bdf
// 007c9bd6  8b11                 mov edx, dword ptr [ecx]
// 007c9bd8  8b4204               mov eax, dword ptr [edx + 4]
// 007c9bdb  6a01                 push 1
// 007c9bdd  ffd0                 call eax
// 007c9bdf  46                   inc esi
// 007c9be0  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007c9be3  7ccc                 jl 0x7c9bb1
// 007c9be5  6aff                 push -1
// 007c9be7  6a00                 push 0
// 007c9be9  8d4f2c               lea ecx, [edi + 0x2c]
// 007c9bec  e80f770100           call 0x7e1300
// 007c9bf1  c7474000000000       mov dword ptr [edi + 0x40], 0
// 007c9bf8  c7474400000000       mov dword ptr [edi + 0x44], 0
// 007c9bff  c7474800000000       mov dword ptr [edi + 0x48], 0
// 007c9c06  5e                   pop esi
// 007c9c07  5f                   pop edi
// 007c9c08  c3                   ret 
// 007c9c09  e83ee0fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?HideKeyboardTips@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp