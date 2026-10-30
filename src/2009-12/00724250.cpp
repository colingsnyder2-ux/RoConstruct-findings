// roc 2009-12 00724250  unit: VWinHttpRequest_source::?$stream_buffer  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00724250
//
// 00724250  55                   push ebp
// 00724251  8bec                 mov ebp, esp
// 00724253  6aff                 push -1
// 00724255  6800ed9400           push 0x94ed00
// 0072425a  64a100000000         mov eax, dword ptr fs:[0]
// 00724260  50                   push eax
// 00724261  64892500000000       mov dword ptr fs:[0], esp
// 00724268  51                   push ecx
// 00724269  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0072426c  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0072426f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00724272  53                   push ebx
// 00724273  56                   push esi
// 00724274  57                   push edi
// 00724275  8965f0               mov dword ptr [ebp - 0x10], esp
// 00724278  50                   push eax
// 00724279  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0072427c  51                   push ecx
// 0072427d  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00724280  52                   push edx
// 00724281  50                   push eax
// 00724282  51                   push ecx
// 00724283  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0072428a  e851f8ffff           call 0x723ae0
// 0072428f  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00724292  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00724295  83c414               add esp, 0x14
// 00724298  5f                   pop edi
// 00724299  5e                   pop esi
// 0072429a  c70200000000         mov dword ptr [edx], 0
// 007242a0  64890d00000000       mov dword ptr fs:[0], ecx
// 007242a7  5b                   pop ebx
// 007242a8  8be5                 mov esp, ebp
// 007242aa  5d                   pop ebp
// 007242ab  c3                   ret 
// 007242ac  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 007242af  8965f0               mov dword ptr [ebp - 0x10], esp
// 007242b2  6a00                 push 0
// 007242b4  6a00                 push 0
// 007242b6  c70000000000         mov dword ptr [eax], 0
// 007242bc  c745fc01000000       mov dword ptr [ebp - 4], 1
// 007242c3  e8b0050d00           call 0x7f4878
// copied from an identical function in another client (function ??$execute_all@V?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@detail@iostreams@boost@@V1234@V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@234@V?$clear_flags_operation@H@234@@detail@iostreams@boost@@YAHV?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@012@0V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@012@V?$clear_flags_operation@H@012@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp