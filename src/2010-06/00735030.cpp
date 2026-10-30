// from server: 100% by auto
// roc 2010-06 00735030  unit: seg_00730000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735030
//
// 00735030  83ec08               sub esp, 8
// 00735033  56                   push esi
// 00735034  8b742410             mov esi, dword ptr [esp + 0x10]
// 00735038  6a01                 push 1
// 0073503a  56                   push esi
// 0073503b  e8a0dffeff           call 0x722fe0
// 00735040  dd5c240c             fstp qword ptr [esp + 0xc]
// 00735044  6a02                 push 2
// 00735046  56                   push esi
// 00735047  e894dffeff           call 0x722fe0
// 0073504c  dd442414             fld qword ptr [esp + 0x14]
// 00735050  83c410               add esp, 0x10
// 00735053  d9c9                 fxch st(1)
// 00735055  e838440700           call 0x7a9492
// 0073505a  83ec08               sub esp, 8
// 0073505d  dd1c24               fstp qword ptr [esp]
// 00735060  56                   push esi
// 00735061  e8aac4feff           call 0x721510
// 00735066  83c40c               add esp, 0xc
// 00735069  b801000000           mov eax, 1
// 0073506e  5e                   pop esi
// 0073506f  83c408               add esp, 8
// 00735072  c3                   ret 
// library lua-5.1.4/lmathlib.c (function _math_atan2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lmathlib.c
