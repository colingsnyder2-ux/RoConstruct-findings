// from server: 100% by auto
// roc 2009-06 005795b0  unit: G3D::LineSegment  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005795b0
//
// 005795b0  8b442404             mov eax, dword ptr [esp + 4]
// 005795b4  8b10                 mov edx, dword ptr [eax]
// 005795b6  895134               mov dword ptr [ecx + 0x34], edx
// 005795b9  8b5004               mov edx, dword ptr [eax + 4]
// 005795bc  895138               mov dword ptr [ecx + 0x38], edx
// 005795bf  8b5008               mov edx, dword ptr [eax + 8]
// 005795c2  89513c               mov dword ptr [ecx + 0x3c], edx
// 005795c5  8b500c               mov edx, dword ptr [eax + 0xc]
// 005795c8  895140               mov dword ptr [ecx + 0x40], edx
// 005795cb  8b5010               mov edx, dword ptr [eax + 0x10]
// 005795ce  895144               mov dword ptr [ecx + 0x44], edx
// 005795d1  8b4014               mov eax, dword ptr [eax + 0x14]
// 005795d4  894148               mov dword ptr [ecx + 0x48], eax
// 005795d7  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 005795da  0faf4140             imul eax, dword ptr [ecx + 0x40]
// 005795de  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005795e1  4a                   dec edx
// 005795e2  85c0                 test eax, eax
// 005795e4  7f04                 jg 0x5795ea
// 005795e6  33c0                 xor eax, eax
// 005795e8  eb06                 jmp 0x5795f0
// 005795ea  3bc2                 cmp eax, edx
// 005795ec  7c02                 jl 0x5795f0
// 005795ee  8bc2                 mov eax, edx
// 005795f0  83794400             cmp dword ptr [ecx + 0x44], 0
// 005795f4  894150               mov dword ptr [ecx + 0x50], eax
// 005795f7  b8e8d18a00           mov eax, 0x8ad1e8
// 005795fc  7405                 je 0x579603
// 005795fe  b83c938b00           mov eax, 0x8b933c
// 00579603  89442404             mov dword ptr [esp + 4], eax
// 00579607  83c154               add ecx, 0x54
// 0057960a  ff25a8e48900         jmp dword ptr [0x89e4a8]
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?setOptions@TextOutput@G3D@@AAEXABVOptions@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
