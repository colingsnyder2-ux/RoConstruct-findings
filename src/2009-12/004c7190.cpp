// roc 2009-12 004c7190  unit: G3D::ReferenceCountedObject  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7190
//
// 004c7190  81ec0c010000         sub esp, 0x10c
// 004c7196  33d2                 xor edx, edx
// 004c7198  89542404             mov dword ptr [esp + 4], edx
// 004c719c  db442404             fild dword ptr [esp + 4]
// 004c71a0  dc8c2410010000       fmul qword ptr [esp + 0x110]
// 004c71a7  dd5c2404             fstp qword ptr [esp + 4]
// 004c71ab  dd442404             fld qword ptr [esp + 4]
// 004c71af  db1c24               fistp dword ptr [esp]
// 004c71b2  8b0424               mov eax, dword ptr [esp]
// 004c71b5  85c0                 test eax, eax
// 004c71b7  7f04                 jg 0x4c71bd
// 004c71b9  33c0                 xor eax, eax
// 004c71bb  eb0c                 jmp 0x4c71c9
// 004c71bd  3dff000000           cmp eax, 0xff
// 004c71c2  7c05                 jl 0x4c71c9
// 004c71c4  b8ff000000           mov eax, 0xff
// 004c71c9  8844140c             mov byte ptr [esp + edx + 0xc], al
// 004c71cd  42                   inc edx
// 004c71ce  81fa00010000         cmp edx, 0x100
// 004c71d4  89542404             mov dword ptr [esp + 4], edx
// 004c71d8  7cc2                 jl 0x4c719c
// 004c71da  33c0                 xor eax, eax
// 004c71dc  85f6                 test esi, esi
// 004c71de  7e31                 jle 0x4c7211
// 004c71e0  0fb61408             movzx edx, byte ptr [eax + ecx]
// 004c71e4  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 004c71e9  881408               mov byte ptr [eax + ecx], dl
// 004c71ec  0fb6540101           movzx edx, byte ptr [ecx + eax + 1]
// 004c71f1  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 004c71f6  88540101             mov byte ptr [ecx + eax + 1], dl
// 004c71fa  0fb6540102           movzx edx, byte ptr [ecx + eax + 2]
// 004c71ff  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 004c7204  88540102             mov byte ptr [ecx + eax + 2], dl
// 004c7208  83c003               add eax, 3
// 004c720b  03c7                 add eax, edi
// 004c720d  3bc6                 cmp eax, esi
// 004c720f  7ccf                 jl 0x4c71e0
// 004c7211  81c40c010000         add esp, 0x10c
// 004c7217  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?brightenImage@G3D@@YAXPAEHNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
