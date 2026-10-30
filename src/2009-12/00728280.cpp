// roc 2009-12 00728280  unit: boost::iostreams::Uinput::?$filtering_stream  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00728280
//
// 00728280  55                   push ebp
// 00728281  8bec                 mov ebp, esp
// 00728283  6aff                 push -1
// 00728285  6830f19400           push 0x94f130
// 0072828a  64a100000000         mov eax, dword ptr fs:[0]
// 00728290  50                   push eax
// 00728291  64892500000000       mov dword ptr fs:[0], esp
// 00728298  51                   push ecx
// 00728299  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0072829c  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0072829f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007282a2  53                   push ebx
// 007282a3  56                   push esi
// 007282a4  57                   push edi
// 007282a5  8965f0               mov dword ptr [ebp - 0x10], esp
// 007282a8  50                   push eax
// 007282a9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007282ac  51                   push ecx
// 007282ad  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007282b0  52                   push edx
// 007282b1  50                   push eax
// 007282b2  51                   push ecx
// 007282b3  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007282ba  e821ffffff           call 0x7281e0
// 007282bf  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 007282c2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007282c5  83c414               add esp, 0x14
// 007282c8  5f                   pop edi
// 007282c9  5e                   pop esi
// 007282ca  c70200000000         mov dword ptr [edx], 0
// 007282d0  64890d00000000       mov dword ptr fs:[0], ecx
// 007282d7  5b                   pop ebx
// 007282d8  8be5                 mov esp, ebp
// 007282da  5d                   pop ebp
// 007282db  c3                   ret 
// 007282dc  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 007282df  8965f0               mov dword ptr [ebp - 0x10], esp
// 007282e2  6a00                 push 0
// 007282e4  6a00                 push 0
// 007282e6  c70000000000         mov dword ptr [eax], 0
// 007282ec  c745fc01000000       mov dword ptr [ebp - 4], 1
// 007282f3  e880c50c00           call 0x7f4878
// copied from an identical function in another client (function ??$execute_all@V?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@detail@iostreams@boost@@V1234@V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@234@V?$clear_flags_operation@H@234@@detail@iostreams@boost@@YAHV?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@012@0V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@012@V?$clear_flags_operation@H@012@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp