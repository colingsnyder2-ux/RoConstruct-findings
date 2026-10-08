// roc 2007-08 005edf80  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005edf80
//
// 005edf80  6aff                 push -1
// 005edf82  6828b27500           push 0x75b228
// 005edf87  64a100000000         mov eax, dword ptr fs:[0]
// 005edf8d  50                   push eax
// 005edf8e  64892500000000       mov dword ptr fs:[0], esp
// 005edf95  83ec08               sub esp, 8
// 005edf98  8b442424             mov eax, dword ptr [esp + 0x24]
// 005edf9c  56                   push esi
// 005edf9d  57                   push edi
// 005edf9e  8bf1                 mov esi, ecx
// 005edfa0  89742408             mov dword ptr [esp + 8], esi
// 005edfa4  50                   push eax
// 005edfa5  51                   push ecx
// 005edfa6  8bc4                 mov eax, esp
// 005edfa8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005edfb0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005edfb8  89642414             mov dword ptr [esp + 0x14], esp
// 005edfbc  c70000000000         mov dword ptr [eax], 0
// 005edfc2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005edfc6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005edfca  51                   push ecx
// 005edfcb  52                   push edx
// 005edfcc  c644242801           mov byte ptr [esp + 0x28], 1
// 005edfd1  e8dafcffff           call 0x5edcb0
// 005edfd6  50                   push eax
// 005edfd7  8bce                 mov ecx, esi
// 005edfd9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005edfde  e8fd72e5ff           call 0x4452e0
// 005edfe3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005edfe7  50                   push eax
// 005edfe8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005edfed  e8701c0400           call 0x62fc62
// 005edff2  6a18                 push 0x18
// 005edff4  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 005edffa  e8f71e0400           call 0x62fef6
// 005edfff  83c408               add esp, 8
// 005ee002  85c0                 test eax, eax
// 005ee004  741e                 je 0x5ee024
// 005ee006  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ee00a  33c9                 xor ecx, ecx
// 005ee00c  33d2                 xor edx, edx
// 005ee00e  897808               mov dword ptr [eax + 8], edi
// 005ee011  c70020ec7b00         mov dword ptr [eax], 0x7bec20
// 005ee017  897004               mov dword ptr [eax + 4], esi
// 005ee01a  894810               mov dword ptr [eax + 0x10], ecx
// 005ee01d  895014               mov dword ptr [eax + 0x14], edx
// 005ee020  8bf8                 mov edi, eax
// 005ee022  eb02                 jmp 0x5ee026
// 005ee024  33ff                 xor edi, edi
// 005ee026  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee029  3bf8                 cmp edi, eax
// 005ee02b  7409                 je 0x5ee036
// 005ee02d  50                   push eax
// 005ee02e  e82f1c0400           call 0x62fc62
// 005ee033  83c404               add esp, 4
// 005ee036  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee03a  897e18               mov dword ptr [esi + 0x18], edi
// 005ee03d  5f                   pop edi
// 005ee03e  8bc6                 mov eax, esi
// 005ee040  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee047  5e                   pop esi
// 005ee048  83c414               add esp, 0x14
// 005ee04b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
