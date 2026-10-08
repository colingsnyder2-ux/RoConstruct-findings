// roc 2007-08 004d61d0  unit: RBX::View::Part  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d61d0
//
// 004d61d0  6aff                 push -1
// 004d61d2  682b127500           push 0x75122b
// 004d61d7  64a100000000         mov eax, dword ptr fs:[0]
// 004d61dd  50                   push eax
// 004d61de  64892500000000       mov dword ptr fs:[0], esp
// 004d61e5  83ec28               sub esp, 0x28
// 004d61e8  53                   push ebx
// 004d61e9  55                   push ebp
// 004d61ea  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004d61ee  56                   push esi
// 004d61ef  8b742444             mov esi, dword ptr [esp + 0x44]
// 004d61f3  d906                 fld dword ptr [esi]
// 004d61f5  57                   push edi
// 004d61f6  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004d61fa  d95c2420             fstp dword ptr [esp + 0x20]
// 004d61fe  d94604               fld dword ptr [esi + 4]
// 004d6201  8d442420             lea eax, [esp + 0x20]
// 004d6205  d95c2424             fstp dword ptr [esp + 0x24]
// 004d6209  50                   push eax
// 004d620a  d94608               fld dword ptr [esi + 8]
// 004d620d  8d4c2414             lea ecx, [esp + 0x14]
// 004d6211  d95c242c             fstp dword ptr [esp + 0x2c]
// 004d6215  51                   push ecx
// 004d6216  d907                 fld dword ptr [edi]
// 004d6218  b954fa8b00           mov ecx, 0x8bfa54
// 004d621d  d95c2438             fstp dword ptr [esp + 0x38]
// 004d6221  896c2434             mov dword ptr [esp + 0x34], ebp
// 004d6225  d94704               fld dword ptr [edi + 4]
// 004d6228  d95c243c             fstp dword ptr [esp + 0x3c]
// 004d622c  e88fc4ffff           call 0x4d26c0
// 004d6231  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d6235  85db                 test ebx, ebx
// 004d6237  8b1558fa8b00         mov edx, dword ptr [0x8bfa58]
// 004d623d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d6241  7408                 je 0x4d624b
// 004d6243  81fb54fa8b00         cmp ebx, 0x8bfa54
// 004d6249  7406                 je 0x4d6251
// 004d624b  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6251  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6255  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004d6259  755e                 jne 0x4d62b9
// 004d625b  6a50                 push 0x50
// 004d625d  e8949c1500           call 0x62fef6
// 004d6262  83c404               add esp, 4
// 004d6265  89442448             mov dword ptr [esp + 0x48], eax
// 004d6269  85c0                 test eax, eax
// 004d626b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004d6273  740e                 je 0x4d6283
// 004d6275  57                   push edi
// 004d6276  55                   push ebp
// 004d6277  56                   push esi
// 004d6278  8bc8                 mov ecx, eax
// 004d627a  e861b60000           call 0x4e18e0
// 004d627f  8bf0                 mov esi, eax
// 004d6281  eb02                 jmp 0x4d6285
// 004d6283  33f6                 xor esi, esi
// 004d6285  8d4c2420             lea ecx, [esp + 0x20]
// 004d6289  51                   push ecx
// 004d628a  b954fa8b00           mov ecx, 0x8bfa54
// 004d628f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d6297  e884f6ffff           call 0x4d5920
// 004d629c  56                   push esi
// 004d629d  8bc8                 mov ecx, eax
// 004d629f  e8ccecf9ff           call 0x474f70
// 004d62a4  5f                   pop edi
// 004d62a5  8bc6                 mov eax, esi
// 004d62a7  5e                   pop esi
// 004d62a8  5d                   pop ebp
// 004d62a9  5b                   pop ebx
// 004d62aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d62ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004d62b5  83c434               add esp, 0x34
// 004d62b8  c3                   ret 
// 004d62b9  85db                 test ebx, ebx
// 004d62bb  7506                 jne 0x4d62c3
// 004d62bd  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d62c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d62c7  3b5304               cmp edx, dword ptr [ebx + 4]
// 004d62ca  7506                 jne 0x4d62d2
// 004d62cc  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d62d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d62d6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d62da  8b4024               mov eax, dword ptr [eax + 0x24]
// 004d62dd  5f                   pop edi
// 004d62de  5e                   pop esi
// 004d62df  5d                   pop ebp
// 004d62e0  5b                   pop ebx
// 004d62e1  64890d00000000       mov dword ptr fs:[0], ecx
// 004d62e8  83c434               add esp, 0x34
// 004d62eb  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
