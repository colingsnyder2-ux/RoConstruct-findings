// roc 2008-06 005197b0  unit: G3D::_internal::DialogTemplate  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005197b0
//
// 005197b0  6aff                 push -1
// 005197b2  68496b7c00           push 0x7c6b49
// 005197b7  64a100000000         mov eax, dword ptr fs:[0]
// 005197bd  50                   push eax
// 005197be  64892500000000       mov dword ptr fs:[0], esp
// 005197c5  51                   push ecx
// 005197c6  56                   push esi
// 005197c7  8bf1                 mov esi, ecx
// 005197c9  57                   push edi
// 005197ca  89742408             mov dword ptr [esp + 8], esi
// 005197ce  8b4630               mov eax, dword ptr [esi + 0x30]
// 005197d1  33ff                 xor edi, edi
// 005197d3  50                   push eax
// 005197d4  897c2418             mov dword ptr [esp + 0x18], edi
// 005197d8  e823e5feff           call 0x507d00
// 005197dd  83c404               add esp, 4
// 005197e0  8bce                 mov ecx, esi
// 005197e2  897e30               mov dword ptr [esi + 0x30], edi
// 005197e5  897e34               mov dword ptr [esi + 0x34], edi
// 005197e8  897e38               mov dword ptr [esi + 0x38], edi
// 005197eb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005197f3  ff1568248000         call dword ptr [0x802468]
// 005197f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005197fd  5f                   pop edi
// 005197fe  5e                   pop esi
// 005197ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00519806  83c410               add esp, 0x10
// 00519809  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??1BinaryOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
