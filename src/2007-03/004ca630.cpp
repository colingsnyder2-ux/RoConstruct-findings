// roc 2007-03 004ca630  unit: seg_004c0000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ca630
//
// 004ca630  6aff                 push -1
// 004ca632  68cbd77400           push 0x74d7cb
// 004ca637  64a100000000         mov eax, dword ptr fs:[0]
// 004ca63d  50                   push eax
// 004ca63e  64892500000000       mov dword ptr fs:[0], esp
// 004ca645  83ec28               sub esp, 0x28
// 004ca648  53                   push ebx
// 004ca649  55                   push ebp
// 004ca64a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004ca64e  56                   push esi
// 004ca64f  8b742444             mov esi, dword ptr [esp + 0x44]
// 004ca653  d906                 fld dword ptr [esi]
// 004ca655  57                   push edi
// 004ca656  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004ca65a  d95c2420             fstp dword ptr [esp + 0x20]
// 004ca65e  d94604               fld dword ptr [esi + 4]
// 004ca661  8d442420             lea eax, [esp + 0x20]
// 004ca665  d95c2424             fstp dword ptr [esp + 0x24]
// 004ca669  50                   push eax
// 004ca66a  d94608               fld dword ptr [esi + 8]
// 004ca66d  8d4c2414             lea ecx, [esp + 0x14]
// 004ca671  d95c242c             fstp dword ptr [esp + 0x2c]
// 004ca675  51                   push ecx
// 004ca676  d907                 fld dword ptr [edi]
// 004ca678  b9289f8b00           mov ecx, 0x8b9f28
// 004ca67d  d95c2438             fstp dword ptr [esp + 0x38]
// 004ca681  896c2434             mov dword ptr [esp + 0x34], ebp
// 004ca685  d94704               fld dword ptr [edi + 4]
// 004ca688  d95c243c             fstp dword ptr [esp + 0x3c]
// 004ca68c  e80fc1ffff           call 0x4c67a0
// 004ca691  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004ca695  85db                 test ebx, ebx
// 004ca697  8b152c9f8b00         mov edx, dword ptr [0x8b9f2c]
// 004ca69d  8954241c             mov dword ptr [esp + 0x1c], edx
// 004ca6a1  7408                 je 0x4ca6ab
// 004ca6a3  81fb289f8b00         cmp ebx, 0x8b9f28
// 004ca6a9  7406                 je 0x4ca6b1
// 004ca6ab  ff1544e97700         call dword ptr [0x77e944]
// 004ca6b1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ca6b5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004ca6b9  755e                 jne 0x4ca719
// 004ca6bb  6a50                 push 0x50
// 004ca6bd  e8463a1500           call 0x61e108
// 004ca6c2  83c404               add esp, 4
// 004ca6c5  89442448             mov dword ptr [esp + 0x48], eax
// 004ca6c9  85c0                 test eax, eax
// 004ca6cb  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004ca6d3  740e                 je 0x4ca6e3
// 004ca6d5  57                   push edi
// 004ca6d6  55                   push ebp
// 004ca6d7  56                   push esi
// 004ca6d8  8bc8                 mov ecx, eax
// 004ca6da  e871ac0000           call 0x4d5350
// 004ca6df  8bf0                 mov esi, eax
// 004ca6e1  eb02                 jmp 0x4ca6e5
// 004ca6e3  33f6                 xor esi, esi
// 004ca6e5  8d4c2420             lea ecx, [esp + 0x20]
// 004ca6e9  51                   push ecx
// 004ca6ea  b9289f8b00           mov ecx, 0x8b9f28
// 004ca6ef  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004ca6f7  e8e4f5ffff           call 0x4c9ce0
// 004ca6fc  56                   push esi
// 004ca6fd  8bc8                 mov ecx, eax
// 004ca6ff  e88ca9faff           call 0x475090
// 004ca704  5f                   pop edi
// 004ca705  8bc6                 mov eax, esi
// 004ca707  5e                   pop esi
// 004ca708  5d                   pop ebp
// 004ca709  5b                   pop ebx
// 004ca70a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ca70e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca715  83c434               add esp, 0x34
// 004ca718  c3                   ret 
// 004ca719  85db                 test ebx, ebx
// 004ca71b  7506                 jne 0x4ca723
// 004ca71d  ff1544e97700         call dword ptr [0x77e944]
// 004ca723  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ca727  3b5304               cmp edx, dword ptr [ebx + 4]
// 004ca72a  7506                 jne 0x4ca732
// 004ca72c  ff1544e97700         call dword ptr [0x77e944]
// 004ca732  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ca736  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004ca73a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004ca73d  5f                   pop edi
// 004ca73e  5e                   pop esi
// 004ca73f  5d                   pop ebp
// 004ca740  5b                   pop ebx
// 004ca741  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca748  83c434               add esp, 0x34
// 004ca74b  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
