// from server: 100% by auto
// roc 2011-06 007636a0  unit: seg_00760000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007636a0
//
// 007636a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007636a4  83ec64               sub esp, 0x64
// 007636a7  56                   push esi
// 007636a8  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007636ac  8d442404             lea eax, [esp + 4]
// 007636b0  50                   push eax
// 007636b1  51                   push ecx
// 007636b2  56                   push esi
// 007636b3  e888990100           call 0x77d040
// 007636b8  83c40c               add esp, 0xc
// 007636bb  85c0                 test eax, eax
// 007636bd  7434                 je 0x7636f3
// 007636bf  8d542404             lea edx, [esp + 4]
// 007636c3  52                   push edx
// 007636c4  680865ab00           push 0xab6508
// 007636c9  56                   push esi
// 007636ca  e8a1a60100           call 0x77dd70
// 007636cf  8b442424             mov eax, dword ptr [esp + 0x24]
// 007636d3  83c40c               add esp, 0xc
// 007636d6  85c0                 test eax, eax
// 007636d8  7e19                 jle 0x7636f3
// 007636da  50                   push eax
// 007636db  8d44242c             lea eax, [esp + 0x2c]
// 007636df  50                   push eax
// 007636e0  680065ab00           push 0xab6500
// 007636e5  56                   push esi
// 007636e6  e855f3ffff           call 0x762a40
// 007636eb  83c410               add esp, 0x10
// 007636ee  5e                   pop esi
// 007636ef  83c464               add esp, 0x64
// 007636f2  c3                   ret 
// 007636f3  6a00                 push 0
// 007636f5  68cabea500           push 0xa5beca
// 007636fa  56                   push esi
// 007636fb  e860f2ffff           call 0x762960
// 00763700  83c40c               add esp, 0xc
// 00763703  5e                   pop esi
// 00763704  83c464               add esp, 0x64
// 00763707  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_where)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
