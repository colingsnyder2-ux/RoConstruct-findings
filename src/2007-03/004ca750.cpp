// roc 2007-03 004ca750  unit: seg_004c0000  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ca750
//
// 004ca750  6aff                 push -1
// 004ca752  68cbd77400           push 0x74d7cb
// 004ca757  64a100000000         mov eax, dword ptr fs:[0]
// 004ca75d  50                   push eax
// 004ca75e  64892500000000       mov dword ptr fs:[0], esp
// 004ca765  83ec18               sub esp, 0x18
// 004ca768  53                   push ebx
// 004ca769  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004ca76d  55                   push ebp
// 004ca76e  56                   push esi
// 004ca76f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004ca773  d906                 fld dword ptr [esi]
// 004ca775  57                   push edi
// 004ca776  d95c2418             fstp dword ptr [esp + 0x18]
// 004ca77a  8d442418             lea eax, [esp + 0x18]
// 004ca77e  d94604               fld dword ptr [esi + 4]
// 004ca781  50                   push eax
// 004ca782  d95c2420             fstp dword ptr [esp + 0x20]
// 004ca786  8d4c2414             lea ecx, [esp + 0x14]
// 004ca78a  d94608               fld dword ptr [esi + 8]
// 004ca78d  51                   push ecx
// 004ca78e  b9ec9e8b00           mov ecx, 0x8b9eec
// 004ca793  d95c2428             fstp dword ptr [esp + 0x28]
// 004ca797  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004ca79b  e890bfffff           call 0x4c6730
// 004ca7a0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ca7a4  85ff                 test edi, edi
// 004ca7a6  8b2df09e8b00         mov ebp, dword ptr [0x8b9ef0]
// 004ca7ac  7408                 je 0x4ca7b6
// 004ca7ae  81ffec9e8b00         cmp edi, 0x8b9eec
// 004ca7b4  7406                 je 0x4ca7bc
// 004ca7b6  ff1544e97700         call dword ptr [0x77e944]
// 004ca7bc  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004ca7c0  755d                 jne 0x4ca81f
// 004ca7c2  6a50                 push 0x50
// 004ca7c4  e83f391500           call 0x61e108
// 004ca7c9  83c404               add esp, 4
// 004ca7cc  89442438             mov dword ptr [esp + 0x38], eax
// 004ca7d0  85c0                 test eax, eax
// 004ca7d2  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004ca7da  740d                 je 0x4ca7e9
// 004ca7dc  53                   push ebx
// 004ca7dd  56                   push esi
// 004ca7de  8bc8                 mov ecx, eax
// 004ca7e0  e82bdc0000           call 0x4d8410
// 004ca7e5  8bf0                 mov esi, eax
// 004ca7e7  eb02                 jmp 0x4ca7eb
// 004ca7e9  33f6                 xor esi, esi
// 004ca7eb  8d542418             lea edx, [esp + 0x18]
// 004ca7ef  52                   push edx
// 004ca7f0  b9ec9e8b00           mov ecx, 0x8b9eec
// 004ca7f5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004ca7fd  e8def3ffff           call 0x4c9be0
// 004ca802  56                   push esi
// 004ca803  8bc8                 mov ecx, eax
// 004ca805  e886a8faff           call 0x475090
// 004ca80a  5f                   pop edi
// 004ca80b  8bc6                 mov eax, esi
// 004ca80d  5e                   pop esi
// 004ca80e  5d                   pop ebp
// 004ca80f  5b                   pop ebx
// 004ca810  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ca814  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca81b  83c424               add esp, 0x24
// 004ca81e  c3                   ret 
// 004ca81f  85ff                 test edi, edi
// 004ca821  7506                 jne 0x4ca829
// 004ca823  ff1544e97700         call dword ptr [0x77e944]
// 004ca829  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ca82d  3b4704               cmp eax, dword ptr [edi + 4]
// 004ca830  7506                 jne 0x4ca838
// 004ca832  ff1544e97700         call dword ptr [0x77e944]
// 004ca838  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ca83c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004ca83f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ca843  5f                   pop edi
// 004ca844  5e                   pop esi
// 004ca845  5d                   pop ebp
// 004ca846  5b                   pop ebx
// 004ca847  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca84e  83c424               add esp, 0x24
// 004ca851  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
