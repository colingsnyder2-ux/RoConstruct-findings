// from server: 100% by auto
// roc 2011-06 008c2f20  unit: CXTPDockingPaneTabbedContainer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2f20
//
// 008c2f20  51                   push ecx
// 008c2f21  53                   push ebx
// 008c2f22  55                   push ebp
// 008c2f23  56                   push esi
// 008c2f24  8bf1                 mov esi, ecx
// 008c2f26  85f6                 test esi, esi
// 008c2f28  7405                 je 0x8c2f2f
// 008c2f2a  8d4654               lea eax, [esi + 0x54]
// 008c2f2d  eb02                 jmp 0x8c2f31
// 008c2f2f  33c0                 xor eax, eax
// 008c2f31  8d5e54               lea ebx, [esi + 0x54]
// 008c2f34  50                   push eax
// 008c2f35  8bcb                 mov ecx, ebx
// 008c2f37  e824eeffff           call 0x8c1d60
// 008c2f3c  8bc8                 mov ecx, eax
// 008c2f3e  e82db2f8ff           call 0x84e170
// 008c2f43  85c0                 test eax, eax
// 008c2f45  7447                 je 0x8c2f8e
// 008c2f47  83f801               cmp eax, 1
// 008c2f4a  7442                 je 0x8c2f8e
// 008c2f4c  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c2f4f  33ed                 xor ebp, ebp
// 008c2f51  2b4e74               sub ecx, dword ptr [esi + 0x74]
// 008c2f54  894e5c               mov dword ptr [esi + 0x5c], ecx
// 008c2f57  8bcb                 mov ecx, ebx
// 008c2f59  e8e29cf9ff           call 0x85cc40
// 008c2f5e  8944240c             mov dword ptr [esp + 0xc], eax
// 008c2f62  85c0                 test eax, eax
// 008c2f64  7446                 je 0x8c2fac
// 008c2f66  57                   push edi
// 008c2f67  8d542410             lea edx, [esp + 0x10]
// 008c2f6b  52                   push edx
// 008c2f6c  8bcb                 mov ecx, ebx
// 008c2f6e  e8bdd70300           call 0x900730
// 008c2f73  8bf8                 mov edi, eax
// 008c2f75  8b07                 mov eax, dword ptr [edi]
// 008c2f77  8b5014               mov edx, dword ptr [eax + 0x14]
// 008c2f7a  8bcf                 mov ecx, edi
// 008c2f7c  ffd2                 call edx
// 008c2f7e  85c0                 test eax, eax
// 008c2f80  7522                 jne 0x8c2fa4
// 008c2f82  85ed                 test ebp, ebp
// 008c2f84  7418                 je 0x8c2f9e
// 008c2f86  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c2f89  894704               mov dword ptr [edi + 4], eax
// 008c2f8c  eb16                 jmp 0x8c2fa4
// 008c2f8e  8b4678               mov eax, dword ptr [esi + 0x78]
// 008c2f91  2b4670               sub eax, dword ptr [esi + 0x70]
// 008c2f94  bd01000000           mov ebp, 1
// 008c2f99  894658               mov dword ptr [esi + 0x58], eax
// 008c2f9c  ebb9                 jmp 0x8c2f57
// 008c2f9e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008c2fa1  894f08               mov dword ptr [edi + 8], ecx
// 008c2fa4  837c241000           cmp dword ptr [esp + 0x10], 0
// 008c2fa9  75bc                 jne 0x8c2f67
// 008c2fab  5f                   pop edi
// 008c2fac  5e                   pop esi
// 008c2fad  5d                   pop ebp
// 008c2fae  5b                   pop ebx
// 008c2faf  59                   pop ecx
// 008c2fb0  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?NormalizeDockingSize@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
