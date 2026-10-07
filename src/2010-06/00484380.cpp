// roc 2010-06 00484380  unit: G3D::ReferenceCountedObject  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00484380
//
// 00484380  81ec0c010000         sub esp, 0x10c
// 00484386  33d2                 xor edx, edx
// 00484388  89542404             mov dword ptr [esp + 4], edx
// 0048438c  db442404             fild dword ptr [esp + 4]
// 00484390  dc8c2410010000       fmul qword ptr [esp + 0x110]
// 00484397  dd5c2404             fstp qword ptr [esp + 4]
// 0048439b  dd442404             fld qword ptr [esp + 4]
// 0048439f  db1c24               fistp dword ptr [esp]
// 004843a2  8b0424               mov eax, dword ptr [esp]
// 004843a5  85c0                 test eax, eax
// 004843a7  7f04                 jg 0x4843ad
// 004843a9  33c0                 xor eax, eax
// 004843ab  eb0c                 jmp 0x4843b9
// 004843ad  3dff000000           cmp eax, 0xff
// 004843b2  7c05                 jl 0x4843b9
// 004843b4  b8ff000000           mov eax, 0xff
// 004843b9  8844140c             mov byte ptr [esp + edx + 0xc], al
// 004843bd  42                   inc edx
// 004843be  81fa00010000         cmp edx, 0x100
// 004843c4  89542404             mov dword ptr [esp + 4], edx
// 004843c8  7cc2                 jl 0x48438c
// 004843ca  33c0                 xor eax, eax
// 004843cc  85f6                 test esi, esi
// 004843ce  7e31                 jle 0x484401
// 004843d0  0fb61408             movzx edx, byte ptr [eax + ecx]
// 004843d4  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 004843d9  881408               mov byte ptr [eax + ecx], dl
// 004843dc  0fb6540101           movzx edx, byte ptr [ecx + eax + 1]
// 004843e1  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 004843e6  88540101             mov byte ptr [ecx + eax + 1], dl
// 004843ea  0fb6540102           movzx edx, byte ptr [ecx + eax + 2]
// 004843ef  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 004843f4  88540102             mov byte ptr [ecx + eax + 2], dl
// 004843f8  83c003               add eax, 3
// 004843fb  03c7                 add eax, edi
// 004843fd  3bc6                 cmp eax, esi
// 004843ff  7ccf                 jl 0x4843d0
// 00484401  81c40c010000         add esp, 0x10c
// 00484407  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?brightenImage@G3D@@YAXPAEHNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
