// roc 2008-06 00630c30  unit: RBX::BodyMover  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630c30
//
// 00630c30  6aff                 push -1
// 00630c32  68880d7c00           push 0x7c0d88
// 00630c37  64a100000000         mov eax, dword ptr fs:[0]
// 00630c3d  50                   push eax
// 00630c3e  64892500000000       mov dword ptr fs:[0], esp
// 00630c45  83ec08               sub esp, 8
// 00630c48  8b442424             mov eax, dword ptr [esp + 0x24]
// 00630c4c  56                   push esi
// 00630c4d  57                   push edi
// 00630c4e  8bf1                 mov esi, ecx
// 00630c50  89742408             mov dword ptr [esp + 8], esi
// 00630c54  50                   push eax
// 00630c55  51                   push ecx
// 00630c56  8bc4                 mov eax, esp
// 00630c58  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00630c60  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00630c68  89642414             mov dword ptr [esp + 0x14], esp
// 00630c6c  c70000000000         mov dword ptr [eax], 0
// 00630c72  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00630c76  8b542428             mov edx, dword ptr [esp + 0x28]
// 00630c7a  51                   push ecx
// 00630c7b  52                   push edx
// 00630c7c  c644242801           mov byte ptr [esp + 0x28], 1
// 00630c81  e8fafdffff           call 0x630a80
// 00630c86  50                   push eax
// 00630c87  8bce                 mov ecx, esi
// 00630c89  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00630c8e  e81d98f6ff           call 0x59a4b0
// 00630c93  6a18                 push 0x18
// 00630c95  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00630c9a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00630ca0  e87bfc0600           call 0x6a0920
// 00630ca5  83c404               add esp, 4
// 00630ca8  85c0                 test eax, eax
// 00630caa  741e                 je 0x630cca
// 00630cac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00630cb0  33c9                 xor ecx, ecx
// 00630cb2  33d2                 xor edx, edx
// 00630cb4  897808               mov dword ptr [eax + 8], edi
// 00630cb7  c7003c738400         mov dword ptr [eax], 0x84733c
// 00630cbd  897004               mov dword ptr [eax + 4], esi
// 00630cc0  894810               mov dword ptr [eax + 0x10], ecx
// 00630cc3  895014               mov dword ptr [eax + 0x14], edx
// 00630cc6  8bf8                 mov edi, eax
// 00630cc8  eb02                 jmp 0x630ccc
// 00630cca  33ff                 xor edi, edi
// 00630ccc  8b4618               mov eax, dword ptr [esi + 0x18]
// 00630ccf  3bf8                 cmp edi, eax
// 00630cd1  740d                 je 0x630ce0
// 00630cd3  85c0                 test eax, eax
// 00630cd5  7409                 je 0x630ce0
// 00630cd7  50                   push eax
// 00630cd8  e89df90600           call 0x6a067a
// 00630cdd  83c404               add esp, 4
// 00630ce0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00630ce4  897e18               mov dword ptr [esi + 0x18], edi
// 00630ce7  5f                   pop edi
// 00630ce8  8bc6                 mov eax, esi
// 00630cea  64890d00000000       mov dword ptr fs:[0], ecx
// 00630cf1  5e                   pop esi
// 00630cf2  83c414               add esp, 0x14
// 00630cf5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
