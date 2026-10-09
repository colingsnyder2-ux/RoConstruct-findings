// roc 2007-03 004ca520  unit: seg_004c0000  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ca520
//
// 004ca520  6aff                 push -1
// 004ca522  68cbd77400           push 0x74d7cb
// 004ca527  64a100000000         mov eax, dword ptr fs:[0]
// 004ca52d  50                   push eax
// 004ca52e  64892500000000       mov dword ptr fs:[0], esp
// 004ca535  83ec18               sub esp, 0x18
// 004ca538  53                   push ebx
// 004ca539  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004ca53d  55                   push ebp
// 004ca53e  56                   push esi
// 004ca53f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004ca543  d906                 fld dword ptr [esi]
// 004ca545  57                   push edi
// 004ca546  d95c2418             fstp dword ptr [esp + 0x18]
// 004ca54a  8d442418             lea eax, [esp + 0x18]
// 004ca54e  d94604               fld dword ptr [esi + 4]
// 004ca551  50                   push eax
// 004ca552  d95c2420             fstp dword ptr [esp + 0x20]
// 004ca556  8d4c2414             lea ecx, [esp + 0x14]
// 004ca55a  d94608               fld dword ptr [esi + 8]
// 004ca55d  51                   push ecx
// 004ca55e  b9bc9e8b00           mov ecx, 0x8b9ebc
// 004ca563  d95c2428             fstp dword ptr [esp + 0x28]
// 004ca567  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004ca56b  e8c0c1ffff           call 0x4c6730
// 004ca570  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ca574  85ff                 test edi, edi
// 004ca576  8b2dc09e8b00         mov ebp, dword ptr [0x8b9ec0]
// 004ca57c  7408                 je 0x4ca586
// 004ca57e  81ffbc9e8b00         cmp edi, 0x8b9ebc
// 004ca584  7406                 je 0x4ca58c
// 004ca586  ff1544e97700         call dword ptr [0x77e944]
// 004ca58c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004ca590  755d                 jne 0x4ca5ef
// 004ca592  6a50                 push 0x50
// 004ca594  e86f3b1500           call 0x61e108
// 004ca599  83c404               add esp, 4
// 004ca59c  89442438             mov dword ptr [esp + 0x38], eax
// 004ca5a0  85c0                 test eax, eax
// 004ca5a2  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004ca5aa  740d                 je 0x4ca5b9
// 004ca5ac  53                   push ebx
// 004ca5ad  56                   push esi
// 004ca5ae  8bc8                 mov ecx, eax
// 004ca5b0  e83bac0000           call 0x4d51f0
// 004ca5b5  8bf0                 mov esi, eax
// 004ca5b7  eb02                 jmp 0x4ca5bb
// 004ca5b9  33f6                 xor esi, esi
// 004ca5bb  8d542418             lea edx, [esp + 0x18]
// 004ca5bf  52                   push edx
// 004ca5c0  b9bc9e8b00           mov ecx, 0x8b9ebc
// 004ca5c5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004ca5cd  e80ef6ffff           call 0x4c9be0
// 004ca5d2  56                   push esi
// 004ca5d3  8bc8                 mov ecx, eax
// 004ca5d5  e8b6aafaff           call 0x475090
// 004ca5da  5f                   pop edi
// 004ca5db  8bc6                 mov eax, esi
// 004ca5dd  5e                   pop esi
// 004ca5de  5d                   pop ebp
// 004ca5df  5b                   pop ebx
// 004ca5e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ca5e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca5eb  83c424               add esp, 0x24
// 004ca5ee  c3                   ret 
// 004ca5ef  85ff                 test edi, edi
// 004ca5f1  7506                 jne 0x4ca5f9
// 004ca5f3  ff1544e97700         call dword ptr [0x77e944]
// 004ca5f9  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ca5fd  3b4704               cmp eax, dword ptr [edi + 4]
// 004ca600  7506                 jne 0x4ca608
// 004ca602  ff1544e97700         call dword ptr [0x77e944]
// 004ca608  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ca60c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004ca60f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ca613  5f                   pop edi
// 004ca614  5e                   pop esi
// 004ca615  5d                   pop ebp
// 004ca616  5b                   pop ebx
// 004ca617  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca61e  83c424               add esp, 0x24
// 004ca621  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
