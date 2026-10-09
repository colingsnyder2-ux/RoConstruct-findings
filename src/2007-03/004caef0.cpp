// roc 2007-03 004caef0  unit: seg_004c0000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004caef0
//
// 004caef0  6aff                 push -1
// 004caef2  68cbd77400           push 0x74d7cb
// 004caef7  64a100000000         mov eax, dword ptr fs:[0]
// 004caefd  50                   push eax
// 004caefe  64892500000000       mov dword ptr fs:[0], esp
// 004caf05  83ec28               sub esp, 0x28
// 004caf08  53                   push ebx
// 004caf09  55                   push ebp
// 004caf0a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004caf0e  56                   push esi
// 004caf0f  8b742444             mov esi, dword ptr [esp + 0x44]
// 004caf13  d906                 fld dword ptr [esi]
// 004caf15  57                   push edi
// 004caf16  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004caf1a  d95c2420             fstp dword ptr [esp + 0x20]
// 004caf1e  d94604               fld dword ptr [esi + 4]
// 004caf21  8d442420             lea eax, [esp + 0x20]
// 004caf25  d95c2424             fstp dword ptr [esp + 0x24]
// 004caf29  50                   push eax
// 004caf2a  d94608               fld dword ptr [esi + 8]
// 004caf2d  8d4c2414             lea ecx, [esp + 0x14]
// 004caf31  d95c242c             fstp dword ptr [esp + 0x2c]
// 004caf35  51                   push ecx
// 004caf36  d907                 fld dword ptr [edi]
// 004caf38  b9d49e8b00           mov ecx, 0x8b9ed4
// 004caf3d  d95c2438             fstp dword ptr [esp + 0x38]
// 004caf41  896c2434             mov dword ptr [esp + 0x34], ebp
// 004caf45  d94704               fld dword ptr [edi + 4]
// 004caf48  d95c243c             fstp dword ptr [esp + 0x3c]
// 004caf4c  e84fb8ffff           call 0x4c67a0
// 004caf51  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004caf55  85db                 test ebx, ebx
// 004caf57  8b15d89e8b00         mov edx, dword ptr [0x8b9ed8]
// 004caf5d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004caf61  7408                 je 0x4caf6b
// 004caf63  81fbd49e8b00         cmp ebx, 0x8b9ed4
// 004caf69  7406                 je 0x4caf71
// 004caf6b  ff1544e97700         call dword ptr [0x77e944]
// 004caf71  8b442414             mov eax, dword ptr [esp + 0x14]
// 004caf75  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004caf79  755e                 jne 0x4cafd9
// 004caf7b  6a50                 push 0x50
// 004caf7d  e886311500           call 0x61e108
// 004caf82  83c404               add esp, 4
// 004caf85  89442448             mov dword ptr [esp + 0x48], eax
// 004caf89  85c0                 test eax, eax
// 004caf8b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004caf93  740e                 je 0x4cafa3
// 004caf95  57                   push edi
// 004caf96  55                   push ebp
// 004caf97  56                   push esi
// 004caf98  8bc8                 mov ecx, eax
// 004caf9a  e8b13e0100           call 0x4dee50
// 004caf9f  8bf0                 mov esi, eax
// 004cafa1  eb02                 jmp 0x4cafa5
// 004cafa3  33f6                 xor esi, esi
// 004cafa5  8d4c2420             lea ecx, [esp + 0x20]
// 004cafa9  51                   push ecx
// 004cafaa  b9d49e8b00           mov ecx, 0x8b9ed4
// 004cafaf  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004cafb7  e824edffff           call 0x4c9ce0
// 004cafbc  56                   push esi
// 004cafbd  8bc8                 mov ecx, eax
// 004cafbf  e8cca0faff           call 0x475090
// 004cafc4  5f                   pop edi
// 004cafc5  8bc6                 mov eax, esi
// 004cafc7  5e                   pop esi
// 004cafc8  5d                   pop ebp
// 004cafc9  5b                   pop ebx
// 004cafca  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cafce  64890d00000000       mov dword ptr fs:[0], ecx
// 004cafd5  83c434               add esp, 0x34
// 004cafd8  c3                   ret 
// 004cafd9  85db                 test ebx, ebx
// 004cafdb  7506                 jne 0x4cafe3
// 004cafdd  ff1544e97700         call dword ptr [0x77e944]
// 004cafe3  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cafe7  3b5304               cmp edx, dword ptr [ebx + 4]
// 004cafea  7506                 jne 0x4caff2
// 004cafec  ff1544e97700         call dword ptr [0x77e944]
// 004caff2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004caff6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004caffa  8b4024               mov eax, dword ptr [eax + 0x24]
// 004caffd  5f                   pop edi
// 004caffe  5e                   pop esi
// 004cafff  5d                   pop ebp
// 004cb000  5b                   pop ebx
// 004cb001  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb008  83c434               add esp, 0x34
// 004cb00b  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
