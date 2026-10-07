// roc 2008-06 00594e20  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594e20
//
// 00594e20  55                   push ebp
// 00594e21  8bec                 mov ebp, esp
// 00594e23  6aff                 push -1
// 00594e25  6801207d00           push 0x7d2001
// 00594e2a  64a100000000         mov eax, dword ptr fs:[0]
// 00594e30  50                   push eax
// 00594e31  64892500000000       mov dword ptr fs:[0], esp
// 00594e38  83ec08               sub esp, 8
// 00594e3b  53                   push ebx
// 00594e3c  56                   push esi
// 00594e3d  57                   push edi
// 00594e3e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00594e41  6a18                 push 0x18
// 00594e43  e8d8ba1000           call 0x6a0920
// 00594e48  8bf0                 mov esi, eax
// 00594e4a  83c404               add esp, 4
// 00594e4d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00594e50  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00594e57  85f6                 test esi, esi
// 00594e59  7405                 je 0x594e60
// 00594e5b  8b4508               mov eax, dword ptr [ebp + 8]
// 00594e5e  8906                 mov dword ptr [esi], eax
// 00594e60  8d4604               lea eax, [esi + 4]
// 00594e63  85c0                 test eax, eax
// 00594e65  7405                 je 0x594e6c
// 00594e67  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00594e6a  8908                 mov dword ptr [eax], ecx
// 00594e6c  8d4e08               lea ecx, [esi + 8]
// 00594e6f  894d08               mov dword ptr [ebp + 8], ecx
// 00594e72  894d0c               mov dword ptr [ebp + 0xc], ecx
// 00594e75  c645fc01             mov byte ptr [ebp - 4], 1
// 00594e79  85c9                 test ecx, ecx
// 00594e7b  7409                 je 0x594e86
// 00594e7d  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00594e80  52                   push edx
// 00594e81  e86a020000           call 0x5950f0
// 00594e86  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00594e89  5f                   pop edi
// 00594e8a  8bc6                 mov eax, esi
// 00594e8c  5e                   pop esi
// 00594e8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00594e94  5b                   pop ebx
// 00594e95  8be5                 mov esp, ebp
// 00594e97  5d                   pop ebp
// 00594e98  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ?_Buynode@?$list@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Vconnection@signals@boost@@V?$allocator@Vconnection@signals@boost@@@std@@@2@PAU342@0ABVconnection@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
