// roc 2009-12 008a99d0  unit: CXTPDockingPaneMiniWnd  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a99d0
//
// 008a99d0  6aff                 push -1
// 008a99d2  6868299600           push 0x962968
// 008a99d7  64a100000000         mov eax, dword ptr fs:[0]
// 008a99dd  50                   push eax
// 008a99de  83ec2c               sub esp, 0x2c
// 008a99e1  53                   push ebx
// 008a99e2  55                   push ebp
// 008a99e3  56                   push esi
// 008a99e4  57                   push edi
// 008a99e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a99ea  33c4                 xor eax, esp
// 008a99ec  50                   push eax
// 008a99ed  8d442440             lea eax, [esp + 0x40]
// 008a99f1  64a300000000         mov dword ptr fs:[0], eax
// 008a99f7  8bd9                 mov ebx, ecx
// 008a99f9  e862ebffff           call 0x8a8560
// 008a99fe  6a0a                 push 0xa
// 008a9a00  8d4c2428             lea ecx, [esp + 0x28]
// 008a9a04  e8c7e9ffff           call 0x8a83d0
// 008a9a09  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008a9a0d  8b7548               mov esi, dword ptr [ebp + 0x48]
// 008a9a10  c744244800000000     mov dword ptr [esp + 0x48], 0
// 008a9a18  85f6                 test esi, esi
// 008a9a1a  7424                 je 0x8a9a40
// 008a9a1c  8d642400             lea esp, [esp]
// 008a9a20  8bc6                 mov eax, esi
// 008a9a22  8b4808               mov ecx, dword ptr [eax + 8]
// 008a9a25  83791000             cmp dword ptr [ecx + 0x10], 0
// 008a9a29  8b36                 mov esi, dword ptr [esi]
// 008a9a2b  750f                 jne 0x8a9a3c
// 008a9a2d  8b01                 mov eax, dword ptr [ecx]
// 008a9a2f  8b4044               mov eax, dword ptr [eax + 0x44]
// 008a9a32  6a00                 push 0
// 008a9a34  8d542428             lea edx, [esp + 0x28]
// 008a9a38  52                   push edx
// 008a9a39  53                   push ebx
// 008a9a3a  ffd0                 call eax
// 008a9a3c  85f6                 test esi, esi
// 008a9a3e  75e0                 jne 0x8a9a20
// 008a9a40  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 008a9a43  51                   push ecx
// 008a9a44  8d4c2428             lea ecx, [esp + 0x28]
// 008a9a48  e833a7feff           call 0x894180
// 008a9a4d  8b10                 mov edx, dword ptr [eax]
// 008a9a4f  895324               mov dword ptr [ebx + 0x24], edx
// 008a9a52  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008a9a55  85c0                 test eax, eax
// 008a9a57  7405                 je 0x8a9a5e
// 008a9a59  83c020               add eax, 0x20
// 008a9a5c  eb02                 jmp 0x8a9a60
// 008a9a5e  33c0                 xor eax, eax
// 008a9a60  50                   push eax
// 008a9a61  8d4c2428             lea ecx, [esp + 0x28]
// 008a9a65  e816a7feff           call 0x894180
// 008a9a6a  8b00                 mov eax, dword ptr [eax]
// 008a9a6c  85c0                 test eax, eax
// 008a9a6e  7405                 je 0x8a9a75
// 008a9a70  83c0e0               add eax, -0x20
// 008a9a73  eb02                 jmp 0x8a9a77
// 008a9a75  33c0                 xor eax, eax
// 008a9a77  8bfb                 mov edi, ebx
// 008a9a79  8d7560               lea esi, [ebp + 0x60]
// 008a9a7c  2bfd                 sub edi, ebp
// 008a9a7e  894320               mov dword ptr [ebx + 0x20], eax
// 008a9a81  bd04000000           mov ebp, 4
// 008a9a86  8b06                 mov eax, dword ptr [esi]
// 008a9a88  85c0                 test eax, eax
// 008a9a8a  741d                 je 0x8a9aa9
// 008a9a8c  83c054               add eax, 0x54
// 008a9a8f  50                   push eax
// 008a9a90  8d4c2428             lea ecx, [esp + 0x28]
// 008a9a94  e8e7a6feff           call 0x894180
// 008a9a99  8b00                 mov eax, dword ptr [eax]
// 008a9a9b  85c0                 test eax, eax
// 008a9a9d  7405                 je 0x8a9aa4
// 008a9a9f  83c0ac               add eax, -0x54
// 008a9aa2  eb02                 jmp 0x8a9aa6
// 008a9aa4  33c0                 xor eax, eax
// 008a9aa6  890437               mov dword ptr [edi + esi], eax
// 008a9aa9  83c604               add esi, 4
// 008a9aac  83ed01               sub ebp, 1
// 008a9aaf  75d5                 jne 0x8a9a86
// 008a9ab1  8b442450             mov eax, dword ptr [esp + 0x50]
// 008a9ab5  8b782c               mov edi, dword ptr [eax + 0x2c]
// 008a9ab8  85ff                 test edi, edi
// 008a9aba  0f849d000000         je 0x8a9b5d
// 008a9ac0  83c328               add ebx, 0x28
// 008a9ac3  8bf7                 mov esi, edi
// 008a9ac5  8b4608               mov eax, dword ptr [esi + 8]
// 008a9ac8  8b3f                 mov edi, dword ptr [edi]
// 008a9aca  33c9                 xor ecx, ecx
// 008a9acc  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a9ad0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008a9ad4  894c2420             mov dword ptr [esp + 0x20], ecx
// 008a9ad8  3bc1                 cmp eax, ecx
// 008a9ada  7405                 je 0x8a9ae1
// 008a9adc  83c020               add eax, 0x20
// 008a9adf  eb02                 jmp 0x8a9ae3
// 008a9ae1  33c0                 xor eax, eax
// 008a9ae3  50                   push eax
// 008a9ae4  8d4c2428             lea ecx, [esp + 0x28]
// 008a9ae8  e893a6feff           call 0x894180
// 008a9aed  8b00                 mov eax, dword ptr [eax]
// 008a9aef  85c0                 test eax, eax
// 008a9af1  7409                 je 0x8a9afc
// 008a9af3  83c0e0               add eax, -0x20
// 008a9af6  89442414             mov dword ptr [esp + 0x14], eax
// 008a9afa  eb08                 jmp 0x8a9b04
// 008a9afc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a9b04  8b4610               mov eax, dword ptr [esi + 0x10]
// 008a9b07  85c0                 test eax, eax
// 008a9b09  7410                 je 0x8a9b1b
// 008a9b0b  50                   push eax
// 008a9b0c  8d4c2428             lea ecx, [esp + 0x28]
// 008a9b10  e86ba6feff           call 0x894180
// 008a9b15  8b08                 mov ecx, dword ptr [eax]
// 008a9b17  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008a9b1b  8b4614               mov eax, dword ptr [esi + 0x14]
// 008a9b1e  85c0                 test eax, eax
// 008a9b20  7410                 je 0x8a9b32
// 008a9b22  50                   push eax
// 008a9b23  8d4c2428             lea ecx, [esp + 0x28]
// 008a9b27  e854a6feff           call 0x894180
// 008a9b2c  8b10                 mov edx, dword ptr [eax]
// 008a9b2e  89542420             mov dword ptr [esp + 0x20], edx
// 008a9b32  8b760c               mov esi, dword ptr [esi + 0xc]
// 008a9b35  85f6                 test esi, esi
// 008a9b37  7410                 je 0x8a9b49
// 008a9b39  56                   push esi
// 008a9b3a  8d4c2428             lea ecx, [esp + 0x28]
// 008a9b3e  e83da6feff           call 0x894180
// 008a9b43  8b00                 mov eax, dword ptr [eax]
// 008a9b45  89442418             mov dword ptr [esp + 0x18], eax
// 008a9b49  8d4c2414             lea ecx, [esp + 0x14]
// 008a9b4d  51                   push ecx
// 008a9b4e  8bcb                 mov ecx, ebx
// 008a9b50  e8bb06f9ff           call 0x83a210
// 008a9b55  85ff                 test edi, edi
// 008a9b57  0f8566ffffff         jne 0x8a9ac3
// 008a9b5d  8d4c2424             lea ecx, [esp + 0x24]
// 008a9b61  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008a9b69  e892e8ffff           call 0x8a8400
// 008a9b6e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a9b72  64890d00000000       mov dword ptr fs:[0], ecx
// 008a9b79  59                   pop ecx
// 008a9b7a  5f                   pop edi
// 008a9b7b  5e                   pop esi
// 008a9b7c  5d                   pop ebp
// 008a9b7d  5b                   pop ebx
// 008a9b7e  83c438               add esp, 0x38
// 008a9b81  c20400               ret 4
// copied from an identical function in another client (function ?Copy@CXTPDockingPaneLayout@@QAEXPBV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneLayout.cpp