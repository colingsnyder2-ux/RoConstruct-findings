// roc 2012-06 009a6800  unit: CXTPPrintingDialog  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6800
//
// 009a6800  8b442404             mov eax, dword ptr [esp + 4]
// 009a6804  83ec10               sub esp, 0x10
// 009a6807  56                   push esi
// 009a6808  50                   push eax
// 009a6809  8bf1                 mov esi, ecx
// 009a680b  e8f6c3fdff           call 0x982c06
// 009a6810  83f8ff               cmp eax, -1
// 009a6813  7509                 jne 0x9a681e
// 009a6815  0bc0                 or eax, eax
// 009a6817  5e                   pop esi
// 009a6818  83c410               add esp, 0x10
// 009a681b  c20400               ret 4
// 009a681e  8b16                 mov edx, dword ptr [esi]
// 009a6820  33c0                 xor eax, eax
// 009a6822  50                   push eax
// 009a6823  6a64                 push 0x64
// 009a6825  56                   push esi
// 009a6826  8d4c2410             lea ecx, [esp + 0x10]
// 009a682a  51                   push ecx
// 009a682b  89442414             mov dword ptr [esp + 0x14], eax
// 009a682f  89442418             mov dword ptr [esp + 0x18], eax
// 009a6833  8944241c             mov dword ptr [esp + 0x1c], eax
// 009a6837  89442420             mov dword ptr [esp + 0x20], eax
// 009a683b  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a6841  6800000150           push 0x50010000
// 009a6846  8bce                 mov ecx, esi
// 009a6848  ffd0                 call eax
// 009a684a  8bc8                 mov ecx, eax
// 009a684c  e8df230000           call 0x9a8c30
// 009a6851  f7d8                 neg eax
// 009a6853  1bc0                 sbb eax, eax
// 009a6855  f7d8                 neg eax
// 009a6857  48                   dec eax
// 009a6858  5e                   pop esi
// 009a6859  83c410               add esp, 0x10
// 009a685c  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnCreate@CXTPReportView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/ReportControl/XTPReportView.cpp
