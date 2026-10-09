// roc 2007-03 004ca860  unit: seg_004c0000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ca860
//
// 004ca860  6aff                 push -1
// 004ca862  68cbd77400           push 0x74d7cb
// 004ca867  64a100000000         mov eax, dword ptr fs:[0]
// 004ca86d  50                   push eax
// 004ca86e  64892500000000       mov dword ptr fs:[0], esp
// 004ca875  83ec28               sub esp, 0x28
// 004ca878  53                   push ebx
// 004ca879  55                   push ebp
// 004ca87a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004ca87e  56                   push esi
// 004ca87f  8b742444             mov esi, dword ptr [esp + 0x44]
// 004ca883  d906                 fld dword ptr [esi]
// 004ca885  57                   push edi
// 004ca886  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004ca88a  d95c2420             fstp dword ptr [esp + 0x20]
// 004ca88e  d94604               fld dword ptr [esi + 4]
// 004ca891  8d442420             lea eax, [esp + 0x20]
// 004ca895  d95c2424             fstp dword ptr [esp + 0x24]
// 004ca899  50                   push eax
// 004ca89a  d94608               fld dword ptr [esi + 8]
// 004ca89d  8d4c2414             lea ecx, [esp + 0x14]
// 004ca8a1  d95c242c             fstp dword ptr [esp + 0x2c]
// 004ca8a5  51                   push ecx
// 004ca8a6  d907                 fld dword ptr [edi]
// 004ca8a8  b9109f8b00           mov ecx, 0x8b9f10
// 004ca8ad  d95c2438             fstp dword ptr [esp + 0x38]
// 004ca8b1  896c2434             mov dword ptr [esp + 0x34], ebp
// 004ca8b5  d94704               fld dword ptr [edi + 4]
// 004ca8b8  d95c243c             fstp dword ptr [esp + 0x3c]
// 004ca8bc  e8dfbeffff           call 0x4c67a0
// 004ca8c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004ca8c5  85db                 test ebx, ebx
// 004ca8c7  8b15149f8b00         mov edx, dword ptr [0x8b9f14]
// 004ca8cd  8954241c             mov dword ptr [esp + 0x1c], edx
// 004ca8d1  7408                 je 0x4ca8db
// 004ca8d3  81fb109f8b00         cmp ebx, 0x8b9f10
// 004ca8d9  7406                 je 0x4ca8e1
// 004ca8db  ff1544e97700         call dword ptr [0x77e944]
// 004ca8e1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ca8e5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004ca8e9  755e                 jne 0x4ca949
// 004ca8eb  6a50                 push 0x50
// 004ca8ed  e816381500           call 0x61e108
// 004ca8f2  83c404               add esp, 4
// 004ca8f5  89442448             mov dword ptr [esp + 0x48], eax
// 004ca8f9  85c0                 test eax, eax
// 004ca8fb  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004ca903  740e                 je 0x4ca913
// 004ca905  57                   push edi
// 004ca906  55                   push ebp
// 004ca907  56                   push esi
// 004ca908  8bc8                 mov ecx, eax
// 004ca90a  e881dc0000           call 0x4d8590
// 004ca90f  8bf0                 mov esi, eax
// 004ca911  eb02                 jmp 0x4ca915
// 004ca913  33f6                 xor esi, esi
// 004ca915  8d4c2420             lea ecx, [esp + 0x20]
// 004ca919  51                   push ecx
// 004ca91a  b9109f8b00           mov ecx, 0x8b9f10
// 004ca91f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004ca927  e8b4f3ffff           call 0x4c9ce0
// 004ca92c  56                   push esi
// 004ca92d  8bc8                 mov ecx, eax
// 004ca92f  e85ca7faff           call 0x475090
// 004ca934  5f                   pop edi
// 004ca935  8bc6                 mov eax, esi
// 004ca937  5e                   pop esi
// 004ca938  5d                   pop ebp
// 004ca939  5b                   pop ebx
// 004ca93a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ca93e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca945  83c434               add esp, 0x34
// 004ca948  c3                   ret 
// 004ca949  85db                 test ebx, ebx
// 004ca94b  7506                 jne 0x4ca953
// 004ca94d  ff1544e97700         call dword ptr [0x77e944]
// 004ca953  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ca957  3b5304               cmp edx, dword ptr [ebx + 4]
// 004ca95a  7506                 jne 0x4ca962
// 004ca95c  ff1544e97700         call dword ptr [0x77e944]
// 004ca962  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ca966  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004ca96a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004ca96d  5f                   pop edi
// 004ca96e  5e                   pop esi
// 004ca96f  5d                   pop ebp
// 004ca970  5b                   pop ebx
// 004ca971  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca978  83c434               add esp, 0x34
// 004ca97b  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
