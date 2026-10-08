// from server: 100% by auto
// roc 2007-08 00617390  unit: seg_00610000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617390
//
// 00617390  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00617394  8a01                 mov al, byte ptr [ecx]
// 00617396  83ec10               sub esp, 0x10
// 00617399  3c40                 cmp al, 0x40
// 0061739b  7412                 je 0x6173af
// 0061739d  3c3d                 cmp al, 0x3d
// 0061739f  740e                 je 0x6173af
// 006173a1  3c1b                 cmp al, 0x1b
// 006173a3  750d                 jne 0x6173b2
// 006173a5  c744240c28367c00     mov dword ptr [esp + 0xc], 0x7c3628
// 006173ad  eb07                 jmp 0x6173b6
// 006173af  83c101               add ecx, 1
// 006173b2  894c240c             mov dword ptr [esp + 0xc], ecx
// 006173b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006173ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006173be  56                   push esi
// 006173bf  8b742418             mov esi, dword ptr [esp + 0x18]
// 006173c3  57                   push edi
// 006173c4  8d7c2408             lea edi, [esp + 8]
// 006173c8  89742408             mov dword ptr [esp + 8], esi
// 006173cc  8944240c             mov dword ptr [esp + 0xc], eax
// 006173d0  894c2410             mov dword ptr [esp + 0x10], ecx
// 006173d4  e897feffff           call 0x617270
// 006173d9  6a02                 push 2
// 006173db  6824367c00           push 0x7c3624
// 006173e0  56                   push esi
// 006173e1  e88ab9ffff           call 0x612d70
// 006173e6  50                   push eax
// 006173e7  8bd7                 mov edx, edi
// 006173e9  52                   push edx
// 006173ea  e881fcffff           call 0x617070
// 006173ef  83c414               add esp, 0x14
// 006173f2  5f                   pop edi
// 006173f3  5e                   pop esi
// 006173f4  83c410               add esp, 0x10
// 006173f7  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_undump)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
