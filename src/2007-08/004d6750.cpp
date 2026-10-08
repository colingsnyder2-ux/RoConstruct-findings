// roc 2007-08 004d6750  unit: RBX::View::Part  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6750
//
// 004d6750  6aff                 push -1
// 004d6752  682b127500           push 0x75122b
// 004d6757  64a100000000         mov eax, dword ptr fs:[0]
// 004d675d  50                   push eax
// 004d675e  64892500000000       mov dword ptr fs:[0], esp
// 004d6765  83ec18               sub esp, 0x18
// 004d6768  53                   push ebx
// 004d6769  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004d676d  55                   push ebp
// 004d676e  56                   push esi
// 004d676f  8b742434             mov esi, dword ptr [esp + 0x34]
// 004d6773  d906                 fld dword ptr [esi]
// 004d6775  57                   push edi
// 004d6776  d95c2418             fstp dword ptr [esp + 0x18]
// 004d677a  8d442418             lea eax, [esp + 0x18]
// 004d677e  d94604               fld dword ptr [esi + 4]
// 004d6781  50                   push eax
// 004d6782  d95c2420             fstp dword ptr [esp + 0x20]
// 004d6786  8d4c2414             lea ecx, [esp + 0x14]
// 004d678a  d94608               fld dword ptr [esi + 8]
// 004d678d  51                   push ecx
// 004d678e  b9dcf98b00           mov ecx, 0x8bf9dc
// 004d6793  d95c2428             fstp dword ptr [esp + 0x28]
// 004d6797  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004d679b  e8b0beffff           call 0x4d2650
// 004d67a0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d67a4  85ff                 test edi, edi
// 004d67a6  8b2de0f98b00         mov ebp, dword ptr [0x8bf9e0]
// 004d67ac  7408                 je 0x4d67b6
// 004d67ae  81ffdcf98b00         cmp edi, 0x8bf9dc
// 004d67b4  7406                 je 0x4d67bc
// 004d67b6  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d67bc  396c2414             cmp dword ptr [esp + 0x14], ebp
// 004d67c0  755d                 jne 0x4d681f
// 004d67c2  6a50                 push 0x50
// 004d67c4  e82d971500           call 0x62fef6
// 004d67c9  83c404               add esp, 4
// 004d67cc  89442438             mov dword ptr [esp + 0x38], eax
// 004d67d0  85c0                 test eax, eax
// 004d67d2  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d67da  740d                 je 0x4d67e9
// 004d67dc  53                   push ebx
// 004d67dd  56                   push esi
// 004d67de  8bc8                 mov ecx, eax
// 004d67e0  e83b420100           call 0x4eaa20
// 004d67e5  8bf0                 mov esi, eax
// 004d67e7  eb02                 jmp 0x4d67eb
// 004d67e9  33f6                 xor esi, esi
// 004d67eb  8d542418             lea edx, [esp + 0x18]
// 004d67ef  52                   push edx
// 004d67f0  b9dcf98b00           mov ecx, 0x8bf9dc
// 004d67f5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004d67fd  e81ef0ffff           call 0x4d5820
// 004d6802  56                   push esi
// 004d6803  8bc8                 mov ecx, eax
// 004d6805  e866e7f9ff           call 0x474f70
// 004d680a  5f                   pop edi
// 004d680b  8bc6                 mov eax, esi
// 004d680d  5e                   pop esi
// 004d680e  5d                   pop ebp
// 004d680f  5b                   pop ebx
// 004d6810  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d6814  64890d00000000       mov dword ptr fs:[0], ecx
// 004d681b  83c424               add esp, 0x24
// 004d681e  c3                   ret 
// 004d681f  85ff                 test edi, edi
// 004d6821  7506                 jne 0x4d6829
// 004d6823  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6829  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d682d  3b4704               cmp eax, dword ptr [edi + 4]
// 004d6830  7506                 jne 0x4d6838
// 004d6832  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6838  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d683c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004d683f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d6843  5f                   pop edi
// 004d6844  5e                   pop esi
// 004d6845  5d                   pop ebp
// 004d6846  5b                   pop ebx
// 004d6847  64890d00000000       mov dword ptr fs:[0], ecx
// 004d684e  83c424               add esp, 0x24
// 004d6851  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createDecal@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
