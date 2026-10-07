// roc 2008-06 00489260  unit: G3D::VertexAndPixelShader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489260
//
// 00489260  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 00489267  56                   push esi
// 00489268  8bf1                 mov esi, ecx
// 0048926a  7410                 je 0x48927c
// 0048926c  8b442408             mov eax, dword ptr [esp + 8]
// 00489270  05c0840000           add eax, 0x84c0
// 00489275  50                   push eax
// 00489276  ff1508f89600         call dword ptr [0x96f808]
// 0048927c  6878800000           push 0x8078
// 00489281  ff15182a8000         call dword ptr [0x802a18]
// 00489287  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048928a  8b5608               mov edx, dword ptr [esi + 8]
// 0048928d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00489290  51                   push ecx
// 00489291  52                   push edx
// 00489292  50                   push eax
// 00489293  50                   push eax
// 00489294  e877a4ffff           call 0x483710
// 00489299  8bc8                 mov ecx, eax
// 0048929b  8b4608               mov eax, dword ptr [esi + 8]
// 0048929e  33d2                 xor edx, edx
// 004892a0  f7f1                 div ecx
// 004892a2  83c404               add esp, 4
// 004892a5  50                   push eax
// 004892a6  ff15102a8000         call dword ptr [0x802a10]
// 004892ac  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 004892b3  5e                   pop esi
// 004892b4  740e                 je 0x4892c4
// 004892b6  c7442404c0840000     mov dword ptr [esp + 4], 0x84c0
// 004892be  ff2508f89600         jmp dword ptr [0x96f808]
// 004892c4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?texCoordPointer@VAR@G3D@@ABEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
