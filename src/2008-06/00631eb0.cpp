// roc 2008-06 00631eb0  unit: RBX::VBodyForce::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631eb0
//
// 00631eb0  6aff                 push -1
// 00631eb2  68880d7c00           push 0x7c0d88
// 00631eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00631ebd  50                   push eax
// 00631ebe  64892500000000       mov dword ptr fs:[0], esp
// 00631ec5  83ec08               sub esp, 8
// 00631ec8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00631ecc  56                   push esi
// 00631ecd  57                   push edi
// 00631ece  8bf1                 mov esi, ecx
// 00631ed0  89742408             mov dword ptr [esp + 8], esi
// 00631ed4  50                   push eax
// 00631ed5  51                   push ecx
// 00631ed6  8bc4                 mov eax, esp
// 00631ed8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00631ee0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00631ee8  89642414             mov dword ptr [esp + 0x14], esp
// 00631eec  c70000000000         mov dword ptr [eax], 0
// 00631ef2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631ef6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00631efa  51                   push ecx
// 00631efb  52                   push edx
// 00631efc  c644242801           mov byte ptr [esp + 0x28], 1
// 00631f01  e87af0ffff           call 0x630f80
// 00631f06  50                   push eax
// 00631f07  8bce                 mov ecx, esi
// 00631f09  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00631f0e  e89d85f6ff           call 0x59a4b0
// 00631f13  6a18                 push 0x18
// 00631f15  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00631f1a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00631f20  e8fbe90600           call 0x6a0920
// 00631f25  83c404               add esp, 4
// 00631f28  85c0                 test eax, eax
// 00631f2a  741e                 je 0x631f4a
// 00631f2c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00631f30  33c9                 xor ecx, ecx
// 00631f32  33d2                 xor edx, edx
// 00631f34  897808               mov dword ptr [eax + 8], edi
// 00631f37  c700b4738400         mov dword ptr [eax], 0x8473b4
// 00631f3d  897004               mov dword ptr [eax + 4], esi
// 00631f40  894810               mov dword ptr [eax + 0x10], ecx
// 00631f43  895014               mov dword ptr [eax + 0x14], edx
// 00631f46  8bf8                 mov edi, eax
// 00631f48  eb02                 jmp 0x631f4c
// 00631f4a  33ff                 xor edi, edi
// 00631f4c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00631f4f  3bf8                 cmp edi, eax
// 00631f51  740d                 je 0x631f60
// 00631f53  85c0                 test eax, eax
// 00631f55  7409                 je 0x631f60
// 00631f57  50                   push eax
// 00631f58  e81de70600           call 0x6a067a
// 00631f5d  83c404               add esp, 4
// 00631f60  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631f64  897e18               mov dword ptr [esi + 0x18], edi
// 00631f67  5f                   pop edi
// 00631f68  8bc6                 mov eax, esi
// 00631f6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00631f71  5e                   pop esi
// 00631f72  83c414               add esp, 0x14
// 00631f75  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
