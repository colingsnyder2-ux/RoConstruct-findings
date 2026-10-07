// roc 2008-06 00566430  unit: RBX::VTeam::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566430
//
// 00566430  6aff                 push -1
// 00566432  68880d7c00           push 0x7c0d88
// 00566437  64a100000000         mov eax, dword ptr fs:[0]
// 0056643d  50                   push eax
// 0056643e  64892500000000       mov dword ptr fs:[0], esp
// 00566445  83ec08               sub esp, 8
// 00566448  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056644c  56                   push esi
// 0056644d  57                   push edi
// 0056644e  8bf1                 mov esi, ecx
// 00566450  89742408             mov dword ptr [esp + 8], esi
// 00566454  50                   push eax
// 00566455  51                   push ecx
// 00566456  8bc4                 mov eax, esp
// 00566458  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00566460  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00566468  89642414             mov dword ptr [esp + 0x14], esp
// 0056646c  c70000000000         mov dword ptr [eax], 0
// 00566472  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00566476  8b542428             mov edx, dword ptr [esp + 0x28]
// 0056647a  51                   push ecx
// 0056647b  52                   push edx
// 0056647c  c644242801           mov byte ptr [esp + 0x28], 1
// 00566481  e82afdffff           call 0x5661b0
// 00566486  50                   push eax
// 00566487  8bce                 mov ecx, esi
// 00566489  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0056648e  e8fd3deaff           call 0x40a290
// 00566493  6a18                 push 0x18
// 00566495  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0056649a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 005664a0  e87ba41300           call 0x6a0920
// 005664a5  83c404               add esp, 4
// 005664a8  85c0                 test eax, eax
// 005664aa  741e                 je 0x5664ca
// 005664ac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005664b0  33c9                 xor ecx, ecx
// 005664b2  33d2                 xor edx, edx
// 005664b4  897808               mov dword ptr [eax + 8], edi
// 005664b7  c700cce98200         mov dword ptr [eax], 0x82e9cc
// 005664bd  897004               mov dword ptr [eax + 4], esi
// 005664c0  894810               mov dword ptr [eax + 0x10], ecx
// 005664c3  895014               mov dword ptr [eax + 0x14], edx
// 005664c6  8bf8                 mov edi, eax
// 005664c8  eb02                 jmp 0x5664cc
// 005664ca  33ff                 xor edi, edi
// 005664cc  8b4618               mov eax, dword ptr [esi + 0x18]
// 005664cf  3bf8                 cmp edi, eax
// 005664d1  740d                 je 0x5664e0
// 005664d3  85c0                 test eax, eax
// 005664d5  7409                 je 0x5664e0
// 005664d7  50                   push eax
// 005664d8  e89da11300           call 0x6a067a
// 005664dd  83c404               add esp, 4
// 005664e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005664e4  897e18               mov dword ptr [esi + 0x18], edi
// 005664e7  5f                   pop edi
// 005664e8  8bc6                 mov eax, esi
// 005664ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005664f1  5e                   pop esi
// 005664f2  83c414               add esp, 0x14
// 005664f5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
