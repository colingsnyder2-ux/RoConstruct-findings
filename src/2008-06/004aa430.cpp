// roc 2008-06 004aa430  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa430
//
// 004aa430  6aff                 push -1
// 004aa432  68880d7c00           push 0x7c0d88
// 004aa437  64a100000000         mov eax, dword ptr fs:[0]
// 004aa43d  50                   push eax
// 004aa43e  64892500000000       mov dword ptr fs:[0], esp
// 004aa445  83ec08               sub esp, 8
// 004aa448  8b442424             mov eax, dword ptr [esp + 0x24]
// 004aa44c  56                   push esi
// 004aa44d  57                   push edi
// 004aa44e  8bf1                 mov esi, ecx
// 004aa450  89742408             mov dword ptr [esp + 8], esi
// 004aa454  50                   push eax
// 004aa455  51                   push ecx
// 004aa456  8bc4                 mov eax, esp
// 004aa458  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004aa460  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004aa468  89642414             mov dword ptr [esp + 0x14], esp
// 004aa46c  c70000000000         mov dword ptr [eax], 0
// 004aa472  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004aa476  8b542428             mov edx, dword ptr [esp + 0x28]
// 004aa47a  51                   push ecx
// 004aa47b  52                   push edx
// 004aa47c  c644242801           mov byte ptr [esp + 0x28], 1
// 004aa481  e8fa47ffff           call 0x49ec80
// 004aa486  50                   push eax
// 004aa487  8bce                 mov ecx, esi
// 004aa489  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004aa48e  e8fdfdf5ff           call 0x40a290
// 004aa493  6a18                 push 0x18
// 004aa495  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004aa49a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 004aa4a0  e87b641f00           call 0x6a0920
// 004aa4a5  83c404               add esp, 4
// 004aa4a8  85c0                 test eax, eax
// 004aa4aa  741e                 je 0x4aa4ca
// 004aa4ac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004aa4b0  33c9                 xor ecx, ecx
// 004aa4b2  33d2                 xor edx, edx
// 004aa4b4  897808               mov dword ptr [eax + 8], edi
// 004aa4b7  c700d43e8200         mov dword ptr [eax], 0x823ed4
// 004aa4bd  897004               mov dword ptr [eax + 4], esi
// 004aa4c0  894810               mov dword ptr [eax + 0x10], ecx
// 004aa4c3  895014               mov dword ptr [eax + 0x14], edx
// 004aa4c6  8bf8                 mov edi, eax
// 004aa4c8  eb02                 jmp 0x4aa4cc
// 004aa4ca  33ff                 xor edi, edi
// 004aa4cc  8b4618               mov eax, dword ptr [esi + 0x18]
// 004aa4cf  3bf8                 cmp edi, eax
// 004aa4d1  740d                 je 0x4aa4e0
// 004aa4d3  85c0                 test eax, eax
// 004aa4d5  7409                 je 0x4aa4e0
// 004aa4d7  50                   push eax
// 004aa4d8  e89d611f00           call 0x6a067a
// 004aa4dd  83c404               add esp, 4
// 004aa4e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aa4e4  897e18               mov dword ptr [esi + 0x18], edi
// 004aa4e7  5f                   pop edi
// 004aa4e8  8bc6                 mov eax, esi
// 004aa4ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa4f1  5e                   pop esi
// 004aa4f2  83c414               add esp, 0x14
// 004aa4f5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
