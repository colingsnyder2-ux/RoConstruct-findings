// roc 2007-03 005b0e80  unit: seg_005b0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b0e80
//
// 005b0e80  6aff                 push -1
// 005b0e82  68089c7500           push 0x759c08
// 005b0e87  64a100000000         mov eax, dword ptr fs:[0]
// 005b0e8d  50                   push eax
// 005b0e8e  64892500000000       mov dword ptr fs:[0], esp
// 005b0e95  83ec08               sub esp, 8
// 005b0e98  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b0e9c  56                   push esi
// 005b0e9d  57                   push edi
// 005b0e9e  8bf1                 mov esi, ecx
// 005b0ea0  89742408             mov dword ptr [esp + 8], esi
// 005b0ea4  50                   push eax
// 005b0ea5  51                   push ecx
// 005b0ea6  8bc4                 mov eax, esp
// 005b0ea8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005b0eb0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005b0eb8  89642414             mov dword ptr [esp + 0x14], esp
// 005b0ebc  c70000000000         mov dword ptr [eax], 0
// 005b0ec2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b0ec6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b0eca  51                   push ecx
// 005b0ecb  52                   push edx
// 005b0ecc  c644242801           mov byte ptr [esp + 0x28], 1
// 005b0ed1  e83affffff           call 0x5b0e10
// 005b0ed6  50                   push eax
// 005b0ed7  8bce                 mov ecx, esi
// 005b0ed9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005b0ede  e87d02fcff           call 0x571160
// 005b0ee3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b0ee7  50                   push eax
// 005b0ee8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005b0eed  e8fed10600           call 0x61e0f0
// 005b0ef2  6a18                 push 0x18
// 005b0ef4  c7063c497b00         mov dword ptr [esi], 0x7b493c
// 005b0efa  e809d20600           call 0x61e108
// 005b0eff  83c408               add esp, 8
// 005b0f02  85c0                 test eax, eax
// 005b0f04  741e                 je 0x5b0f24
// 005b0f06  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005b0f0a  33c9                 xor ecx, ecx
// 005b0f0c  33d2                 xor edx, edx
// 005b0f0e  897808               mov dword ptr [eax + 8], edi
// 005b0f11  c700187d7b00         mov dword ptr [eax], 0x7b7d18
// 005b0f17  897004               mov dword ptr [eax + 4], esi
// 005b0f1a  894810               mov dword ptr [eax + 0x10], ecx
// 005b0f1d  895014               mov dword ptr [eax + 0x14], edx
// 005b0f20  8bf8                 mov edi, eax
// 005b0f22  eb02                 jmp 0x5b0f26
// 005b0f24  33ff                 xor edi, edi
// 005b0f26  8b4618               mov eax, dword ptr [esi + 0x18]
// 005b0f29  3bf8                 cmp edi, eax
// 005b0f2b  7409                 je 0x5b0f36
// 005b0f2d  50                   push eax
// 005b0f2e  e8bdd10600           call 0x61e0f0
// 005b0f33  83c404               add esp, 4
// 005b0f36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b0f3a  897e18               mov dword ptr [esi + 0x18], edi
// 005b0f3d  5f                   pop edi
// 005b0f3e  8bc6                 mov eax, esi
// 005b0f40  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0f47  5e                   pop esi
// 005b0f48  83c414               add esp, 0x14
// 005b0f4b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
