// roc 2007-08 005800b0  unit: RBX::Workspace  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005800b0
//
// 005800b0  6aff                 push -1
// 005800b2  68785b7500           push 0x755b78
// 005800b7  64a100000000         mov eax, dword ptr fs:[0]
// 005800bd  50                   push eax
// 005800be  64892500000000       mov dword ptr fs:[0], esp
// 005800c5  51                   push ecx
// 005800c6  53                   push ebx
// 005800c7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005800cb  56                   push esi
// 005800cc  57                   push edi
// 005800cd  8bf9                 mov edi, ecx
// 005800cf  33f6                 xor esi, esi
// 005800d1  53                   push ebx
// 005800d2  8d4f08               lea ecx, [edi + 8]
// 005800d5  897c2410             mov dword ptr [esp + 0x10], edi
// 005800d9  c707a8bf7a00         mov dword ptr [edi], 0x7abfa8
// 005800df  897704               mov dword ptr [edi + 4], esi
// 005800e2  ff1598e67700         call dword ptr [0x77e698]
// 005800e8  6a01                 push 1
// 005800ea  6a40                 push 0x40
// 005800ec  89742420             mov dword ptr [esp + 0x20], esi
// 005800f0  6a02                 push 2
// 005800f2  8d7724               lea esi, [edi + 0x24]
// 005800f5  53                   push ebx
// 005800f6  8bce                 mov ecx, esi
// 005800f8  ff1524e67700         call dword ptr [0x77e624]
// 005800fe  6a01                 push 1
// 00580100  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00580105  e816ffffff           call 0x580020
// 0058010a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058010e  83c404               add esp, 4
// 00580111  68a0bf7a00           push 0x7abfa0
// 00580116  50                   push eax
// 00580117  6898bf7a00           push 0x7abf98
// 0058011c  56                   push esi
// 0058011d  e87eb2eeff           call 0x46b3a0
// 00580122  83c408               add esp, 8
// 00580125  50                   push eax
// 00580126  e875b2eeff           call 0x46b3a0
// 0058012b  83c408               add esp, 8
// 0058012e  50                   push eax
// 0058012f  e86cb2eeff           call 0x46b3a0
// 00580134  83c408               add esp, 8
// 00580137  8bce                 mov ecx, esi
// 00580139  ff15fce57700         call dword ptr [0x77e5fc]
// 0058013f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580143  8bc7                 mov eax, edi
// 00580145  5f                   pop edi
// 00580146  5e                   pop esi
// 00580147  5b                   pop ebx
// 00580148  64890d00000000       mov dword ptr fs:[0], ecx
// 0058014f  83c410               add esp, 0x10
// 00580152  c20800               ret 8
// library openrbx-client/App\util\Log.cpp (function ??0Log@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
