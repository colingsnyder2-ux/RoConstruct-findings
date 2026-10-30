// roc 2010-06 007cf450  unit: PAVCXTPReportInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cf450
//
// 007cf450  56                   push esi
// 007cf451  57                   push edi
// 007cf452  8bf9                 mov edi, ecx
// 007cf454  33f6                 xor esi, esi
// 007cf456  397734               cmp dword ptr [edi + 0x34], esi
// 007cf459  7e1f                 jle 0x7cf47a
// 007cf45b  eb03                 jmp 0x7cf460
// 007cf45d  8d4900               lea ecx, [ecx]
// 007cf460  85f6                 test esi, esi
// 007cf462  7c25                 jl 0x7cf489
// 007cf464  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007cf467  7d20                 jge 0x7cf489
// 007cf469  8b4730               mov eax, dword ptr [edi + 0x30]
// 007cf46c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007cf46f  e8a88afdff           call 0x7a7f1c
// 007cf474  46                   inc esi
// 007cf475  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007cf478  7ce6                 jl 0x7cf460
// 007cf47a  6aff                 push -1
// 007cf47c  6a00                 push 0
// 007cf47e  8d4f2c               lea ecx, [edi + 0x2c]
// 007cf481  e87a1e0100           call 0x7e1300
// 007cf486  5f                   pop edi
// 007cf487  5e                   pop esi
// 007cf488  c3                   ret 
// 007cf489  e8be87fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveButtons@CXTPReportRecordItemEditOptions@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp