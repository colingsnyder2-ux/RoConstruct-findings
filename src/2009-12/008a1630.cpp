// roc 2009-12 008a1630  unit: CXTPReportInplaceList  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1630
//
// 008a1630  6aff                 push -1
// 008a1632  6868219600           push 0x962168
// 008a1637  64a100000000         mov eax, dword ptr fs:[0]
// 008a163d  50                   push eax
// 008a163e  51                   push ecx
// 008a163f  53                   push ebx
// 008a1640  56                   push esi
// 008a1641  57                   push edi
// 008a1642  a10052b600           mov eax, dword ptr [0xb65200]
// 008a1647  33c4                 xor eax, esp
// 008a1649  50                   push eax
// 008a164a  8d442414             lea eax, [esp + 0x14]
// 008a164e  64a300000000         mov dword ptr fs:[0], eax
// 008a1654  8bf1                 mov esi, ecx
// 008a1656  89742410             mov dword ptr [esp + 0x10], esi
// 008a165a  e8e92af5ff           call 0x7f4148
// 008a165f  c706a4229f00         mov dword ptr [esi], 0x9f22a4
// 008a1665  8d7e54               lea edi, [esi + 0x54]
// 008a1668  33db                 xor ebx, ebx
// 008a166a  8bcf                 mov ecx, edi
// 008a166c  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008a1670  e81bfcffff           call 0x8a1290
// 008a1675  8d4e78               lea ecx, [esi + 0x78]
// 008a1678  c7061454a000         mov dword ptr [esi], 0xa05414
// 008a167e  c7070454a000         mov dword ptr [edi], 0xa05404
// 008a1684  ff1574de9800         call dword ptr [0x98de74]
// 008a168a  8d4e7c               lea ecx, [esi + 0x7c]
// 008a168d  ff1574de9800         call dword ptr [0x98de74]
// 008a1693  899e84000000         mov dword ptr [esi + 0x84], ebx
// 008a1699  c7868000000098019b00 mov dword ptr [esi + 0x80], 0x9b0198
// 008a16a3  899e88000000         mov dword ptr [esi + 0x88], ebx
// 008a16a9  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 008a16af  899e90000000         mov dword ptr [esi + 0x90], ebx
// 008a16b5  8bc6                 mov eax, esi
// 008a16b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a16bb  64890d00000000       mov dword ptr fs:[0], ecx
// 008a16c2  59                   pop ecx
// 008a16c3  5f                   pop edi
// 008a16c4  5e                   pop esi
// 008a16c5  5b                   pop ebx
// 008a16c6  83c410               add esp, 0x10
// 008a16c9  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportInplaceEdit@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp