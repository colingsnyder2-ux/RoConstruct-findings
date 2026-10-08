// from server: 100% by auto
// roc 2007-08 005cc830  unit: seg_005c0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc830
//
// 005cc830  56                   push esi
// 005cc831  8b742408             mov esi, dword ptr [esp + 8]
// 005cc835  e8f6feffff           call 0x5cc730
// 005cc83a  6850a27b00           push 0x7ba250
// 005cc83f  6854a57b00           push 0x7ba554
// 005cc844  56                   push esi
// 005cc845  e8b62effff           call 0x5bf700
// 005cc84a  83c40c               add esp, 0xc
// 005cc84d  b802000000           mov eax, 2
// 005cc852  5e                   pop esi
// 005cc853  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaopen_base)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
