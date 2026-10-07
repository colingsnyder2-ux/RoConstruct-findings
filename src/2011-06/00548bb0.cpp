// roc 2011-06 00548bb0  unit: G3D::TextInput::TokenException  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00548bb0
//
// 00548bb0  6aff                 push -1
// 00548bb2  6892f79e00           push 0x9ef792
// 00548bb7  64a100000000         mov eax, dword ptr fs:[0]
// 00548bbd  50                   push eax
// 00548bbe  64892500000000       mov dword ptr fs:[0], esp
// 00548bc5  83ec38               sub esp, 0x38
// 00548bc8  8b442450             mov eax, dword ptr [esp + 0x50]
// 00548bcc  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00548bd0  56                   push esi
// 00548bd1  50                   push eax
// 00548bd2  51                   push ecx
// 00548bd3  8d542428             lea edx, [esp + 0x28]
// 00548bd7  52                   push edx
// 00548bd8  e893000000           call 0x548c70
// 00548bdd  83c40c               add esp, 0xc
// 00548be0  8d4c2404             lea ecx, [esp + 4]
// 00548be4  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00548bec  ff15bc04a400         call dword ptr [0xa404bc]
// 00548bf2  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00548bf6  8d442404             lea eax, [esp + 4]
// 00548bfa  50                   push eax
// 00548bfb  8d4c2424             lea ecx, [esp + 0x24]
// 00548bff  51                   push ecx
// 00548c00  8bce                 mov ecx, esi
// 00548c02  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00548c07  e844f9ffff           call 0x548550
// 00548c0c  8d542404             lea edx, [esp + 4]
// 00548c10  52                   push edx
// 00548c11  8bce                 mov ecx, esi
// 00548c13  e898fcffff           call 0x5488b0
// 00548c18  8d4c2404             lea ecx, [esp + 4]
// 00548c1c  c644244400           mov byte ptr [esp + 0x44], 0
// 00548c21  ff15d004a400         call dword ptr [0xa404d0]
// 00548c27  8d4c2420             lea ecx, [esp + 0x20]
// 00548c2b  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00548c33  ff15d004a400         call dword ptr [0xa404d0]
// 00548c39  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00548c3d  5e                   pop esi
// 00548c3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00548c45  83c444               add esp, 0x44
// 00548c48  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
