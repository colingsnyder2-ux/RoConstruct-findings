// roc 2007-08 004d6a90  unit: RBX::View::Part  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6a90
//
// 004d6a90  6aff                 push -1
// 004d6a92  682b127500           push 0x75122b
// 004d6a97  64a100000000         mov eax, dword ptr fs:[0]
// 004d6a9d  50                   push eax
// 004d6a9e  64892500000000       mov dword ptr fs:[0], esp
// 004d6aa5  83ec28               sub esp, 0x28
// 004d6aa8  53                   push ebx
// 004d6aa9  55                   push ebp
// 004d6aaa  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004d6aae  56                   push esi
// 004d6aaf  8b742444             mov esi, dword ptr [esp + 0x44]
// 004d6ab3  d906                 fld dword ptr [esi]
// 004d6ab5  57                   push edi
// 004d6ab6  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004d6aba  d95c2420             fstp dword ptr [esp + 0x20]
// 004d6abe  d94604               fld dword ptr [esi + 4]
// 004d6ac1  8d442420             lea eax, [esp + 0x20]
// 004d6ac5  d95c2424             fstp dword ptr [esp + 0x24]
// 004d6ac9  50                   push eax
// 004d6aca  d94608               fld dword ptr [esi + 8]
// 004d6acd  8d4c2414             lea ecx, [esp + 0x14]
// 004d6ad1  d95c242c             fstp dword ptr [esp + 0x2c]
// 004d6ad5  51                   push ecx
// 004d6ad6  d907                 fld dword ptr [edi]
// 004d6ad8  b900fa8b00           mov ecx, 0x8bfa00
// 004d6add  d95c2438             fstp dword ptr [esp + 0x38]
// 004d6ae1  896c2434             mov dword ptr [esp + 0x34], ebp
// 004d6ae5  d94704               fld dword ptr [edi + 4]
// 004d6ae8  d95c243c             fstp dword ptr [esp + 0x3c]
// 004d6aec  e8cfbbffff           call 0x4d26c0
// 004d6af1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d6af5  85db                 test ebx, ebx
// 004d6af7  8b1504fa8b00         mov edx, dword ptr [0x8bfa04]
// 004d6afd  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d6b01  7408                 je 0x4d6b0b
// 004d6b03  81fb00fa8b00         cmp ebx, 0x8bfa00
// 004d6b09  7406                 je 0x4d6b11
// 004d6b0b  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6b11  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6b15  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004d6b19  755e                 jne 0x4d6b79
// 004d6b1b  6a50                 push 0x50
// 004d6b1d  e8d4931500           call 0x62fef6
// 004d6b22  83c404               add esp, 4
// 004d6b25  89442448             mov dword ptr [esp + 0x48], eax
// 004d6b29  85c0                 test eax, eax
// 004d6b2b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004d6b33  740e                 je 0x4d6b43
// 004d6b35  57                   push edi
// 004d6b36  55                   push ebp
// 004d6b37  56                   push esi
// 004d6b38  8bc8                 mov ecx, eax
// 004d6b3a  e811480100           call 0x4eb350
// 004d6b3f  8bf0                 mov esi, eax
// 004d6b41  eb02                 jmp 0x4d6b45
// 004d6b43  33f6                 xor esi, esi
// 004d6b45  8d4c2420             lea ecx, [esp + 0x20]
// 004d6b49  51                   push ecx
// 004d6b4a  b900fa8b00           mov ecx, 0x8bfa00
// 004d6b4f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d6b57  e8c4edffff           call 0x4d5920
// 004d6b5c  56                   push esi
// 004d6b5d  8bc8                 mov ecx, eax
// 004d6b5f  e80ce4f9ff           call 0x474f70
// 004d6b64  5f                   pop edi
// 004d6b65  8bc6                 mov eax, esi
// 004d6b67  5e                   pop esi
// 004d6b68  5d                   pop ebp
// 004d6b69  5b                   pop ebx
// 004d6b6a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d6b6e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6b75  83c434               add esp, 0x34
// 004d6b78  c3                   ret 
// 004d6b79  85db                 test ebx, ebx
// 004d6b7b  7506                 jne 0x4d6b83
// 004d6b7d  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6b83  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d6b87  3b5304               cmp edx, dword ptr [ebx + 4]
// 004d6b8a  7506                 jne 0x4d6b92
// 004d6b8c  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6b92  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6b96  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d6b9a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004d6b9d  5f                   pop edi
// 004d6b9e  5e                   pop esi
// 004d6b9f  5d                   pop ebp
// 004d6ba0  5b                   pop ebx
// 004d6ba1  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6ba8  83c434               add esp, 0x34
// 004d6bab  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
