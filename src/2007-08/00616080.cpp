// roc 2007-08 00616080  unit: seg_00610000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00616080
//
// 00616080  83ec18               sub esp, 0x18
// 00616083  56                   push esi
// 00616084  e867290000           call 0x6189f0
// 00616089  6a00                 push 0
// 0061608b  8d442408             lea eax, [esp + 8]
// 0061608f  50                   push eax
// 00616090  56                   push esi
// 00616091  e88af2ffff           call 0x615320
// 00616096  83c410               add esp, 0x10
// 00616099  833c2401             cmp dword ptr [esp], 1
// 0061609d  7507                 jne 0x6160a6
// 0061609f  c7042403000000       mov dword ptr [esp], 3
// 006160a6  8b5630               mov edx, dword ptr [esi + 0x30]
// 006160a9  8d0c24               lea ecx, [esp]
// 006160ac  51                   push ecx
// 006160ad  52                   push edx
// 006160ae  e8fd360100           call 0x6297b0
// 006160b3  83c408               add esp, 8
// 006160b6  817e1012010000       cmp dword ptr [esi + 0x10], 0x112
// 006160bd  7424                 je 0x6160e3
// 006160bf  6812010000           push 0x112
// 006160c4  56                   push esi
// 006160c5  e8f6130000           call 0x6174c0
// 006160ca  50                   push eax
// 006160cb  8b4634               mov eax, dword ptr [esi + 0x34]
// 006160ce  6870337c00           push 0x7c3370
// 006160d3  50                   push eax
// 006160d4  e8b78dffff           call 0x60ee90
// 006160d9  50                   push eax
// 006160da  56                   push esi
// 006160db  e8e0140000           call 0x6175c0
// 006160e0  83c41c               add esp, 0x1c
// 006160e3  56                   push esi
// 006160e4  e807290000           call 0x6189f0
// 006160e9  8bc6                 mov eax, esi
// 006160eb  e840f3ffff           call 0x615430
// 006160f0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006160f4  83c41c               add esp, 0x1c
// 006160f7  c3                   ret 
// library lua-5.1.4/lparser.c (function _test_then_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
