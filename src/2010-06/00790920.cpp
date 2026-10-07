// roc 2010-06 00790920  unit: RBX::GroupDragTool  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790920
//
// 00790920  83ec18               sub esp, 0x18
// 00790923  d9ee                 fldz 
// 00790925  8b442420             mov eax, dword ptr [esp + 0x20]
// 00790929  83c9ff               or ecx, 0xffffffff
// 0079092c  dd5c2408             fstp qword ptr [esp + 8]
// 00790930  83e800               sub eax, 0
// 00790933  53                   push ebx
// 00790934  57                   push edi
// 00790935  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00790939  894c2418             mov dword ptr [esp + 0x18], ecx
// 0079093d  c744240805000000     mov dword ptr [esp + 8], 5
// 00790945  7443                 je 0x79098a
// 00790947  83e801               sub eax, 1
// 0079094a  7429                 je 0x790975
// 0079094c  83e801               sub eax, 1
// 0079094f  7569                 jne 0x7909ba
// 00790951  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00790955  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00790959  53                   push ebx
// 0079095a  57                   push edi
// 0079095b  e890f8ffff           call 0x7901f0
// 00790960  8d442410             lea eax, [esp + 0x10]
// 00790964  50                   push eax
// 00790965  6a14                 push 0x14
// 00790967  e834feffff           call 0x7907a0
// 0079096c  83c410               add esp, 0x10
// 0079096f  5f                   pop edi
// 00790970  5b                   pop ebx
// 00790971  83c418               add esp, 0x18
// 00790974  c3                   ret 
// 00790975  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00790979  56                   push esi
// 0079097a  8b742430             mov esi, dword ptr [esp + 0x30]
// 0079097e  e83dfdffff           call 0x7906c0
// 00790983  5e                   pop esi
// 00790984  5f                   pop edi
// 00790985  5b                   pop ebx
// 00790986  83c418               add esp, 0x18
// 00790989  c3                   ret 
// 0079098a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0079098e  833b05               cmp dword ptr [ebx], 5
// 00790991  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00790995  750a                 jne 0x7909a1
// 00790997  394b10               cmp dword ptr [ebx + 0x10], ecx
// 0079099a  7505                 jne 0x7909a1
// 0079099c  394b14               cmp dword ptr [ebx + 0x14], ecx
// 0079099f  740a                 je 0x7909ab
// 007909a1  53                   push ebx
// 007909a2  57                   push edi
// 007909a3  e848f8ffff           call 0x7901f0
// 007909a8  83c408               add esp, 8
// 007909ab  8d4c2408             lea ecx, [esp + 8]
// 007909af  51                   push ecx
// 007909b0  6a12                 push 0x12
// 007909b2  e8e9fdffff           call 0x7907a0
// 007909b7  83c408               add esp, 8
// 007909ba  5f                   pop edi
// 007909bb  5b                   pop ebx
// 007909bc  83c418               add esp, 0x18
// 007909bf  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_prefix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
