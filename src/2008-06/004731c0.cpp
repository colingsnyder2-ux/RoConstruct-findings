// from server: 100% by auto
// roc 2008-06 004731c0  unit: G3D::ReferenceCountedObject  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004731c0
//
// 004731c0  81ec0c010000         sub esp, 0x10c
// 004731c6  33d2                 xor edx, edx
// 004731c8  89542404             mov dword ptr [esp + 4], edx
// 004731cc  db442404             fild dword ptr [esp + 4]
// 004731d0  dc8c2410010000       fmul qword ptr [esp + 0x110]
// 004731d7  dd5c2404             fstp qword ptr [esp + 4]
// 004731db  dd442404             fld qword ptr [esp + 4]
// 004731df  db1c24               fistp dword ptr [esp]
// 004731e2  8b0424               mov eax, dword ptr [esp]
// 004731e5  85c0                 test eax, eax
// 004731e7  7f04                 jg 0x4731ed
// 004731e9  33c0                 xor eax, eax
// 004731eb  eb0c                 jmp 0x4731f9
// 004731ed  3dff000000           cmp eax, 0xff
// 004731f2  7c05                 jl 0x4731f9
// 004731f4  b8ff000000           mov eax, 0xff
// 004731f9  8844140c             mov byte ptr [esp + edx + 0xc], al
// 004731fd  42                   inc edx
// 004731fe  81fa00010000         cmp edx, 0x100
// 00473204  89542404             mov dword ptr [esp + 4], edx
// 00473208  7cc2                 jl 0x4731cc
// 0047320a  33c0                 xor eax, eax
// 0047320c  85f6                 test esi, esi
// 0047320e  7e31                 jle 0x473241
// 00473210  0fb61408             movzx edx, byte ptr [eax + ecx]
// 00473214  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 00473219  881408               mov byte ptr [eax + ecx], dl
// 0047321c  0fb6540101           movzx edx, byte ptr [ecx + eax + 1]
// 00473221  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 00473226  88540101             mov byte ptr [ecx + eax + 1], dl
// 0047322a  0fb6540102           movzx edx, byte ptr [ecx + eax + 2]
// 0047322f  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 00473234  88540102             mov byte ptr [ecx + eax + 2], dl
// 00473238  83c003               add eax, 3
// 0047323b  03c7                 add eax, edi
// 0047323d  3bc6                 cmp eax, esi
// 0047323f  7ccf                 jl 0x473210
// 00473241  81c40c010000         add esp, 0x10c
// 00473247  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?brightenImage@G3D@@YAXPAEHNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
