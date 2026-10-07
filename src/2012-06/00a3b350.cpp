// roc 2012-06 00a3b350  unit: CXTPDockingPaneTabbedContainer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b350
//
// 00a3b350  51                   push ecx
// 00a3b351  53                   push ebx
// 00a3b352  55                   push ebp
// 00a3b353  56                   push esi
// 00a3b354  8bf1                 mov esi, ecx
// 00a3b356  85f6                 test esi, esi
// 00a3b358  7405                 je 0xa3b35f
// 00a3b35a  8d4654               lea eax, [esi + 0x54]
// 00a3b35d  eb02                 jmp 0xa3b361
// 00a3b35f  33c0                 xor eax, eax
// 00a3b361  8d5e54               lea ebx, [esi + 0x54]
// 00a3b364  50                   push eax
// 00a3b365  8bcb                 mov ecx, ebx
// 00a3b367  e804eeffff           call 0xa3a170
// 00a3b36c  8bc8                 mov ecx, eax
// 00a3b36e  e8adb2f8ff           call 0x9c6620
// 00a3b373  85c0                 test eax, eax
// 00a3b375  7447                 je 0xa3b3be
// 00a3b377  83f801               cmp eax, 1
// 00a3b37a  7442                 je 0xa3b3be
// 00a3b37c  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00a3b37f  33ed                 xor ebp, ebp
// 00a3b381  2b4e74               sub ecx, dword ptr [esi + 0x74]
// 00a3b384  894e5c               mov dword ptr [esi + 0x5c], ecx
// 00a3b387  8bcb                 mov ecx, ebx
// 00a3b389  e8e2ebfaff           call 0x9e9f70
// 00a3b38e  8944240c             mov dword ptr [esp + 0xc], eax
// 00a3b392  85c0                 test eax, eax
// 00a3b394  7446                 je 0xa3b3dc
// 00a3b396  57                   push edi
// 00a3b397  8d542410             lea edx, [esp + 0x10]
// 00a3b39b  52                   push edx
// 00a3b39c  8bcb                 mov ecx, ebx
// 00a3b39e  e8add50300           call 0xa78950
// 00a3b3a3  8bf8                 mov edi, eax
// 00a3b3a5  8b07                 mov eax, dword ptr [edi]
// 00a3b3a7  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a3b3aa  8bcf                 mov ecx, edi
// 00a3b3ac  ffd2                 call edx
// 00a3b3ae  85c0                 test eax, eax
// 00a3b3b0  7522                 jne 0xa3b3d4
// 00a3b3b2  85ed                 test ebp, ebp
// 00a3b3b4  7418                 je 0xa3b3ce
// 00a3b3b6  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a3b3b9  894704               mov dword ptr [edi + 4], eax
// 00a3b3bc  eb16                 jmp 0xa3b3d4
// 00a3b3be  8b4678               mov eax, dword ptr [esi + 0x78]
// 00a3b3c1  2b4670               sub eax, dword ptr [esi + 0x70]
// 00a3b3c4  bd01000000           mov ebp, 1
// 00a3b3c9  894658               mov dword ptr [esi + 0x58], eax
// 00a3b3cc  ebb9                 jmp 0xa3b387
// 00a3b3ce  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00a3b3d1  894f08               mov dword ptr [edi + 8], ecx
// 00a3b3d4  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a3b3d9  75bc                 jne 0xa3b397
// 00a3b3db  5f                   pop edi
// 00a3b3dc  5e                   pop esi
// 00a3b3dd  5d                   pop ebp
// 00a3b3de  5b                   pop ebx
// 00a3b3df  59                   pop ecx
// 00a3b3e0  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
