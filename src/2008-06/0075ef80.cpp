// roc 2008-06 0075ef80  unit: CXTPDockingPaneTabbedContainer  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ef80
//
// 0075ef80  83ec24               sub esp, 0x24
// 0075ef83  56                   push esi
// 0075ef84  57                   push edi
// 0075ef85  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0075ef89  817f14f4240000       cmp dword ptr [edi + 0x14], 0x24f4
// 0075ef90  8bf1                 mov esi, ecx
// 0075ef92  740a                 je 0x75ef9e
// 0075ef94  5f                   pop edi
// 0075ef95  33c0                 xor eax, eax
// 0075ef97  5e                   pop esi
// 0075ef98  83c424               add esp, 0x24
// 0075ef9b  c20400               ret 4
// 0075ef9e  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 0075efa5  0f84d0000000         je 0x75f07b
// 0075efab  53                   push ebx
// 0075efac  55                   push ebp
// 0075efad  8d4604               lea eax, [esi + 4]
// 0075efb0  50                   push eax
// 0075efb1  ff15b0218000         call dword ptr [0x8021b0]
// 0075efb7  8d4e54               lea ecx, [esi + 0x54]
// 0075efba  e8e1e4ffff           call 0x75d4a0
// 0075efbf  8b0f                 mov ecx, dword ptr [edi]
// 0075efc1  8b5704               mov edx, dword ptr [edi + 4]
// 0075efc4  894c2424             mov dword ptr [esp + 0x24], ecx
// 0075efc8  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0075efcb  89542428             mov dword ptr [esp + 0x28], edx
// 0075efcf  8bd8                 mov ebx, eax
// 0075efd1  8b4708               mov eax, dword ptr [edi + 8]
// 0075efd4  8d542424             lea edx, [esp + 0x24]
// 0075efd8  894c2430             mov dword ptr [esp + 0x30], ecx
// 0075efdc  52                   push edx
// 0075efdd  8bce                 mov ecx, esi
// 0075efdf  89442430             mov dword ptr [esp + 0x30], eax
// 0075efe3  e84a1cf4ff           call 0x6a0c32
// 0075efe8  8bce                 mov ecx, esi
// 0075efea  e8a9cf0500           call 0x7bbf98
// 0075efef  a900004000           test eax, 0x400000
// 0075eff4  7412                 je 0x75f008
// 0075eff6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0075effa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0075effe  89442410             mov dword ptr [esp + 0x10], eax
// 0075f002  894c2414             mov dword ptr [esp + 0x14], ecx
// 0075f006  eb10                 jmp 0x75f018
// 0075f008  8b542424             mov edx, dword ptr [esp + 0x24]
// 0075f00c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0075f010  89542410             mov dword ptr [esp + 0x10], edx
// 0075f014  89442414             mov dword ptr [esp + 0x14], eax
// 0075f018  8b2d182e8000         mov ebp, dword ptr [0x802e18]
// 0075f01e  8d442410             lea eax, [esp + 0x10]
// 0075f022  8b08                 mov ecx, dword ptr [eax]
// 0075f024  8b5004               mov edx, dword ptr [eax + 4]
// 0075f027  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0075f02d  6a00                 push 0
// 0075f02f  894c2420             mov dword ptr [esp + 0x20], ecx
// 0075f033  c7471801000000       mov dword ptr [edi + 0x18], 1
// 0075f03a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075f03d  6a00                 push 0
// 0075f03f  51                   push ecx
// 0075f040  8954242c             mov dword ptr [esp + 0x2c], edx
// 0075f044  89442424             mov dword ptr [esp + 0x24], eax
// 0075f048  ffd5                 call ebp
// 0075f04a  8b13                 mov edx, dword ptr [ebx]
// 0075f04c  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 0075f052  8d442418             lea eax, [esp + 0x18]
// 0075f056  50                   push eax
// 0075f057  6a05                 push 5
// 0075f059  8bcb                 mov ecx, ebx
// 0075f05b  ffd2                 call edx
// 0075f05d  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0075f064  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075f067  85c0                 test eax, eax
// 0075f069  7407                 je 0x75f072
// 0075f06b  6a00                 push 0
// 0075f06d  6a00                 push 0
// 0075f06f  50                   push eax
// 0075f070  ffd5                 call ebp
// 0075f072  8bce                 mov ecx, esi
// 0075f074  e86b1bf4ff           call 0x6a0be4
// 0075f079  5d                   pop ebp
// 0075f07a  5b                   pop ebx
// 0075f07b  5f                   pop edi
// 0075f07c  b801000000           mov eax, 1
// 0075f081  5e                   pop esi
// 0075f082  83c424               add esp, 0x24
// 0075f085  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnCaptionButtonDown@CXTPDockingPaneTabbedContainer@@IAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
