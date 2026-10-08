// roc 2007-03 0046fda0  unit: seg_00460000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046fda0
//
// 0046fda0  81ec10010000         sub esp, 0x110
// 0046fda6  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046fdab  33c4                 xor eax, esp
// 0046fdad  8984240c010000       mov dword ptr [esp + 0x10c], eax
// 0046fdb4  33d2                 xor edx, edx
// 0046fdb6  89542404             mov dword ptr [esp + 4], edx
// 0046fdba  db442404             fild dword ptr [esp + 4]
// 0046fdbe  dc8c2414010000       fmul qword ptr [esp + 0x114]
// 0046fdc5  dd5c2404             fstp qword ptr [esp + 4]
// 0046fdc9  dd442404             fld qword ptr [esp + 4]
// 0046fdcd  db1c24               fistp dword ptr [esp]
// 0046fdd0  8b0424               mov eax, dword ptr [esp]
// 0046fdd3  85c0                 test eax, eax
// 0046fdd5  7f04                 jg 0x46fddb
// 0046fdd7  33c0                 xor eax, eax
// 0046fdd9  eb0c                 jmp 0x46fde7
// 0046fddb  3dff000000           cmp eax, 0xff
// 0046fde0  7c05                 jl 0x46fde7
// 0046fde2  b8ff000000           mov eax, 0xff
// 0046fde7  8844140c             mov byte ptr [esp + edx + 0xc], al
// 0046fdeb  83c201               add edx, 1
// 0046fdee  81fa00010000         cmp edx, 0x100
// 0046fdf4  89542404             mov dword ptr [esp + 4], edx
// 0046fdf8  7cc0                 jl 0x46fdba
// 0046fdfa  33c0                 xor eax, eax
// 0046fdfc  85f6                 test esi, esi
// 0046fdfe  7e31                 jle 0x46fe31
// 0046fe00  0fb61401             movzx edx, byte ptr [ecx + eax]
// 0046fe04  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0046fe09  881401               mov byte ptr [ecx + eax], dl
// 0046fe0c  0fb6540101           movzx edx, byte ptr [ecx + eax + 1]
// 0046fe11  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0046fe16  88540101             mov byte ptr [ecx + eax + 1], dl
// 0046fe1a  0fb6540102           movzx edx, byte ptr [ecx + eax + 2]
// 0046fe1f  0fb654140c           movzx edx, byte ptr [esp + edx + 0xc]
// 0046fe24  88540102             mov byte ptr [ecx + eax + 2], dl
// 0046fe28  83c003               add eax, 3
// 0046fe2b  03c7                 add eax, edi
// 0046fe2d  3bc6                 cmp eax, esi
// 0046fe2f  7ccf                 jl 0x46fe00
// 0046fe31  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 0046fe38  33cc                 xor ecx, esp
// 0046fe3a  e867f01a00           call 0x61eea6
// 0046fe3f  81c410010000         add esp, 0x110
// 0046fe45  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?brightenImage@G3D@@YAXPAEHNH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
