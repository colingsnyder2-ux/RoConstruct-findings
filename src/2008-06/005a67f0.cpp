// from server: 100% by auto
// roc 2008-06 005a67f0  unit: RBX::Workspace  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a67f0
//
// 005a67f0  6aff                 push -1
// 005a67f2  68482f7d00           push 0x7d2f48
// 005a67f7  64a100000000         mov eax, dword ptr fs:[0]
// 005a67fd  50                   push eax
// 005a67fe  64892500000000       mov dword ptr fs:[0], esp
// 005a6805  51                   push ecx
// 005a6806  56                   push esi
// 005a6807  8bf1                 mov esi, ecx
// 005a6809  89742404             mov dword ptr [esp + 4], esi
// 005a680d  8d4e08               lea ecx, [esi + 8]
// 005a6810  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a6818  e853b40400           call 0x5f1c70
// 005a681d  8bce                 mov ecx, esi
// 005a681f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005a6827  e884e4feff           call 0x594cb0
// 005a682c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a6830  5e                   pop esi
// 005a6831  64890d00000000       mov dword ptr fs:[0], ecx
// 005a6838  83c410               add esp, 0x10
// 005a683b  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??1barrier@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
