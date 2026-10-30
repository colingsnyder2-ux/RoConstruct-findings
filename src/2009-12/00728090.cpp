// roc 2009-12 00728090  unit: boost::iostreams::Uinput::?$filtering_stream  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00728090
//
// 00728090  55                   push ebp
// 00728091  8bec                 mov ebp, esp
// 00728093  6aff                 push -1
// 00728095  68f0f09400           push 0x94f0f0
// 0072809a  64a100000000         mov eax, dword ptr fs:[0]
// 007280a0  50                   push eax
// 007280a1  64892500000000       mov dword ptr fs:[0], esp
// 007280a8  51                   push ecx
// 007280a9  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007280ac  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 007280af  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007280b2  53                   push ebx
// 007280b3  56                   push esi
// 007280b4  57                   push edi
// 007280b5  8965f0               mov dword ptr [ebp - 0x10], esp
// 007280b8  50                   push eax
// 007280b9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007280bc  51                   push ecx
// 007280bd  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007280c0  52                   push edx
// 007280c1  50                   push eax
// 007280c2  51                   push ecx
// 007280c3  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007280ca  e821ffffff           call 0x727ff0
// 007280cf  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 007280d2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007280d5  83c414               add esp, 0x14
// 007280d8  5f                   pop edi
// 007280d9  5e                   pop esi
// 007280da  c70200000000         mov dword ptr [edx], 0
// 007280e0  64890d00000000       mov dword ptr fs:[0], ecx
// 007280e7  5b                   pop ebx
// 007280e8  8be5                 mov esp, ebp
// 007280ea  5d                   pop ebp
// 007280eb  c3                   ret 
// 007280ec  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 007280ef  8965f0               mov dword ptr [ebp - 0x10], esp
// 007280f2  6a00                 push 0
// 007280f4  6a00                 push 0
// 007280f6  c70000000000         mov dword ptr [eax], 0
// 007280fc  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00728103  e870c70c00           call 0x7f4878
// copied from an identical function in another client (function ??$execute_all@V?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@detail@iostreams@boost@@V1234@V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@234@V?$clear_flags_operation@H@234@@detail@iostreams@boost@@YAHV?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@012@0V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@012@V?$clear_flags_operation@H@012@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp