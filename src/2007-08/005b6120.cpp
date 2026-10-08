// roc 2007-08 005b6120  unit: RBX::VSky::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6120
//
// 005b6120  6aff                 push -1
// 005b6122  6828b27500           push 0x75b228
// 005b6127  64a100000000         mov eax, dword ptr fs:[0]
// 005b612d  50                   push eax
// 005b612e  64892500000000       mov dword ptr fs:[0], esp
// 005b6135  83ec08               sub esp, 8
// 005b6138  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b613c  56                   push esi
// 005b613d  57                   push edi
// 005b613e  8bf1                 mov esi, ecx
// 005b6140  89742408             mov dword ptr [esp + 8], esi
// 005b6144  50                   push eax
// 005b6145  51                   push ecx
// 005b6146  8bc4                 mov eax, esp
// 005b6148  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005b6150  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005b6158  89642414             mov dword ptr [esp + 0x14], esp
// 005b615c  c70000000000         mov dword ptr [eax], 0
// 005b6162  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b6166  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b616a  51                   push ecx
// 005b616b  52                   push edx
// 005b616c  c644242801           mov byte ptr [esp + 0x28], 1
// 005b6171  e86afeffff           call 0x5b5fe0
// 005b6176  50                   push eax
// 005b6177  8bce                 mov ecx, esi
// 005b6179  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005b617e  e8ddcce8ff           call 0x442e60
// 005b6183  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b6187  50                   push eax
// 005b6188  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005b618d  e8d09a0700           call 0x62fc62
// 005b6192  6a18                 push 0x18
// 005b6194  c7061cf87800         mov dword ptr [esi], 0x78f81c
// 005b619a  e8579d0700           call 0x62fef6
// 005b619f  83c408               add esp, 8
// 005b61a2  85c0                 test eax, eax
// 005b61a4  741e                 je 0x5b61c4
// 005b61a6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005b61aa  33c9                 xor ecx, ecx
// 005b61ac  33d2                 xor edx, edx
// 005b61ae  897808               mov dword ptr [eax + 8], edi
// 005b61b1  c70064807b00         mov dword ptr [eax], 0x7b8064
// 005b61b7  897004               mov dword ptr [eax + 4], esi
// 005b61ba  894810               mov dword ptr [eax + 0x10], ecx
// 005b61bd  895014               mov dword ptr [eax + 0x14], edx
// 005b61c0  8bf8                 mov edi, eax
// 005b61c2  eb02                 jmp 0x5b61c6
// 005b61c4  33ff                 xor edi, edi
// 005b61c6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005b61c9  3bf8                 cmp edi, eax
// 005b61cb  7409                 je 0x5b61d6
// 005b61cd  50                   push eax
// 005b61ce  e88f9a0700           call 0x62fc62
// 005b61d3  83c404               add esp, 4
// 005b61d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b61da  897e18               mov dword ptr [esi + 0x18], edi
// 005b61dd  5f                   pop edi
// 005b61de  8bc6                 mov eax, esi
// 005b61e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005b61e7  5e                   pop esi
// 005b61e8  83c414               add esp, 0x14
// 005b61eb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
