// roc 2012-06 00a56810  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56810
//
// 00a56810  56                   push esi
// 00a56811  57                   push edi
// 00a56812  8bf9                 mov edi, ecx
// 00a56814  33f6                 xor esi, esi
// 00a56816  397728               cmp dword ptr [edi + 0x28], esi
// 00a56819  7e1f                 jle 0xa5683a
// 00a5681b  eb03                 jmp 0xa56820
// 00a5681d  8d4900               lea ecx, [ecx]
// 00a56820  85f6                 test esi, esi
// 00a56822  7c25                 jl 0xa56849
// 00a56824  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00a56827  7d20                 jge 0xa56849
// 00a56829  8b4724               mov eax, dword ptr [edi + 0x24]
// 00a5682c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00a5682f  e856bef2ff           call 0x98268a
// 00a56834  46                   inc esi
// 00a56835  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00a56838  7ce6                 jl 0xa56820
// 00a5683a  6aff                 push -1
// 00a5683c  6a00                 push 0
// 00a5683e  8d4f20               lea ecx, [edi + 0x20]
// 00a56841  e81a1af4ff           call 0x998260
// 00a56846  5f                   pop edi
// 00a56847  5e                   pop esi
// 00a56848  c3                   ret 
// 00a56849  e872bbf2ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPPropertyGridInplaceButtons@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp