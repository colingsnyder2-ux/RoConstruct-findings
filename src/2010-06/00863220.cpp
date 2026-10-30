// roc 2010-06 00863220  unit: CXTPDockingPaneMiniWnd  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00863220
//
// 00863220  6aff                 push -1
// 00863222  68998d9b00           push 0x9b8d99
// 00863227  64a100000000         mov eax, dword ptr fs:[0]
// 0086322d  50                   push eax
// 0086322e  83ec30               sub esp, 0x30
// 00863231  53                   push ebx
// 00863232  55                   push ebp
// 00863233  56                   push esi
// 00863234  57                   push edi
// 00863235  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0086323a  33c4                 xor eax, esp
// 0086323c  50                   push eax
// 0086323d  8d442444             lea eax, [esp + 0x44]
// 00863241  64a300000000         mov dword ptr fs:[0], eax
// 00863247  8bf1                 mov esi, ecx
// 00863249  89742418             mov dword ptr [esp + 0x18], esi
// 0086324d  e87ef5ffff           call 0x8627d0
// 00863252  85c0                 test eax, eax
// 00863254  0f84c7000000         je 0x863321
// 0086325a  56                   push esi
// 0086325b  8d4c2438             lea ecx, [esp + 0x38]
// 0086325f  e84cc0f9ff           call 0x7ff2b0
// 00863264  8b442434             mov eax, dword ptr [esp + 0x34]
// 00863268  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0086326c  8d54241c             lea edx, [esp + 0x1c]
// 00863270  8944241c             mov dword ptr [esp + 0x1c], eax
// 00863274  8b4620               mov eax, dword ptr [esi + 0x20]
// 00863277  52                   push edx
// 00863278  50                   push eax
// 00863279  894c2428             mov dword ptr [esp + 0x28], ecx
// 0086327d  ff1578bc9e00         call dword ptr [0x9ebc78]
// 00863283  8bce                 mov ecx, esi
// 00863285  e85a9b1100           call 0x97cde4
// 0086328a  a900004000           test eax, 0x400000
// 0086328f  740c                 je 0x86329d
// 00863291  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00863295  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 00863299  014c241c             add dword ptr [esp + 0x1c], ecx
// 0086329d  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 008632a3  33ff                 xor edi, edi
// 008632a5  397808               cmp dword ptr [eax + 8], edi
// 008632a8  7e77                 jle 0x863321
// 008632aa  8b1d40bc9e00         mov ebx, dword ptr [0x9ebc40]
// 008632b0  8b2de0bb9e00         mov ebp, dword ptr [0x9ebbe0]
// 008632b6  85ff                 test edi, edi
// 008632b8  0f8c0b010000         jl 0x8633c9
// 008632be  3b7808               cmp edi, dword ptr [eax + 8]
// 008632c1  0f8d02010000         jge 0x8633c9
// 008632c7  8b5004               mov edx, dword ptr [eax + 4]
// 008632ca  8b34ba               mov esi, dword ptr [edx + edi*4]
// 008632cd  8d04ba               lea eax, [edx + edi*4]
// 008632d0  8b06                 mov eax, dword ptr [esi]
// 008632d2  89442424             mov dword ptr [esp + 0x24], eax
// 008632d6  8b4e04               mov ecx, dword ptr [esi + 4]
// 008632d9  894c2428             mov dword ptr [esp + 0x28], ecx
// 008632dd  8b5608               mov edx, dword ptr [esi + 8]
// 008632e0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008632e4  8954242c             mov dword ptr [esp + 0x2c], edx
// 008632e8  8b460c               mov eax, dword ptr [esi + 0xc]
// 008632eb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008632ef  51                   push ecx
// 008632f0  89442434             mov dword ptr [esp + 0x34], eax
// 008632f4  52                   push edx
// 008632f5  8d44242c             lea eax, [esp + 0x2c]
// 008632f9  50                   push eax
// 008632fa  ffd3                 call ebx
// 008632fc  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00863300  8b542454             mov edx, dword ptr [esp + 0x54]
// 00863304  51                   push ecx
// 00863305  52                   push edx
// 00863306  8d44242c             lea eax, [esp + 0x2c]
// 0086330a  50                   push eax
// 0086330b  ffd5                 call ebp
// 0086330d  85c0                 test eax, eax
// 0086330f  7529                 jne 0x86333a
// 00863311  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00863315  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 0086331b  47                   inc edi
// 0086331c  3b7808               cmp edi, dword ptr [eax + 8]
// 0086331f  7c95                 jl 0x8632b6
// 00863321  83c8ff               or eax, 0xffffffff
// 00863324  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00863328  64890d00000000       mov dword ptr fs:[0], ecx
// 0086332f  59                   pop ecx
// 00863330  5f                   pop edi
// 00863331  5e                   pop esi
// 00863332  5d                   pop ebp
// 00863333  5b                   pop ebx
// 00863334  83c43c               add esp, 0x3c
// 00863337  c20c00               ret 0xc
// 0086333a  8b7614               mov esi, dword ptr [esi + 0x14]
// 0086333d  8d4c2414             lea ecx, [esp + 0x14]
// 00863341  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00863347  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0086334f  e85cf5fbff           call 0x8228b0
// 00863354  8b10                 mov edx, dword ptr [eax]
// 00863356  8b5208               mov edx, dword ptr [edx + 8]
// 00863359  56                   push esi
// 0086335a  8d4c2418             lea ecx, [esp + 0x18]
// 0086335e  51                   push ecx
// 0086335f  8bc8                 mov ecx, eax
// 00863361  ffd2                 call edx
// 00863363  8d4c2414             lea ecx, [esp + 0x14]
// 00863367  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0086336d  85c0                 test eax, eax
// 0086336f  750c                 jne 0x86337d
// 00863371  8d4c2414             lea ecx, [esp + 0x14]
// 00863375  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0086337b  eba4                 jmp 0x863321
// 0086337d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00863381  8b542428             mov edx, dword ptr [esp + 0x28]
// 00863385  8d442414             lea eax, [esp + 0x14]
// 00863389  50                   push eax
// 0086338a  56                   push esi
// 0086338b  83ec10               sub esp, 0x10
// 0086338e  8bc4                 mov eax, esp
// 00863390  8908                 mov dword ptr [eax], ecx
// 00863392  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00863396  895004               mov dword ptr [eax + 4], edx
// 00863399  8b542448             mov edx, dword ptr [esp + 0x48]
// 0086339d  894808               mov dword ptr [eax + 8], ecx
// 008633a0  89500c               mov dword ptr [eax + 0xc], edx
// 008633a3  8b442430             mov eax, dword ptr [esp + 0x30]
// 008633a7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008633aa  8b542474             mov edx, dword ptr [esp + 0x74]
// 008633ae  51                   push ecx
// 008633af  52                   push edx
// 008633b0  e85b0cfbff           call 0x814010
// 008633b5  83c420               add esp, 0x20
// 008633b8  8d4c2414             lea ecx, [esp + 0x14]
// 008633bc  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008633c2  8bc6                 mov eax, esi
// 008633c4  e95bffffff           jmp 0x863324
// 008633c9  e87e48f4ff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneMiniWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneMiniWnd.cpp