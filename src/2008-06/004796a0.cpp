// roc 2008-06 004796a0  unit: CInstanceRecord::CNameItem  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004796a0
//
// 004796a0  803d7cee960000       cmp byte ptr [0x96ee7c], 0
// 004796a7  56                   push esi
// 004796a8  8bf1                 mov esi, ecx
// 004796aa  740d                 je 0x4796b9
// 004796ac  6a00                 push 0
// 004796ae  6892880000           push 0x8892
// 004796b3  ff15e4f89600         call dword ptr [0x96f8e4]
// 004796b9  ff15bc2a8000         call dword ptr [0x802abc]
// 004796bf  c6861201000000       mov byte ptr [esi + 0x112], 0
// 004796c6  8b4638               mov eax, dword ptr [esi + 0x38]
// 004796c9  85c0                 test eax, eax
// 004796cb  742c                 je 0x4796f9
// 004796cd  83c004               add eax, 4
// 004796d0  50                   push eax
// 004796d1  ff15ac218000         call dword ptr [0x8021ac]
// 004796d7  85c0                 test eax, eax
// 004796d9  7517                 jne 0x4796f2
// 004796db  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004796de  e8ad16feff           call 0x45ad90
// 004796e3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004796e6  85c9                 test ecx, ecx
// 004796e8  7408                 je 0x4796f2
// 004796ea  8b01                 mov eax, dword ptr [ecx]
// 004796ec  8b10                 mov edx, dword ptr [eax]
// 004796ee  6a01                 push 1
// 004796f0  ffd2                 call edx
// 004796f2  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004796f9  5e                   pop esi
// 004796fa  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
