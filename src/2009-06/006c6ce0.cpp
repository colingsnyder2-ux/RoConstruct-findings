// from server: 100% by auto
// roc 2009-06 006c6ce0  unit: seg_006c0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6ce0
//
// 006c6ce0  56                   push esi
// 006c6ce1  8b742408             mov esi, dword ptr [esp + 8]
// 006c6ce5  57                   push edi
// 006c6ce6  6a02                 push 2
// 006c6ce8  56                   push esi
// 006c6ce9  e88222ffff           call 0x6b8f70
// 006c6cee  6a05                 push 5
// 006c6cf0  6a01                 push 1
// 006c6cf2  56                   push esi
// 006c6cf3  8bf8                 mov edi, eax
// 006c6cf5  e8463fffff           call 0x6bac40
// 006c6cfa  83c414               add esp, 0x14
// 006c6cfd  85ff                 test edi, edi
// 006c6cff  7415                 je 0x6c6d16
// 006c6d01  83ff05               cmp edi, 5
// 006c6d04  7410                 je 0x6c6d16
// 006c6d06  68c4bf8e00           push 0x8ebfc4
// 006c6d0b  6a02                 push 2
// 006c6d0d  56                   push esi
// 006c6d0e  e8bd3dffff           call 0x6baad0
// 006c6d13  83c40c               add esp, 0xc
// 006c6d16  6894bf8e00           push 0x8ebf94
// 006c6d1b  6a01                 push 1
// 006c6d1d  56                   push esi
// 006c6d1e  e8dd35ffff           call 0x6ba300
// 006c6d23  83c40c               add esp, 0xc
// 006c6d26  85c0                 test eax, eax
// 006c6d28  740e                 je 0x6c6d38
// 006c6d2a  68a0bf8e00           push 0x8ebfa0
// 006c6d2f  56                   push esi
// 006c6d30  e80b35ffff           call 0x6ba240
// 006c6d35  83c408               add esp, 8
// 006c6d38  6a02                 push 2
// 006c6d3a  56                   push esi
// 006c6d3b  e85020ffff           call 0x6b8d90
// 006c6d40  6a01                 push 1
// 006c6d42  56                   push esi
// 006c6d43  e8182cffff           call 0x6b9960
// 006c6d48  83c410               add esp, 0x10
// 006c6d4b  5f                   pop edi
// 006c6d4c  b801000000           mov eax, 1
// 006c6d51  5e                   pop esi
// 006c6d52  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_setmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
