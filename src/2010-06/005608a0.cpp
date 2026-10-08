// from server: 100% by auto
// roc 2010-06 005608a0  unit: G3D::_internal::DialogTemplate  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005608a0
//
// 005608a0  6aff                 push -1
// 005608a2  6889009a00           push 0x9a0089
// 005608a7  64a100000000         mov eax, dword ptr fs:[0]
// 005608ad  50                   push eax
// 005608ae  64892500000000       mov dword ptr fs:[0], esp
// 005608b5  51                   push ecx
// 005608b6  56                   push esi
// 005608b7  8bf1                 mov esi, ecx
// 005608b9  57                   push edi
// 005608ba  89742408             mov dword ptr [esp + 8], esi
// 005608be  8b4630               mov eax, dword ptr [esi + 0x30]
// 005608c1  33ff                 xor edi, edi
// 005608c3  50                   push eax
// 005608c4  897c2418             mov dword ptr [esp + 0x18], edi
// 005608c8  e8e3a2faff           call 0x50abb0
// 005608cd  83c404               add esp, 4
// 005608d0  8bce                 mov ecx, esi
// 005608d2  897e30               mov dword ptr [esi + 0x30], edi
// 005608d5  897e34               mov dword ptr [esi + 0x34], edi
// 005608d8  897e38               mov dword ptr [esi + 0x38], edi
// 005608db  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005608e3  ff1500a49e00         call dword ptr [0x9ea400]
// 005608e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005608ed  5f                   pop edi
// 005608ee  5e                   pop esi
// 005608ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005608f6  83c410               add esp, 0x10
// 005608f9  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??1BinaryOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
