// roc 2008-06 004aa500  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa500
//
// 004aa500  6aff                 push -1
// 004aa502  68880d7c00           push 0x7c0d88
// 004aa507  64a100000000         mov eax, dword ptr fs:[0]
// 004aa50d  50                   push eax
// 004aa50e  64892500000000       mov dword ptr fs:[0], esp
// 004aa515  83ec08               sub esp, 8
// 004aa518  8b442424             mov eax, dword ptr [esp + 0x24]
// 004aa51c  56                   push esi
// 004aa51d  57                   push edi
// 004aa51e  8bf1                 mov esi, ecx
// 004aa520  89742408             mov dword ptr [esp + 8], esi
// 004aa524  50                   push eax
// 004aa525  51                   push ecx
// 004aa526  8bc4                 mov eax, esp
// 004aa528  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004aa530  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004aa538  89642414             mov dword ptr [esp + 0x14], esp
// 004aa53c  c70000000000         mov dword ptr [eax], 0
// 004aa542  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004aa546  8b542428             mov edx, dword ptr [esp + 0x28]
// 004aa54a  51                   push ecx
// 004aa54b  52                   push edx
// 004aa54c  c644242801           mov byte ptr [esp + 0x28], 1
// 004aa551  e82a47ffff           call 0x49ec80
// 004aa556  50                   push eax
// 004aa557  8bce                 mov ecx, esi
// 004aa559  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004aa55e  e83d8df9ff           call 0x4432a0
// 004aa563  6a18                 push 0x18
// 004aa565  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004aa56a  c70688598100         mov dword ptr [esi], 0x815988
// 004aa570  e8ab631f00           call 0x6a0920
// 004aa575  83c404               add esp, 4
// 004aa578  85c0                 test eax, eax
// 004aa57a  741e                 je 0x4aa59a
// 004aa57c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004aa580  33c9                 xor ecx, ecx
// 004aa582  33d2                 xor edx, edx
// 004aa584  897808               mov dword ptr [eax + 8], edi
// 004aa587  c700e83e8200         mov dword ptr [eax], 0x823ee8
// 004aa58d  897004               mov dword ptr [eax + 4], esi
// 004aa590  894810               mov dword ptr [eax + 0x10], ecx
// 004aa593  895014               mov dword ptr [eax + 0x14], edx
// 004aa596  8bf8                 mov edi, eax
// 004aa598  eb02                 jmp 0x4aa59c
// 004aa59a  33ff                 xor edi, edi
// 004aa59c  8b4618               mov eax, dword ptr [esi + 0x18]
// 004aa59f  3bf8                 cmp edi, eax
// 004aa5a1  740d                 je 0x4aa5b0
// 004aa5a3  85c0                 test eax, eax
// 004aa5a5  7409                 je 0x4aa5b0
// 004aa5a7  50                   push eax
// 004aa5a8  e8cd601f00           call 0x6a067a
// 004aa5ad  83c404               add esp, 4
// 004aa5b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aa5b4  897e18               mov dword ptr [esi + 0x18], edi
// 004aa5b7  5f                   pop edi
// 004aa5b8  8bc6                 mov eax, esi
// 004aa5ba  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa5c1  5e                   pop esi
// 004aa5c2  83c414               add esp, 0x14
// 004aa5c5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
