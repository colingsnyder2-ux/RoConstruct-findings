// roc 2009-12 0081b3a0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b3a0
//
// 0081b3a0  56                   push esi
// 0081b3a1  57                   push edi
// 0081b3a2  8bf9                 mov edi, ecx
// 0081b3a4  33f6                 xor esi, esi
// 0081b3a6  397734               cmp dword ptr [edi + 0x34], esi
// 0081b3a9  7e1f                 jle 0x81b3ca
// 0081b3ab  eb03                 jmp 0x81b3b0
// 0081b3ad  8d4900               lea ecx, [ecx]
// 0081b3b0  85f6                 test esi, esi
// 0081b3b2  7c25                 jl 0x81b3d9
// 0081b3b4  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0081b3b7  7d20                 jge 0x81b3d9
// 0081b3b9  8b4730               mov eax, dword ptr [edi + 0x30]
// 0081b3bc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0081b3bf  e8188afdff           call 0x7f3ddc
// 0081b3c4  46                   inc esi
// 0081b3c5  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0081b3c8  7ce6                 jl 0x81b3b0
// 0081b3ca  6aff                 push -1
// 0081b3cc  6a00                 push 0
// 0081b3ce  8d4f2c               lea ecx, [edi + 0x2c]
// 0081b3d1  e8ca9f0300           call 0x8553a0
// 0081b3d6  5f                   pop edi
// 0081b3d7  5e                   pop esi
// 0081b3d8  c3                   ret 
// 0081b3d9  e82e87fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveButtons@CXTPReportRecordItemEditOptions@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp