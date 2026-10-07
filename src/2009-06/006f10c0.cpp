// roc 2009-06 006f10c0  unit: seg_006f0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f10c0
//
// 006f10c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f10c4  8a01                 mov al, byte ptr [ecx]
// 006f10c6  83ec10               sub esp, 0x10
// 006f10c9  3c40                 cmp al, 0x40
// 006f10cb  7412                 je 0x6f10df
// 006f10cd  3c3d                 cmp al, 0x3d
// 006f10cf  740e                 je 0x6f10df
// 006f10d1  3c1b                 cmp al, 0x1b
// 006f10d3  750b                 jne 0x6f10e0
// 006f10d5  c744240c98e08e00     mov dword ptr [esp + 0xc], 0x8ee098
// 006f10dd  eb05                 jmp 0x6f10e4
// 006f10df  41                   inc ecx
// 006f10e0  894c240c             mov dword ptr [esp + 0xc], ecx
// 006f10e4  8b442418             mov eax, dword ptr [esp + 0x18]
// 006f10e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f10ec  56                   push esi
// 006f10ed  57                   push edi
// 006f10ee  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006f10f2  8d742408             lea esi, [esp + 8]
// 006f10f6  897c2408             mov dword ptr [esp + 8], edi
// 006f10fa  8944240c             mov dword ptr [esp + 0xc], eax
// 006f10fe  894c2410             mov dword ptr [esp + 0x10], ecx
// 006f1102  e8f9feffff           call 0x6f1000
// 006f1107  6a02                 push 2
// 006f1109  6894e08e00           push 0x8ee094
// 006f110e  57                   push edi
// 006f110f  e82cbaffff           call 0x6ecb40
// 006f1114  50                   push eax
// 006f1115  8bd6                 mov edx, esi
// 006f1117  52                   push edx
// 006f1118  e8a3fcffff           call 0x6f0dc0
// 006f111d  83c414               add esp, 0x14
// 006f1120  5f                   pop edi
// 006f1121  5e                   pop esi
// 006f1122  83c410               add esp, 0x10
// 006f1125  c3                   ret 
// library lua-5.1.4/lundump.c (function _luaU_undump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
