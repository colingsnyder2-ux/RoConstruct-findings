// roc 2012-06 009b7eb0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7eb0
//
// 009b7eb0  56                   push esi
// 009b7eb1  57                   push edi
// 009b7eb2  8bf9                 mov edi, ecx
// 009b7eb4  33f6                 xor esi, esi
// 009b7eb6  397734               cmp dword ptr [edi + 0x34], esi
// 009b7eb9  7e1f                 jle 0x9b7eda
// 009b7ebb  eb03                 jmp 0x9b7ec0
// 009b7ebd  8d4900               lea ecx, [ecx]
// 009b7ec0  85f6                 test esi, esi
// 009b7ec2  7c25                 jl 0x9b7ee9
// 009b7ec4  3b7734               cmp esi, dword ptr [edi + 0x34]
// 009b7ec7  7d20                 jge 0x9b7ee9
// 009b7ec9  8b4730               mov eax, dword ptr [edi + 0x30]
// 009b7ecc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009b7ecf  e8b6a7fcff           call 0x98268a
// 009b7ed4  46                   inc esi
// 009b7ed5  3b7734               cmp esi, dword ptr [edi + 0x34]
// 009b7ed8  7ce6                 jl 0x9b7ec0
// 009b7eda  6aff                 push -1
// 009b7edc  6a00                 push 0
// 009b7ede  8d4f2c               lea ecx, [edi + 0x2c]
// 009b7ee1  e87a03feff           call 0x998260
// 009b7ee6  5f                   pop edi
// 009b7ee7  5e                   pop esi
// 009b7ee8  c3                   ret 
// 009b7ee9  e8d2a4fcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveButtons@CXTPReportRecordItemEditOptions@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp