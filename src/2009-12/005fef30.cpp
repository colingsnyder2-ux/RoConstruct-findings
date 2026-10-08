// roc 2009-12 005fef30  unit: G3D::_internal::DialogTemplate  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fef30
//
// 005fef30  6aff                 push -1
// 005fef32  68598c9300           push 0x938c59
// 005fef37  64a100000000         mov eax, dword ptr fs:[0]
// 005fef3d  50                   push eax
// 005fef3e  64892500000000       mov dword ptr fs:[0], esp
// 005fef45  51                   push ecx
// 005fef46  56                   push esi
// 005fef47  8bf1                 mov esi, ecx
// 005fef49  57                   push edi
// 005fef4a  89742408             mov dword ptr [esp + 8], esi
// 005fef4e  8b4630               mov eax, dword ptr [esi + 0x30]
// 005fef51  33ff                 xor edi, edi
// 005fef53  50                   push eax
// 005fef54  897c2418             mov dword ptr [esp + 0x18], edi
// 005fef58  e843d2f5ff           call 0x55c1a0
// 005fef5d  83c404               add esp, 4
// 005fef60  8bce                 mov ecx, esi
// 005fef62  897e30               mov dword ptr [esi + 0x30], edi
// 005fef65  897e34               mov dword ptr [esi + 0x34], edi
// 005fef68  897e38               mov dword ptr [esi + 0x38], edi
// 005fef6b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fef73  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fef79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fef7d  5f                   pop edi
// 005fef7e  5e                   pop esi
// 005fef7f  64890d00000000       mov dword ptr fs:[0], ecx
// 005fef86  83c410               add esp, 0x10
// 005fef89  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??1BinaryOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
