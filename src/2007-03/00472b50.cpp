// roc 2007-03 00472b50  unit: seg_00470000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00472b50
//
// 00472b50  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00472b54  56                   push esi
// 00472b55  8d710c               lea esi, [ecx + 0xc]
// 00472b58  7438                 je 0x472b92
// 00472b5a  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00472b5d  56                   push esi
// 00472b5e  e8fd2d0000           call 0x475960
// 00472b63  8b06                 mov eax, dword ptr [esi]
// 00472b65  85c0                 test eax, eax
// 00472b67  7429                 je 0x472b92
// 00472b69  83c004               add eax, 4
// 00472b6c  50                   push eax
// 00472b6d  ff15a8d27700         call dword ptr [0x77d2a8]
// 00472b73  85c0                 test eax, eax
// 00472b75  7515                 jne 0x472b8c
// 00472b77  8b0e                 mov ecx, dword ptr [esi]
// 00472b79  e84208ffff           call 0x4633c0
// 00472b7e  8b0e                 mov ecx, dword ptr [esi]
// 00472b80  85c9                 test ecx, ecx
// 00472b82  7408                 je 0x472b8c
// 00472b84  8b01                 mov eax, dword ptr [ecx]
// 00472b86  8b10                 mov edx, dword ptr [eax]
// 00472b88  6a01                 push 1
// 00472b8a  ffd2                 call edx
// 00472b8c  c70600000000         mov dword ptr [esi], 0
// 00472b92  5e                   pop esi
// 00472b93  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\VARArea.cpp (function ?finish@VARArea@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/VARArea.cpp
