// roc 2009-12 00877080  unit: CXTPRibbonTheme  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877080
//
// 00877080  6aff                 push -1
// 00877082  68d0019600           push 0x9601d0
// 00877087  64a100000000         mov eax, dword ptr fs:[0]
// 0087708d  50                   push eax
// 0087708e  83ec08               sub esp, 8
// 00877091  53                   push ebx
// 00877092  56                   push esi
// 00877093  57                   push edi
// 00877094  a10052b600           mov eax, dword ptr [0xb65200]
// 00877099  33c4                 xor eax, esp
// 0087709b  50                   push eax
// 0087709c  8d442418             lea eax, [esp + 0x18]
// 008770a0  64a300000000         mov dword ptr fs:[0], eax
// 008770a6  894c2410             mov dword ptr [esp + 0x10], ecx
// 008770aa  6834010000           push 0x134
// 008770af  e8acc7f7ff           call 0x7f3860
// 008770b4  83c404               add esp, 4
// 008770b7  89442414             mov dword ptr [esp + 0x14], eax
// 008770bb  33ff                 xor edi, edi
// 008770bd  897c2420             mov dword ptr [esp + 0x20], edi
// 008770c1  3bc7                 cmp eax, edi
// 008770c3  740b                 je 0x8770d0
// 008770c5  8bc8                 mov ecx, eax
// 008770c7  e8a4cb0500           call 0x8d3c70
// 008770cc  8bf0                 mov esi, eax
// 008770ce  eb02                 jmp 0x8770d2
// 008770d0  33f6                 xor esi, esi
// 008770d2  83cbff               or ebx, 0xffffffff
// 008770d5  6a30                 push 0x30
// 008770d7  895c2424             mov dword ptr [esp + 0x24], ebx
// 008770db  e880c7f7ff           call 0x7f3860
// 008770e0  83c404               add esp, 4
// 008770e3  89442414             mov dword ptr [esp + 0x14], eax
// 008770e7  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008770ef  3bc7                 cmp eax, edi
// 008770f1  740e                 je 0x877101
// 008770f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008770f7  51                   push ecx
// 008770f8  8bc8                 mov ecx, eax
// 008770fa  e851adffff           call 0x871e50
// 008770ff  eb02                 jmp 0x877103
// 00877101  33c0                 xor eax, eax
// 00877103  50                   push eax
// 00877104  8bce                 mov ecx, esi
// 00877106  895c2424             mov dword ptr [esp + 0x24], ebx
// 0087710a  e8c1a70500           call 0x8d18d0
// 0087710f  6a01                 push 1
// 00877111  8bce                 mov ecx, esi
// 00877113  e8f8970500           call 0x8d0910
// 00877118  6818020000           push 0x218
// 0087711d  e83ec7f7ff           call 0x7f3860
// 00877122  8bd8                 mov ebx, eax
// 00877124  83c404               add esp, 4
// 00877127  895c2414             mov dword ptr [esp + 0x14], ebx
// 0087712b  c744242002000000     mov dword ptr [esp + 0x20], 2
// 00877133  3bdf                 cmp ebx, edi
// 00877135  740f                 je 0x877146
// 00877137  8bcb                 mov ecx, ebx
// 00877139  e892b5ffff           call 0x8726d0
// 0087713e  c7034418a000         mov dword ptr [ebx], 0xa01844
// 00877144  eb02                 jmp 0x877148
// 00877146  33db                 xor ebx, ebx
// 00877148  53                   push ebx
// 00877149  8bce                 mov ecx, esi
// 0087714b  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00877153  e8f8950500           call 0x8d0750
// 00877158  8b1d38ca9800         mov ebx, dword ptr [0x98ca38]
// 0087715e  6a02                 push 2
// 00877160  57                   push edi
// 00877161  6a02                 push 2
// 00877163  57                   push edi
// 00877164  8d5660               lea edx, [esi + 0x60]
// 00877167  52                   push edx
// 00877168  89be84000000         mov dword ptr [esi + 0x84], edi
// 0087716e  c7462001000000       mov dword ptr [esi + 0x20], 1
// 00877175  c7463801000000       mov dword ptr [esi + 0x38], 1
// 0087717c  89be98000000         mov dword ptr [esi + 0x98], edi
// 00877182  ffd3                 call ebx
// 00877184  57                   push edi
// 00877185  6a04                 push 4
// 00877187  57                   push edi
// 00877188  6a04                 push 4
// 0087718a  8d4670               lea eax, [esi + 0x70]
// 0087718d  50                   push eax
// 0087718e  ffd3                 call ebx
// 00877190  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00877194  c786b400000015000000 mov dword ptr [esi + 0xb4], 0x15
// 0087719e  89be94000000         mov dword ptr [esi + 0x94], edi
// 008771a4  89beac000000         mov dword ptr [esi + 0xac], edi
// 008771aa  c786dc00000002000000 mov dword ptr [esi + 0xdc], 2
// 008771b4  8b5170               mov edx, dword ptr [ecx + 0x70]
// 008771b7  8996bc000000         mov dword ptr [esi + 0xbc], edx
// 008771bd  89bec4000000         mov dword ptr [esi + 0xc4], edi
// 008771c3  8bc6                 mov eax, esi
// 008771c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008771c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008771d0  59                   pop ecx
// 008771d1  5f                   pop edi
// 008771d2  5e                   pop esi
// 008771d3  5b                   pop ebx
// 008771d4  83c414               add esp, 0x14
// 008771d7  c3                   ret 
// copied from an identical function in another client (function ?CreateTabPaintManager@CXTPRibbonTheme@@MAEPAVCXTPTabPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp