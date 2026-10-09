// roc 2007-03 004cacc0  unit: seg_004c0000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cacc0
//
// 004cacc0  6aff                 push -1
// 004cacc2  68cbd77400           push 0x74d7cb
// 004cacc7  64a100000000         mov eax, dword ptr fs:[0]
// 004caccd  50                   push eax
// 004cacce  64892500000000       mov dword ptr fs:[0], esp
// 004cacd5  83ec28               sub esp, 0x28
// 004cacd8  53                   push ebx
// 004cacd9  55                   push ebp
// 004cacda  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004cacde  56                   push esi
// 004cacdf  8b742444             mov esi, dword ptr [esp + 0x44]
// 004cace3  d906                 fld dword ptr [esi]
// 004cace5  57                   push edi
// 004cace6  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004cacea  d95c2420             fstp dword ptr [esp + 0x20]
// 004cacee  d94604               fld dword ptr [esi + 4]
// 004cacf1  8d442420             lea eax, [esp + 0x20]
// 004cacf5  d95c2424             fstp dword ptr [esp + 0x24]
// 004cacf9  50                   push eax
// 004cacfa  d94608               fld dword ptr [esi + 8]
// 004cacfd  8d4c2414             lea ecx, [esp + 0x14]
// 004cad01  d95c242c             fstp dword ptr [esp + 0x2c]
// 004cad05  51                   push ecx
// 004cad06  d907                 fld dword ptr [edi]
// 004cad08  b91c9f8b00           mov ecx, 0x8b9f1c
// 004cad0d  d95c2438             fstp dword ptr [esp + 0x38]
// 004cad11  896c2434             mov dword ptr [esp + 0x34], ebp
// 004cad15  d94704               fld dword ptr [edi + 4]
// 004cad18  d95c243c             fstp dword ptr [esp + 0x3c]
// 004cad1c  e87fbaffff           call 0x4c67a0
// 004cad21  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cad25  85db                 test ebx, ebx
// 004cad27  8b15209f8b00         mov edx, dword ptr [0x8b9f20]
// 004cad2d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004cad31  7408                 je 0x4cad3b
// 004cad33  81fb1c9f8b00         cmp ebx, 0x8b9f1c
// 004cad39  7406                 je 0x4cad41
// 004cad3b  ff1544e97700         call dword ptr [0x77e944]
// 004cad41  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cad45  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004cad49  755e                 jne 0x4cada9
// 004cad4b  6a50                 push 0x50
// 004cad4d  e8b6331500           call 0x61e108
// 004cad52  83c404               add esp, 4
// 004cad55  89442448             mov dword ptr [esp + 0x48], eax
// 004cad59  85c0                 test eax, eax
// 004cad5b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004cad63  740e                 je 0x4cad73
// 004cad65  57                   push edi
// 004cad66  55                   push ebp
// 004cad67  56                   push esi
// 004cad68  8bc8                 mov ecx, eax
// 004cad6a  e821390100           call 0x4de690
// 004cad6f  8bf0                 mov esi, eax
// 004cad71  eb02                 jmp 0x4cad75
// 004cad73  33f6                 xor esi, esi
// 004cad75  8d4c2420             lea ecx, [esp + 0x20]
// 004cad79  51                   push ecx
// 004cad7a  b91c9f8b00           mov ecx, 0x8b9f1c
// 004cad7f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004cad87  e854efffff           call 0x4c9ce0
// 004cad8c  56                   push esi
// 004cad8d  8bc8                 mov ecx, eax
// 004cad8f  e8fca2faff           call 0x475090
// 004cad94  5f                   pop edi
// 004cad95  8bc6                 mov eax, esi
// 004cad97  5e                   pop esi
// 004cad98  5d                   pop ebp
// 004cad99  5b                   pop ebx
// 004cad9a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cad9e  64890d00000000       mov dword ptr fs:[0], ecx
// 004cada5  83c434               add esp, 0x34
// 004cada8  c3                   ret 
// 004cada9  85db                 test ebx, ebx
// 004cadab  7506                 jne 0x4cadb3
// 004cadad  ff1544e97700         call dword ptr [0x77e944]
// 004cadb3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cadb7  3b5304               cmp edx, dword ptr [ebx + 4]
// 004cadba  7506                 jne 0x4cadc2
// 004cadbc  ff1544e97700         call dword ptr [0x77e944]
// 004cadc2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cadc6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004cadca  8b4024               mov eax, dword ptr [eax + 0x24]
// 004cadcd  5f                   pop edi
// 004cadce  5e                   pop esi
// 004cadcf  5d                   pop ebp
// 004cadd0  5b                   pop ebx
// 004cadd1  64890d00000000       mov dword ptr fs:[0], ecx
// 004cadd8  83c434               add esp, 0x34
// 004caddb  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
