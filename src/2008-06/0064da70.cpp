// from server: 100% by auto
// roc 2008-06 0064da70  unit: RBX::SimJobStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064da70
//
// 0064da70  56                   push esi
// 0064da71  6a38                 push 0x38
// 0064da73  8bf1                 mov esi, ecx
// 0064da75  e8a62e0500           call 0x6a0920
// 0064da7a  8906                 mov dword ptr [esi], eax
// 0064da7c  33c0                 xor eax, eax
// 0064da7e  884604               mov byte ptr [esi + 4], al
// 0064da81  894608               mov dword ptr [esi + 8], eax
// 0064da84  83c404               add esp, 4
// 0064da87  8bc6                 mov eax, esi
// 0064da89  5e                   pop esi
// 0064da8a  c3                   ret 
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_base@detail@iostreams@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
