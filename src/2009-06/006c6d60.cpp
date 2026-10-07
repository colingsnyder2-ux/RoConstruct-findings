// roc 2009-06 006c6d60  unit: seg_006c0000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6d60
//
// 006c6d60  83ec64               sub esp, 0x64
// 006c6d63  6a01                 push 1
// 006c6d65  56                   push esi
// 006c6d66  e80522ffff           call 0x6b8f70
// 006c6d6b  83c408               add esp, 8
// 006c6d6e  83f806               cmp eax, 6
// 006c6d71  750f                 jne 0x6c6d82
// 006c6d73  6a01                 push 1
// 006c6d75  56                   push esi
// 006c6d76  e8c521ffff           call 0x6b8f40
// 006c6d7b  83c408               add esp, 8
// 006c6d7e  83c464               add esp, 0x64
// 006c6d81  c3                   ret 
// 006c6d82  837c246800           cmp dword ptr [esp + 0x68], 0
// 006c6d87  57                   push edi
// 006c6d88  6a01                 push 1
// 006c6d8a  740d                 je 0x6c6d99
// 006c6d8c  6a01                 push 1
// 006c6d8e  56                   push esi
// 006c6d8f  e8dc40ffff           call 0x6bae70
// 006c6d94  83c40c               add esp, 0xc
// 006c6d97  eb09                 jmp 0x6c6da2
// 006c6d99  56                   push esi
// 006c6d9a  e86140ffff           call 0x6bae00
// 006c6d9f  83c408               add esp, 8
// 006c6da2  8bf8                 mov edi, eax
// 006c6da4  85ff                 test edi, edi
// 006c6da6  7d10                 jge 0x6c6db8
// 006c6da8  6824c08e00           push 0x8ec024
// 006c6dad  6a01                 push 1
// 006c6daf  56                   push esi
// 006c6db0  e81b3dffff           call 0x6baad0
// 006c6db5  83c40c               add esp, 0xc
// 006c6db8  8d442404             lea eax, [esp + 4]
// 006c6dbc  50                   push eax
// 006c6dbd  57                   push edi
// 006c6dbe  56                   push esi
// 006c6dbf  e8dc0e0000           call 0x6c7ca0
// 006c6dc4  83c40c               add esp, 0xc
// 006c6dc7  85c0                 test eax, eax
// 006c6dc9  7510                 jne 0x6c6ddb
// 006c6dcb  6814c08e00           push 0x8ec014
// 006c6dd0  6a01                 push 1
// 006c6dd2  56                   push esi
// 006c6dd3  e8f83cffff           call 0x6baad0
// 006c6dd8  83c40c               add esp, 0xc
// 006c6ddb  8d4c2404             lea ecx, [esp + 4]
// 006c6ddf  51                   push ecx
// 006c6de0  6810c08e00           push 0x8ec010
// 006c6de5  56                   push esi
// 006c6de6  e8d51b0000           call 0x6c89c0
// 006c6deb  6aff                 push -1
// 006c6ded  56                   push esi
// 006c6dee  e87d21ffff           call 0x6b8f70
// 006c6df3  83c414               add esp, 0x14
// 006c6df6  85c0                 test eax, eax
// 006c6df8  750f                 jne 0x6c6e09
// 006c6dfa  57                   push edi
// 006c6dfb  68dcbf8e00           push 0x8ebfdc
// 006c6e00  56                   push esi
// 006c6e01  e83a34ffff           call 0x6ba240
// 006c6e06  83c40c               add esp, 0xc
// 006c6e09  5f                   pop edi
// 006c6e0a  83c464               add esp, 0x64
// 006c6e0d  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _getfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
