// roc 2010-06 0049c2e0  unit: G3D::VertexAndPixelShader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c2e0
//
// 0049c2e0  803dba38c00000       cmp byte ptr [0xc038ba], 0
// 0049c2e7  56                   push esi
// 0049c2e8  8bf1                 mov esi, ecx
// 0049c2ea  7410                 je 0x49c2fc
// 0049c2ec  8b442408             mov eax, dword ptr [esp + 8]
// 0049c2f0  05c0840000           add eax, 0x84c0
// 0049c2f5  50                   push eax
// 0049c2f6  ff15a839c000         call dword ptr [0xc039a8]
// 0049c2fc  6878800000           push 0x8078
// 0049c301  ff1500ac9e00         call dword ptr [0x9eac00]
// 0049c307  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049c30a  8b5608               mov edx, dword ptr [esi + 8]
// 0049c30d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0049c310  51                   push ecx
// 0049c311  52                   push edx
// 0049c312  50                   push eax
// 0049c313  50                   push eax
// 0049c314  e8b72effff           call 0x48f1d0
// 0049c319  8bc8                 mov ecx, eax
// 0049c31b  8b4608               mov eax, dword ptr [esi + 8]
// 0049c31e  33d2                 xor edx, edx
// 0049c320  f7f1                 div ecx
// 0049c322  83c404               add esp, 4
// 0049c325  50                   push eax
// 0049c326  ff1508ac9e00         call dword ptr [0x9eac08]
// 0049c32c  803dba38c00000       cmp byte ptr [0xc038ba], 0
// 0049c333  5e                   pop esi
// 0049c334  740e                 je 0x49c344
// 0049c336  c7442404c0840000     mov dword ptr [esp + 4], 0x84c0
// 0049c33e  ff25a839c000         jmp dword ptr [0xc039a8]
// 0049c344  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?texCoordPointer@VAR@G3D@@ABEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
