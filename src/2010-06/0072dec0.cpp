// from server: 100% by auto
// roc 2010-06 0072dec0  unit: seg_00720000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072dec0
//
// 0072dec0  6aff                 push -1
// 0072dec2  68f88c9a00           push 0x9a8cf8
// 0072dec7  64a100000000         mov eax, dword ptr fs:[0]
// 0072decd  50                   push eax
// 0072dece  64892500000000       mov dword ptr fs:[0], esp
// 0072ded5  51                   push ecx
// 0072ded6  56                   push esi
// 0072ded7  8bf1                 mov esi, ecx
// 0072ded9  89742404             mov dword ptr [esp + 4], esi
// 0072dedd  8d4e08               lea ecx, [esi + 8]
// 0072dee0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0072dee8  e853c4f8ff           call 0x6ba340
// 0072deed  8bce                 mov ecx, esi
// 0072deef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0072def7  e8e4d0ceff           call 0x41afe0
// 0072defc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072df00  5e                   pop esi
// 0072df01  64890d00000000       mov dword ptr fs:[0], ecx
// 0072df08  83c410               add esp, 0x10
// 0072df0b  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??1barrier@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
