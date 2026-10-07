// roc 2010-06 00737020  unit: seg_00730000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737020
//
// 00737020  6a01                 push 1
// 00737022  6a00                 push 0
// 00737024  56                   push esi
// 00737025  e856a8feff           call 0x721880
// 0073702a  6a00                 push 0
// 0073702c  68fe08a000           push 0xa008fe
// 00737031  56                   push esi
// 00737032  e819a5feff           call 0x721550
// 00737037  6afe                 push -2
// 00737039  56                   push esi
// 0073703a  e8d1a0feff           call 0x721110
// 0073703f  6afe                 push -2
// 00737041  56                   push esi
// 00737042  e8e9aafeff           call 0x721b30
// 00737047  6afe                 push -2
// 00737049  56                   push esi
// 0073704a  e8119ffeff           call 0x720f60
// 0073704f  6afe                 push -2
// 00737051  56                   push esi
// 00737052  e8b9a0feff           call 0x721110
// 00737057  687814a300           push 0xa31478
// 0073705c  6afe                 push -2
// 0073705e  56                   push esi
// 0073705f  e87ca9feff           call 0x7219e0
// 00737064  83c444               add esp, 0x44
// 00737067  6afe                 push -2
// 00737069  56                   push esi
// 0073706a  e8f19efeff           call 0x720f60
// 0073706f  83c408               add esp, 8
// 00737072  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _createmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
