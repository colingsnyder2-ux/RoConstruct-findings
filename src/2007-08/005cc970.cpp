// from server: 100% by auto
// roc 2007-08 005cc970  unit: seg_005c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc970
//
// 005cc970  56                   push esi
// 005cc971  6a38                 push 0x38
// 005cc973  8bf1                 mov esi, ecx
// 005cc975  e87c350600           call 0x62fef6
// 005cc97a  8906                 mov dword ptr [esi], eax
// 005cc97c  33c0                 xor eax, eax
// 005cc97e  884604               mov byte ptr [esi + 4], al
// 005cc981  894608               mov dword ptr [esi + 8], eax
// 005cc984  83c404               add esp, 4
// 005cc987  8bc6                 mov eax, esi
// 005cc989  5e                   pop esi
// 005cc98a  c3                   ret 
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_base@detail@iostreams@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
