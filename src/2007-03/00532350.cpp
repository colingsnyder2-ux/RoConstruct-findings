// roc 2007-03 00532350  unit: seg_00530000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00532350
//
// 00532350  6aff                 push -1
// 00532352  6820bd7500           push 0x75bd20
// 00532357  64a100000000         mov eax, dword ptr fs:[0]
// 0053235d  50                   push eax
// 0053235e  64892500000000       mov dword ptr fs:[0], esp
// 00532365  83ec14               sub esp, 0x14
// 00532368  56                   push esi
// 00532369  57                   push edi
// 0053236a  8bf9                 mov edi, ecx
// 0053236c  c744240800000000     mov dword ptr [esp + 8], 0
// 00532374  8d442408             lea eax, [esp + 8]
// 00532378  50                   push eax
// 00532379  6a01                 push 1
// 0053237b  8d4c2414             lea ecx, [esp + 0x14]
// 0053237f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00532387  e85470eeff           call 0x4193e0
// 0053238c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00532390  85f6                 test esi, esi
// 00532392  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0053239a  740b                 je 0x5323a7
// 0053239c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005323a0  2bce                 sub ecx, esi
// 005323a2  c1f902               sar ecx, 2
// 005323a5  750a                 jne 0x5323b1
// 005323a7  ff1544e97700         call dword ptr [0x77e944]
// 005323ad  8b742410             mov esi, dword ptr [esp + 0x10]
// 005323b1  6a08                 push 8
// 005323b3  e850bd0e00           call 0x61e108
// 005323b8  83c404               add esp, 4
// 005323bb  85c0                 test eax, eax
// 005323bd  740f                 je 0x5323ce
// 005323bf  d944242c             fld dword ptr [esp + 0x2c]
// 005323c3  c7002c987800         mov dword ptr [eax], 0x78982c
// 005323c9  d95804               fstp dword ptr [eax + 4]
// 005323cc  eb02                 jmp 0x5323d0
// 005323ce  33c0                 xor eax, eax
// 005323d0  8b0e                 mov ecx, dword ptr [esi]
// 005323d2  85c9                 test ecx, ecx
// 005323d4  8906                 mov dword ptr [esi], eax
// 005323d6  7408                 je 0x5323e0
// 005323d8  8b11                 mov edx, dword ptr [ecx]
// 005323da  8b02                 mov eax, dword ptr [edx]
// 005323dc  6a01                 push 1
// 005323de  ffd0                 call eax
// 005323e0  8b0f                 mov ecx, dword ptr [edi]
// 005323e2  8b11                 mov edx, dword ptr [ecx]
// 005323e4  8b5204               mov edx, dword ptr [edx + 4]
// 005323e7  8d44240c             lea eax, [esp + 0xc]
// 005323eb  50                   push eax
// 005323ec  ffd2                 call edx
// 005323ee  8b742410             mov esi, dword ptr [esp + 0x10]
// 005323f2  85f6                 test esi, esi
// 005323f4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005323fc  742c                 je 0x53242a
// 005323fe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00532402  3bf0                 cmp esi, eax
// 00532404  8bf8                 mov edi, eax
// 00532406  7419                 je 0x532421
// 00532408  8b0e                 mov ecx, dword ptr [esi]
// 0053240a  85c9                 test ecx, ecx
// 0053240c  7408                 je 0x532416
// 0053240e  8b01                 mov eax, dword ptr [ecx]
// 00532410  8b10                 mov edx, dword ptr [eax]
// 00532412  6a01                 push 1
// 00532414  ffd2                 call edx
// 00532416  83c604               add esi, 4
// 00532419  3bf7                 cmp esi, edi
// 0053241b  75eb                 jne 0x532408
// 0053241d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00532421  56                   push esi
// 00532422  e8c9bc0e00           call 0x61e0f0
// 00532427  83c404               add esp, 4
// 0053242a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053242e  5f                   pop edi
// 0053242f  5e                   pop esi
// 00532430  64890d00000000       mov dword ptr fs:[0], ecx
// 00532437  83c420               add esp, 0x20
// 0053243a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@QBEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
