// roc 2009-12 00724520  unit: VWinHttpRequest_source::?$stream_buffer  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00724520
//
// 00724520  55                   push ebp
// 00724521  8bec                 mov ebp, esp
// 00724523  6aff                 push -1
// 00724525  6830ed9400           push 0x94ed30
// 0072452a  64a100000000         mov eax, dword ptr fs:[0]
// 00724530  50                   push eax
// 00724531  64892500000000       mov dword ptr fs:[0], esp
// 00724538  51                   push ecx
// 00724539  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0072453c  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0072453f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00724542  53                   push ebx
// 00724543  56                   push esi
// 00724544  57                   push edi
// 00724545  8965f0               mov dword ptr [ebp - 0x10], esp
// 00724548  50                   push eax
// 00724549  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0072454c  51                   push ecx
// 0072454d  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00724550  52                   push edx
// 00724551  50                   push eax
// 00724552  51                   push ecx
// 00724553  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0072455a  e891fbffff           call 0x7240f0
// 0072455f  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00724562  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00724565  83c414               add esp, 0x14
// 00724568  5f                   pop edi
// 00724569  5e                   pop esi
// 0072456a  c70200000000         mov dword ptr [edx], 0
// 00724570  64890d00000000       mov dword ptr fs:[0], ecx
// 00724577  5b                   pop ebx
// 00724578  8be5                 mov esp, ebp
// 0072457a  5d                   pop ebp
// 0072457b  c3                   ret 
// 0072457c  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0072457f  8965f0               mov dword ptr [ebp - 0x10], esp
// 00724582  6a00                 push 0
// 00724584  6a00                 push 0
// 00724586  c70000000000         mov dword ptr [eax], 0
// 0072458c  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00724593  e8e0020d00           call 0x7f4878
// copied from an identical function in another client (function ??$execute_all@V?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@detail@iostreams@boost@@V1234@V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@234@V?$clear_flags_operation@H@234@@detail@iostreams@boost@@YAHV?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@012@0V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@012@V?$clear_flags_operation@H@012@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp