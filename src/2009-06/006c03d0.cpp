// from server: 100% by auto
// roc 2009-06 006c03d0  unit: RBX::Lua::LuaArguments  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c03d0
//
// 006c03d0  6aff                 push -1
// 006c03d2  68280a8700           push 0x870a28
// 006c03d7  64a100000000         mov eax, dword ptr fs:[0]
// 006c03dd  50                   push eax
// 006c03de  64892500000000       mov dword ptr fs:[0], esp
// 006c03e5  51                   push ecx
// 006c03e6  56                   push esi
// 006c03e7  8bf1                 mov esi, ecx
// 006c03e9  89742404             mov dword ptr [esp + 4], esi
// 006c03ed  8d4e08               lea ecx, [esi + 8]
// 006c03f0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006c03f8  e83354fdff           call 0x695830
// 006c03fd  8bce                 mov ecx, esi
// 006c03ff  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006c0407  e814a7d5ff           call 0x41ab20
// 006c040c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c0410  5e                   pop esi
// 006c0411  64890d00000000       mov dword ptr fs:[0], ecx
// 006c0418  83c410               add esp, 0x10
// 006c041b  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??1barrier@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
