// roc 2009-06 0089d6c0  unit: seg_00890000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d6c0
//
// 0089d6c0  a15c89a500           mov eax, dword ptr [0xa5895c]
// 0089d6c5  85c0                 test eax, eax
// 0089d6c7  7435                 je 0x89d6fe
// 0089d6c9  83c004               add eax, 4
// 0089d6cc  50                   push eax
// 0089d6cd  ff15a4e18900         call dword ptr [0x89e1a4]
// 0089d6d3  85c0                 test eax, eax
// 0089d6d5  751d                 jne 0x89d6f4
// 0089d6d7  8b0d5c89a500         mov ecx, dword ptr [0xa5895c]
// 0089d6dd  e89e76baff           call 0x444d80
// 0089d6e2  8b0d5c89a500         mov ecx, dword ptr [0xa5895c]
// 0089d6e8  85c9                 test ecx, ecx
// 0089d6ea  7408                 je 0x89d6f4
// 0089d6ec  8b01                 mov eax, dword ptr [ecx]
// 0089d6ee  8b10                 mov edx, dword ptr [eax]
// 0089d6f0  6a01                 push 1
// 0089d6f2  ffd2                 call edx
// 0089d6f4  c7055c89a50000000000 mov dword ptr [0xa5895c], 0
// 0089d6fe  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
