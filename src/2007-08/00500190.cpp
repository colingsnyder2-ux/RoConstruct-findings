// roc 2007-08 00500190  unit: G3D::Shader  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500190
//
// 00500190  56                   push esi
// 00500191  57                   push edi
// 00500192  8bf1                 mov esi, ecx
// 00500194  33ff                 xor edi, edi
// 00500196  397e04               cmp dword ptr [esi + 4], edi
// 00500199  7e1b                 jle 0x5001b6
// 0050019b  53                   push ebx
// 0050019c  33db                 xor ebx, ebx
// 0050019e  8bff                 mov edi, edi
// 005001a0  8b0e                 mov ecx, dword ptr [esi]
// 005001a2  03cb                 add ecx, ebx
// 005001a4  ff15ace67700         call dword ptr [0x77e6ac]
// 005001aa  83c701               add edi, 1
// 005001ad  83c31c               add ebx, 0x1c
// 005001b0  3b7e04               cmp edi, dword ptr [esi + 4]
// 005001b3  7ceb                 jl 0x5001a0
// 005001b5  5b                   pop ebx
// 005001b6  8b06                 mov eax, dword ptr [esi]
// 005001b8  50                   push eax
// 005001b9  e852f6ffff           call 0x4ff810
// 005001be  83c404               add esp, 4
// 005001c1  5f                   pop edi
// 005001c2  c70600000000         mov dword ptr [esi], 0
// 005001c8  c7460400000000       mov dword ptr [esi + 4], 0
// 005001cf  c7460800000000       mov dword ptr [esi + 8], 0
// 005001d6  5e                   pop esi
// 005001d7  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??1?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
