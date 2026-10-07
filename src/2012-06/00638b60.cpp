// roc 2012-06 00638b60  unit: G3D::TextInput::TokenException  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638b60
//
// 00638b60  6aff                 push -1
// 00638b62  68b207ad00           push 0xad07b2
// 00638b67  64a100000000         mov eax, dword ptr fs:[0]
// 00638b6d  50                   push eax
// 00638b6e  64892500000000       mov dword ptr fs:[0], esp
// 00638b75  83ec38               sub esp, 0x38
// 00638b78  8b442450             mov eax, dword ptr [esp + 0x50]
// 00638b7c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00638b80  56                   push esi
// 00638b81  50                   push eax
// 00638b82  51                   push ecx
// 00638b83  8d542428             lea edx, [esp + 0x28]
// 00638b87  52                   push edx
// 00638b88  e893000000           call 0x638c20
// 00638b8d  83c40c               add esp, 0xc
// 00638b90  8d4c2404             lea ecx, [esp + 4]
// 00638b94  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00638b9c  ff155426b200         call dword ptr [0xb22654]
// 00638ba2  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00638ba6  8d442404             lea eax, [esp + 4]
// 00638baa  50                   push eax
// 00638bab  8d4c2424             lea ecx, [esp + 0x24]
// 00638baf  51                   push ecx
// 00638bb0  8bce                 mov ecx, esi
// 00638bb2  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00638bb7  e844f9ffff           call 0x638500
// 00638bbc  8d542404             lea edx, [esp + 4]
// 00638bc0  52                   push edx
// 00638bc1  8bce                 mov ecx, esi
// 00638bc3  e898fcffff           call 0x638860
// 00638bc8  8d4c2404             lea ecx, [esp + 4]
// 00638bcc  c644244400           mov byte ptr [esp + 0x44], 0
// 00638bd1  ff153c26b200         call dword ptr [0xb2263c]
// 00638bd7  8d4c2420             lea ecx, [esp + 0x20]
// 00638bdb  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00638be3  ff153c26b200         call dword ptr [0xb2263c]
// 00638be9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00638bed  5e                   pop esi
// 00638bee  64890d00000000       mov dword ptr fs:[0], ecx
// 00638bf5  83c444               add esp, 0x44
// 00638bf8  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
