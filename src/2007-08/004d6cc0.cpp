// roc 2007-08 004d6cc0  unit: RBX::View::Part  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6cc0
//
// 004d6cc0  6aff                 push -1
// 004d6cc2  682b127500           push 0x75122b
// 004d6cc7  64a100000000         mov eax, dword ptr fs:[0]
// 004d6ccd  50                   push eax
// 004d6cce  64892500000000       mov dword ptr fs:[0], esp
// 004d6cd5  83ec28               sub esp, 0x28
// 004d6cd8  53                   push ebx
// 004d6cd9  55                   push ebp
// 004d6cda  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004d6cde  56                   push esi
// 004d6cdf  8b742444             mov esi, dword ptr [esp + 0x44]
// 004d6ce3  d906                 fld dword ptr [esi]
// 004d6ce5  57                   push edi
// 004d6ce6  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004d6cea  d95c2420             fstp dword ptr [esp + 0x20]
// 004d6cee  d94604               fld dword ptr [esi + 4]
// 004d6cf1  8d442420             lea eax, [esp + 0x20]
// 004d6cf5  d95c2424             fstp dword ptr [esp + 0x24]
// 004d6cf9  50                   push eax
// 004d6cfa  d94608               fld dword ptr [esi + 8]
// 004d6cfd  8d4c2414             lea ecx, [esp + 0x14]
// 004d6d01  d95c242c             fstp dword ptr [esp + 0x2c]
// 004d6d05  51                   push ecx
// 004d6d06  d907                 fld dword ptr [edi]
// 004d6d08  b924fa8b00           mov ecx, 0x8bfa24
// 004d6d0d  d95c2438             fstp dword ptr [esp + 0x38]
// 004d6d11  896c2434             mov dword ptr [esp + 0x34], ebp
// 004d6d15  d94704               fld dword ptr [edi + 4]
// 004d6d18  d95c243c             fstp dword ptr [esp + 0x3c]
// 004d6d1c  e89fb9ffff           call 0x4d26c0
// 004d6d21  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d6d25  85db                 test ebx, ebx
// 004d6d27  8b1528fa8b00         mov edx, dword ptr [0x8bfa28]
// 004d6d2d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d6d31  7408                 je 0x4d6d3b
// 004d6d33  81fb24fa8b00         cmp ebx, 0x8bfa24
// 004d6d39  7406                 je 0x4d6d41
// 004d6d3b  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6d41  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6d45  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004d6d49  755e                 jne 0x4d6da9
// 004d6d4b  6a50                 push 0x50
// 004d6d4d  e8a4911500           call 0x62fef6
// 004d6d52  83c404               add esp, 4
// 004d6d55  89442448             mov dword ptr [esp + 0x48], eax
// 004d6d59  85c0                 test eax, eax
// 004d6d5b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004d6d63  740e                 je 0x4d6d73
// 004d6d65  57                   push edi
// 004d6d66  55                   push ebp
// 004d6d67  56                   push esi
// 004d6d68  8bc8                 mov ecx, eax
// 004d6d6a  e8c1760100           call 0x4ee430
// 004d6d6f  8bf0                 mov esi, eax
// 004d6d71  eb02                 jmp 0x4d6d75
// 004d6d73  33f6                 xor esi, esi
// 004d6d75  8d4c2420             lea ecx, [esp + 0x20]
// 004d6d79  51                   push ecx
// 004d6d7a  b924fa8b00           mov ecx, 0x8bfa24
// 004d6d7f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d6d87  e894ebffff           call 0x4d5920
// 004d6d8c  56                   push esi
// 004d6d8d  8bc8                 mov ecx, eax
// 004d6d8f  e8dce1f9ff           call 0x474f70
// 004d6d94  5f                   pop edi
// 004d6d95  8bc6                 mov eax, esi
// 004d6d97  5e                   pop esi
// 004d6d98  5d                   pop ebp
// 004d6d99  5b                   pop ebx
// 004d6d9a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d6d9e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6da5  83c434               add esp, 0x34
// 004d6da8  c3                   ret 
// 004d6da9  85db                 test ebx, ebx
// 004d6dab  7506                 jne 0x4d6db3
// 004d6dad  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6db3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d6db7  3b5304               cmp edx, dword ptr [ebx + 4]
// 004d6dba  7506                 jne 0x4d6dc2
// 004d6dbc  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6dc2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6dc6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d6dca  8b4024               mov eax, dword ptr [eax + 0x24]
// 004d6dcd  5f                   pop edi
// 004d6dce  5e                   pop esi
// 004d6dcf  5d                   pop ebp
// 004d6dd0  5b                   pop ebx
// 004d6dd1  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6dd8  83c434               add esp, 0x34
// 004d6ddb  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
