// roc 2007-08 005ee3a0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ee3a0
//
// 005ee3a0  6aff                 push -1
// 005ee3a2  6828b27500           push 0x75b228
// 005ee3a7  64a100000000         mov eax, dword ptr fs:[0]
// 005ee3ad  50                   push eax
// 005ee3ae  64892500000000       mov dword ptr fs:[0], esp
// 005ee3b5  83ec08               sub esp, 8
// 005ee3b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ee3bc  56                   push esi
// 005ee3bd  57                   push edi
// 005ee3be  8bf1                 mov esi, ecx
// 005ee3c0  89742408             mov dword ptr [esp + 8], esi
// 005ee3c4  50                   push eax
// 005ee3c5  51                   push ecx
// 005ee3c6  8bc4                 mov eax, esp
// 005ee3c8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ee3d0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee3d8  89642414             mov dword ptr [esp + 0x14], esp
// 005ee3dc  c70000000000         mov dword ptr [eax], 0
// 005ee3e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee3e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ee3ea  51                   push ecx
// 005ee3eb  52                   push edx
// 005ee3ec  c644242801           mov byte ptr [esp + 0x28], 1
// 005ee3f1  e82af3ffff           call 0x5ed720
// 005ee3f6  50                   push eax
// 005ee3f7  8bce                 mov ecx, esi
// 005ee3f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ee3fe  e8cd2af4ff           call 0x530ed0
// 005ee403  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ee407  50                   push eax
// 005ee408  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ee40d  e850180400           call 0x62fc62
// 005ee412  6a18                 push 0x18
// 005ee414  c70668f17b00         mov dword ptr [esi], 0x7bf168
// 005ee41a  e8d71a0400           call 0x62fef6
// 005ee41f  83c408               add esp, 8
// 005ee422  85c0                 test eax, eax
// 005ee424  741e                 je 0x5ee444
// 005ee426  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ee42a  33c9                 xor ecx, ecx
// 005ee42c  33d2                 xor edx, edx
// 005ee42e  897808               mov dword ptr [eax + 8], edi
// 005ee431  c70050ec7b00         mov dword ptr [eax], 0x7bec50
// 005ee437  897004               mov dword ptr [eax + 4], esi
// 005ee43a  894810               mov dword ptr [eax + 0x10], ecx
// 005ee43d  895014               mov dword ptr [eax + 0x14], edx
// 005ee440  8bf8                 mov edi, eax
// 005ee442  eb02                 jmp 0x5ee446
// 005ee444  33ff                 xor edi, edi
// 005ee446  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee449  3bf8                 cmp edi, eax
// 005ee44b  7409                 je 0x5ee456
// 005ee44d  50                   push eax
// 005ee44e  e80f180400           call 0x62fc62
// 005ee453  83c404               add esp, 4
// 005ee456  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee45a  897e18               mov dword ptr [esi + 0x18], edi
// 005ee45d  5f                   pop edi
// 005ee45e  8bc6                 mov eax, esi
// 005ee460  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee467  5e                   pop esi
// 005ee468  83c414               add esp, 0x14
// 005ee46b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
