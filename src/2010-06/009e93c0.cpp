// from server: 100% by auto
// roc 2010-06 009e93c0  unit: seg_009e0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e93c0
//
// 009e93c0  a100ccc200           mov eax, dword ptr [0xc2cc00]
// 009e93c5  85c0                 test eax, eax
// 009e93c7  7435                 je 0x9e93fe
// 009e93c9  83c004               add eax, 4
// 009e93cc  50                   push eax
// 009e93cd  ff157ca39e00         call dword ptr [0x9ea37c]
// 009e93d3  85c0                 test eax, eax
// 009e93d5  751d                 jne 0x9e93f4
// 009e93d7  8b0d00ccc200         mov ecx, dword ptr [0xc2cc00]
// 009e93dd  e83ea7a9ff           call 0x483b20
// 009e93e2  8b0d00ccc200         mov ecx, dword ptr [0xc2cc00]
// 009e93e8  85c9                 test ecx, ecx
// 009e93ea  7408                 je 0x9e93f4
// 009e93ec  8b01                 mov eax, dword ptr [ecx]
// 009e93ee  8b10                 mov edx, dword ptr [eax]
// 009e93f0  6a01                 push 1
// 009e93f2  ffd2                 call edx
// 009e93f4  c70500ccc20000000000 mov dword ptr [0xc2cc00], 0
// 009e93fe  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
