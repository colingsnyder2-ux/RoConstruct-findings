// roc 2009-12 008c66a0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c66a0
//
// 008c66a0  56                   push esi
// 008c66a1  57                   push edi
// 008c66a2  8bf9                 mov edi, ecx
// 008c66a4  33f6                 xor esi, esi
// 008c66a6  397728               cmp dword ptr [edi + 0x28], esi
// 008c66a9  7e1f                 jle 0x8c66ca
// 008c66ab  eb03                 jmp 0x8c66b0
// 008c66ad  8d4900               lea ecx, [ecx]
// 008c66b0  85f6                 test esi, esi
// 008c66b2  7c25                 jl 0x8c66d9
// 008c66b4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008c66b7  7d20                 jge 0x8c66d9
// 008c66b9  8b4724               mov eax, dword ptr [edi + 0x24]
// 008c66bc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008c66bf  e818d7f2ff           call 0x7f3ddc
// 008c66c4  46                   inc esi
// 008c66c5  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008c66c8  7ce6                 jl 0x8c66b0
// 008c66ca  6aff                 push -1
// 008c66cc  6a00                 push 0
// 008c66ce  8d4f20               lea ecx, [edi + 0x20]
// 008c66d1  e8caecf8ff           call 0x8553a0
// 008c66d6  5f                   pop edi
// 008c66d7  5e                   pop esi
// 008c66d8  c3                   ret 
// 008c66d9  e82ed4f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPPropertyGridInplaceButtons@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp