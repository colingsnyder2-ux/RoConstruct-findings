// from server: 100% by auto
// roc 2008-06 00512360  unit: G3D::GCamera  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512360
//
// 00512360  8b442404             mov eax, dword ptr [esp + 4]
// 00512364  8b10                 mov edx, dword ptr [eax]
// 00512366  895134               mov dword ptr [ecx + 0x34], edx
// 00512369  8b5004               mov edx, dword ptr [eax + 4]
// 0051236c  895138               mov dword ptr [ecx + 0x38], edx
// 0051236f  8b5008               mov edx, dword ptr [eax + 8]
// 00512372  89513c               mov dword ptr [ecx + 0x3c], edx
// 00512375  8b500c               mov edx, dword ptr [eax + 0xc]
// 00512378  895140               mov dword ptr [ecx + 0x40], edx
// 0051237b  8b5010               mov edx, dword ptr [eax + 0x10]
// 0051237e  895144               mov dword ptr [ecx + 0x44], edx
// 00512381  8b4014               mov eax, dword ptr [eax + 0x14]
// 00512384  894148               mov dword ptr [ecx + 0x48], eax
// 00512387  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0051238a  0faf4140             imul eax, dword ptr [ecx + 0x40]
// 0051238e  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00512391  4a                   dec edx
// 00512392  85c0                 test eax, eax
// 00512394  7f04                 jg 0x51239a
// 00512396  33c0                 xor eax, eax
// 00512398  eb06                 jmp 0x5123a0
// 0051239a  3bc2                 cmp eax, edx
// 0051239c  7c02                 jl 0x5123a0
// 0051239e  8bc2                 mov eax, edx
// 005123a0  83794400             cmp dword ptr [ecx + 0x44], 0
// 005123a4  894150               mov dword ptr [ecx + 0x50], eax
// 005123a7  b8e8b68000           mov eax, 0x80b6e8
// 005123ac  7405                 je 0x5123b3
// 005123ae  b844878100           mov eax, 0x818744
// 005123b3  89442404             mov dword ptr [esp + 4], eax
// 005123b7  83c154               add ecx, 0x54
// 005123ba  ff254c248000         jmp dword ptr [0x80244c]
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?setOptions@TextOutput@G3D@@AAEXABVOptions@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
