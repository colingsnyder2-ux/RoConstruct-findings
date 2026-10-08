// roc 2007-03 005c7760  unit: seg_005c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c7760
//
// 005c7760  56                   push esi
// 005c7761  6a38                 push 0x38
// 005c7763  8bf1                 mov esi, ecx
// 005c7765  e89e690500           call 0x61e108
// 005c776a  8906                 mov dword ptr [esi], eax
// 005c776c  33c0                 xor eax, eax
// 005c776e  884604               mov byte ptr [esi + 4], al
// 005c7771  894608               mov dword ptr [esi + 8], eax
// 005c7774  83c404               add esp, 4
// 005c7777  8bc6                 mov eax, esi
// 005c7779  5e                   pop esi
// 005c777a  c3                   ret 
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_base@detail@iostreams@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
