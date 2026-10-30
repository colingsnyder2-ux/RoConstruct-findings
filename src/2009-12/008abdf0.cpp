// roc 2009-12 008abdf0  unit: CXTPDockingPaneAutoHidePanel  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008abdf0
//
// 008abdf0  6aff                 push -1
// 008abdf2  684ab79500           push 0x95b74a
// 008abdf7  64a100000000         mov eax, dword ptr fs:[0]
// 008abdfd  50                   push eax
// 008abdfe  53                   push ebx
// 008abdff  55                   push ebp
// 008abe00  56                   push esi
// 008abe01  57                   push edi
// 008abe02  a10052b600           mov eax, dword ptr [0xb65200]
// 008abe07  33c4                 xor eax, esp
// 008abe09  50                   push eax
// 008abe0a  8d442414             lea eax, [esp + 0x14]
// 008abe0e  64a300000000         mov dword ptr fs:[0], eax
// 008abe14  8bd9                 mov ebx, ecx
// 008abe16  8b83a8000000         mov eax, dword ptr [ebx + 0xa8]
// 008abe1c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008abe20  33ed                 xor ebp, ebp
// 008abe22  3bc5                 cmp eax, ebp
// 008abe24  7444                 je 0x8abe6a
// 008abe26  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008abe2c  3bcd                 cmp ecx, ebp
// 008abe2e  743a                 je 0x8abe6a
// 008abe30  39b9a4010000         cmp dword ptr [ecx + 0x1a4], edi
// 008abe36  7532                 jne 0x8abe6a
// 008abe38  396c2428             cmp dword ptr [esp + 0x28], ebp
// 008abe3c  740e                 je 0x8abe4c
// 008abe3e  8b01                 mov eax, dword ptr [ecx]
// 008abe40  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008abe46  55                   push ebp
// 008abe47  6a01                 push 1
// 008abe49  57                   push edi
// 008abe4a  ffd2                 call edx
// 008abe4c  8b8ba8000000         mov ecx, dword ptr [ebx + 0xa8]
// 008abe52  39a910010000         cmp dword ptr [ecx + 0x110], ebp
// 008abe58  0f84bf000000         je 0x8abf1d
// 008abe5e  6a01                 push 1
// 008abe60  e89be2ffff           call 0x8aa100
// 008abe65  e9b3000000           jmp 0x8abf1d
// 008abe6a  8bcb                 mov ecx, ebx
// 008abe6c  e84fffffff           call 0x8abdc0
// 008abe71  55                   push ebp
// 008abe72  55                   push ebp
// 008abe73  57                   push edi
// 008abe74  8d4b54               lea ecx, [ebx + 0x54]
// 008abe77  6a0c                 push 0xc
// 008abe79  e8c2490000           call 0x8b0840
// 008abe7e  8bc8                 mov ecx, eax
// 008abe80  e89bc6f8ff           call 0x838520
// 008abe85  85c0                 test eax, eax
// 008abe87  0f8590000000         jne 0x8abf1d
// 008abe8d  8b4730               mov eax, dword ptr [edi + 0x30]
// 008abe90  3bc5                 cmp eax, ebp
// 008abe92  0f8485000000         je 0x8abf1d
// 008abe98  8d70ac               lea esi, [eax - 0x54]
// 008abe9b  3bf5                 cmp esi, ebp
// 008abe9d  747e                 je 0x8abf1d
// 008abe9f  8b06                 mov eax, dword ptr [esi]
// 008abea1  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008abea7  6a01                 push 1
// 008abea9  55                   push ebp
// 008abeaa  57                   push edi
// 008abeab  8bce                 mov ecx, esi
// 008abead  ffd2                 call edx
// 008abeaf  682c010000           push 0x12c
// 008abeb4  e8a779f4ff           call 0x7f3860
// 008abeb9  83c404               add esp, 4
// 008abebc  89442424             mov dword ptr [esp + 0x24], eax
// 008abec0  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008abec4  3bc5                 cmp eax, ebp
// 008abec6  740b                 je 0x8abed3
// 008abec8  56                   push esi
// 008abec9  53                   push ebx
// 008abeca  8bc8                 mov ecx, eax
// 008abecc  e80ff4ffff           call 0x8ab2e0
// 008abed1  8be8                 mov ebp, eax
// 008abed3  837c242800           cmp dword ptr [esp + 0x28], 0
// 008abed8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008abee0  7411                 je 0x8abef3
// 008abee2  8b06                 mov eax, dword ptr [esi]
// 008abee4  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008abeea  6a00                 push 0
// 008abeec  6a01                 push 1
// 008abeee  57                   push edi
// 008abeef  8bce                 mov ecx, esi
// 008abef1  ffd2                 call edx
// 008abef3  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008abef6  85c0                 test eax, eax
// 008abef8  740b                 je 0x8abf05
// 008abefa  6a00                 push 0
// 008abefc  6a00                 push 0
// 008abefe  50                   push eax
// 008abeff  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008abf05  6a00                 push 0
// 008abf07  8d4b54               lea ecx, [ebx + 0x54]
// 008abf0a  51                   push ecx
// 008abf0b  e830490000           call 0x8b0840
// 008abf10  8bc8                 mov ecx, eax
// 008abf12  e8b9d3f8ff           call 0x8392d0
// 008abf17  89aba8000000         mov dword ptr [ebx + 0xa8], ebp
// 008abf1d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008abf21  64890d00000000       mov dword ptr fs:[0], ecx
// 008abf28  59                   pop ecx
// 008abf29  5f                   pop edi
// 008abf2a  5e                   pop esi
// 008abf2b  5d                   pop ebp
// 008abf2c  5b                   pop ebx
// 008abf2d  83c40c               add esp, 0xc
// 008abf30  c20800               ret 8
// copied from an identical function in another client (function ?ShowPane@CXTPDockingPaneAutoHidePanel@@IAEXPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp