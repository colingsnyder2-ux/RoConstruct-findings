// roc 2010-06 0087a840  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a840
//
// 0087a840  56                   push esi
// 0087a841  57                   push edi
// 0087a842  8bf9                 mov edi, ecx
// 0087a844  33f6                 xor esi, esi
// 0087a846  397728               cmp dword ptr [edi + 0x28], esi
// 0087a849  7e1f                 jle 0x87a86a
// 0087a84b  eb03                 jmp 0x87a850
// 0087a84d  8d4900               lea ecx, [ecx]
// 0087a850  85f6                 test esi, esi
// 0087a852  7c25                 jl 0x87a879
// 0087a854  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0087a857  7d20                 jge 0x87a879
// 0087a859  8b4724               mov eax, dword ptr [edi + 0x24]
// 0087a85c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0087a85f  e8b8d6f2ff           call 0x7a7f1c
// 0087a864  46                   inc esi
// 0087a865  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0087a868  7ce6                 jl 0x87a850
// 0087a86a  6aff                 push -1
// 0087a86c  6a00                 push 0
// 0087a86e  8d4f20               lea ecx, [edi + 0x20]
// 0087a871  e88a6af6ff           call 0x7e1300
// 0087a876  5f                   pop edi
// 0087a877  5e                   pop esi
// 0087a878  c3                   ret 
// 0087a879  e8ced3f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPPropertyGridInplaceButtons@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp