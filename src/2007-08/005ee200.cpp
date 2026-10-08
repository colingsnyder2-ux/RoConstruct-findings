// roc 2007-08 005ee200  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ee200
//
// 005ee200  6aff                 push -1
// 005ee202  6828b27500           push 0x75b228
// 005ee207  64a100000000         mov eax, dword ptr fs:[0]
// 005ee20d  50                   push eax
// 005ee20e  64892500000000       mov dword ptr fs:[0], esp
// 005ee215  83ec08               sub esp, 8
// 005ee218  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ee21c  56                   push esi
// 005ee21d  57                   push edi
// 005ee21e  8bf1                 mov esi, ecx
// 005ee220  89742408             mov dword ptr [esp + 8], esi
// 005ee224  50                   push eax
// 005ee225  51                   push ecx
// 005ee226  8bc4                 mov eax, esp
// 005ee228  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ee230  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee238  89642414             mov dword ptr [esp + 0x14], esp
// 005ee23c  c70000000000         mov dword ptr [eax], 0
// 005ee242  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee246  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ee24a  51                   push ecx
// 005ee24b  52                   push edx
// 005ee24c  c644242801           mov byte ptr [esp + 0x28], 1
// 005ee251  e8caf4ffff           call 0x5ed720
// 005ee256  50                   push eax
// 005ee257  8bce                 mov ecx, esi
// 005ee259  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ee25e  e87d70e5ff           call 0x4452e0
// 005ee263  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ee267  50                   push eax
// 005ee268  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ee26d  e8f0190400           call 0x62fc62
// 005ee272  6a18                 push 0x18
// 005ee274  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 005ee27a  e8771c0400           call 0x62fef6
// 005ee27f  83c408               add esp, 8
// 005ee282  85c0                 test eax, eax
// 005ee284  741e                 je 0x5ee2a4
// 005ee286  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ee28a  33c9                 xor ecx, ecx
// 005ee28c  33d2                 xor edx, edx
// 005ee28e  897808               mov dword ptr [eax + 8], edi
// 005ee291  c70030ec7b00         mov dword ptr [eax], 0x7bec30
// 005ee297  897004               mov dword ptr [eax + 4], esi
// 005ee29a  894810               mov dword ptr [eax + 0x10], ecx
// 005ee29d  895014               mov dword ptr [eax + 0x14], edx
// 005ee2a0  8bf8                 mov edi, eax
// 005ee2a2  eb02                 jmp 0x5ee2a6
// 005ee2a4  33ff                 xor edi, edi
// 005ee2a6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee2a9  3bf8                 cmp edi, eax
// 005ee2ab  7409                 je 0x5ee2b6
// 005ee2ad  50                   push eax
// 005ee2ae  e8af190400           call 0x62fc62
// 005ee2b3  83c404               add esp, 4
// 005ee2b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee2ba  897e18               mov dword ptr [esi + 0x18], edi
// 005ee2bd  5f                   pop edi
// 005ee2be  8bc6                 mov eax, esi
// 005ee2c0  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee2c7  5e                   pop esi
// 005ee2c8  83c414               add esp, 0x14
// 005ee2cb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
