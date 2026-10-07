// roc 2009-06 006c7470  unit: seg_006c0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7470
//
// 006c7470  53                   push ebx
// 006c7471  57                   push edi
// 006c7472  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c7476  57                   push edi
// 006c7477  e80419ffff           call 0x6b8d80
// 006c747c  6a01                 push 1
// 006c747e  57                   push edi
// 006c747f  8bd8                 mov ebx, eax
// 006c7481  e8ea1affff           call 0x6b8f70
// 006c7486  83c40c               add esp, 0xc
// 006c7489  83f804               cmp eax, 4
// 006c748c  7525                 jne 0x6c74b3
// 006c748e  6a00                 push 0
// 006c7490  6a01                 push 1
// 006c7492  57                   push edi
// 006c7493  e8e81cffff           call 0x6b9180
// 006c7498  83c40c               add esp, 0xc
// 006c749b  803823               cmp byte ptr [eax], 0x23
// 006c749e  7513                 jne 0x6c74b3
// 006c74a0  4b                   dec ebx
// 006c74a1  53                   push ebx
// 006c74a2  57                   push edi
// 006c74a3  e8b81effff           call 0x6b9360
// 006c74a8  83c408               add esp, 8
// 006c74ab  5f                   pop edi
// 006c74ac  b801000000           mov eax, 1
// 006c74b1  5b                   pop ebx
// 006c74b2  c3                   ret 
// 006c74b3  56                   push esi
// 006c74b4  6a01                 push 1
// 006c74b6  57                   push edi
// 006c74b7  e84439ffff           call 0x6bae00
// 006c74bc  8bf0                 mov esi, eax
// 006c74be  83c408               add esp, 8
// 006c74c1  85f6                 test esi, esi
// 006c74c3  7d04                 jge 0x6c74c9
// 006c74c5  03f3                 add esi, ebx
// 006c74c7  eb06                 jmp 0x6c74cf
// 006c74c9  3bf3                 cmp esi, ebx
// 006c74cb  7e02                 jle 0x6c74cf
// 006c74cd  8bf3                 mov esi, ebx
// 006c74cf  83fe01               cmp esi, 1
// 006c74d2  7d10                 jge 0x6c74e4
// 006c74d4  6868c18e00           push 0x8ec168
// 006c74d9  6a01                 push 1
// 006c74db  57                   push edi
// 006c74dc  e8ef35ffff           call 0x6baad0
// 006c74e1  83c40c               add esp, 0xc
// 006c74e4  8bc3                 mov eax, ebx
// 006c74e6  2bc6                 sub eax, esi
// 006c74e8  5e                   pop esi
// 006c74e9  5f                   pop edi
// 006c74ea  5b                   pop ebx
// 006c74eb  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_select)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
