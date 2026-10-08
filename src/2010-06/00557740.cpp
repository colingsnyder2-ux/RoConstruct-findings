// from server: 100% by auto
// roc 2010-06 00557740  unit: seg_00550000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557740
//
// 00557740  8b442404             mov eax, dword ptr [esp + 4]
// 00557744  8b10                 mov edx, dword ptr [eax]
// 00557746  895134               mov dword ptr [ecx + 0x34], edx
// 00557749  8b5004               mov edx, dword ptr [eax + 4]
// 0055774c  895138               mov dword ptr [ecx + 0x38], edx
// 0055774f  8b5008               mov edx, dword ptr [eax + 8]
// 00557752  89513c               mov dword ptr [ecx + 0x3c], edx
// 00557755  8b500c               mov edx, dword ptr [eax + 0xc]
// 00557758  895140               mov dword ptr [ecx + 0x40], edx
// 0055775b  8b5010               mov edx, dword ptr [eax + 0x10]
// 0055775e  895144               mov dword ptr [ecx + 0x44], edx
// 00557761  8b4014               mov eax, dword ptr [eax + 0x14]
// 00557764  894148               mov dword ptr [ecx + 0x48], eax
// 00557767  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0055776a  0faf4140             imul eax, dword ptr [ecx + 0x40]
// 0055776e  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 00557771  4a                   dec edx
// 00557772  85c0                 test eax, eax
// 00557774  7f04                 jg 0x55777a
// 00557776  33c0                 xor eax, eax
// 00557778  eb06                 jmp 0x557780
// 0055777a  3bc2                 cmp eax, edx
// 0055777c  7c02                 jl 0x557780
// 0055777e  8bc2                 mov eax, edx
// 00557780  83794400             cmp dword ptr [ecx + 0x44], 0
// 00557784  894150               mov dword ptr [ecx + 0x50], eax
// 00557787  b8d008a000           mov eax, 0xa008d0
// 0055778c  7405                 je 0x557793
// 0055778e  b81ce7a000           mov eax, 0xa0e71c
// 00557793  89442404             mov dword ptr [esp + 4], eax
// 00557797  83c154               add ecx, 0x54
// 0055779a  ff251ca49e00         jmp dword ptr [0x9ea41c]
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?setOptions@TextOutput@G3D@@AAEXABVOptions@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
