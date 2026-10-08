// roc 2007-08 004d6860  unit: RBX::View::Part  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d6860
//
// 004d6860  6aff                 push -1
// 004d6862  682b127500           push 0x75122b
// 004d6867  64a100000000         mov eax, dword ptr fs:[0]
// 004d686d  50                   push eax
// 004d686e  64892500000000       mov dword ptr fs:[0], esp
// 004d6875  83ec28               sub esp, 0x28
// 004d6878  53                   push ebx
// 004d6879  55                   push ebp
// 004d687a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004d687e  56                   push esi
// 004d687f  8b742444             mov esi, dword ptr [esp + 0x44]
// 004d6883  d906                 fld dword ptr [esi]
// 004d6885  57                   push edi
// 004d6886  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 004d688a  d95c2420             fstp dword ptr [esp + 0x20]
// 004d688e  d94604               fld dword ptr [esi + 4]
// 004d6891  8d442420             lea eax, [esp + 0x20]
// 004d6895  d95c2424             fstp dword ptr [esp + 0x24]
// 004d6899  50                   push eax
// 004d689a  d94608               fld dword ptr [esi + 8]
// 004d689d  8d4c2414             lea ecx, [esp + 0x14]
// 004d68a1  d95c242c             fstp dword ptr [esp + 0x2c]
// 004d68a5  51                   push ecx
// 004d68a6  d907                 fld dword ptr [edi]
// 004d68a8  b948fa8b00           mov ecx, 0x8bfa48
// 004d68ad  d95c2438             fstp dword ptr [esp + 0x38]
// 004d68b1  896c2434             mov dword ptr [esp + 0x34], ebp
// 004d68b5  d94704               fld dword ptr [edi + 4]
// 004d68b8  d95c243c             fstp dword ptr [esp + 0x3c]
// 004d68bc  e8ffbdffff           call 0x4d26c0
// 004d68c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d68c5  85db                 test ebx, ebx
// 004d68c7  8b154cfa8b00         mov edx, dword ptr [0x8bfa4c]
// 004d68cd  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d68d1  7408                 je 0x4d68db
// 004d68d3  81fb48fa8b00         cmp ebx, 0x8bfa48
// 004d68d9  7406                 je 0x4d68e1
// 004d68db  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d68e1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d68e5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 004d68e9  755e                 jne 0x4d6949
// 004d68eb  6a50                 push 0x50
// 004d68ed  e804961500           call 0x62fef6
// 004d68f2  83c404               add esp, 4
// 004d68f5  89442448             mov dword ptr [esp + 0x48], eax
// 004d68f9  85c0                 test eax, eax
// 004d68fb  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004d6903  740e                 je 0x4d6913
// 004d6905  57                   push edi
// 004d6906  55                   push ebp
// 004d6907  56                   push esi
// 004d6908  8bc8                 mov ecx, eax
// 004d690a  e891420100           call 0x4eaba0
// 004d690f  8bf0                 mov esi, eax
// 004d6911  eb02                 jmp 0x4d6915
// 004d6913  33f6                 xor esi, esi
// 004d6915  8d4c2420             lea ecx, [esp + 0x20]
// 004d6919  51                   push ecx
// 004d691a  b948fa8b00           mov ecx, 0x8bfa48
// 004d691f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004d6927  e8f4efffff           call 0x4d5920
// 004d692c  56                   push esi
// 004d692d  8bc8                 mov ecx, eax
// 004d692f  e83ce6f9ff           call 0x474f70
// 004d6934  5f                   pop edi
// 004d6935  8bc6                 mov eax, esi
// 004d6937  5e                   pop esi
// 004d6938  5d                   pop ebp
// 004d6939  5b                   pop ebx
// 004d693a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004d693e  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6945  83c434               add esp, 0x34
// 004d6948  c3                   ret 
// 004d6949  85db                 test ebx, ebx
// 004d694b  7506                 jne 0x4d6953
// 004d694d  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6953  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d6957  3b5304               cmp edx, dword ptr [ebx + 4]
// 004d695a  7506                 jne 0x4d6962
// 004d695c  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d6962  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6966  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004d696a  8b4024               mov eax, dword ptr [eax + 0x24]
// 004d696d  5f                   pop edi
// 004d696e  5e                   pop esi
// 004d696f  5d                   pop ebp
// 004d6970  5b                   pop ebx
// 004d6971  64890d00000000       mov dword ptr fs:[0], ecx
// 004d6978  83c434               add esp, 0x34
// 004d697b  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ?createTexture@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@SAPAVPBBMesh@23@ABVVector3@G3D@@W4NormalId@3@ABVVector2@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
