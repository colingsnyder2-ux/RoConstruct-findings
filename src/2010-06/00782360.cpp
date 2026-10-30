// from server: 100% by auto
// roc 2010-06 00782360  unit: seg_00780000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782360
//
// 00782360  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00782364  8a01                 mov al, byte ptr [ecx]
// 00782366  83ec10               sub esp, 0x10
// 00782369  3c40                 cmp al, 0x40
// 0078236b  7412                 je 0x78237f
// 0078236d  3c3d                 cmp al, 0x3d
// 0078236f  740e                 je 0x78237f
// 00782371  3c1b                 cmp al, 0x1b
// 00782373  750b                 jne 0x782380
// 00782375  c744240c1833a500     mov dword ptr [esp + 0xc], 0xa53318
// 0078237d  eb05                 jmp 0x782384
// 0078237f  41                   inc ecx
// 00782380  894c240c             mov dword ptr [esp + 0xc], ecx
// 00782384  8b442418             mov eax, dword ptr [esp + 0x18]
// 00782388  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078238c  56                   push esi
// 0078238d  57                   push edi
// 0078238e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00782392  8d742408             lea esi, [esp + 8]
// 00782396  897c2408             mov dword ptr [esp + 8], edi
// 0078239a  8944240c             mov dword ptr [esp + 0xc], eax
// 0078239e  894c2410             mov dword ptr [esp + 0x10], ecx
// 007823a2  e8f9feffff           call 0x7822a0
// 007823a7  6a02                 push 2
// 007823a9  681433a500           push 0xa53314
// 007823ae  57                   push edi
// 007823af  e82cbaffff           call 0x77dde0
// 007823b4  50                   push eax
// 007823b5  8bd6                 mov edx, esi
// 007823b7  52                   push edx
// 007823b8  e8a3fcffff           call 0x782060
// 007823bd  83c414               add esp, 0x14
// 007823c0  5f                   pop edi
// 007823c1  5e                   pop esi
// 007823c2  83c410               add esp, 0x10
// 007823c5  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_undump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
