// roc 2011-06 007642d0  unit: seg_00760000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007642d0
//
// 007642d0  53                   push ebx
// 007642d1  56                   push esi
// 007642d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007642d6  57                   push edi
// 007642d7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007642db  57                   push edi
// 007642dc  56                   push esi
// 007642dd  e80ee4ffff           call 0x7626f0
// 007642e2  8bd8                 mov ebx, eax
// 007642e4  83c408               add esp, 8
// 007642e7  85db                 test ebx, ebx
// 007642e9  7542                 jne 0x76432d
// 007642eb  57                   push edi
// 007642ec  56                   push esi
// 007642ed  e8cee2ffff           call 0x7625c0
// 007642f2  83c408               add esp, 8
// 007642f5  85c0                 test eax, eax
// 007642f7  7532                 jne 0x76432b
// 007642f9  55                   push ebp
// 007642fa  6a03                 push 3
// 007642fc  56                   push esi
// 007642fd  e86ee2ffff           call 0x762570
// 00764302  57                   push edi
// 00764303  56                   push esi
// 00764304  8be8                 mov ebp, eax
// 00764306  e845e2ffff           call 0x762550
// 0076430b  50                   push eax
// 0076430c  56                   push esi
// 0076430d  e85ee2ffff           call 0x762570
// 00764312  50                   push eax
// 00764313  55                   push ebp
// 00764314  68b065ab00           push 0xab65b0
// 00764319  56                   push esi
// 0076431a  e821e7ffff           call 0x762a40
// 0076431f  50                   push eax
// 00764320  57                   push edi
// 00764321  56                   push esi
// 00764322  e879fcffff           call 0x763fa0
// 00764327  83c434               add esp, 0x34
// 0076432a  5d                   pop ebp
// 0076432b  8bc3                 mov eax, ebx
// 0076432d  5f                   pop edi
// 0076432e  5e                   pop esi
// 0076432f  5b                   pop ebx
// 00764330  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
