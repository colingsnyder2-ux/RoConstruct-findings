// roc 2010-06 00493ed0  unit: seg_00490000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493ed0
//
// 00493ed0  803db838c00000       cmp byte ptr [0xc038b8], 0
// 00493ed7  56                   push esi
// 00493ed8  8bf1                 mov esi, ecx
// 00493eda  740d                 je 0x493ee9
// 00493edc  6a00                 push 0
// 00493ede  6892880000           push 0x8892
// 00493ee3  ff15843ac000         call dword ptr [0xc03a84]
// 00493ee9  ff15bcaa9e00         call dword ptr [0x9eaabc]
// 00493eef  c6861201000000       mov byte ptr [esi + 0x112], 0
// 00493ef6  8b4638               mov eax, dword ptr [esi + 0x38]
// 00493ef9  85c0                 test eax, eax
// 00493efb  742c                 je 0x493f29
// 00493efd  83c004               add eax, 4
// 00493f00  50                   push eax
// 00493f01  ff157ca39e00         call dword ptr [0x9ea37c]
// 00493f07  85c0                 test eax, eax
// 00493f09  7517                 jne 0x493f22
// 00493f0b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00493f0e  e80dfcfeff           call 0x483b20
// 00493f13  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00493f16  85c9                 test ecx, ecx
// 00493f18  7408                 je 0x493f22
// 00493f1a  8b01                 mov eax, dword ptr [ecx]
// 00493f1c  8b10                 mov edx, dword ptr [eax]
// 00493f1e  6a01                 push 1
// 00493f20  ffd2                 call edx
// 00493f22  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00493f29  5e                   pop esi
// 00493f2a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
