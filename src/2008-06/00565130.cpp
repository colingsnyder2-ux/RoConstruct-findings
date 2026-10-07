// roc 2008-06 00565130  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565130
//
// 00565130  6aff                 push -1
// 00565132  68880d7c00           push 0x7c0d88
// 00565137  64a100000000         mov eax, dword ptr fs:[0]
// 0056513d  50                   push eax
// 0056513e  64892500000000       mov dword ptr fs:[0], esp
// 00565145  83ec08               sub esp, 8
// 00565148  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056514c  56                   push esi
// 0056514d  57                   push edi
// 0056514e  8bf1                 mov esi, ecx
// 00565150  89742408             mov dword ptr [esp + 8], esi
// 00565154  50                   push eax
// 00565155  51                   push ecx
// 00565156  8bc4                 mov eax, esp
// 00565158  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00565160  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00565168  89642414             mov dword ptr [esp + 0x14], esp
// 0056516c  c70000000000         mov dword ptr [eax], 0
// 00565172  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00565176  8b542428             mov edx, dword ptr [esp + 0x28]
// 0056517a  51                   push ecx
// 0056517b  52                   push edx
// 0056517c  c644242801           mov byte ptr [esp + 0x28], 1
// 00565181  e85afdffff           call 0x564ee0
// 00565186  50                   push eax
// 00565187  8bce                 mov ecx, esi
// 00565189  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0056518e  e8fd50eaff           call 0x40a290
// 00565193  6a18                 push 0x18
// 00565195  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0056519a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 005651a0  e87bb71300           call 0x6a0920
// 005651a5  83c404               add esp, 4
// 005651a8  85c0                 test eax, eax
// 005651aa  741e                 je 0x5651ca
// 005651ac  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005651b0  33c9                 xor ecx, ecx
// 005651b2  33d2                 xor edx, edx
// 005651b4  897808               mov dword ptr [eax + 8], edi
// 005651b7  c70084e08200         mov dword ptr [eax], 0x82e084
// 005651bd  897004               mov dword ptr [eax + 4], esi
// 005651c0  894810               mov dword ptr [eax + 0x10], ecx
// 005651c3  895014               mov dword ptr [eax + 0x14], edx
// 005651c6  8bf8                 mov edi, eax
// 005651c8  eb02                 jmp 0x5651cc
// 005651ca  33ff                 xor edi, edi
// 005651cc  8b4618               mov eax, dword ptr [esi + 0x18]
// 005651cf  3bf8                 cmp edi, eax
// 005651d1  740d                 je 0x5651e0
// 005651d3  85c0                 test eax, eax
// 005651d5  7409                 je 0x5651e0
// 005651d7  50                   push eax
// 005651d8  e89db41300           call 0x6a067a
// 005651dd  83c404               add esp, 4
// 005651e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005651e4  897e18               mov dword ptr [esi + 0x18], edi
// 005651e7  5f                   pop edi
// 005651e8  8bc6                 mov eax, esi
// 005651ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005651f1  5e                   pop esi
// 005651f2  83c414               add esp, 0x14
// 005651f5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
