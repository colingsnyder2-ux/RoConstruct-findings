// roc 2009-12 0082d4a0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d4a0
//
// 0082d4a0  53                   push ebx
// 0082d4a1  56                   push esi
// 0082d4a2  57                   push edi
// 0082d4a3  8bf9                 mov edi, ecx
// 0082d4a5  8b7728               mov esi, dword ptr [edi + 0x28]
// 0082d4a8  83ee01               sub esi, 1
// 0082d4ab  782f                 js 0x82d4dc
// 0082d4ad  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082d4b1  85f6                 test esi, esi
// 0082d4b3  7c4c                 jl 0x82d501
// 0082d4b5  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082d4b8  7d47                 jge 0x82d501
// 0082d4ba  8b4724               mov eax, dword ptr [edi + 0x24]
// 0082d4bd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0082d4c0  85db                 test ebx, ebx
// 0082d4c2  740e                 je 0x82d4d2
// 0082d4c4  c7415c00000000       mov dword ptr [ecx + 0x5c], 0
// 0082d4cb  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 0082d4d2  e80569fcff           call 0x7f3ddc
// 0082d4d7  83ee01               sub esi, 1
// 0082d4da  79d5                 jns 0x82d4b1
// 0082d4dc  6aff                 push -1
// 0082d4de  6a00                 push 0
// 0082d4e0  8d4f20               lea ecx, [edi + 0x20]
// 0082d4e3  e8b87e0200           call 0x8553a0
// 0082d4e8  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0082d4eb  85c9                 test ecx, ecx
// 0082d4ed  740c                 je 0x82d4fb
// 0082d4ef  e8e868fcff           call 0x7f3ddc
// 0082d4f4  c7473400000000       mov dword ptr [edi + 0x34], 0
// 0082d4fb  5f                   pop edi
// 0082d4fc  5e                   pop esi
// 0082d4fd  5b                   pop ebx
// 0082d4fe  c20400               ret 4
// 0082d501  e80666fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?Clear@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp