// roc 2012-06 00547f40  unit: RBX::Network::Players::W4PlayerChatType::?$EnumDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00547f40
//
// 00547f40  55                   push ebp
// 00547f41  8bec                 mov ebp, esp
// 00547f43  6aff                 push -1
// 00547f45  6800d0aa00           push 0xaad000
// 00547f4a  64a100000000         mov eax, dword ptr fs:[0]
// 00547f50  50                   push eax
// 00547f51  64892500000000       mov dword ptr fs:[0], esp
// 00547f58  83ec08               sub esp, 8
// 00547f5b  53                   push ebx
// 00547f5c  56                   push esi
// 00547f5d  57                   push edi
// 00547f5e  8bf1                 mov esi, ecx
// 00547f60  8965f0               mov dword ptr [ebp - 0x10], esp
// 00547f63  8975ec               mov dword ptr [ebp - 0x14], esi
// 00547f66  e885a4ffff           call 0x5423f0
// 00547f6b  894604               mov dword ptr [esi + 4], eax
// 00547f6e  c6402901             mov byte ptr [eax + 0x29], 1
// 00547f72  8b4604               mov eax, dword ptr [esi + 4]
// 00547f75  894004               mov dword ptr [eax + 4], eax
// 00547f78  8b4604               mov eax, dword ptr [esi + 4]
// 00547f7b  8900                 mov dword ptr [eax], eax
// 00547f7d  8b4604               mov eax, dword ptr [esi + 4]
// 00547f80  894008               mov dword ptr [eax + 8], eax
// 00547f83  8b4508               mov eax, dword ptr [ebp + 8]
// 00547f86  50                   push eax
// 00547f87  8bce                 mov ecx, esi
// 00547f89  c7460800000000       mov dword ptr [esi + 8], 0
// 00547f90  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00547f97  e804e9ffff           call 0x5468a0
// 00547f9c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00547f9f  5f                   pop edi
// 00547fa0  8bc6                 mov eax, esi
// 00547fa2  5e                   pop esi
// 00547fa3  64890d00000000       mov dword ptr fs:[0], ecx
// 00547faa  5b                   pop ebx
// 00547fab  8be5                 mov esp, ebp
// 00547fad  5d                   pop ebp
// 00547fae  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ??0?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
