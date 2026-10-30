// roc 2009-12 00818500  unit: CXTPPrintingDialog  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818500
//
// 00818500  6aff                 push -1
// 00818502  68d3a79500           push 0x95a7d3
// 00818507  64a100000000         mov eax, dword ptr fs:[0]
// 0081850d  50                   push eax
// 0081850e  83ec08               sub esp, 8
// 00818511  53                   push ebx
// 00818512  56                   push esi
// 00818513  57                   push edi
// 00818514  a10052b600           mov eax, dword ptr [0xb65200]
// 00818519  33c4                 xor eax, esp
// 0081851b  50                   push eax
// 0081851c  8d442418             lea eax, [esp + 0x18]
// 00818520  64a300000000         mov dword ptr fs:[0], eax
// 00818526  8bf1                 mov esi, ecx
// 00818528  89742410             mov dword ptr [esp + 0x10], esi
// 0081852c  e807bdfdff           call 0x7f4238
// 00818531  33ff                 xor edi, edi
// 00818533  c706a4449f00         mov dword ptr [esi], 0x9f44a4
// 00818539  897c2420             mov dword ptr [esp + 0x20], edi
// 0081853d  897e5c               mov dword ptr [esi + 0x5c], edi
// 00818540  c7465818229a00       mov dword ptr [esi + 0x58], 0x9a2218
// 00818547  bb01000000           mov ebx, 1
// 0081854c  8d4e60               lea ecx, [esi + 0x60]
// 0081854f  885c2420             mov byte ptr [esp + 0x20], bl
// 00818553  e8eee01000           call 0x926646
// 00818558  8d4e74               lea ecx, [esi + 0x74]
// 0081855b  c644242002           mov byte ptr [esp + 0x20], 2
// 00818560  e89bb80000           call 0x823e00
// 00818565  6a48                 push 0x48
// 00818567  c644242403           mov byte ptr [esp + 0x24], 3
// 0081856c  89be58030000         mov dword ptr [esi + 0x358], edi
// 00818572  e8e9b2fdff           call 0x7f3860
// 00818577  83c404               add esp, 4
// 0081857a  89442414             mov dword ptr [esp + 0x14], eax
// 0081857e  c644242004           mov byte ptr [esp + 0x20], 4
// 00818583  3bc7                 cmp eax, edi
// 00818585  7409                 je 0x818590
// 00818587  8bc8                 mov ecx, eax
// 00818589  e892feffff           call 0x818420
// 0081858e  eb02                 jmp 0x818592
// 00818590  33c0                 xor eax, eax
// 00818592  898660030000         mov dword ptr [esi + 0x360], eax
// 00818598  89be5c030000         mov dword ptr [esi + 0x35c], edi
// 0081859e  89be70030000         mov dword ptr [esi + 0x370], edi
// 008185a4  899e74030000         mov dword ptr [esi + 0x374], ebx
// 008185aa  899e68030000         mov dword ptr [esi + 0x368], ebx
// 008185b0  899e6c030000         mov dword ptr [esi + 0x36c], ebx
// 008185b6  89be64030000         mov dword ptr [esi + 0x364], edi
// 008185bc  8bc6                 mov eax, esi
// 008185be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008185c2  64890d00000000       mov dword ptr fs:[0], ecx
// 008185c9  59                   pop ecx
// 008185ca  5f                   pop edi
// 008185cb  5e                   pop esi
// 008185cc  5b                   pop ebx
// 008185cd  83c414               add esp, 0x14
// 008185d0  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportView@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp