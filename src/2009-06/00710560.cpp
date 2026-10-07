// roc 2009-06 00710560  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710560
//
// 00710560  56                   push esi
// 00710561  6a38                 push 0x38
// 00710563  8bf1                 mov esi, ecx
// 00710565  e8ce840000           call 0x718a38
// 0071056a  8906                 mov dword ptr [esi], eax
// 0071056c  33c0                 xor eax, eax
// 0071056e  884604               mov byte ptr [esi + 4], al
// 00710571  894608               mov dword ptr [esi + 8], eax
// 00710574  83c404               add esp, 4
// 00710577  8bc6                 mov eax, esi
// 00710579  5e                   pop esi
// 0071057a  c3                   ret 
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_base@detail@iostreams@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
