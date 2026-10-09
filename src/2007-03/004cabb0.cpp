// roc 2007-03 004cabb0  unit: seg_004c0000  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cabb0
//
// 004cabb0  6aff                 push -1
// 004cabb2  68cbd77400           push 0x74d7cb
// 004cabb7  64a100000000         mov eax, dword ptr fs:[0]
// 004cabbd  50                   push eax
// 004cabbe  64892500000000       mov dword ptr fs:[0], esp
// 004cabc5  83ec18               sub esp, 0x18
// 004cabc8  53                   push ebx
// 004cabc9  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004cabcd  55                   push ebp
// 004cabce  56                   push esi
// 004cabcf  8b742434             mov esi, dword ptr [esp + 0x34]
// 004cabd3  d906                 fld dword ptr [esi]
// 004cabd5  57                   push edi
// 004cabd6  d95c2418             fstp dword ptr [esp + 0x18]
// 004cabda  8d442418             lea eax, [esp + 0x18]
// 004cabde  d94604               fld dword ptr [esi + 4]
// 004cabe1  50                   push eax
// 004cabe2  d95c2420             fstp dword ptr [esp + 0x20]
// 004cabe6  8d4c2414             lea ecx, [esp + 0x14]
// 004cabea  d94608               fld dword ptr [esi + 8]
// 004cabed  51                   push ecx
// 004cabee  b9a49e8b00           mov ecx, 0x8b9ea4
// 004cabf3  d95c2428             fstp dword ptr [esp + 0x28]
// 004cabf7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004cabfb  e830bbffff           call 0x4c6730
// 004cac00  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cac04  85ff                 test edi, edi
// 004cac06  8b2da89e8b00         mov ebp, dword ptr [0x8b9ea8]
// 004cac0c  7408                 je 0x4cac16
// 004cac0e  81ffa49e8b00         cmp edi, 0x8b9ea4
// 004cac14  7406                 je 0x4cac1c
// 004cac16  ff1544e97700         call dword ptr [0x77e944]
// 004cac1c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004cac20  755d                 jne 0x4cac7f
// 004cac22  6a50                 push 0x50
// 004cac24  e8df341500           call 0x61e108
// 004cac29  83c404               add esp, 4
// 004cac2c  89442438             mov dword ptr [esp + 0x38], eax
// 004cac30  85c0                 test eax, eax
// 004cac32  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004cac3a  740d                 je 0x4cac49
// 004cac3c  53                   push ebx
// 004cac3d  56                   push esi
// 004cac3e  8bc8                 mov ecx, eax
// 004cac40  e8cb380100           call 0x4de510
// 004cac45  8bf0                 mov esi, eax
// 004cac47  eb02                 jmp 0x4cac4b
// 004cac49  33f6                 xor esi, esi
// 004cac4b  8d542418             lea edx, [esp + 0x18]
// 004cac4f  52                   push edx
// 004cac50  b9a49e8b00           mov ecx, 0x8b9ea4
// 004cac55  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004cac5d  e87eefffff           call 0x4c9be0
// 004cac62  56                   push esi
// 004cac63  8bc8                 mov ecx, eax
// 004cac65  e826a4faff           call 0x475090
// 004cac6a  5f                   pop edi
// 004cac6b  8bc6                 mov eax, esi
// 004cac6d  5e                   pop esi
// 004cac6e  5d                   pop ebp
// 004cac6f  5b                   pop ebx
// 004cac70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cac74  64890d00000000       mov dword ptr fs:[0], ecx
// 004cac7b  83c424               add esp, 0x24
// 004cac7e  c3                   ret 
// 004cac7f  85ff                 test edi, edi
// 004cac81  7506                 jne 0x4cac89
// 004cac83  ff1544e97700         call dword ptr [0x77e944]
// 004cac89  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cac8d  3b4704               cmp eax, dword ptr [edi + 4]
// 004cac90  7506                 jne 0x4cac98
// 004cac92  ff1544e97700         call dword ptr [0x77e944]
// 004cac98  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cac9c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004cac9f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004caca3  5f                   pop edi
// 004caca4  5e                   pop esi
// 004caca5  5d                   pop ebp
// 004caca6  5b                   pop ebx
// 004caca7  64890d00000000       mov dword ptr fs:[0], ecx
// 004cacae  83c424               add esp, 0x24
// 004cacb1  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
