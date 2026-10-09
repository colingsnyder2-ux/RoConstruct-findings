// roc 2007-03 004ca980  unit: seg_004c0000  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ca980
//
// 004ca980  6aff                 push -1
// 004ca982  68cbd77400           push 0x74d7cb
// 004ca987  64a100000000         mov eax, dword ptr fs:[0]
// 004ca98d  50                   push eax
// 004ca98e  64892500000000       mov dword ptr fs:[0], esp
// 004ca995  83ec18               sub esp, 0x18
// 004ca998  53                   push ebx
// 004ca999  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004ca99d  55                   push ebp
// 004ca99e  56                   push esi
// 004ca99f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004ca9a3  d906                 fld dword ptr [esi]
// 004ca9a5  57                   push edi
// 004ca9a6  d95c2418             fstp dword ptr [esp + 0x18]
// 004ca9aa  8d442418             lea eax, [esp + 0x18]
// 004ca9ae  d94604               fld dword ptr [esi + 4]
// 004ca9b1  50                   push eax
// 004ca9b2  d95c2420             fstp dword ptr [esp + 0x20]
// 004ca9b6  8d4c2414             lea ecx, [esp + 0x14]
// 004ca9ba  d94608               fld dword ptr [esi + 8]
// 004ca9bd  51                   push ecx
// 004ca9be  b9349f8b00           mov ecx, 0x8b9f34
// 004ca9c3  d95c2428             fstp dword ptr [esp + 0x28]
// 004ca9c7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004ca9cb  e860bdffff           call 0x4c6730
// 004ca9d0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ca9d4  85ff                 test edi, edi
// 004ca9d6  8b2d389f8b00         mov ebp, dword ptr [0x8b9f38]
// 004ca9dc  7408                 je 0x4ca9e6
// 004ca9de  81ff349f8b00         cmp edi, 0x8b9f34
// 004ca9e4  7406                 je 0x4ca9ec
// 004ca9e6  ff1544e97700         call dword ptr [0x77e944]
// 004ca9ec  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004ca9f0  755d                 jne 0x4caa4f
// 004ca9f2  6a50                 push 0x50
// 004ca9f4  e80f371500           call 0x61e108
// 004ca9f9  83c404               add esp, 4
// 004ca9fc  89442438             mov dword ptr [esp + 0x38], eax
// 004caa00  85c0                 test eax, eax
// 004caa02  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004caa0a  740d                 je 0x4caa19
// 004caa0c  53                   push ebx
// 004caa0d  56                   push esi
// 004caa0e  8bc8                 mov ecx, eax
// 004caa10  e80b0a0100           call 0x4db420
// 004caa15  8bf0                 mov esi, eax
// 004caa17  eb02                 jmp 0x4caa1b
// 004caa19  33f6                 xor esi, esi
// 004caa1b  8d542418             lea edx, [esp + 0x18]
// 004caa1f  52                   push edx
// 004caa20  b9349f8b00           mov ecx, 0x8b9f34
// 004caa25  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004caa2d  e8aef1ffff           call 0x4c9be0
// 004caa32  56                   push esi
// 004caa33  8bc8                 mov ecx, eax
// 004caa35  e856a6faff           call 0x475090
// 004caa3a  5f                   pop edi
// 004caa3b  8bc6                 mov eax, esi
// 004caa3d  5e                   pop esi
// 004caa3e  5d                   pop ebp
// 004caa3f  5b                   pop ebx
// 004caa40  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004caa44  64890d00000000       mov dword ptr fs:[0], ecx
// 004caa4b  83c424               add esp, 0x24
// 004caa4e  c3                   ret 
// 004caa4f  85ff                 test edi, edi
// 004caa51  7506                 jne 0x4caa59
// 004caa53  ff1544e97700         call dword ptr [0x77e944]
// 004caa59  8b442414             mov eax, dword ptr [esp + 0x14]
// 004caa5d  3b4704               cmp eax, dword ptr [edi + 4]
// 004caa60  7506                 jne 0x4caa68
// 004caa62  ff1544e97700         call dword ptr [0x77e944]
// 004caa68  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004caa6c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004caa6f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004caa73  5f                   pop edi
// 004caa74  5e                   pop esi
// 004caa75  5d                   pop ebp
// 004caa76  5b                   pop ebx
// 004caa77  64890d00000000       mov dword ptr fs:[0], ecx
// 004caa7e  83c424               add esp, 0x24
// 004caa81  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
