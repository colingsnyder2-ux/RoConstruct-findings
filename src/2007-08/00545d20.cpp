// roc 2007-08 00545d20  unit: RBX::MD5HasherImpl  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545d20
//
// 00545d20  55                   push ebp
// 00545d21  8bec                 mov ebp, esp
// 00545d23  6aff                 push -1
// 00545d25  6870197500           push 0x751970
// 00545d2a  64a100000000         mov eax, dword ptr fs:[0]
// 00545d30  50                   push eax
// 00545d31  64892500000000       mov dword ptr fs:[0], esp
// 00545d38  83ec08               sub esp, 8
// 00545d3b  53                   push ebx
// 00545d3c  56                   push esi
// 00545d3d  57                   push edi
// 00545d3e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00545d41  6a28                 push 0x28
// 00545d43  e8aea10e00           call 0x62fef6
// 00545d48  8bf0                 mov esi, eax
// 00545d4a  83c404               add esp, 4
// 00545d4d  85f6                 test esi, esi
// 00545d4f  8975ec               mov dword ptr [ebp - 0x14], esi
// 00545d52  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00545d59  7405                 je 0x545d60
// 00545d5b  8b4508               mov eax, dword ptr [ebp + 8]
// 00545d5e  8906                 mov dword ptr [esi], eax
// 00545d60  8d4604               lea eax, [esi + 4]
// 00545d63  85c0                 test eax, eax
// 00545d65  7405                 je 0x545d6c
// 00545d67  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00545d6a  8908                 mov dword ptr [eax], ecx
// 00545d6c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00545d6f  52                   push edx
// 00545d70  8d4608               lea eax, [esi + 8]
// 00545d73  50                   push eax
// 00545d74  e827f7ffff           call 0x5454a0
// 00545d79  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00545d7c  83c408               add esp, 8
// 00545d7f  5f                   pop edi
// 00545d80  8bc6                 mov eax, esi
// 00545d82  5e                   pop esi
// 00545d83  64890d00000000       mov dword ptr fs:[0], ecx
// 00545d8a  5b                   pop ebx
// 00545d8b  8be5                 mov esp, ebp
// 00545d8d  5d                   pop ebp
// 00545d8e  c20c00               ret 0xc
// library rbxgs-net/Players.cpp (function ?_Buynode@?$list@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UMessage@AbuseReport@Network@RBX@@V?$allocator@UMessage@AbuseReport@Network@RBX@@@std@@@2@PAU342@0ABUMessage@AbuseReport@Network@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
