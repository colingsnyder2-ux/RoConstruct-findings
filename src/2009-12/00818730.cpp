// roc 2009-12 00818730  unit: CXTPPrintingDialog  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818730
//
// 00818730  8b442404             mov eax, dword ptr [esp + 4]
// 00818734  83ec10               sub esp, 0x10
// 00818737  56                   push esi
// 00818738  50                   push eax
// 00818739  8bf1                 mov esi, ecx
// 0081873b  e83cbcfdff           call 0x7f437c
// 00818740  83f8ff               cmp eax, -1
// 00818743  7509                 jne 0x81874e
// 00818745  0bc0                 or eax, eax
// 00818747  5e                   pop esi
// 00818748  83c410               add esp, 0x10
// 0081874b  c20400               ret 4
// 0081874e  8b16                 mov edx, dword ptr [esi]
// 00818750  33c0                 xor eax, eax
// 00818752  50                   push eax
// 00818753  6a64                 push 0x64
// 00818755  56                   push esi
// 00818756  8d4c2410             lea ecx, [esp + 0x10]
// 0081875a  51                   push ecx
// 0081875b  89442414             mov dword ptr [esp + 0x14], eax
// 0081875f  89442418             mov dword ptr [esp + 0x18], eax
// 00818763  8944241c             mov dword ptr [esp + 0x1c], eax
// 00818767  89442420             mov dword ptr [esp + 0x20], eax
// 0081876b  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00818771  6800000150           push 0x50010000
// 00818776  8bce                 mov ecx, esi
// 00818778  ffd0                 call eax
// 0081877a  8bc8                 mov ecx, eax
// 0081877c  e81f3d0000           call 0x81c4a0
// 00818781  f7d8                 neg eax
// 00818783  1bc0                 sbb eax, eax
// 00818785  f7d8                 neg eax
// 00818787  48                   dec eax
// 00818788  5e                   pop esi
// 00818789  83c410               add esp, 0x10
// 0081878c  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTPReportView@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp