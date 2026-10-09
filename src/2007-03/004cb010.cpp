// roc 2007-03 004cb010  unit: seg_004c0000  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cb010
//
// 004cb010  6aff                 push -1
// 004cb012  68cbd77400           push 0x74d7cb
// 004cb017  64a100000000         mov eax, dword ptr fs:[0]
// 004cb01d  50                   push eax
// 004cb01e  64892500000000       mov dword ptr fs:[0], esp
// 004cb025  83ec18               sub esp, 0x18
// 004cb028  53                   push ebx
// 004cb029  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004cb02d  55                   push ebp
// 004cb02e  56                   push esi
// 004cb02f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004cb033  d906                 fld dword ptr [esi]
// 004cb035  57                   push edi
// 004cb036  d95c2418             fstp dword ptr [esp + 0x18]
// 004cb03a  8d442418             lea eax, [esp + 0x18]
// 004cb03e  d94604               fld dword ptr [esi + 4]
// 004cb041  50                   push eax
// 004cb042  d95c2420             fstp dword ptr [esp + 0x20]
// 004cb046  8d4c2414             lea ecx, [esp + 0x14]
// 004cb04a  d94608               fld dword ptr [esi + 8]
// 004cb04d  51                   push ecx
// 004cb04e  b9049f8b00           mov ecx, 0x8b9f04
// 004cb053  d95c2428             fstp dword ptr [esp + 0x28]
// 004cb057  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004cb05b  e8d0b6ffff           call 0x4c6730
// 004cb060  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cb064  85ff                 test edi, edi
// 004cb066  8b2d089f8b00         mov ebp, dword ptr [0x8b9f08]
// 004cb06c  7408                 je 0x4cb076
// 004cb06e  81ff049f8b00         cmp edi, 0x8b9f04
// 004cb074  7406                 je 0x4cb07c
// 004cb076  ff1544e97700         call dword ptr [0x77e944]
// 004cb07c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004cb080  755d                 jne 0x4cb0df
// 004cb082  6a50                 push 0x50
// 004cb084  e87f301500           call 0x61e108
// 004cb089  83c404               add esp, 4
// 004cb08c  89442438             mov dword ptr [esp + 0x38], eax
// 004cb090  85c0                 test eax, eax
// 004cb092  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004cb09a  740d                 je 0x4cb0a9
// 004cb09c  53                   push ebx
// 004cb09d  56                   push esi
// 004cb09e  8bc8                 mov ecx, eax
// 004cb0a0  e8fb6c0100           call 0x4e1da0
// 004cb0a5  8bf0                 mov esi, eax
// 004cb0a7  eb02                 jmp 0x4cb0ab
// 004cb0a9  33f6                 xor esi, esi
// 004cb0ab  8d542418             lea edx, [esp + 0x18]
// 004cb0af  52                   push edx
// 004cb0b0  b9049f8b00           mov ecx, 0x8b9f04
// 004cb0b5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004cb0bd  e81eebffff           call 0x4c9be0
// 004cb0c2  56                   push esi
// 004cb0c3  8bc8                 mov ecx, eax
// 004cb0c5  e8c69ffaff           call 0x475090
// 004cb0ca  5f                   pop edi
// 004cb0cb  8bc6                 mov eax, esi
// 004cb0cd  5e                   pop esi
// 004cb0ce  5d                   pop ebp
// 004cb0cf  5b                   pop ebx
// 004cb0d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cb0d4  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb0db  83c424               add esp, 0x24
// 004cb0de  c3                   ret 
// 004cb0df  85ff                 test edi, edi
// 004cb0e1  7506                 jne 0x4cb0e9
// 004cb0e3  ff1544e97700         call dword ptr [0x77e944]
// 004cb0e9  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cb0ed  3b4704               cmp eax, dword ptr [edi + 4]
// 004cb0f0  7506                 jne 0x4cb0f8
// 004cb0f2  ff1544e97700         call dword ptr [0x77e944]
// 004cb0f8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cb0fc  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004cb0ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cb103  5f                   pop edi
// 004cb104  5e                   pop esi
// 004cb105  5d                   pop ebp
// 004cb106  5b                   pop ebx
// 004cb107  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb10e  83c424               add esp, 0x24
// 004cb111  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
