// roc 2007-03 005dcc00  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dcc00
//
// 005dcc00  6aff                 push -1
// 005dcc02  68089c7500           push 0x759c08
// 005dcc07  64a100000000         mov eax, dword ptr fs:[0]
// 005dcc0d  50                   push eax
// 005dcc0e  64892500000000       mov dword ptr fs:[0], esp
// 005dcc15  83ec08               sub esp, 8
// 005dcc18  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dcc1c  56                   push esi
// 005dcc1d  57                   push edi
// 005dcc1e  8bf1                 mov esi, ecx
// 005dcc20  89742408             mov dword ptr [esp + 8], esi
// 005dcc24  50                   push eax
// 005dcc25  51                   push ecx
// 005dcc26  8bc4                 mov eax, esp
// 005dcc28  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dcc30  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dcc38  89642414             mov dword ptr [esp + 0x14], esp
// 005dcc3c  c70000000000         mov dword ptr [eax], 0
// 005dcc42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dcc46  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dcc4a  51                   push ecx
// 005dcc4b  52                   push edx
// 005dcc4c  c644242801           mov byte ptr [esp + 0x28], 1
// 005dcc51  e8caf9ffff           call 0x5dc620
// 005dcc56  50                   push eax
// 005dcc57  8bce                 mov ecx, esi
// 005dcc59  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dcc5e  e88d6cf9ff           call 0x5738f0
// 005dcc63  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dcc67  50                   push eax
// 005dcc68  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dcc6d  e87e140400           call 0x61e0f0
// 005dcc72  6a18                 push 0x18
// 005dcc74  c70690cf7b00         mov dword ptr [esi], 0x7bcf90
// 005dcc7a  e889140400           call 0x61e108
// 005dcc7f  83c408               add esp, 8
// 005dcc82  85c0                 test eax, eax
// 005dcc84  741e                 je 0x5dcca4
// 005dcc86  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dcc8a  33c9                 xor ecx, ecx
// 005dcc8c  33d2                 xor edx, edx
// 005dcc8e  897808               mov dword ptr [eax + 8], edi
// 005dcc91  c700c0cc7b00         mov dword ptr [eax], 0x7bccc0
// 005dcc97  897004               mov dword ptr [eax + 4], esi
// 005dcc9a  894810               mov dword ptr [eax + 0x10], ecx
// 005dcc9d  895014               mov dword ptr [eax + 0x14], edx
// 005dcca0  8bf8                 mov edi, eax
// 005dcca2  eb02                 jmp 0x5dcca6
// 005dcca4  33ff                 xor edi, edi
// 005dcca6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dcca9  3bf8                 cmp edi, eax
// 005dccab  7409                 je 0x5dccb6
// 005dccad  50                   push eax
// 005dccae  e83d140400           call 0x61e0f0
// 005dccb3  83c404               add esp, 4
// 005dccb6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dccba  897e18               mov dword ptr [esi + 0x18], edi
// 005dccbd  5f                   pop edi
// 005dccbe  8bc6                 mov eax, esi
// 005dccc0  64890d00000000       mov dword ptr fs:[0], ecx
// 005dccc7  5e                   pop esi
// 005dccc8  83c414               add esp, 0x14
// 005dcccb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
