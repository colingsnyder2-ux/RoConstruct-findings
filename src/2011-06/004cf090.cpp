// roc 2011-06 004cf090  unit: RBX::Network::Players::W4PlayerChatType::?$EnumDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004cf090
//
// 004cf090  55                   push ebp
// 004cf091  8bec                 mov ebp, esp
// 004cf093  6aff                 push -1
// 004cf095  68b09e9d00           push 0x9d9eb0
// 004cf09a  64a100000000         mov eax, dword ptr fs:[0]
// 004cf0a0  50                   push eax
// 004cf0a1  64892500000000       mov dword ptr fs:[0], esp
// 004cf0a8  83ec08               sub esp, 8
// 004cf0ab  53                   push ebx
// 004cf0ac  56                   push esi
// 004cf0ad  57                   push edi
// 004cf0ae  8bf1                 mov esi, ecx
// 004cf0b0  8965f0               mov dword ptr [ebp - 0x10], esp
// 004cf0b3  8975ec               mov dword ptr [ebp - 0x14], esi
// 004cf0b6  e805a1ffff           call 0x4c91c0
// 004cf0bb  894604               mov dword ptr [esi + 4], eax
// 004cf0be  c6402901             mov byte ptr [eax + 0x29], 1
// 004cf0c2  8b4604               mov eax, dword ptr [esi + 4]
// 004cf0c5  894004               mov dword ptr [eax + 4], eax
// 004cf0c8  8b4604               mov eax, dword ptr [esi + 4]
// 004cf0cb  8900                 mov dword ptr [eax], eax
// 004cf0cd  8b4604               mov eax, dword ptr [esi + 4]
// 004cf0d0  894008               mov dword ptr [eax + 8], eax
// 004cf0d3  8b4508               mov eax, dword ptr [ebp + 8]
// 004cf0d6  50                   push eax
// 004cf0d7  8bce                 mov ecx, esi
// 004cf0d9  c7460800000000       mov dword ptr [esi + 8], 0
// 004cf0e0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004cf0e7  e8c4e5ffff           call 0x4cd6b0
// 004cf0ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cf0ef  5f                   pop edi
// 004cf0f0  8bc6                 mov eax, esi
// 004cf0f2  5e                   pop esi
// 004cf0f3  64890d00000000       mov dword ptr fs:[0], ecx
// 004cf0fa  5b                   pop ebx
// 004cf0fb  8be5                 mov esp, ebp
// 004cf0fd  5d                   pop ebp
// 004cf0fe  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ??0?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
