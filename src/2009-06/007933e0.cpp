// roc 2009-06 007933e0  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007933e0
//
// 007933e0  6aff                 push -1
// 007933e2  68d8b78700           push 0x87b7d8
// 007933e7  64a100000000         mov eax, dword ptr fs:[0]
// 007933ed  50                   push eax
// 007933ee  51                   push ecx
// 007933ef  56                   push esi
// 007933f0  57                   push edi
// 007933f1  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007933f6  33c4                 xor eax, esp
// 007933f8  50                   push eax
// 007933f9  8d442410             lea eax, [esp + 0x10]
// 007933fd  64a300000000         mov dword ptr fs:[0], eax
// 00793403  8bf1                 mov esi, ecx
// 00793405  8974240c             mov dword ptr [esp + 0xc], esi
// 00793409  c70668019000         mov dword ptr [esi], 0x900168
// 0079340f  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00793413  8b4614               mov eax, dword ptr [esi + 0x14]
// 00793416  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00793419  50                   push eax
// 0079341a  6afc                 push -4
// 0079341c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00793424  51                   push ecx
// 00793425  7408                 je 0x79342f
// 00793427  ff1500ed8900         call dword ptr [0x89ed00]
// 0079342d  eb06                 jmp 0x793435
// 0079342f  ff1534ed8900         call dword ptr [0x89ed34]
// 00793435  8b4608               mov eax, dword ptr [esi + 8]
// 00793438  8d78ff               lea edi, [eax - 1]
// 0079343b  85ff                 test edi, edi
// 0079343d  7c26                 jl 0x793465
// 0079343f  90                   nop 
// 00793440  85ff                 test edi, edi
// 00793442  7c42                 jl 0x793486
// 00793444  3b7e08               cmp edi, dword ptr [esi + 8]
// 00793447  7d3d                 jge 0x793486
// 00793449  8b4604               mov eax, dword ptr [esi + 4]
// 0079344c  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0079344f  83790400             cmp dword ptr [ecx + 4], 0
// 00793453  8d04b8               lea eax, [eax + edi*4]
// 00793456  7408                 je 0x793460
// 00793458  8b11                 mov edx, dword ptr [ecx]
// 0079345a  8b02                 mov eax, dword ptr [edx]
// 0079345c  6a01                 push 1
// 0079345e  ffd0                 call eax
// 00793460  83ef01               sub edi, 1
// 00793463  79db                 jns 0x793440
// 00793465  8bce                 mov ecx, esi
// 00793467  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0079346f  e8ecfeffff           call 0x793360
// 00793474  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00793478  64890d00000000       mov dword ptr fs:[0], ecx
// 0079347f  59                   pop ecx
// 00793480  5f                   pop edi
// 00793481  5e                   pop esi
// 00793482  83c410               add esp, 0x10
// 00793485  c3                   ret 
// 00793486  e85958f8ff           call 0x718ce4
// copied from an identical function in another client (function ??1CHookSink@CXTPHookManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPHookManager.cpp