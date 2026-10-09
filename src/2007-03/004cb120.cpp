// roc 2007-03 004cb120  unit: seg_004c0000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cb120
//
// 004cb120  6aff                 push -1
// 004cb122  68cbd77400           push 0x74d7cb
// 004cb127  64a100000000         mov eax, dword ptr fs:[0]
// 004cb12d  50                   push eax
// 004cb12e  64892500000000       mov dword ptr fs:[0], esp
// 004cb135  83ec28               sub esp, 0x28
// 004cb138  53                   push ebx
// 004cb139  55                   push ebp
// 004cb13a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004cb13e  56                   push esi
// 004cb13f  8b742444             mov esi, dword ptr [esp + 0x44]
// 004cb143  d906                 fld dword ptr [esi]
// 004cb145  57                   push edi
// 004cb146  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004cb14a  d95c2420             fstp dword ptr [esp + 0x20]
// 004cb14e  d94604               fld dword ptr [esi + 4]
// 004cb151  8d442420             lea eax, [esp + 0x20]
// 004cb155  d95c2424             fstp dword ptr [esp + 0x24]
// 004cb159  50                   push eax
// 004cb15a  d94608               fld dword ptr [esi + 8]
// 004cb15d  8d4c2414             lea ecx, [esp + 0x14]
// 004cb161  d95c242c             fstp dword ptr [esp + 0x2c]
// 004cb165  51                   push ecx
// 004cb166  d907                 fld dword ptr [edi]
// 004cb168  b9f89e8b00           mov ecx, 0x8b9ef8
// 004cb16d  d95c2438             fstp dword ptr [esp + 0x38]
// 004cb171  896c2434             mov dword ptr [esp + 0x34], ebp
// 004cb175  d94704               fld dword ptr [edi + 4]
// 004cb178  d95c243c             fstp dword ptr [esp + 0x3c]
// 004cb17c  e81fb6ffff           call 0x4c67a0
// 004cb181  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cb185  85db                 test ebx, ebx
// 004cb187  8b15fc9e8b00         mov edx, dword ptr [0x8b9efc]
// 004cb18d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004cb191  7408                 je 0x4cb19b
// 004cb193  81fbf89e8b00         cmp ebx, 0x8b9ef8
// 004cb199  7406                 je 0x4cb1a1
// 004cb19b  ff1544e97700         call dword ptr [0x77e944]
// 004cb1a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cb1a5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004cb1a9  755e                 jne 0x4cb209
// 004cb1ab  6a50                 push 0x50
// 004cb1ad  e8562f1500           call 0x61e108
// 004cb1b2  83c404               add esp, 4
// 004cb1b5  89442448             mov dword ptr [esp + 0x48], eax
// 004cb1b9  85c0                 test eax, eax
// 004cb1bb  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004cb1c3  740e                 je 0x4cb1d3
// 004cb1c5  57                   push edi
// 004cb1c6  55                   push ebp
// 004cb1c7  56                   push esi
// 004cb1c8  8bc8                 mov ecx, eax
// 004cb1ca  e8616d0100           call 0x4e1f30
// 004cb1cf  8bf0                 mov esi, eax
// 004cb1d1  eb02                 jmp 0x4cb1d5
// 004cb1d3  33f6                 xor esi, esi
// 004cb1d5  8d4c2420             lea ecx, [esp + 0x20]
// 004cb1d9  51                   push ecx
// 004cb1da  b9f89e8b00           mov ecx, 0x8b9ef8
// 004cb1df  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004cb1e7  e8f4eaffff           call 0x4c9ce0
// 004cb1ec  56                   push esi
// 004cb1ed  8bc8                 mov ecx, eax
// 004cb1ef  e89c9efaff           call 0x475090
// 004cb1f4  5f                   pop edi
// 004cb1f5  8bc6                 mov eax, esi
// 004cb1f7  5e                   pop esi
// 004cb1f8  5d                   pop ebp
// 004cb1f9  5b                   pop ebx
// 004cb1fa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cb1fe  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb205  83c434               add esp, 0x34
// 004cb208  c3                   ret 
// 004cb209  85db                 test ebx, ebx
// 004cb20b  7506                 jne 0x4cb213
// 004cb20d  ff1544e97700         call dword ptr [0x77e944]
// 004cb213  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cb217  3b5304               cmp edx, dword ptr [ebx + 4]
// 004cb21a  7506                 jne 0x4cb222
// 004cb21c  ff1544e97700         call dword ptr [0x77e944]
// 004cb222  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cb226  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004cb22a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004cb22d  5f                   pop edi
// 004cb22e  5e                   pop esi
// 004cb22f  5d                   pop ebp
// 004cb230  5b                   pop ebx
// 004cb231  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb238  83c434               add esp, 0x34
// 004cb23b  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
