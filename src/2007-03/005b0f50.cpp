// roc 2007-03 005b0f50  unit: seg_005b0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b0f50
//
// 005b0f50  6aff                 push -1
// 005b0f52  68089c7500           push 0x759c08
// 005b0f57  64a100000000         mov eax, dword ptr fs:[0]
// 005b0f5d  50                   push eax
// 005b0f5e  64892500000000       mov dword ptr fs:[0], esp
// 005b0f65  83ec08               sub esp, 8
// 005b0f68  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b0f6c  56                   push esi
// 005b0f6d  57                   push edi
// 005b0f6e  8bf1                 mov esi, ecx
// 005b0f70  89742408             mov dword ptr [esp + 8], esi
// 005b0f74  50                   push eax
// 005b0f75  51                   push ecx
// 005b0f76  8bc4                 mov eax, esp
// 005b0f78  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005b0f80  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005b0f88  89642414             mov dword ptr [esp + 0x14], esp
// 005b0f8c  c70000000000         mov dword ptr [eax], 0
// 005b0f92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b0f96  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b0f9a  51                   push ecx
// 005b0f9b  52                   push edx
// 005b0f9c  c644242801           mov byte ptr [esp + 0x28], 1
// 005b0fa1  e86afeffff           call 0x5b0e10
// 005b0fa6  50                   push eax
// 005b0fa7  8bce                 mov ecx, esi
// 005b0fa9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005b0fae  e8dd18e9ff           call 0x442890
// 005b0fb3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b0fb7  50                   push eax
// 005b0fb8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005b0fbd  e82ed10600           call 0x61e0f0
// 005b0fc2  6a18                 push 0x18
// 005b0fc4  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 005b0fca  e839d10600           call 0x61e108
// 005b0fcf  83c408               add esp, 8
// 005b0fd2  85c0                 test eax, eax
// 005b0fd4  741e                 je 0x5b0ff4
// 005b0fd6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005b0fda  33c9                 xor ecx, ecx
// 005b0fdc  33d2                 xor edx, edx
// 005b0fde  897808               mov dword ptr [eax + 8], edi
// 005b0fe1  c700287d7b00         mov dword ptr [eax], 0x7b7d28
// 005b0fe7  897004               mov dword ptr [eax + 4], esi
// 005b0fea  894810               mov dword ptr [eax + 0x10], ecx
// 005b0fed  895014               mov dword ptr [eax + 0x14], edx
// 005b0ff0  8bf8                 mov edi, eax
// 005b0ff2  eb02                 jmp 0x5b0ff6
// 005b0ff4  33ff                 xor edi, edi
// 005b0ff6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005b0ff9  3bf8                 cmp edi, eax
// 005b0ffb  7409                 je 0x5b1006
// 005b0ffd  50                   push eax
// 005b0ffe  e8edd00600           call 0x61e0f0
// 005b1003  83c404               add esp, 4
// 005b1006  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b100a  897e18               mov dword ptr [esi + 0x18], edi
// 005b100d  5f                   pop edi
// 005b100e  8bc6                 mov eax, esi
// 005b1010  64890d00000000       mov dword ptr fs:[0], ecx
// 005b1017  5e                   pop esi
// 005b1018  83c414               add esp, 0x14
// 005b101b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
