// roc 2010-06 00792090  unit: RBX::ContactStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00792090
//
// 00792090  56                   push esi
// 00792091  6a38                 push 0x38
// 00792093  8bf1                 mov esi, ecx
// 00792095  e806590100           call 0x7a79a0
// 0079209a  8906                 mov dword ptr [esi], eax
// 0079209c  33c0                 xor eax, eax
// 0079209e  884604               mov byte ptr [esi + 4], al
// 007920a1  894608               mov dword ptr [esi + 8], eax
// 007920a4  83c404               add esp, 4
// 007920a7  8bc6                 mov eax, esi
// 007920a9  5e                   pop esi
// 007920aa  c3                   ret 
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_base@detail@iostreams@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
