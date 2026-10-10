// roc 2008-06 006c52a0  unit: CXTPPrintingDialog  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c52a0
//
// 006c52a0  8b442404             mov eax, dword ptr [esp + 4]
// 006c52a4  83ec10               sub esp, 0x10
// 006c52a7  56                   push esi
// 006c52a8  50                   push eax
// 006c52a9  8bf1                 mov esi, ecx
// 006c52ab  e832befdff           call 0x6a10e2
// 006c52b0  83f8ff               cmp eax, -1
// 006c52b3  7509                 jne 0x6c52be
// 006c52b5  0bc0                 or eax, eax
// 006c52b7  5e                   pop esi
// 006c52b8  83c410               add esp, 0x10
// 006c52bb  c20400               ret 4
// 006c52be  8b16                 mov edx, dword ptr [esi]
// 006c52c0  33c0                 xor eax, eax
// 006c52c2  50                   push eax
// 006c52c3  6a64                 push 0x64
// 006c52c5  56                   push esi
// 006c52c6  8d4c2410             lea ecx, [esp + 0x10]
// 006c52ca  51                   push ecx
// 006c52cb  89442414             mov dword ptr [esp + 0x14], eax
// 006c52cf  89442418             mov dword ptr [esp + 0x18], eax
// 006c52d3  8944241c             mov dword ptr [esp + 0x1c], eax
// 006c52d7  89442420             mov dword ptr [esp + 0x20], eax
// 006c52db  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006c52e1  6800000150           push 0x50010000
// 006c52e6  8bce                 mov ecx, esi
// 006c52e8  ffd0                 call eax
// 006c52ea  8bc8                 mov ecx, eax
// 006c52ec  e8ff3c0000           call 0x6c8ff0
// 006c52f1  f7d8                 neg eax
// 006c52f3  1bc0                 sbb eax, eax
// 006c52f5  f7d8                 neg eax
// 006c52f7  48                   dec eax
// 006c52f8  5e                   pop esi
// 006c52f9  83c410               add esp, 0x10
// 006c52fc  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnCreate@CXTPReportView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
