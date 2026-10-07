// roc 2008-06 00630dd0  unit: RBX::BodyMover  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630dd0
//
// 00630dd0  6aff                 push -1
// 00630dd2  68880d7c00           push 0x7c0d88
// 00630dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00630ddd  50                   push eax
// 00630dde  64892500000000       mov dword ptr fs:[0], esp
// 00630de5  83ec08               sub esp, 8
// 00630de8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00630dec  56                   push esi
// 00630ded  57                   push edi
// 00630dee  8bf1                 mov esi, ecx
// 00630df0  89742408             mov dword ptr [esp + 8], esi
// 00630df4  50                   push eax
// 00630df5  51                   push ecx
// 00630df6  8bc4                 mov eax, esp
// 00630df8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00630e00  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00630e08  89642414             mov dword ptr [esp + 0x14], esp
// 00630e0c  c70000000000         mov dword ptr [eax], 0
// 00630e12  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00630e16  8b542428             mov edx, dword ptr [esp + 0x28]
// 00630e1a  51                   push ecx
// 00630e1b  52                   push edx
// 00630e1c  c644242801           mov byte ptr [esp + 0x28], 1
// 00630e21  e8cafcffff           call 0x630af0
// 00630e26  50                   push eax
// 00630e27  8bce                 mov ecx, esi
// 00630e29  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00630e2e  e87d96f6ff           call 0x59a4b0
// 00630e33  6a18                 push 0x18
// 00630e35  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00630e3a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00630e40  e8dbfa0600           call 0x6a0920
// 00630e45  83c404               add esp, 4
// 00630e48  85c0                 test eax, eax
// 00630e4a  741e                 je 0x630e6a
// 00630e4c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00630e50  33c9                 xor ecx, ecx
// 00630e52  33d2                 xor edx, edx
// 00630e54  897808               mov dword ptr [eax + 8], edi
// 00630e57  c70064738400         mov dword ptr [eax], 0x847364
// 00630e5d  897004               mov dword ptr [eax + 4], esi
// 00630e60  894810               mov dword ptr [eax + 0x10], ecx
// 00630e63  895014               mov dword ptr [eax + 0x14], edx
// 00630e66  8bf8                 mov edi, eax
// 00630e68  eb02                 jmp 0x630e6c
// 00630e6a  33ff                 xor edi, edi
// 00630e6c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00630e6f  3bf8                 cmp edi, eax
// 00630e71  740d                 je 0x630e80
// 00630e73  85c0                 test eax, eax
// 00630e75  7409                 je 0x630e80
// 00630e77  50                   push eax
// 00630e78  e8fdf70600           call 0x6a067a
// 00630e7d  83c404               add esp, 4
// 00630e80  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00630e84  897e18               mov dword ptr [esi + 0x18], edi
// 00630e87  5f                   pop edi
// 00630e88  8bc6                 mov eax, esi
// 00630e8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00630e91  5e                   pop esi
// 00630e92  83c414               add esp, 0x14
// 00630e95  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
