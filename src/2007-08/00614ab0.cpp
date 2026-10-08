// from server: 100% by auto
// roc 2007-08 00614ab0  unit: seg_00610000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614ab0
//
// 00614ab0  53                   push ebx
// 00614ab1  6a00                 push 0
// 00614ab3  57                   push edi
// 00614ab4  56                   push esi
// 00614ab5  bb01000000           mov ebx, 1
// 00614aba  e861080000           call 0x615320
// 00614abf  83c40c               add esp, 0xc
// 00614ac2  837e102c             cmp dword ptr [esi + 0x10], 0x2c
// 00614ac6  7521                 jne 0x614ae9
// 00614ac8  56                   push esi
// 00614ac9  e8223f0000           call 0x6189f0
// 00614ace  8b4630               mov eax, dword ptr [esi + 0x30]
// 00614ad1  57                   push edi
// 00614ad2  50                   push eax
// 00614ad3  e8b8480100           call 0x629390
// 00614ad8  6a00                 push 0
// 00614ada  57                   push edi
// 00614adb  56                   push esi
// 00614adc  e83f080000           call 0x615320
// 00614ae1  83c418               add esp, 0x18
// 00614ae4  83c301               add ebx, 1
// 00614ae7  ebd9                 jmp 0x614ac2
// 00614ae9  8bc3                 mov eax, ebx
// 00614aeb  5b                   pop ebx
// 00614aec  c3                   ret 
// library lua-5.1.4/lparser.c (function _explist1)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
