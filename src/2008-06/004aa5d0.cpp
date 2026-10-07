// roc 2008-06 004aa5d0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa5d0
//
// 004aa5d0  6aff                 push -1
// 004aa5d2  68880d7c00           push 0x7c0d88
// 004aa5d7  64a100000000         mov eax, dword ptr fs:[0]
// 004aa5dd  50                   push eax
// 004aa5de  64892500000000       mov dword ptr fs:[0], esp
// 004aa5e5  83ec08               sub esp, 8
// 004aa5e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004aa5ec  56                   push esi
// 004aa5ed  57                   push edi
// 004aa5ee  8bf1                 mov esi, ecx
// 004aa5f0  89742408             mov dword ptr [esp + 8], esi
// 004aa5f4  50                   push eax
// 004aa5f5  51                   push ecx
// 004aa5f6  8bc4                 mov eax, esp
// 004aa5f8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004aa600  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004aa608  89642414             mov dword ptr [esp + 0x14], esp
// 004aa60c  c70000000000         mov dword ptr [eax], 0
// 004aa612  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004aa616  8b542428             mov edx, dword ptr [esp + 0x28]
// 004aa61a  51                   push ecx
// 004aa61b  52                   push edx
// 004aa61c  c644242801           mov byte ptr [esp + 0x28], 1
// 004aa621  e85a46ffff           call 0x49ec80
// 004aa626  50                   push eax
// 004aa627  8bce                 mov ecx, esi
// 004aa629  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004aa62e  e8ddaff9ff           call 0x445610
// 004aa633  6a18                 push 0x18
// 004aa635  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004aa63a  c70634418200         mov dword ptr [esi], 0x824134
// 004aa640  e8db621f00           call 0x6a0920
// 004aa645  83c404               add esp, 4
// 004aa648  85c0                 test eax, eax
// 004aa64a  741e                 je 0x4aa66a
// 004aa64c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004aa650  33c9                 xor ecx, ecx
// 004aa652  33d2                 xor edx, edx
// 004aa654  897808               mov dword ptr [eax + 8], edi
// 004aa657  c700fc3e8200         mov dword ptr [eax], 0x823efc
// 004aa65d  897004               mov dword ptr [eax + 4], esi
// 004aa660  894810               mov dword ptr [eax + 0x10], ecx
// 004aa663  895014               mov dword ptr [eax + 0x14], edx
// 004aa666  8bf8                 mov edi, eax
// 004aa668  eb02                 jmp 0x4aa66c
// 004aa66a  33ff                 xor edi, edi
// 004aa66c  8b4618               mov eax, dword ptr [esi + 0x18]
// 004aa66f  3bf8                 cmp edi, eax
// 004aa671  740d                 je 0x4aa680
// 004aa673  85c0                 test eax, eax
// 004aa675  7409                 je 0x4aa680
// 004aa677  50                   push eax
// 004aa678  e8fd5f1f00           call 0x6a067a
// 004aa67d  83c404               add esp, 4
// 004aa680  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aa684  897e18               mov dword ptr [esi + 0x18], edi
// 004aa687  5f                   pop edi
// 004aa688  8bc6                 mov eax, esi
// 004aa68a  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa691  5e                   pop esi
// 004aa692  83c414               add esp, 0x14
// 004aa695  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
