// roc 2009-06 006c79e0  unit: seg_006c0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c79e0
//
// 006c79e0  56                   push esi
// 006c79e1  8b742408             mov esi, dword ptr [esp + 8]
// 006c79e5  57                   push edi
// 006c79e6  56                   push esi
// 006c79e7  e89427ffff           call 0x6ba180
// 006c79ec  6a01                 push 1
// 006c79ee  56                   push esi
// 006c79ef  8bf8                 mov edi, eax
// 006c79f1  e87a15ffff           call 0x6b8f70
// 006c79f6  83c40c               add esp, 0xc
// 006c79f9  83f806               cmp eax, 6
// 006c79fc  750f                 jne 0x6c7a0d
// 006c79fe  6a01                 push 1
// 006c7a00  56                   push esi
// 006c7a01  e8aa15ffff           call 0x6b8fb0
// 006c7a06  83c408               add esp, 8
// 006c7a09  85c0                 test eax, eax
// 006c7a0b  7410                 je 0x6c7a1d
// 006c7a0d  680cc28e00           push 0x8ec20c
// 006c7a12  6a01                 push 1
// 006c7a14  56                   push esi
// 006c7a15  e8b630ffff           call 0x6baad0
// 006c7a1a  83c40c               add esp, 0xc
// 006c7a1d  6a01                 push 1
// 006c7a1f  56                   push esi
// 006c7a20  e81b15ffff           call 0x6b8f40
// 006c7a25  6a01                 push 1
// 006c7a27  57                   push edi
// 006c7a28  56                   push esi
// 006c7a29  e8c212ffff           call 0x6b8cf0
// 006c7a2e  83c414               add esp, 0x14
// 006c7a31  5f                   pop edi
// 006c7a32  b801000000           mov eax, 1
// 006c7a37  5e                   pop esi
// 006c7a38  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cocreate)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
