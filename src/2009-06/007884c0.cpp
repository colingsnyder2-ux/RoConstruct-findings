// roc 2009-06 007884c0  unit: CXTPToolTipContext  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007884c0
//
// 007884c0  6aff                 push -1
// 007884c2  68bca88700           push 0x87a8bc
// 007884c7  64a100000000         mov eax, dword ptr fs:[0]
// 007884cd  50                   push eax
// 007884ce  51                   push ecx
// 007884cf  56                   push esi
// 007884d0  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007884d5  33c4                 xor eax, esp
// 007884d7  50                   push eax
// 007884d8  8d44240c             lea eax, [esp + 0xc]
// 007884dc  64a300000000         mov dword ptr fs:[0], eax
// 007884e2  8bf1                 mov esi, ecx
// 007884e4  8b4630               mov eax, dword ptr [esi + 0x30]
// 007884e7  83c0fe               add eax, -2
// 007884ea  83f804               cmp eax, 4
// 007884ed  0f872f010000         ja 0x788622
// 007884f3  ff248578867800       jmp dword ptr [eax*4 + 0x788678]
// 007884fa  6830010000           push 0x130
// 007884ff  e83405f9ff           call 0x718a38
// 00788504  83c404               add esp, 4
// 00788507  89442408             mov dword ptr [esp + 8], eax
// 0078850b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00788513  85c0                 test eax, eax
// 00788515  0f8445010000         je 0x788660
// 0078851b  56                   push esi
// 0078851c  8bc8                 mov ecx, eax
// 0078851e  e8bde8ffff           call 0x786de0
// 00788523  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00788527  64890d00000000       mov dword ptr fs:[0], ecx
// 0078852e  59                   pop ecx
// 0078852f  5e                   pop esi
// 00788530  83c410               add esp, 0x10
// 00788533  c20400               ret 4
// 00788536  685c020000           push 0x25c
// 0078853b  e8f804f9ff           call 0x718a38
// 00788540  83c404               add esp, 4
// 00788543  89442408             mov dword ptr [esp + 8], eax
// 00788547  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0078854f  85c0                 test eax, eax
// 00788551  0f8409010000         je 0x788660
// 00788557  56                   push esi
// 00788558  8bc8                 mov ecx, eax
// 0078855a  e801fdffff           call 0x788260
// 0078855f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00788563  64890d00000000       mov dword ptr fs:[0], ecx
// 0078856a  59                   pop ecx
// 0078856b  5e                   pop esi
// 0078856c  83c410               add esp, 0x10
// 0078856f  c20400               ret 4
// 00788572  6830010000           push 0x130
// 00788577  e8bc04f9ff           call 0x718a38
// 0078857c  83c404               add esp, 4
// 0078857f  89442408             mov dword ptr [esp + 8], eax
// 00788583  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0078858b  85c0                 test eax, eax
// 0078858d  0f84cd000000         je 0x788660
// 00788593  56                   push esi
// 00788594  8bc8                 mov ecx, eax
// 00788596  e8f5f9ffff           call 0x787f90
// 0078859b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078859f  64890d00000000       mov dword ptr fs:[0], ecx
// 007885a6  59                   pop ecx
// 007885a7  5e                   pop esi
// 007885a8  83c410               add esp, 0x10
// 007885ab  c20400               ret 4
// 007885ae  6830010000           push 0x130
// 007885b3  e88004f9ff           call 0x718a38
// 007885b8  83c404               add esp, 4
// 007885bb  89442408             mov dword ptr [esp + 8], eax
// 007885bf  c744241403000000     mov dword ptr [esp + 0x14], 3
// 007885c7  85c0                 test eax, eax
// 007885c9  0f8491000000         je 0x788660
// 007885cf  56                   push esi
// 007885d0  8bc8                 mov ecx, eax
// 007885d2  e809fbffff           call 0x7880e0
// 007885d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007885db  64890d00000000       mov dword ptr fs:[0], ecx
// 007885e2  59                   pop ecx
// 007885e3  5e                   pop esi
// 007885e4  83c410               add esp, 0x10
// 007885e7  c20400               ret 4
// 007885ea  6898010000           push 0x198
// 007885ef  e84404f9ff           call 0x718a38
// 007885f4  83c404               add esp, 4
// 007885f7  89442408             mov dword ptr [esp + 8], eax
// 007885fb  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00788603  85c0                 test eax, eax
// 00788605  7459                 je 0x788660
// 00788607  56                   push esi
// 00788608  8bc8                 mov ecx, eax
// 0078860a  e811fdffff           call 0x788320
// 0078860f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00788613  64890d00000000       mov dword ptr fs:[0], ecx
// 0078861a  59                   pop ecx
// 0078861b  5e                   pop esi
// 0078861c  83c410               add esp, 0x10
// 0078861f  c20400               ret 4
// 00788622  6a70                 push 0x70
// 00788624  e80f04f9ff           call 0x718a38
// 00788629  8bf0                 mov esi, eax
// 0078862b  83c404               add esp, 4
// 0078862e  89742408             mov dword ptr [esp + 8], esi
// 00788632  c744241405000000     mov dword ptr [esp + 0x14], 5
// 0078863a  85f6                 test esi, esi
// 0078863c  7422                 je 0x788660
// 0078863e  8bce                 mov ecx, esi
// 00788640  e87d400c00           call 0x84c6c2
// 00788645  c706acd88f00         mov dword ptr [esi], 0x8fd8ac
// 0078864b  8bc6                 mov eax, esi
// 0078864d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00788651  64890d00000000       mov dword ptr fs:[0], ecx
// 00788658  59                   pop ecx
// 00788659  5e                   pop esi
// 0078865a  83c410               add esp, 0x10
// 0078865d  c20400               ret 4
// 00788660  33c0                 xor eax, eax
// 00788662  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00788666  64890d00000000       mov dword ptr fs:[0], ecx
// 0078866d  59                   pop ecx
// 0078866e  5e                   pop esi
// 0078866f  83c410               add esp, 0x10
// 00788672  c20400               ret 4
// 00788675  8d4900               lea ecx, [ecx]
// 00788678  fa                   cli 
// 00788679  847800               test byte ptr [eax], bh
// 0078867c  36857800             test dword ptr ss:[eax], edi
// 00788680  7285                 jb 0x788607
// 00788682  7800                 js 0x788684
// 00788684  ae                   scasb al, byte ptr es:[edi]
// 00788685  857800               test dword ptr [eax], edi
// copied from an identical function in another client (function ?CreateToolTip@CXTPToolTipContext@@MAEPAVCWnd@@PAV2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp