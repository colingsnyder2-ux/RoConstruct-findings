// from server: 100% by auto
// roc 2007-08 005ca9f0  unit: seg_005c0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca9f0
//
// 005ca9f0  53                   push ebx
// 005ca9f1  55                   push ebp
// 005ca9f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005ca9f6  56                   push esi
// 005ca9f7  8bf0                 mov esi, eax
// 005ca9f9  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 005ca9fc  85db                 test ebx, ebx
// 005ca9fe  57                   push edi
// 005ca9ff  7509                 jne 0x5caa0a
// 005caa01  85ed                 test ebp, ebp
// 005caa03  7405                 je 0x5caa0a
// 005caa05  bb01000000           mov ebx, 1
// 005caa0a  8b4608               mov eax, dword ptr [esi + 8]
// 005caa0d  68489f7b00           push 0x7b9f48
// 005caa12  53                   push ebx
// 005caa13  50                   push eax
// 005caa14  e8573fffff           call 0x5be970
// 005caa19  83c40c               add esp, 0xc
// 005caa1c  33ff                 xor edi, edi
// 005caa1e  85db                 test ebx, ebx
// 005caa20  7e12                 jle 0x5caa34
// 005caa22  8b442418             mov eax, dword ptr [esp + 0x18]
// 005caa26  8bcd                 mov ecx, ebp
// 005caa28  e843ffffff           call 0x5ca970
// 005caa2d  83c701               add edi, 1
// 005caa30  3bfb                 cmp edi, ebx
// 005caa32  7cee                 jl 0x5caa22
// 005caa34  5f                   pop edi
// 005caa35  5e                   pop esi
// 005caa36  5d                   pop ebp
// 005caa37  8bc3                 mov eax, ebx
// 005caa39  5b                   pop ebx
// 005caa3a  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_captures)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
