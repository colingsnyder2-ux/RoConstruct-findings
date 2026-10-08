// roc 2009-12 007dead0  unit: RBX::ContactStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007dead0
//
// 007dead0  56                   push esi
// 007dead1  6a38                 push 0x38
// 007dead3  8bf1                 mov esi, ecx
// 007dead5  e8864d0100           call 0x7f3860
// 007deada  8906                 mov dword ptr [esi], eax
// 007deadc  33c0                 xor eax, eax
// 007deade  884604               mov byte ptr [esi + 4], al
// 007deae1  894608               mov dword ptr [esi + 8], eax
// 007deae4  83c404               add esp, 4
// 007deae7  8bc6                 mov eax, esi
// 007deae9  5e                   pop esi
// 007deaea  c3                   ret 
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_base@detail@iostreams@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
