// roc 2010-06 00734690  unit: seg_00730000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734690
//
// 00734690  56                   push esi
// 00734691  8b742408             mov esi, dword ptr [esp + 8]
// 00734695  6a05                 push 5
// 00734697  6a01                 push 1
// 00734699  56                   push esi
// 0073469a  e801e8feff           call 0x722ea0
// 0073469f  6858dfa400           push 0xa4df58
// 007346a4  56                   push esi
// 007346a5  e8f6ddfeff           call 0x7224a0
// 007346aa  6a01                 push 1
// 007346ac  56                   push esi
// 007346ad  e85ecafeff           call 0x721110
// 007346b2  83c41c               add esp, 0x1c
// 007346b5  b801000000           mov eax, 1
// 007346ba  5e                   pop esi
// 007346bb  c3                   ret 
// library lua-5.1.4/ltablib.c (function _setn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
