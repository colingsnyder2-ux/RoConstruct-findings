// roc 2009-12 007956b0  unit: seg_00790000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007956b0
//
// 007956b0  6aff                 push -1
// 007956b2  68a8429500           push 0x9542a8
// 007956b7  64a100000000         mov eax, dword ptr fs:[0]
// 007956bd  50                   push eax
// 007956be  64892500000000       mov dword ptr fs:[0], esp
// 007956c5  51                   push ecx
// 007956c6  56                   push esi
// 007956c7  8bf1                 mov esi, ecx
// 007956c9  89742404             mov dword ptr [esp + 4], esi
// 007956cd  8d4e08               lea ecx, [esi + 8]
// 007956d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007956d8  e8a355faff           call 0x73ac80
// 007956dd  8bce                 mov ecx, esi
// 007956df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007956e7  e86458c8ff           call 0x41af50
// 007956ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007956f0  5e                   pop esi
// 007956f1  64890d00000000       mov dword ptr fs:[0], ecx
// 007956f8  83c410               add esp, 0x10
// 007956fb  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??1barrier@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
