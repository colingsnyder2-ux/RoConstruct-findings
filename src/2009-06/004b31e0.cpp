// from server: 100% by auto
// roc 2009-06 004b31e0  unit: G3D::VertexAndPixelShader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b31e0
//
// 004b31e0  803d0ec9a30000       cmp byte ptr [0xa3c90e], 0
// 004b31e7  56                   push esi
// 004b31e8  8bf1                 mov esi, ecx
// 004b31ea  7410                 je 0x4b31fc
// 004b31ec  8b442408             mov eax, dword ptr [esp + 8]
// 004b31f0  05c0840000           add eax, 0x84c0
// 004b31f5  50                   push eax
// 004b31f6  ff1568d1a300         call dword ptr [0xa3d168]
// 004b31fc  6878800000           push 0x8078
// 004b3201  ff1574ea8900         call dword ptr [0x89ea74]
// 004b3207  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b320a  8b5608               mov edx, dword ptr [esi + 8]
// 004b320d  8b4618               mov eax, dword ptr [esi + 0x18]
// 004b3210  51                   push ecx
// 004b3211  52                   push edx
// 004b3212  50                   push eax
// 004b3213  50                   push eax
// 004b3214  e8e7a5ffff           call 0x4ad800
// 004b3219  8bc8                 mov ecx, eax
// 004b321b  8b4608               mov eax, dword ptr [esi + 8]
// 004b321e  33d2                 xor edx, edx
// 004b3220  f7f1                 div ecx
// 004b3222  83c404               add esp, 4
// 004b3225  50                   push eax
// 004b3226  ff156cea8900         call dword ptr [0x89ea6c]
// 004b322c  803d0ec9a30000       cmp byte ptr [0xa3c90e], 0
// 004b3233  5e                   pop esi
// 004b3234  740e                 je 0x4b3244
// 004b3236  c7442404c0840000     mov dword ptr [esp + 4], 0x84c0
// 004b323e  ff2568d1a300         jmp dword ptr [0xa3d168]
// 004b3244  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?texCoordPointer@VAR@G3D@@ABEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
