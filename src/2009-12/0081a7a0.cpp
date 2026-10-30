// roc 2009-12 0081a7a0  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a7a0
//
// 0081a7a0  53                   push ebx
// 0081a7a1  55                   push ebp
// 0081a7a2  56                   push esi
// 0081a7a3  8bd9                 mov ebx, ecx
// 0081a7a5  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0081a7a8  57                   push edi
// 0081a7a9  33f6                 xor esi, esi
// 0081a7ab  e8d0340300           call 0x84dc80
// 0081a7b0  85c0                 test eax, eax
// 0081a7b2  7e27                 jle 0x81a7db
// 0081a7b4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0081a7b8  56                   push esi
// 0081a7b9  e872870800           call 0x8a2f30
// 0081a7be  8bf8                 mov edi, eax
// 0081a7c0  55                   push ebp
// 0081a7c1  8d4f20               lea ecx, [edi + 0x20]
// 0081a7c4  ff1584de9800         call dword ptr [0x98de84]
// 0081a7ca  85c0                 test eax, eax
// 0081a7cc  7416                 je 0x81a7e4
// 0081a7ce  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0081a7d1  46                   inc esi
// 0081a7d2  e8a9340300           call 0x84dc80
// 0081a7d7  3bf0                 cmp esi, eax
// 0081a7d9  7cdd                 jl 0x81a7b8
// 0081a7db  5f                   pop edi
// 0081a7dc  5e                   pop esi
// 0081a7dd  5d                   pop ebp
// 0081a7de  33c0                 xor eax, eax
// 0081a7e0  5b                   pop ebx
// 0081a7e1  c20400               ret 4
// 0081a7e4  8bc7                 mov eax, edi
// 0081a7e6  5f                   pop edi
// 0081a7e7  5e                   pop esi
// 0081a7e8  5d                   pop ebp
// 0081a7e9  5b                   pop ebx
// 0081a7ea  c20400               ret 4
// copied from an identical function in another client (function ?FindConstraint@CXTPReportRecordItemEditOptions@@QAEPAVCXTPReportRecordItemConstraint@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp