// roc 2007-08 004d6400  unit: RBX::View::Part  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6400
//
// 004d6400  6aff                 push -1
// 004d6402  682b127500           push 0x75122b
// 004d6407  64a100000000         mov eax, dword ptr fs:[0]
// 004d640d  50                   push eax
// 004d640e  64892500000000       mov dword ptr fs:[0], esp
// 004d6415  83ec28               sub esp, 0x28
// 004d6418  53                   push ebx
// 004d6419  55                   push ebp
// 004d641a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004d641e  56                   push esi
// 004d641f  8b742444             mov esi, dword ptr [esp + 0x44]
// 004d6423  d906                 fld dword ptr [esi]
// 004d6425  57                   push edi
// 004d6426  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004d642a  d95c2420             fstp dword ptr [esp + 0x20]
// 004d642e  d94604               fld dword ptr [esi + 4]
// 004d6431  8d442420             lea eax, [esp + 0x20]
// 004d6435  d95c2424             fstp dword ptr [esp + 0x24]
// 004d6439  50                   push eax
// 004d643a  d94608               fld dword ptr [esi + 8]
// 004d643d  8d4c2414             lea ecx, [esp + 0x14]
// 004d6441  d95c242c             fstp dword ptr [esp + 0x2c]
// 004d6445  51                   push ecx
// 004d6446  d907                 fld dword ptr [edi]
// 004d6448  b93cfa8b00           mov ecx, 0x8bfa3c
// 004d644d  d95c2438             fstp dword ptr [esp + 0x38]
// 004d6451  896c2434             mov dword ptr [esp + 0x34], ebp
// 004d6455  d94704               fld dword ptr [edi + 4]
// 004d6458  d95c243c             fstp dword ptr [esp + 0x3c]
// 004d645c  e85fc2ffff           call 0x4d26c0
// 004d6461  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d6465  85db                 test ebx, ebx
// 004d6467  8b1540fa8b00         mov edx, dword ptr [0x8bfa40]
// 004d646d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d6471  7408                 je 0x4d647b
// 004d6473  81fb3cfa8b00         cmp ebx, 0x8bfa3c
// 004d6479  7406                 je 0x4d6481
// 004d647b  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6481  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6485  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004d6489  755e                 jne 0x4d64e9
// 004d648b  6a50                 push 0x50
// 004d648d  e8649a1500           call 0x62fef6
// 004d6492  83c404               add esp, 4
// 004d6495  89442448             mov dword ptr [esp + 0x48], eax
// 004d6499  85c0                 test eax, eax
// 004d649b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004d64a3  740e                 je 0x4d64b3
// 004d64a5  57                   push edi
// 004d64a6  55                   push ebp
// 004d64a7  56                   push esi
// 004d64a8  8bc8                 mov ecx, eax
// 004d64aa  e851e60000           call 0x4e4b00
// 004d64af  8bf0                 mov esi, eax
// 004d64b1  eb02                 jmp 0x4d64b5
// 004d64b3  33f6                 xor esi, esi
// 004d64b5  8d4c2420             lea ecx, [esp + 0x20]
// 004d64b9  51                   push ecx
// 004d64ba  b93cfa8b00           mov ecx, 0x8bfa3c
// 004d64bf  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d64c7  e854f4ffff           call 0x4d5920
// 004d64cc  56                   push esi
// 004d64cd  8bc8                 mov ecx, eax
// 004d64cf  e89ceaf9ff           call 0x474f70
// 004d64d4  5f                   pop edi
// 004d64d5  8bc6                 mov eax, esi
// 004d64d7  5e                   pop esi
// 004d64d8  5d                   pop ebp
// 004d64d9  5b                   pop ebx
// 004d64da  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d64de  64890d00000000       mov dword ptr fs:[0], ecx
// 004d64e5  83c434               add esp, 0x34
// 004d64e8  c3                   ret 
// 004d64e9  85db                 test ebx, ebx
// 004d64eb  7506                 jne 0x4d64f3
// 004d64ed  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d64f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d64f7  3b5304               cmp edx, dword ptr [ebx + 4]
// 004d64fa  7506                 jne 0x4d6502
// 004d64fc  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6502  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6506  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d650a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004d650d  5f                   pop edi
// 004d650e  5e                   pop esi
// 004d650f  5d                   pop ebp
// 004d6510  5b                   pop ebx
// 004d6511  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6518  83c434               add esp, 0x34
// 004d651b  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
