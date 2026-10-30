// roc 2012-06 009bb3e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bb3e0
//
// 009bb3e0  53                   push ebx
// 009bb3e1  56                   push esi
// 009bb3e2  57                   push edi
// 009bb3e3  8bf9                 mov edi, ecx
// 009bb3e5  8b7728               mov esi, dword ptr [edi + 0x28]
// 009bb3e8  83ee01               sub esi, 1
// 009bb3eb  782f                 js 0x9bb41c
// 009bb3ed  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009bb3f1  85f6                 test esi, esi
// 009bb3f3  7c4c                 jl 0x9bb441
// 009bb3f5  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009bb3f8  7d47                 jge 0x9bb441
// 009bb3fa  8b4724               mov eax, dword ptr [edi + 0x24]
// 009bb3fd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009bb400  85db                 test ebx, ebx
// 009bb402  740e                 je 0x9bb412
// 009bb404  c7415c00000000       mov dword ptr [ecx + 0x5c], 0
// 009bb40b  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 009bb412  e87372fcff           call 0x98268a
// 009bb417  83ee01               sub esi, 1
// 009bb41a  79d5                 jns 0x9bb3f1
// 009bb41c  6aff                 push -1
// 009bb41e  6a00                 push 0
// 009bb420  8d4f20               lea ecx, [edi + 0x20]
// 009bb423  e838cefdff           call 0x998260
// 009bb428  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009bb42b  85c9                 test ecx, ecx
// 009bb42d  740c                 je 0x9bb43b
// 009bb42f  e85672fcff           call 0x98268a
// 009bb434  c7473400000000       mov dword ptr [edi + 0x34], 0
// 009bb43b  5f                   pop edi
// 009bb43c  5e                   pop esi
// 009bb43d  5b                   pop ebx
// 009bb43e  c20400               ret 4
// 009bb441  e87a6ffcff           call 0x9823c0
// copied from an identical function in another client (function ?Clear@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp