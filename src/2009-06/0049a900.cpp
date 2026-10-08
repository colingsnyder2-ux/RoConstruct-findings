// from server: 100% by auto
// roc 2009-06 0049a900  unit: G3D::ReferenceCountedObject  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a900
//
// 0049a900  81ec0c010000         sub esp, 0x10c
// 0049a906  33d2                 xor edx, edx
// 0049a908  89542404             mov dword ptr [esp + 4], edx
// 0049a90c  db442404             fild dword ptr [esp + 4]
// 0049a910  dc8c2410010000       fmul qword ptr [esp + 0x110]
// 0049a917  dd5c2404             fstp qword ptr [esp + 4]
// 0049a91b  dd442404             fld qword ptr [esp + 4]
// 0049a91f  db1c24               fistp dword ptr [esp]
// 0049a922  8b0424               mov eax, dword ptr [esp]
// 0049a925  85c0                 test eax, eax
// 0049a927  7f04                 jg 0x49a92d
// 0049a929  33c0                 xor eax, eax
// 0049a92b  eb0c                 jmp 0x49a939
// 0049a92d  3dff000000           cmp eax, 0xff
// 0049a932  7c05                 jl 0x49a939
// 0049a934  b8ff000000           mov eax, 0xff
// 0049a939  8844140c             mov byte ptr [esp + edx + 0xc], al
// 0049a93d  42                   inc edx
// 0049a93e  81fa00010000         cmp edx, 0x100
// 0049a944  89542404             mov dword ptr [esp + 4], edx
// 0049a948  7cc2                 jl 0x49a90c
// 0049a94a  33c0                 xor eax, eax
// 0049a94c  85f6                 test esi, esi
// 0049a94e  7e31                 jle 0x49a981
// 0049a950  0fb61408             movzx edx, byte ptr [eax + ecx]
// 0049a954  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0049a959  881408               mov byte ptr [eax + ecx], dl
// 0049a95c  0fb6540101           movzx edx, byte ptr [ecx + eax + 1]
// 0049a961  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0049a966  88540101             mov byte ptr [ecx + eax + 1], dl
// 0049a96a  0fb6540102           movzx edx, byte ptr [ecx + eax + 2]
// 0049a96f  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0049a974  88540102             mov byte ptr [ecx + eax + 2], dl
// 0049a978  83c003               add eax, 3
// 0049a97b  03c7                 add eax, edi
// 0049a97d  3bc6                 cmp eax, esi
// 0049a97f  7ccf                 jl 0x49a950
// 0049a981  81c40c010000         add esp, 0x10c
// 0049a987  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?brightenImage@G3D@@YAXPAEHNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
