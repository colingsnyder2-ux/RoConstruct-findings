// roc 2010-06 009ddd40  unit: seg_009d0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddd40
//
// 009ddd40  a11888c000           mov eax, dword ptr [0xc08818]
// 009ddd45  85c0                 test eax, eax
// 009ddd47  7435                 je 0x9ddd7e
// 009ddd49  83c004               add eax, 4
// 009ddd4c  50                   push eax
// 009ddd4d  ff157ca39e00         call dword ptr [0x9ea37c]
// 009ddd53  85c0                 test eax, eax
// 009ddd55  751d                 jne 0x9ddd74
// 009ddd57  8b0d1888c000         mov ecx, dword ptr [0xc08818]
// 009ddd5d  e8be5daaff           call 0x483b20
// 009ddd62  8b0d1888c000         mov ecx, dword ptr [0xc08818]
// 009ddd68  85c9                 test ecx, ecx
// 009ddd6a  7408                 je 0x9ddd74
// 009ddd6c  8b01                 mov eax, dword ptr [ecx]
// 009ddd6e  8b10                 mov edx, dword ptr [eax]
// 009ddd70  6a01                 push 1
// 009ddd72  ffd2                 call edx
// 009ddd74  c7051888c00000000000 mov dword ptr [0xc08818], 0
// 009ddd7e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
