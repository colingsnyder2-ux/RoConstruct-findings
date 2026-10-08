// roc 2009-12 004dff40  unit: G3D::VertexAndPixelShader  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dff40
//
// 004dff40  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004dff47  56                   push esi
// 004dff48  8bf1                 mov esi, ecx
// 004dff4a  7410                 je 0x4dff5c
// 004dff4c  8b442408             mov eax, dword ptr [esp + 8]
// 004dff50  05c0840000           add eax, 0x84c0
// 004dff55  50                   push eax
// 004dff56  ff1518d9b700         call dword ptr [0xb7d918]
// 004dff5c  6878800000           push 0x8078
// 004dff61  ff1554bb9800         call dword ptr [0x98bb54]
// 004dff67  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dff6a  8b5608               mov edx, dword ptr [esi + 8]
// 004dff6d  8b4618               mov eax, dword ptr [esi + 0x18]
// 004dff70  51                   push ecx
// 004dff71  52                   push edx
// 004dff72  50                   push eax
// 004dff73  50                   push eax
// 004dff74  e867a4ffff           call 0x4da3e0
// 004dff79  8bc8                 mov ecx, eax
// 004dff7b  8b4608               mov eax, dword ptr [esi + 8]
// 004dff7e  33d2                 xor edx, edx
// 004dff80  f7f1                 div ecx
// 004dff82  83c404               add esp, 4
// 004dff85  50                   push eax
// 004dff86  ff155cbb9800         call dword ptr [0x98bb5c]
// 004dff8c  803dbed0b70000       cmp byte ptr [0xb7d0be], 0
// 004dff93  5e                   pop esi
// 004dff94  740e                 je 0x4dffa4
// 004dff96  c7442404c0840000     mov dword ptr [esp + 4], 0x84c0
// 004dff9e  ff2518d9b700         jmp dword ptr [0xb7d918]
// 004dffa4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?texCoordPointer@VAR@G3D@@ABEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
