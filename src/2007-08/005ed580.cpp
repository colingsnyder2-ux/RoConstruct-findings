// roc 2007-08 005ed580  unit: RBX::VRocket::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed580
//
// 005ed580  6aff                 push -1
// 005ed582  6828b27500           push 0x75b228
// 005ed587  64a100000000         mov eax, dword ptr fs:[0]
// 005ed58d  50                   push eax
// 005ed58e  64892500000000       mov dword ptr fs:[0], esp
// 005ed595  83ec08               sub esp, 8
// 005ed598  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ed59c  56                   push esi
// 005ed59d  57                   push edi
// 005ed59e  8bf1                 mov esi, ecx
// 005ed5a0  89742408             mov dword ptr [esp + 8], esi
// 005ed5a4  50                   push eax
// 005ed5a5  51                   push ecx
// 005ed5a6  8bc4                 mov eax, esp
// 005ed5a8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ed5b0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ed5b8  89642414             mov dword ptr [esp + 0x14], esp
// 005ed5bc  c70000000000         mov dword ptr [eax], 0
// 005ed5c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ed5c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ed5ca  51                   push ecx
// 005ed5cb  52                   push edx
// 005ed5cc  c644242801           mov byte ptr [esp + 0x28], 1
// 005ed5d1  e89afdffff           call 0x5ed370
// 005ed5d6  50                   push eax
// 005ed5d7  8bce                 mov ecx, esi
// 005ed5d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ed5de  e8fd7ce5ff           call 0x4452e0
// 005ed5e3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ed5e7  50                   push eax
// 005ed5e8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ed5ed  e870260400           call 0x62fc62
// 005ed5f2  6a18                 push 0x18
// 005ed5f4  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 005ed5fa  e8f7280400           call 0x62fef6
// 005ed5ff  83c408               add esp, 8
// 005ed602  85c0                 test eax, eax
// 005ed604  741e                 je 0x5ed624
// 005ed606  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ed60a  33c9                 xor ecx, ecx
// 005ed60c  33d2                 xor edx, edx
// 005ed60e  897808               mov dword ptr [eax + 8], edi
// 005ed611  c70080ec7b00         mov dword ptr [eax], 0x7bec80
// 005ed617  897004               mov dword ptr [eax + 4], esi
// 005ed61a  894810               mov dword ptr [eax + 0x10], ecx
// 005ed61d  895014               mov dword ptr [eax + 0x14], edx
// 005ed620  8bf8                 mov edi, eax
// 005ed622  eb02                 jmp 0x5ed626
// 005ed624  33ff                 xor edi, edi
// 005ed626  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ed629  3bf8                 cmp edi, eax
// 005ed62b  7409                 je 0x5ed636
// 005ed62d  50                   push eax
// 005ed62e  e82f260400           call 0x62fc62
// 005ed633  83c404               add esp, 4
// 005ed636  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ed63a  897e18               mov dword ptr [esi + 0x18], edi
// 005ed63d  5f                   pop edi
// 005ed63e  8bc6                 mov eax, esi
// 005ed640  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed647  5e                   pop esi
// 005ed648  83c414               add esp, 0x14
// 005ed64b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
