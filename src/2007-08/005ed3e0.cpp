// roc 2007-08 005ed3e0  unit: RBX::VRocket::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed3e0
//
// 005ed3e0  6aff                 push -1
// 005ed3e2  6828b27500           push 0x75b228
// 005ed3e7  64a100000000         mov eax, dword ptr fs:[0]
// 005ed3ed  50                   push eax
// 005ed3ee  64892500000000       mov dword ptr fs:[0], esp
// 005ed3f5  83ec08               sub esp, 8
// 005ed3f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ed3fc  56                   push esi
// 005ed3fd  57                   push edi
// 005ed3fe  8bf1                 mov esi, ecx
// 005ed400  89742408             mov dword ptr [esp + 8], esi
// 005ed404  50                   push eax
// 005ed405  51                   push ecx
// 005ed406  8bc4                 mov eax, esp
// 005ed408  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ed410  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ed418  89642414             mov dword ptr [esp + 0x14], esp
// 005ed41c  c70000000000         mov dword ptr [eax], 0
// 005ed422  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ed426  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ed42a  51                   push ecx
// 005ed42b  52                   push edx
// 005ed42c  c644242801           mov byte ptr [esp + 0x28], 1
// 005ed431  e8cafeffff           call 0x5ed300
// 005ed436  50                   push eax
// 005ed437  8bce                 mov ecx, esi
// 005ed439  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ed43e  e89d7ee5ff           call 0x4452e0
// 005ed443  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ed447  50                   push eax
// 005ed448  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ed44d  e810280400           call 0x62fc62
// 005ed452  6a18                 push 0x18
// 005ed454  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 005ed45a  e8972a0400           call 0x62fef6
// 005ed45f  83c408               add esp, 8
// 005ed462  85c0                 test eax, eax
// 005ed464  741e                 je 0x5ed484
// 005ed466  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ed46a  33c9                 xor ecx, ecx
// 005ed46c  33d2                 xor edx, edx
// 005ed46e  897808               mov dword ptr [eax + 8], edi
// 005ed471  c70060ec7b00         mov dword ptr [eax], 0x7bec60
// 005ed477  897004               mov dword ptr [eax + 4], esi
// 005ed47a  894810               mov dword ptr [eax + 0x10], ecx
// 005ed47d  895014               mov dword ptr [eax + 0x14], edx
// 005ed480  8bf8                 mov edi, eax
// 005ed482  eb02                 jmp 0x5ed486
// 005ed484  33ff                 xor edi, edi
// 005ed486  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ed489  3bf8                 cmp edi, eax
// 005ed48b  7409                 je 0x5ed496
// 005ed48d  50                   push eax
// 005ed48e  e8cf270400           call 0x62fc62
// 005ed493  83c404               add esp, 4
// 005ed496  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ed49a  897e18               mov dword ptr [esi + 0x18], edi
// 005ed49d  5f                   pop edi
// 005ed49e  8bc6                 mov eax, esi
// 005ed4a0  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed4a7  5e                   pop esi
// 005ed4a8  83c414               add esp, 0x14
// 005ed4ab  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
