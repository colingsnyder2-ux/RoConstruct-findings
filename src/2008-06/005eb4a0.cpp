// roc 2008-06 005eb4a0  unit: RBX::VSky::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eb4a0
//
// 005eb4a0  6aff                 push -1
// 005eb4a2  68880d7c00           push 0x7c0d88
// 005eb4a7  64a100000000         mov eax, dword ptr fs:[0]
// 005eb4ad  50                   push eax
// 005eb4ae  64892500000000       mov dword ptr fs:[0], esp
// 005eb4b5  83ec08               sub esp, 8
// 005eb4b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005eb4bc  56                   push esi
// 005eb4bd  57                   push edi
// 005eb4be  8bf1                 mov esi, ecx
// 005eb4c0  89742408             mov dword ptr [esp + 8], esi
// 005eb4c4  50                   push eax
// 005eb4c5  51                   push ecx
// 005eb4c6  8bc4                 mov eax, esp
// 005eb4c8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005eb4d0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005eb4d8  89642414             mov dword ptr [esp + 0x14], esp
// 005eb4dc  c70000000000         mov dword ptr [eax], 0
// 005eb4e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eb4e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005eb4ea  51                   push ecx
// 005eb4eb  52                   push edx
// 005eb4ec  c644242801           mov byte ptr [esp + 0x28], 1
// 005eb4f1  e89afdffff           call 0x5eb290
// 005eb4f6  50                   push eax
// 005eb4f7  8bce                 mov ecx, esi
// 005eb4f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005eb4fe  e88dede1ff           call 0x40a290
// 005eb503  6a18                 push 0x18
// 005eb505  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005eb50a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 005eb510  e80b540b00           call 0x6a0920
// 005eb515  83c404               add esp, 4
// 005eb518  85c0                 test eax, eax
// 005eb51a  741e                 je 0x5eb53a
// 005eb51c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005eb520  33c9                 xor ecx, ecx
// 005eb522  33d2                 xor edx, edx
// 005eb524  897808               mov dword ptr [eax + 8], edi
// 005eb527  c700b0fa8300         mov dword ptr [eax], 0x83fab0
// 005eb52d  897004               mov dword ptr [eax + 4], esi
// 005eb530  894810               mov dword ptr [eax + 0x10], ecx
// 005eb533  895014               mov dword ptr [eax + 0x14], edx
// 005eb536  8bf8                 mov edi, eax
// 005eb538  eb02                 jmp 0x5eb53c
// 005eb53a  33ff                 xor edi, edi
// 005eb53c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005eb53f  3bf8                 cmp edi, eax
// 005eb541  740d                 je 0x5eb550
// 005eb543  85c0                 test eax, eax
// 005eb545  7409                 je 0x5eb550
// 005eb547  50                   push eax
// 005eb548  e82d510b00           call 0x6a067a
// 005eb54d  83c404               add esp, 4
// 005eb550  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005eb554  897e18               mov dword ptr [esi + 0x18], edi
// 005eb557  5f                   pop edi
// 005eb558  8bc6                 mov eax, esi
// 005eb55a  64890d00000000       mov dword ptr fs:[0], ecx
// 005eb561  5e                   pop esi
// 005eb562  83c414               add esp, 0x14
// 005eb565  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
