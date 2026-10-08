// roc 2007-03 005dccd0  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dccd0
//
// 005dccd0  6aff                 push -1
// 005dccd2  68089c7500           push 0x759c08
// 005dccd7  64a100000000         mov eax, dword ptr fs:[0]
// 005dccdd  50                   push eax
// 005dccde  64892500000000       mov dword ptr fs:[0], esp
// 005dcce5  83ec08               sub esp, 8
// 005dcce8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dccec  56                   push esi
// 005dcced  57                   push edi
// 005dccee  8bf1                 mov esi, ecx
// 005dccf0  89742408             mov dword ptr [esp + 8], esi
// 005dccf4  50                   push eax
// 005dccf5  51                   push ecx
// 005dccf6  8bc4                 mov eax, esp
// 005dccf8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dcd00  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dcd08  89642414             mov dword ptr [esp + 0x14], esp
// 005dcd0c  c70000000000         mov dword ptr [eax], 0
// 005dcd12  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dcd16  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dcd1a  51                   push ecx
// 005dcd1b  52                   push edx
// 005dcd1c  c644242801           mov byte ptr [esp + 0x28], 1
// 005dcd21  e8caf4ffff           call 0x5dc1f0
// 005dcd26  50                   push eax
// 005dcd27  8bce                 mov ecx, esi
// 005dcd29  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dcd2e  e8bd6bf9ff           call 0x5738f0
// 005dcd33  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dcd37  50                   push eax
// 005dcd38  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dcd3d  e8ae130400           call 0x61e0f0
// 005dcd42  6a18                 push 0x18
// 005dcd44  c70690cf7b00         mov dword ptr [esi], 0x7bcf90
// 005dcd4a  e8b9130400           call 0x61e108
// 005dcd4f  83c408               add esp, 8
// 005dcd52  85c0                 test eax, eax
// 005dcd54  741e                 je 0x5dcd74
// 005dcd56  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dcd5a  33c9                 xor ecx, ecx
// 005dcd5c  33d2                 xor edx, edx
// 005dcd5e  897808               mov dword ptr [eax + 8], edi
// 005dcd61  c700d0cc7b00         mov dword ptr [eax], 0x7bccd0
// 005dcd67  897004               mov dword ptr [eax + 4], esi
// 005dcd6a  894810               mov dword ptr [eax + 0x10], ecx
// 005dcd6d  895014               mov dword ptr [eax + 0x14], edx
// 005dcd70  8bf8                 mov edi, eax
// 005dcd72  eb02                 jmp 0x5dcd76
// 005dcd74  33ff                 xor edi, edi
// 005dcd76  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dcd79  3bf8                 cmp edi, eax
// 005dcd7b  7409                 je 0x5dcd86
// 005dcd7d  50                   push eax
// 005dcd7e  e86d130400           call 0x61e0f0
// 005dcd83  83c404               add esp, 4
// 005dcd86  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dcd8a  897e18               mov dword ptr [esi + 0x18], edi
// 005dcd8d  5f                   pop edi
// 005dcd8e  8bc6                 mov eax, esi
// 005dcd90  64890d00000000       mov dword ptr fs:[0], ecx
// 005dcd97  5e                   pop esi
// 005dcd98  83c414               add esp, 0x14
// 005dcd9b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
