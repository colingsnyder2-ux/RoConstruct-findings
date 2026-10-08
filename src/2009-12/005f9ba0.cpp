// roc 2009-12 005f9ba0  unit: G3D::LineSegment  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9ba0
//
// 005f9ba0  8b442404             mov eax, dword ptr [esp + 4]
// 005f9ba4  8b10                 mov edx, dword ptr [eax]
// 005f9ba6  895134               mov dword ptr [ecx + 0x34], edx
// 005f9ba9  8b5004               mov edx, dword ptr [eax + 4]
// 005f9bac  895138               mov dword ptr [ecx + 0x38], edx
// 005f9baf  8b5008               mov edx, dword ptr [eax + 8]
// 005f9bb2  89513c               mov dword ptr [ecx + 0x3c], edx
// 005f9bb5  8b500c               mov edx, dword ptr [eax + 0xc]
// 005f9bb8  895140               mov dword ptr [ecx + 0x40], edx
// 005f9bbb  8b5010               mov edx, dword ptr [eax + 0x10]
// 005f9bbe  895144               mov dword ptr [ecx + 0x44], edx
// 005f9bc1  8b4014               mov eax, dword ptr [eax + 0x14]
// 005f9bc4  894148               mov dword ptr [ecx + 0x48], eax
// 005f9bc7  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 005f9bca  0faf4140             imul eax, dword ptr [ecx + 0x40]
// 005f9bce  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 005f9bd1  4a                   dec edx
// 005f9bd2  85c0                 test eax, eax
// 005f9bd4  7f04                 jg 0x5f9bda
// 005f9bd6  33c0                 xor eax, eax
// 005f9bd8  eb06                 jmp 0x5f9be0
// 005f9bda  3bc2                 cmp eax, edx
// 005f9bdc  7c02                 jl 0x5f9be0
// 005f9bde  8bc2                 mov eax, edx
// 005f9be0  83794400             cmp dword ptr [ecx + 0x44], 0
// 005f9be4  894150               mov dword ptr [ecx + 0x50], eax
// 005f9be7  b828fd9900           mov eax, 0x99fd28
// 005f9bec  7405                 je 0x5f9bf3
// 005f9bee  b81cd89a00           mov eax, 0x9ad81c
// 005f9bf3  89442404             mov dword ptr [esp + 4], eax
// 005f9bf7  83c154               add ecx, 0x54
// 005f9bfa  ff2500b79800         jmp dword ptr [0x98b700]
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?setOptions@TextOutput@G3D@@AAEXABVOptions@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
