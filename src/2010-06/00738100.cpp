// roc 2010-06 00738100  unit: seg_00730000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00738100
//
// 00738100  56                   push esi
// 00738101  8b742408             mov esi, dword ptr [esp + 8]
// 00738105  56                   push esi
// 00738106  e83596feff           call 0x721740
// 0073810b  83c404               add esp, 4
// 0073810e  85c0                 test eax, eax
// 00738110  7409                 je 0x73811b
// 00738112  56                   push esi
// 00738113  e8d893feff           call 0x7214f0
// 00738118  83c404               add esp, 4
// 0073811b  b801000000           mov eax, 1
// 00738120  5e                   pop esi
// 00738121  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_corunning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
