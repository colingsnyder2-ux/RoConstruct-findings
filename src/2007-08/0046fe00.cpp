// roc 2007-08 0046fe00  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046fe00
//
// 0046fe00  81ec10010000         sub esp, 0x110
// 0046fe06  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046fe0b  33c4                 xor eax, esp
// 0046fe0d  8984240c010000       mov dword ptr [esp + 0x10c], eax
// 0046fe14  33d2                 xor edx, edx
// 0046fe16  89542404             mov dword ptr [esp + 4], edx
// 0046fe1a  db442404             fild dword ptr [esp + 4]
// 0046fe1e  dc8c2414010000       fmul qword ptr [esp + 0x114]
// 0046fe25  dd5c2404             fstp qword ptr [esp + 4]
// 0046fe29  dd442404             fld qword ptr [esp + 4]
// 0046fe2d  db1c24               fistp dword ptr [esp]
// 0046fe30  8b0424               mov eax, dword ptr [esp]
// 0046fe33  85c0                 test eax, eax
// 0046fe35  7f04                 jg 0x46fe3b
// 0046fe37  33c0                 xor eax, eax
// 0046fe39  eb0c                 jmp 0x46fe47
// 0046fe3b  3dff000000           cmp eax, 0xff
// 0046fe40  7c05                 jl 0x46fe47
// 0046fe42  b8ff000000           mov eax, 0xff
// 0046fe47  8844140c             mov byte ptr [esp + edx + 0xc], al
// 0046fe4b  83c201               add edx, 1
// 0046fe4e  81fa00010000         cmp edx, 0x100
// 0046fe54  89542404             mov dword ptr [esp + 4], edx
// 0046fe58  7cc0                 jl 0x46fe1a
// 0046fe5a  33c0                 xor eax, eax
// 0046fe5c  85f6                 test esi, esi
// 0046fe5e  7e31                 jle 0x46fe91
// 0046fe60  0fb61401             movzx edx, byte ptr [ecx + eax]
// 0046fe64  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0046fe69  881401               mov byte ptr [ecx + eax], dl
// 0046fe6c  0fb6540101           movzx edx, byte ptr [ecx + eax + 1]
// 0046fe71  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0046fe76  88540101             mov byte ptr [ecx + eax + 1], dl
// 0046fe7a  0fb6540102           movzx edx, byte ptr [ecx + eax + 2]
// 0046fe7f  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0046fe84  88540102             mov byte ptr [ecx + eax + 2], dl
// 0046fe88  83c003               add eax, 3
// 0046fe8b  03c7                 add eax, edi
// 0046fe8d  3bc6                 cmp eax, esi
// 0046fe8f  7ccf                 jl 0x46fe60
// 0046fe91  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 0046fe98  33cc                 xor ecx, esp
// 0046fe9a  e87f0b1c00           call 0x630a1e
// 0046fe9f  81c410010000         add esp, 0x110
// 0046fea5  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?brightenImage@G3D@@YAXPAEHNH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
