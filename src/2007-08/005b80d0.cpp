// roc 2007-08 005b80d0  unit: RBX::$01::?$SurfaceDescriptor  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b80d0
//
// 005b80d0  83ec10               sub esp, 0x10
// 005b80d3  53                   push ebx
// 005b80d4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005b80d8  55                   push ebp
// 005b80d9  56                   push esi
// 005b80da  57                   push edi
// 005b80db  8bf9                 mov edi, ecx
// 005b80dd  8d442424             lea eax, [esp + 0x24]
// 005b80e1  50                   push eax
// 005b80e2  8d4c2414             lea ecx, [esp + 0x14]
// 005b80e6  8d7728               lea esi, [edi + 0x28]
// 005b80e9  51                   push ecx
// 005b80ea  8bce                 mov ecx, esi
// 005b80ec  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005b80f0  e8cb73e9ff           call 0x44f4c0
// 005b80f5  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005b80f9  85ed                 test ebp, ebp
// 005b80fb  8b5604               mov edx, dword ptr [esi + 4]
// 005b80fe  8954241c             mov dword ptr [esp + 0x1c], edx
// 005b8102  7404                 je 0x5b8108
// 005b8104  3bee                 cmp ebp, esi
// 005b8106  7406                 je 0x5b810e
// 005b8108  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b810e  8b742414             mov esi, dword ptr [esp + 0x14]
// 005b8112  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 005b8116  742a                 je 0x5b8142
// 005b8118  85ed                 test ebp, ebp
// 005b811a  7506                 jne 0x5b8122
// 005b811c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b8122  3b7504               cmp esi, dword ptr [ebp + 4]
// 005b8125  7506                 jne 0x5b812d
// 005b8127  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b812d  8b4610               mov eax, dword ptr [esi + 0x10]
// 005b8130  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005b8134  5f                   pop edi
// 005b8135  5e                   pop esi
// 005b8136  5d                   pop ebp
// 005b8137  8901                 mov dword ptr [ecx], eax
// 005b8139  b001                 mov al, 1
// 005b813b  5b                   pop ebx
// 005b813c  83c410               add esp, 0x10
// 005b813f  c20800               ret 8
// 005b8142  8d542424             lea edx, [esp + 0x24]
// 005b8146  52                   push edx
// 005b8147  8d44241c             lea eax, [esp + 0x1c]
// 005b814b  8d7734               lea esi, [edi + 0x34]
// 005b814e  50                   push eax
// 005b814f  8bce                 mov ecx, esi
// 005b8151  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005b8155  e86673e9ff           call 0x44f4c0
// 005b815a  8b38                 mov edi, dword ptr [eax]
// 005b815c  85ff                 test edi, edi
// 005b815e  8b5804               mov ebx, dword ptr [eax + 4]
// 005b8161  8b6e04               mov ebp, dword ptr [esi + 4]
// 005b8164  7404                 je 0x5b816a
// 005b8166  3bfe                 cmp edi, esi
// 005b8168  740a                 je 0x5b8174
// 005b816a  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 005b8170  ffd6                 call esi
// 005b8172  eb06                 jmp 0x5b817a
// 005b8174  8b35d8e67700         mov esi, dword ptr [0x77e6d8]
// 005b817a  3bdd                 cmp ebx, ebp
// 005b817c  7422                 je 0x5b81a0
// 005b817e  85ff                 test edi, edi
// 005b8180  7502                 jne 0x5b8184
// 005b8182  ffd6                 call esi
// 005b8184  3b5f04               cmp ebx, dword ptr [edi + 4]
// 005b8187  7502                 jne 0x5b818b
// 005b8189  ffd6                 call esi
// 005b818b  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 005b818e  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b8192  5f                   pop edi
// 005b8193  5e                   pop esi
// 005b8194  5d                   pop ebp
// 005b8195  890a                 mov dword ptr [edx], ecx
// 005b8197  b001                 mov al, 1
// 005b8199  5b                   pop ebx
// 005b819a  83c410               add esp, 0x10
// 005b819d  c20800               ret 8
// 005b81a0  5f                   pop edi
// 005b81a1  5e                   pop esi
// 005b81a2  5d                   pop ebp
// 005b81a3  32c0                 xor al, al
// 005b81a5  5b                   pop ebx
// 005b81a6  83c410               add esp, 0x10
// 005b81a9  c20800               ret 8
// library rbxgs/v8datamodel\Camera.cpp (function ?convertToValue@?$EnumDesc@W4CameraType@Camera@RBX@@@Reflection@RBX@@QBE_NABVName@3@AAW4CameraType@Camera@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
