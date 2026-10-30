// roc 2011-06 0083fa00  unit: PAVCXTPReportInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083fa00
//
// 0083fa00  56                   push esi
// 0083fa01  57                   push edi
// 0083fa02  8bf9                 mov edi, ecx
// 0083fa04  33f6                 xor esi, esi
// 0083fa06  397734               cmp dword ptr [edi + 0x34], esi
// 0083fa09  7e1f                 jle 0x83fa2a
// 0083fa0b  eb03                 jmp 0x83fa10
// 0083fa0d  8d4900               lea ecx, [ecx]
// 0083fa10  85f6                 test esi, esi
// 0083fa12  7c25                 jl 0x83fa39
// 0083fa14  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0083fa17  7d20                 jge 0x83fa39
// 0083fa19  8b4730               mov eax, dword ptr [edi + 0x30]
// 0083fa1c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0083fa1f  e8b6abfcff           call 0x80a5da
// 0083fa24  46                   inc esi
// 0083fa25  3b7734               cmp esi, dword ptr [edi + 0x34]
// 0083fa28  7ce6                 jl 0x83fa10
// 0083fa2a  6aff                 push -1
// 0083fa2c  6a00                 push 0
// 0083fa2e  8d4f2c               lea ecx, [edi + 0x2c]
// 0083fa31  e80af1ffff           call 0x83eb40
// 0083fa36  5f                   pop edi
// 0083fa37  5e                   pop esi
// 0083fa38  c3                   ret 
// 0083fa39  e8cca8fcff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveButtons@CXTPReportRecordItemEditOptions@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp