// roc 2007-08 00416cc0  unit: VCLuaFunction::?$CComObject  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416cc0
//
// 00416cc0  53                   push ebx
// 00416cc1  56                   push esi
// 00416cc2  8bd9                 mov ebx, ecx
// 00416cc4  8b4378               mov eax, dword ptr [ebx + 0x78]
// 00416cc7  57                   push edi
// 00416cc8  33ff                 xor edi, edi
// 00416cca  3bc7                 cmp eax, edi
// 00416ccc  7409                 je 0x416cd7
// 00416cce  50                   push eax
// 00416ccf  e88e8f2100           call 0x62fc62
// 00416cd4  83c404               add esp, 4
// 00416cd7  3bdf                 cmp ebx, edi
// 00416cd9  897b78               mov dword ptr [ebx + 0x78], edi
// 00416cdc  897b7c               mov dword ptr [ebx + 0x7c], edi
// 00416cdf  89bb80000000         mov dword ptr [ebx + 0x80], edi
// 00416ce5  7405                 je 0x416cec
// 00416ce7  8d7350               lea esi, [ebx + 0x50]
// 00416cea  eb02                 jmp 0x416cee
// 00416cec  33f6                 xor esi, esi
// 00416cee  8b4614               mov eax, dword ptr [esi + 0x14]
// 00416cf1  3bc7                 cmp eax, edi
// 00416cf3  7409                 je 0x416cfe
// 00416cf5  50                   push eax
// 00416cf6  e8678f2100           call 0x62fc62
// 00416cfb  83c404               add esp, 4
// 00416cfe  897e14               mov dword ptr [esi + 0x14], edi
// 00416d01  897e18               mov dword ptr [esi + 0x18], edi
// 00416d04  897e1c               mov dword ptr [esi + 0x1c], edi
// 00416d07  8b4604               mov eax, dword ptr [esi + 4]
// 00416d0a  3bc7                 cmp eax, edi
// 00416d0c  7409                 je 0x416d17
// 00416d0e  50                   push eax
// 00416d0f  e84e8f2100           call 0x62fc62
// 00416d14  83c404               add esp, 4
// 00416d17  3bdf                 cmp ebx, edi
// 00416d19  897e04               mov dword ptr [esi + 4], edi
// 00416d1c  897e08               mov dword ptr [esi + 8], edi
// 00416d1f  897e0c               mov dword ptr [esi + 0xc], edi
// 00416d22  7405                 je 0x416d29
// 00416d24  8d732c               lea esi, [ebx + 0x2c]
// 00416d27  eb02                 jmp 0x416d2b
// 00416d29  33f6                 xor esi, esi
// 00416d2b  8b4614               mov eax, dword ptr [esi + 0x14]
// 00416d2e  3bc7                 cmp eax, edi
// 00416d30  7409                 je 0x416d3b
// 00416d32  50                   push eax
// 00416d33  e82a8f2100           call 0x62fc62
// 00416d38  83c404               add esp, 4
// 00416d3b  897e14               mov dword ptr [esi + 0x14], edi
// 00416d3e  897e18               mov dword ptr [esi + 0x18], edi
// 00416d41  897e1c               mov dword ptr [esi + 0x1c], edi
// 00416d44  8b4604               mov eax, dword ptr [esi + 4]
// 00416d47  3bc7                 cmp eax, edi
// 00416d49  7409                 je 0x416d54
// 00416d4b  50                   push eax
// 00416d4c  e8118f2100           call 0x62fc62
// 00416d51  83c404               add esp, 4
// 00416d54  3bdf                 cmp ebx, edi
// 00416d56  897e04               mov dword ptr [esi + 4], edi
// 00416d59  897e08               mov dword ptr [esi + 8], edi
// 00416d5c  897e0c               mov dword ptr [esi + 0xc], edi
// 00416d5f  7405                 je 0x416d66
// 00416d61  8d7308               lea esi, [ebx + 8]
// 00416d64  eb02                 jmp 0x416d68
// 00416d66  33f6                 xor esi, esi
// 00416d68  8b4614               mov eax, dword ptr [esi + 0x14]
// 00416d6b  3bc7                 cmp eax, edi
// 00416d6d  7409                 je 0x416d78
// 00416d6f  50                   push eax
// 00416d70  e8ed8e2100           call 0x62fc62
// 00416d75  83c404               add esp, 4
// 00416d78  897e14               mov dword ptr [esi + 0x14], edi
// 00416d7b  897e18               mov dword ptr [esi + 0x18], edi
// 00416d7e  897e1c               mov dword ptr [esi + 0x1c], edi
// 00416d81  8b4604               mov eax, dword ptr [esi + 4]
// 00416d84  3bc7                 cmp eax, edi
// 00416d86  7409                 je 0x416d91
// 00416d88  50                   push eax
// 00416d89  e8d48e2100           call 0x62fc62
// 00416d8e  83c404               add esp, 4
// 00416d91  897e04               mov dword ptr [esi + 4], edi
// 00416d94  897e08               mov dword ptr [esi + 8], edi
// 00416d97  897e0c               mov dword ptr [esi + 0xc], edi
// 00416d9a  5f                   pop edi
// 00416d9b  5e                   pop esi
// 00416d9c  c703b4707800         mov dword ptr [ebx], 0x7870b4
// 00416da2  5b                   pop ebx
// 00416da3  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1ClassDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
