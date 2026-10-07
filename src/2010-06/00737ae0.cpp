// roc 2010-06 00737ae0  unit: seg_00730000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737ae0
//
// 00737ae0  53                   push ebx
// 00737ae1  57                   push edi
// 00737ae2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00737ae6  57                   push edi
// 00737ae7  e86494feff           call 0x720f50
// 00737aec  6a01                 push 1
// 00737aee  57                   push edi
// 00737aef  8bd8                 mov ebx, eax
// 00737af1  e84a96feff           call 0x721140
// 00737af6  83c40c               add esp, 0xc
// 00737af9  83f804               cmp eax, 4
// 00737afc  7525                 jne 0x737b23
// 00737afe  6a00                 push 0
// 00737b00  6a01                 push 1
// 00737b02  57                   push edi
// 00737b03  e84898feff           call 0x721350
// 00737b08  83c40c               add esp, 0xc
// 00737b0b  803823               cmp byte ptr [eax], 0x23
// 00737b0e  7513                 jne 0x737b23
// 00737b10  4b                   dec ebx
// 00737b11  53                   push ebx
// 00737b12  57                   push edi
// 00737b13  e8189afeff           call 0x721530
// 00737b18  83c408               add esp, 8
// 00737b1b  5f                   pop edi
// 00737b1c  b801000000           mov eax, 1
// 00737b21  5b                   pop ebx
// 00737b22  c3                   ret 
// 00737b23  56                   push esi
// 00737b24  6a01                 push 1
// 00737b26  57                   push edi
// 00737b27  e834b5feff           call 0x723060
// 00737b2c  8bf0                 mov esi, eax
// 00737b2e  83c408               add esp, 8
// 00737b31  85f6                 test esi, esi
// 00737b33  7d04                 jge 0x737b39
// 00737b35  03f3                 add esi, ebx
// 00737b37  eb06                 jmp 0x737b3f
// 00737b39  3bf3                 cmp esi, ebx
// 00737b3b  7e02                 jle 0x737b3f
// 00737b3d  8bf3                 mov esi, ebx
// 00737b3f  83fe01               cmp esi, 1
// 00737b42  7d10                 jge 0x737b54
// 00737b44  68d0e8a400           push 0xa4e8d0
// 00737b49  6a01                 push 1
// 00737b4b  57                   push edi
// 00737b4c  e8dfb1feff           call 0x722d30
// 00737b51  83c40c               add esp, 0xc
// 00737b54  8bc3                 mov eax, ebx
// 00737b56  2bc6                 sub eax, esi
// 00737b58  5e                   pop esi
// 00737b59  5f                   pop edi
// 00737b5a  5b                   pop ebx
// 00737b5b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_select)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
