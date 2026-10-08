// roc 2007-08 005ed4b0  unit: RBX::VRocket::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed4b0
//
// 005ed4b0  6aff                 push -1
// 005ed4b2  6828b27500           push 0x75b228
// 005ed4b7  64a100000000         mov eax, dword ptr fs:[0]
// 005ed4bd  50                   push eax
// 005ed4be  64892500000000       mov dword ptr fs:[0], esp
// 005ed4c5  83ec08               sub esp, 8
// 005ed4c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ed4cc  56                   push esi
// 005ed4cd  57                   push edi
// 005ed4ce  8bf1                 mov esi, ecx
// 005ed4d0  89742408             mov dword ptr [esp + 8], esi
// 005ed4d4  50                   push eax
// 005ed4d5  51                   push ecx
// 005ed4d6  8bc4                 mov eax, esp
// 005ed4d8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ed4e0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ed4e8  89642414             mov dword ptr [esp + 0x14], esp
// 005ed4ec  c70000000000         mov dword ptr [eax], 0
// 005ed4f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ed4f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ed4fa  51                   push ecx
// 005ed4fb  52                   push edx
// 005ed4fc  c644242801           mov byte ptr [esp + 0x28], 1
// 005ed501  e8fafdffff           call 0x5ed300
// 005ed506  50                   push eax
// 005ed507  8bce                 mov ecx, esi
// 005ed509  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ed50e  e8ad7af8ff           call 0x574fc0
// 005ed513  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ed517  50                   push eax
// 005ed518  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ed51d  e840270400           call 0x62fc62
// 005ed522  6a18                 push 0x18
// 005ed524  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005ed52a  e8c7290400           call 0x62fef6
// 005ed52f  83c408               add esp, 8
// 005ed532  85c0                 test eax, eax
// 005ed534  741e                 je 0x5ed554
// 005ed536  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ed53a  33c9                 xor ecx, ecx
// 005ed53c  33d2                 xor edx, edx
// 005ed53e  897808               mov dword ptr [eax + 8], edi
// 005ed541  c70070ec7b00         mov dword ptr [eax], 0x7bec70
// 005ed547  897004               mov dword ptr [eax + 4], esi
// 005ed54a  894810               mov dword ptr [eax + 0x10], ecx
// 005ed54d  895014               mov dword ptr [eax + 0x14], edx
// 005ed550  8bf8                 mov edi, eax
// 005ed552  eb02                 jmp 0x5ed556
// 005ed554  33ff                 xor edi, edi
// 005ed556  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ed559  3bf8                 cmp edi, eax
// 005ed55b  7409                 je 0x5ed566
// 005ed55d  50                   push eax
// 005ed55e  e8ff260400           call 0x62fc62
// 005ed563  83c404               add esp, 4
// 005ed566  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ed56a  897e18               mov dword ptr [esi + 0x18], edi
// 005ed56d  5f                   pop edi
// 005ed56e  8bc6                 mov eax, esi
// 005ed570  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed577  5e                   pop esi
// 005ed578  83c414               add esp, 0x14
// 005ed57b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
