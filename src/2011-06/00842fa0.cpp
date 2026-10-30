// roc 2011-06 00842fa0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842fa0
//
// 00842fa0  53                   push ebx
// 00842fa1  56                   push esi
// 00842fa2  57                   push edi
// 00842fa3  8bf9                 mov edi, ecx
// 00842fa5  8b7728               mov esi, dword ptr [edi + 0x28]
// 00842fa8  83ee01               sub esi, 1
// 00842fab  782f                 js 0x842fdc
// 00842fad  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00842fb1  85f6                 test esi, esi
// 00842fb3  7c4c                 jl 0x843001
// 00842fb5  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00842fb8  7d47                 jge 0x843001
// 00842fba  8b4724               mov eax, dword ptr [edi + 0x24]
// 00842fbd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00842fc0  85db                 test ebx, ebx
// 00842fc2  740e                 je 0x842fd2
// 00842fc4  c7415c00000000       mov dword ptr [ecx + 0x5c], 0
// 00842fcb  c74128ffffffff       mov dword ptr [ecx + 0x28], 0xffffffff
// 00842fd2  e80376fcff           call 0x80a5da
// 00842fd7  83ee01               sub esi, 1
// 00842fda  79d5                 jns 0x842fb1
// 00842fdc  6aff                 push -1
// 00842fde  6a00                 push 0
// 00842fe0  8d4f20               lea ecx, [edi + 0x20]
// 00842fe3  e858bbffff           call 0x83eb40
// 00842fe8  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00842feb  85c9                 test ecx, ecx
// 00842fed  740c                 je 0x842ffb
// 00842fef  e8e675fcff           call 0x80a5da
// 00842ff4  c7473400000000       mov dword ptr [edi + 0x34], 0
// 00842ffb  5f                   pop edi
// 00842ffc  5e                   pop esi
// 00842ffd  5b                   pop ebx
// 00842ffe  c20400               ret 4
// 00843001  e80473fcff           call 0x80a30a
// copied from an identical function in another client (function ?Clear@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp