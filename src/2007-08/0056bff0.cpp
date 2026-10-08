// roc 2007-08 0056bff0  unit: ArchiveBinder  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056bff0
//
// 0056bff0  6aff                 push -1
// 0056bff2  687b6b7500           push 0x756b7b
// 0056bff7  64a100000000         mov eax, dword ptr fs:[0]
// 0056bffd  50                   push eax
// 0056bffe  64892500000000       mov dword ptr fs:[0], esp
// 0056c005  51                   push ecx
// 0056c006  53                   push ebx
// 0056c007  55                   push ebp
// 0056c008  8be9                 mov ebp, ecx
// 0056c00a  56                   push esi
// 0056c00b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0056c00f  8d5d04               lea ebx, [ebp + 4]
// 0056c012  56                   push esi
// 0056c013  8bcb                 mov ecx, ebx
// 0056c015  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056c019  897500               mov dword ptr [ebp], esi
// 0056c01c  e83fffffff           call 0x56bf60
// 0056c021  85f6                 test esi, esi
// 0056c023  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0056c02b  7450                 je 0x56c07d
// 0056c02d  57                   push edi
// 0056c02e  8d7e18               lea edi, [esi + 0x18]
// 0056c031  85ff                 test edi, edi
// 0056c033  7431                 je 0x56c066
// 0056c035  8937                 mov dword ptr [edi], esi
// 0056c037  8b33                 mov esi, dword ptr [ebx]
// 0056c039  85f6                 test esi, esi
// 0056c03b  740c                 je 0x56c049
// 0056c03d  8d4608               lea eax, [esi + 8]
// 0056c040  b901000000           mov ecx, 1
// 0056c045  f00fc108             lock xadd dword ptr [eax], ecx
// 0056c049  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056c04c  85c9                 test ecx, ecx
// 0056c04e  7413                 je 0x56c063
// 0056c050  8d5108               lea edx, [ecx + 8]
// 0056c053  83c8ff               or eax, 0xffffffff
// 0056c056  f00fc102             lock xadd dword ptr [edx], eax
// 0056c05a  7507                 jne 0x56c063
// 0056c05c  8b11                 mov edx, dword ptr [ecx]
// 0056c05e  8b4208               mov eax, dword ptr [edx + 8]
// 0056c061  ffd0                 call eax
// 0056c063  897704               mov dword ptr [edi + 4], esi
// 0056c066  5f                   pop edi
// 0056c067  5e                   pop esi
// 0056c068  8bc5                 mov eax, ebp
// 0056c06a  5d                   pop ebp
// 0056c06b  5b                   pop ebx
// 0056c06c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056c070  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c077  83c410               add esp, 0x10
// 0056c07a  c20400               ret 4
// 0056c07d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056c081  5e                   pop esi
// 0056c082  8bc5                 mov eax, ebp
// 0056c084  5d                   pop ebp
// 0056c085  5b                   pop ebx
// 0056c086  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c08d  83c410               add esp, 0x10
// 0056c090  c20400               ret 4
// library rbxgs/util\standardout.cpp (function ??$?0VStandardOut@RBX@@@?$shared_ptr@VStandardOut@RBX@@@boost@@QAE@PAVStandardOut@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
