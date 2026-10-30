// roc 2009-12 008a1770  unit: CXTPReportInplaceEdit  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1770
//
// 008a1770  83ec40               sub esp, 0x40
// 008a1773  a10052b600           mov eax, dword ptr [0xb65200]
// 008a1778  33c4                 xor eax, esp
// 008a177a  8944243c             mov dword ptr [esp + 0x3c], eax
// 008a177e  53                   push ebx
// 008a177f  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 008a1783  56                   push esi
// 008a1784  57                   push edi
// 008a1785  8bf9                 mov edi, ecx
// 008a1787  8db780000000         lea esi, [edi + 0x80]
// 008a178d  8bce                 mov ecx, esi
// 008a178f  e88a26f5ff           call 0x7f3e1e
// 008a1794  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008a1797  8d44240c             lea eax, [esp + 0xc]
// 008a179b  50                   push eax
// 008a179c  6a3c                 push 0x3c
// 008a179e  51                   push ecx
// 008a179f  ff155cb19800         call dword ptr [0x98b15c]
// 008a17a5  8d54240c             lea edx, [esp + 0xc]
// 008a17a9  52                   push edx
// 008a17aa  ff1528b19800         call dword ptr [0x98b128]
// 008a17b0  50                   push eax
// 008a17b1  8bce                 mov ecx, esi
// 008a17b3  e87226f5ff           call 0x7f3e2a
// 008a17b8  85f6                 test esi, esi
// 008a17ba  7403                 je 0x8a17bf
// 008a17bc  8b7604               mov esi, dword ptr [esi + 4]
// 008a17bf  8b4720               mov eax, dword ptr [edi + 0x20]
// 008a17c2  6a01                 push 1
// 008a17c4  56                   push esi
// 008a17c5  6a30                 push 0x30
// 008a17c7  50                   push eax
// 008a17c8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008a17ce  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008a17d2  5f                   pop edi
// 008a17d3  5e                   pop esi
// 008a17d4  5b                   pop ebx
// 008a17d5  33cc                 xor ecx, esp
// 008a17d7  e8be3bf5ff           call 0x7f539a
// 008a17dc  83c440               add esp, 0x40
// 008a17df  c20400               ret 4
// copied from an identical function in another client (function ?SetFont@CXTPReportInplaceEdit@@IAEXPAVCFont@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp