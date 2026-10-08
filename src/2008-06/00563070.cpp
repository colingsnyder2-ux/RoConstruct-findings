// from server: 100% by auto
// roc 2008-06 00563070  unit: RBX::ContentProvider  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563070
//
// 00563070  56                   push esi
// 00563071  8bf1                 mov esi, ecx
// 00563073  c70600000000         mov dword ptr [esi], 0
// 00563079  c7460800000000       mov dword ptr [esi + 8], 0
// 00563080  c6460401             mov byte ptr [esi + 4], 1
// 00563084  e8871b0300           call 0x594c10
// 00563089  8906                 mov dword ptr [esi], eax
// 0056308b  8bc6                 mov eax, esi
// 0056308d  5e                   pop esi
// 0056308e  c3                   ret 
// library boost-1.34.1/libs\thread\src\recursive_mutex.cpp (function ??0recursive_mutex@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/recursive_mutex.cpp
