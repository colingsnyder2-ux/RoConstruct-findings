// roc 2007-08 00472a60  unit: G3D::Texture  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472a60
//
// 00472a60  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00472a64  56                   push esi
// 00472a65  8d710c               lea esi, [ecx + 0xc]
// 00472a68  7438                 je 0x472aa2
// 00472a6a  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00472a6d  56                   push esi
// 00472a6e  e8cd2d0000           call 0x475840
// 00472a73  8b06                 mov eax, dword ptr [esi]
// 00472a75  85c0                 test eax, eax
// 00472a77  7429                 je 0x472aa2
// 00472a79  83c004               add eax, 4
// 00472a7c  50                   push eax
// 00472a7d  ff15e8d27700         call dword ptr [0x77d2e8]
// 00472a83  85c0                 test eax, eax
// 00472a85  7515                 jne 0x472a9c
// 00472a87  8b0e                 mov ecx, dword ptr [esi]
// 00472a89  e84253feff           call 0x457dd0
// 00472a8e  8b0e                 mov ecx, dword ptr [esi]
// 00472a90  85c9                 test ecx, ecx
// 00472a92  7408                 je 0x472a9c
// 00472a94  8b01                 mov eax, dword ptr [ecx]
// 00472a96  8b10                 mov edx, dword ptr [eax]
// 00472a98  6a01                 push 1
// 00472a9a  ffd2                 call edx
// 00472a9c  c70600000000         mov dword ptr [esi], 0
// 00472aa2  5e                   pop esi
// 00472aa3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?finish@VARArea@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
