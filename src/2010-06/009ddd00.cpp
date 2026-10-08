// from server: 100% by auto
// roc 2010-06 009ddd00  unit: seg_009d0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009ddd00
//
// 009ddd00  a1f887c000           mov eax, dword ptr [0xc087f8]
// 009ddd05  85c0                 test eax, eax
// 009ddd07  7435                 je 0x9ddd3e
// 009ddd09  83c004               add eax, 4
// 009ddd0c  50                   push eax
// 009ddd0d  ff157ca39e00         call dword ptr [0x9ea37c]
// 009ddd13  85c0                 test eax, eax
// 009ddd15  751d                 jne 0x9ddd34
// 009ddd17  8b0df887c000         mov ecx, dword ptr [0xc087f8]
// 009ddd1d  e8fe5daaff           call 0x483b20
// 009ddd22  8b0df887c000         mov ecx, dword ptr [0xc087f8]
// 009ddd28  85c9                 test ecx, ecx
// 009ddd2a  7408                 je 0x9ddd34
// 009ddd2c  8b01                 mov eax, dword ptr [ecx]
// 009ddd2e  8b10                 mov edx, dword ptr [eax]
// 009ddd30  6a01                 push 1
// 009ddd32  ffd2                 call edx
// 009ddd34  c705f887c00000000000 mov dword ptr [0xc087f8], 0
// 009ddd3e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
