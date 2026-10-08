// roc 2007-03 00726a30  unit: seg_00720000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726a30
//
// 00726a30  56                   push esi
// 00726a31  8bf1                 mov esi, ecx
// 00726a33  c70600000000         mov dword ptr [esi], 0
// 00726a39  c6460401             mov byte ptr [esi + 4], 1
// 00726a3d  e85effffff           call 0x7269a0
// 00726a42  8906                 mov dword ptr [esi], eax
// 00726a44  8bc6                 mov eax, esi
// 00726a46  5e                   pop esi
// 00726a47  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ??0mutex@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
