// roc 2007-08 004d6980  unit: RBX::View::Part  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6980
//
// 004d6980  6aff                 push -1
// 004d6982  682b127500           push 0x75122b
// 004d6987  64a100000000         mov eax, dword ptr fs:[0]
// 004d698d  50                   push eax
// 004d698e  64892500000000       mov dword ptr fs:[0], esp
// 004d6995  83ec18               sub esp, 0x18
// 004d6998  53                   push ebx
// 004d6999  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004d699d  55                   push ebp
// 004d699e  56                   push esi
// 004d699f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004d69a3  d906                 fld dword ptr [esi]
// 004d69a5  57                   push edi
// 004d69a6  d95c2418             fstp dword ptr [esp + 0x18]
// 004d69aa  8d442418             lea eax, [esp + 0x18]
// 004d69ae  d94604               fld dword ptr [esi + 4]
// 004d69b1  50                   push eax
// 004d69b2  d95c2420             fstp dword ptr [esp + 0x20]
// 004d69b6  8d4c2414             lea ecx, [esp + 0x14]
// 004d69ba  d94608               fld dword ptr [esi + 8]
// 004d69bd  51                   push ecx
// 004d69be  b9e8f98b00           mov ecx, 0x8bf9e8
// 004d69c3  d95c2428             fstp dword ptr [esp + 0x28]
// 004d69c7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004d69cb  e880bcffff           call 0x4d2650
// 004d69d0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d69d4  85ff                 test edi, edi
// 004d69d6  8b2decf98b00         mov ebp, dword ptr [0x8bf9ec]
// 004d69dc  7408                 je 0x4d69e6
// 004d69de  81ffe8f98b00         cmp edi, 0x8bf9e8
// 004d69e4  7406                 je 0x4d69ec
// 004d69e6  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d69ec  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004d69f0  755d                 jne 0x4d6a4f
// 004d69f2  6a50                 push 0x50
// 004d69f4  e8fd941500           call 0x62fef6
// 004d69f9  83c404               add esp, 4
// 004d69fc  89442438             mov dword ptr [esp + 0x38], eax
// 004d6a00  85c0                 test eax, eax
// 004d6a02  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d6a0a  740d                 je 0x4d6a19
// 004d6a0c  53                   push ebx
// 004d6a0d  56                   push esi
// 004d6a0e  8bc8                 mov ecx, eax
// 004d6a10  e8db470100           call 0x4eb1f0
// 004d6a15  8bf0                 mov esi, eax
// 004d6a17  eb02                 jmp 0x4d6a1b
// 004d6a19  33f6                 xor esi, esi
// 004d6a1b  8d542418             lea edx, [esp + 0x18]
// 004d6a1f  52                   push edx
// 004d6a20  b9e8f98b00           mov ecx, 0x8bf9e8
// 004d6a25  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004d6a2d  e8eeedffff           call 0x4d5820
// 004d6a32  56                   push esi
// 004d6a33  8bc8                 mov ecx, eax
// 004d6a35  e836e5f9ff           call 0x474f70
// 004d6a3a  5f                   pop edi
// 004d6a3b  8bc6                 mov eax, esi
// 004d6a3d  5e                   pop esi
// 004d6a3e  5d                   pop ebp
// 004d6a3f  5b                   pop ebx
// 004d6a40  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d6a44  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6a4b  83c424               add esp, 0x24
// 004d6a4e  c3                   ret 
// 004d6a4f  85ff                 test edi, edi
// 004d6a51  7506                 jne 0x4d6a59
// 004d6a53  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6a59  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6a5d  3b4704               cmp eax, dword ptr [edi + 4]
// 004d6a60  7506                 jne 0x4d6a68
// 004d6a62  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6a68  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d6a6c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004d6a6f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d6a73  5f                   pop edi
// 004d6a74  5e                   pop esi
// 004d6a75  5d                   pop ebp
// 004d6a76  5b                   pop ebx
// 004d6a77  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6a7e  83c424               add esp, 0x24
// 004d6a81  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
