// roc 2009-06 007ebb00  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ebb00
//
// 007ebb00  56                   push esi
// 007ebb01  57                   push edi
// 007ebb02  8bf9                 mov edi, ecx
// 007ebb04  33f6                 xor esi, esi
// 007ebb06  397728               cmp dword ptr [edi + 0x28], esi
// 007ebb09  7e1f                 jle 0x7ebb2a
// 007ebb0b  eb03                 jmp 0x7ebb10
// 007ebb0d  8d4900               lea ecx, [ecx]
// 007ebb10  85f6                 test esi, esi
// 007ebb12  7c25                 jl 0x7ebb39
// 007ebb14  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007ebb17  7d20                 jge 0x7ebb39
// 007ebb19  8b4724               mov eax, dword ptr [edi + 0x24]
// 007ebb1c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007ebb1f  e884d4f2ff           call 0x718fa8
// 007ebb24  46                   inc esi
// 007ebb25  3b7728               cmp esi, dword ptr [edi + 0x28]
// 007ebb28  7ce6                 jl 0x7ebb10
// 007ebb2a  6aff                 push -1
// 007ebb2c  6a00                 push 0
// 007ebb2e  8d4f20               lea ecx, [edi + 0x20]
// 007ebb31  e8da69f6ff           call 0x752510
// 007ebb36  5f                   pop edi
// 007ebb37  5e                   pop esi
// 007ebb38  c3                   ret 
// 007ebb39  e8a6d1f2ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPPropertyGridInplaceButtons@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp