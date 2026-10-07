// roc 2008-06 00631350  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631350
//
// 00631350  6aff                 push -1
// 00631352  68880d7c00           push 0x7c0d88
// 00631357  64a100000000         mov eax, dword ptr fs:[0]
// 0063135d  50                   push eax
// 0063135e  64892500000000       mov dword ptr fs:[0], esp
// 00631365  83ec08               sub esp, 8
// 00631368  8b442424             mov eax, dword ptr [esp + 0x24]
// 0063136c  56                   push esi
// 0063136d  57                   push edi
// 0063136e  8bf1                 mov esi, ecx
// 00631370  89742408             mov dword ptr [esp + 8], esi
// 00631374  50                   push eax
// 00631375  51                   push ecx
// 00631376  8bc4                 mov eax, esp
// 00631378  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00631380  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00631388  89642414             mov dword ptr [esp + 0x14], esp
// 0063138c  c70000000000         mov dword ptr [eax], 0
// 00631392  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631396  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063139a  51                   push ecx
// 0063139b  52                   push edx
// 0063139c  c644242801           mov byte ptr [esp + 0x28], 1
// 006313a1  e8bafcffff           call 0x631060
// 006313a6  50                   push eax
// 006313a7  8bce                 mov ecx, esi
// 006313a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006313ae  e85d42e1ff           call 0x445610
// 006313b3  6a18                 push 0x18
// 006313b5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006313ba  c70634418200         mov dword ptr [esi], 0x824134
// 006313c0  e85bf50600           call 0x6a0920
// 006313c5  83c404               add esp, 4
// 006313c8  85c0                 test eax, eax
// 006313ca  741e                 je 0x6313ea
// 006313cc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006313d0  33c9                 xor ecx, ecx
// 006313d2  33d2                 xor edx, edx
// 006313d4  897808               mov dword ptr [eax + 8], edi
// 006313d7  c700d8728400         mov dword ptr [eax], 0x8472d8
// 006313dd  897004               mov dword ptr [eax + 4], esi
// 006313e0  894810               mov dword ptr [eax + 0x10], ecx
// 006313e3  895014               mov dword ptr [eax + 0x14], edx
// 006313e6  8bf8                 mov edi, eax
// 006313e8  eb02                 jmp 0x6313ec
// 006313ea  33ff                 xor edi, edi
// 006313ec  8b4618               mov eax, dword ptr [esi + 0x18]
// 006313ef  3bf8                 cmp edi, eax
// 006313f1  740d                 je 0x631400
// 006313f3  85c0                 test eax, eax
// 006313f5  7409                 je 0x631400
// 006313f7  50                   push eax
// 006313f8  e87df20600           call 0x6a067a
// 006313fd  83c404               add esp, 4
// 00631400  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631404  897e18               mov dword ptr [esi + 0x18], edi
// 00631407  5f                   pop edi
// 00631408  8bc6                 mov eax, esi
// 0063140a  64890d00000000       mov dword ptr fs:[0], ecx
// 00631411  5e                   pop esi
// 00631412  83c414               add esp, 0x14
// 00631415  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
