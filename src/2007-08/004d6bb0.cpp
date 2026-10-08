// roc 2007-08 004d6bb0  unit: RBX::View::Part  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6bb0
//
// 004d6bb0  6aff                 push -1
// 004d6bb2  682b127500           push 0x75122b
// 004d6bb7  64a100000000         mov eax, dword ptr fs:[0]
// 004d6bbd  50                   push eax
// 004d6bbe  64892500000000       mov dword ptr fs:[0], esp
// 004d6bc5  83ec18               sub esp, 0x18
// 004d6bc8  53                   push ebx
// 004d6bc9  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004d6bcd  55                   push ebp
// 004d6bce  56                   push esi
// 004d6bcf  8b742434             mov esi, dword ptr [esp + 0x34]
// 004d6bd3  d906                 fld dword ptr [esi]
// 004d6bd5  57                   push edi
// 004d6bd6  d95c2418             fstp dword ptr [esp + 0x18]
// 004d6bda  8d442418             lea eax, [esp + 0x18]
// 004d6bde  d94604               fld dword ptr [esi + 4]
// 004d6be1  50                   push eax
// 004d6be2  d95c2420             fstp dword ptr [esp + 0x20]
// 004d6be6  8d4c2414             lea ecx, [esp + 0x14]
// 004d6bea  d94608               fld dword ptr [esi + 8]
// 004d6bed  51                   push ecx
// 004d6bee  b930fa8b00           mov ecx, 0x8bfa30
// 004d6bf3  d95c2428             fstp dword ptr [esp + 0x28]
// 004d6bf7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004d6bfb  e850baffff           call 0x4d2650
// 004d6c00  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d6c04  85ff                 test edi, edi
// 004d6c06  8b2d34fa8b00         mov ebp, dword ptr [0x8bfa34]
// 004d6c0c  7408                 je 0x4d6c16
// 004d6c0e  81ff30fa8b00         cmp edi, 0x8bfa30
// 004d6c14  7406                 je 0x4d6c1c
// 004d6c16  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6c1c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004d6c20  755d                 jne 0x4d6c7f
// 004d6c22  6a50                 push 0x50
// 004d6c24  e8cd921500           call 0x62fef6
// 004d6c29  83c404               add esp, 4
// 004d6c2c  89442438             mov dword ptr [esp + 0x38], eax
// 004d6c30  85c0                 test eax, eax
// 004d6c32  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d6c3a  740d                 je 0x4d6c49
// 004d6c3c  53                   push ebx
// 004d6c3d  56                   push esi
// 004d6c3e  8bc8                 mov ecx, eax
// 004d6c40  e85b760100           call 0x4ee2a0
// 004d6c45  8bf0                 mov esi, eax
// 004d6c47  eb02                 jmp 0x4d6c4b
// 004d6c49  33f6                 xor esi, esi
// 004d6c4b  8d542418             lea edx, [esp + 0x18]
// 004d6c4f  52                   push edx
// 004d6c50  b930fa8b00           mov ecx, 0x8bfa30
// 004d6c55  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004d6c5d  e8beebffff           call 0x4d5820
// 004d6c62  56                   push esi
// 004d6c63  8bc8                 mov ecx, eax
// 004d6c65  e806e3f9ff           call 0x474f70
// 004d6c6a  5f                   pop edi
// 004d6c6b  8bc6                 mov eax, esi
// 004d6c6d  5e                   pop esi
// 004d6c6e  5d                   pop ebp
// 004d6c6f  5b                   pop ebx
// 004d6c70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d6c74  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6c7b  83c424               add esp, 0x24
// 004d6c7e  c3                   ret 
// 004d6c7f  85ff                 test edi, edi
// 004d6c81  7506                 jne 0x4d6c89
// 004d6c83  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6c89  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6c8d  3b4704               cmp eax, dword ptr [edi + 4]
// 004d6c90  7506                 jne 0x4d6c98
// 004d6c92  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6c98  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d6c9c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004d6c9f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d6ca3  5f                   pop edi
// 004d6ca4  5e                   pop esi
// 004d6ca5  5d                   pop ebp
// 004d6ca6  5b                   pop ebx
// 004d6ca7  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6cae  83c424               add esp, 0x24
// 004d6cb1  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
