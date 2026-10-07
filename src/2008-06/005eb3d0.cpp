// roc 2008-06 005eb3d0  unit: RBX::VSky::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb3d0
//
// 005eb3d0  6aff                 push -1
// 005eb3d2  68880d7c00           push 0x7c0d88
// 005eb3d7  64a100000000         mov eax, dword ptr fs:[0]
// 005eb3dd  50                   push eax
// 005eb3de  64892500000000       mov dword ptr fs:[0], esp
// 005eb3e5  83ec08               sub esp, 8
// 005eb3e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005eb3ec  56                   push esi
// 005eb3ed  57                   push edi
// 005eb3ee  8bf1                 mov esi, ecx
// 005eb3f0  89742408             mov dword ptr [esp + 8], esi
// 005eb3f4  50                   push eax
// 005eb3f5  51                   push ecx
// 005eb3f6  8bc4                 mov eax, esp
// 005eb3f8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005eb400  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005eb408  89642414             mov dword ptr [esp + 0x14], esp
// 005eb40c  c70000000000         mov dword ptr [eax], 0
// 005eb412  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eb416  8b542428             mov edx, dword ptr [esp + 0x28]
// 005eb41a  51                   push ecx
// 005eb41b  52                   push edx
// 005eb41c  c644242801           mov byte ptr [esp + 0x28], 1
// 005eb421  e86afeffff           call 0x5eb290
// 005eb426  50                   push eax
// 005eb427  8bce                 mov ecx, esi
// 005eb429  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005eb42e  e86d7ee5ff           call 0x4432a0
// 005eb433  6a18                 push 0x18
// 005eb435  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005eb43a  c70688598100         mov dword ptr [esi], 0x815988
// 005eb440  e8db540b00           call 0x6a0920
// 005eb445  83c404               add esp, 4
// 005eb448  85c0                 test eax, eax
// 005eb44a  741e                 je 0x5eb46a
// 005eb44c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005eb450  33c9                 xor ecx, ecx
// 005eb452  33d2                 xor edx, edx
// 005eb454  897808               mov dword ptr [eax + 8], edi
// 005eb457  c7009cfa8300         mov dword ptr [eax], 0x83fa9c
// 005eb45d  897004               mov dword ptr [eax + 4], esi
// 005eb460  894810               mov dword ptr [eax + 0x10], ecx
// 005eb463  895014               mov dword ptr [eax + 0x14], edx
// 005eb466  8bf8                 mov edi, eax
// 005eb468  eb02                 jmp 0x5eb46c
// 005eb46a  33ff                 xor edi, edi
// 005eb46c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005eb46f  3bf8                 cmp edi, eax
// 005eb471  740d                 je 0x5eb480
// 005eb473  85c0                 test eax, eax
// 005eb475  7409                 je 0x5eb480
// 005eb477  50                   push eax
// 005eb478  e8fd510b00           call 0x6a067a
// 005eb47d  83c404               add esp, 4
// 005eb480  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005eb484  897e18               mov dword ptr [esi + 0x18], edi
// 005eb487  5f                   pop edi
// 005eb488  8bc6                 mov eax, esi
// 005eb48a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb491  5e                   pop esi
// 005eb492  83c414               add esp, 0x14
// 005eb495  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
