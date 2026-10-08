// from server: 100% by auto
// roc 2009-06 0057d150  unit: G3D::_internal::DialogTemplate  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d150
//
// 0057d150  6aff                 push -1
// 0057d152  68991c8700           push 0x871c99
// 0057d157  64a100000000         mov eax, dword ptr fs:[0]
// 0057d15d  50                   push eax
// 0057d15e  64892500000000       mov dword ptr fs:[0], esp
// 0057d165  51                   push ecx
// 0057d166  56                   push esi
// 0057d167  8bf1                 mov esi, ecx
// 0057d169  57                   push edi
// 0057d16a  89742408             mov dword ptr [esp + 8], esi
// 0057d16e  8b4630               mov eax, dword ptr [esi + 0x30]
// 0057d171  33ff                 xor edi, edi
// 0057d173  50                   push eax
// 0057d174  897c2418             mov dword ptr [esp + 0x18], edi
// 0057d178  e8e3dffeff           call 0x56b160
// 0057d17d  83c404               add esp, 4
// 0057d180  8bce                 mov ecx, esi
// 0057d182  897e30               mov dword ptr [esi + 0x30], edi
// 0057d185  897e34               mov dword ptr [esi + 0x34], edi
// 0057d188  897e38               mov dword ptr [esi + 0x38], edi
// 0057d18b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0057d193  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057d199  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057d19d  5f                   pop edi
// 0057d19e  5e                   pop esi
// 0057d19f  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d1a6  83c410               add esp, 0x10
// 0057d1a9  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??1BinaryOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
