// roc 2008-06 005eb300  unit: RBX::VSky::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb300
//
// 005eb300  6aff                 push -1
// 005eb302  68880d7c00           push 0x7c0d88
// 005eb307  64a100000000         mov eax, dword ptr fs:[0]
// 005eb30d  50                   push eax
// 005eb30e  64892500000000       mov dword ptr fs:[0], esp
// 005eb315  83ec08               sub esp, 8
// 005eb318  8b442424             mov eax, dword ptr [esp + 0x24]
// 005eb31c  56                   push esi
// 005eb31d  57                   push edi
// 005eb31e  8bf1                 mov esi, ecx
// 005eb320  89742408             mov dword ptr [esp + 8], esi
// 005eb324  50                   push eax
// 005eb325  51                   push ecx
// 005eb326  8bc4                 mov eax, esp
// 005eb328  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005eb330  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005eb338  89642414             mov dword ptr [esp + 0x14], esp
// 005eb33c  c70000000000         mov dword ptr [eax], 0
// 005eb342  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eb346  8b542428             mov edx, dword ptr [esp + 0x28]
// 005eb34a  51                   push ecx
// 005eb34b  52                   push edx
// 005eb34c  c644242801           mov byte ptr [esp + 0x28], 1
// 005eb351  e83affffff           call 0x5eb290
// 005eb356  50                   push eax
// 005eb357  8bce                 mov ecx, esi
// 005eb359  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005eb35e  e83dc5faff           call 0x5978a0
// 005eb363  6a18                 push 0x18
// 005eb365  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005eb36a  c706ecc48300         mov dword ptr [esi], 0x83c4ec
// 005eb370  e8ab550b00           call 0x6a0920
// 005eb375  83c404               add esp, 4
// 005eb378  85c0                 test eax, eax
// 005eb37a  741e                 je 0x5eb39a
// 005eb37c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005eb380  33c9                 xor ecx, ecx
// 005eb382  33d2                 xor edx, edx
// 005eb384  897808               mov dword ptr [eax + 8], edi
// 005eb387  c70088fa8300         mov dword ptr [eax], 0x83fa88
// 005eb38d  897004               mov dword ptr [eax + 4], esi
// 005eb390  894810               mov dword ptr [eax + 0x10], ecx
// 005eb393  895014               mov dword ptr [eax + 0x14], edx
// 005eb396  8bf8                 mov edi, eax
// 005eb398  eb02                 jmp 0x5eb39c
// 005eb39a  33ff                 xor edi, edi
// 005eb39c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005eb39f  3bf8                 cmp edi, eax
// 005eb3a1  740d                 je 0x5eb3b0
// 005eb3a3  85c0                 test eax, eax
// 005eb3a5  7409                 je 0x5eb3b0
// 005eb3a7  50                   push eax
// 005eb3a8  e8cd520b00           call 0x6a067a
// 005eb3ad  83c404               add esp, 4
// 005eb3b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005eb3b4  897e18               mov dword ptr [esi + 0x18], edi
// 005eb3b7  5f                   pop edi
// 005eb3b8  8bc6                 mov eax, esi
// 005eb3ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb3c1  5e                   pop esi
// 005eb3c2  83c414               add esp, 0x14
// 005eb3c5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
