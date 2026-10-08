// roc 2007-08 005ee640  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ee640
//
// 005ee640  6aff                 push -1
// 005ee642  6828b27500           push 0x75b228
// 005ee647  64a100000000         mov eax, dword ptr fs:[0]
// 005ee64d  50                   push eax
// 005ee64e  64892500000000       mov dword ptr fs:[0], esp
// 005ee655  83ec08               sub esp, 8
// 005ee658  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ee65c  56                   push esi
// 005ee65d  57                   push edi
// 005ee65e  8bf1                 mov esi, ecx
// 005ee660  89742408             mov dword ptr [esp + 8], esi
// 005ee664  50                   push eax
// 005ee665  51                   push ecx
// 005ee666  8bc4                 mov eax, esp
// 005ee668  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ee670  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee678  89642414             mov dword ptr [esp + 0x14], esp
// 005ee67c  c70000000000         mov dword ptr [eax], 0
// 005ee682  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee686  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ee68a  51                   push ecx
// 005ee68b  52                   push edx
// 005ee68c  c644242801           mov byte ptr [esp + 0x28], 1
// 005ee691  e8faf0ffff           call 0x5ed790
// 005ee696  50                   push eax
// 005ee697  8bce                 mov ecx, esi
// 005ee699  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ee69e  e81d69f8ff           call 0x574fc0
// 005ee6a3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ee6a7  50                   push eax
// 005ee6a8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ee6ad  e8b0150400           call 0x62fc62
// 005ee6b2  6a18                 push 0x18
// 005ee6b4  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005ee6ba  e837180400           call 0x62fef6
// 005ee6bf  83c408               add esp, 8
// 005ee6c2  85c0                 test eax, eax
// 005ee6c4  741e                 je 0x5ee6e4
// 005ee6c6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ee6ca  33c9                 xor ecx, ecx
// 005ee6cc  33d2                 xor edx, edx
// 005ee6ce  897808               mov dword ptr [eax + 8], edi
// 005ee6d1  c700a0ec7b00         mov dword ptr [eax], 0x7beca0
// 005ee6d7  897004               mov dword ptr [eax + 4], esi
// 005ee6da  894810               mov dword ptr [eax + 0x10], ecx
// 005ee6dd  895014               mov dword ptr [eax + 0x14], edx
// 005ee6e0  8bf8                 mov edi, eax
// 005ee6e2  eb02                 jmp 0x5ee6e6
// 005ee6e4  33ff                 xor edi, edi
// 005ee6e6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee6e9  3bf8                 cmp edi, eax
// 005ee6eb  7409                 je 0x5ee6f6
// 005ee6ed  50                   push eax
// 005ee6ee  e86f150400           call 0x62fc62
// 005ee6f3  83c404               add esp, 4
// 005ee6f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee6fa  897e18               mov dword ptr [esi + 0x18], edi
// 005ee6fd  5f                   pop edi
// 005ee6fe  8bc6                 mov eax, esi
// 005ee700  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee707  5e                   pop esi
// 005ee708  83c414               add esp, 0x14
// 005ee70b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
