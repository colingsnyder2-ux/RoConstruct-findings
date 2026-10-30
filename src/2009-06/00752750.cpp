// roc 2009-06 00752750  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752750
//
// 00752750  53                   push ebx
// 00752751  56                   push esi
// 00752752  57                   push edi
// 00752753  8bf9                 mov edi, ecx
// 00752755  8b7728               mov esi, dword ptr [edi + 0x28]
// 00752758  83ee01               sub esi, 1
// 0075275b  782f                 js 0x75278c
// 0075275d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00752761  85f6                 test esi, esi
// 00752763  7c4c                 jl 0x7527b1
// 00752765  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00752768  7d47                 jge 0x7527b1
// 0075276a  8b4724               mov eax, dword ptr [edi + 0x24]
// 0075276d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00752770  85db                 test ebx, ebx
// 00752772  740e                 je 0x752782
// 00752774  c7415c00000000       mov dword ptr [ecx + 0x5c], 0
// 0075277b  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 00752782  e82168fcff           call 0x718fa8
// 00752787  83ee01               sub esi, 1
// 0075278a  79d5                 jns 0x752761
// 0075278c  6aff                 push -1
// 0075278e  6a00                 push 0
// 00752790  8d4f20               lea ecx, [edi + 0x20]
// 00752793  e878fdffff           call 0x752510
// 00752798  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0075279b  85c9                 test ecx, ecx
// 0075279d  740c                 je 0x7527ab
// 0075279f  e80468fcff           call 0x718fa8
// 007527a4  c7473400000000       mov dword ptr [edi + 0x34], 0
// 007527ab  5f                   pop edi
// 007527ac  5e                   pop esi
// 007527ad  5b                   pop ebx
// 007527ae  c20400               ret 4
// 007527b1  e82e65fcff           call 0x718ce4
// copied from an identical function in another client (function ?Clear@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp