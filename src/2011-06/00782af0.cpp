// roc 2011-06 00782af0  unit: seg_00780000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782af0
//
// 00782af0  53                   push ebx
// 00782af1  57                   push edi
// 00782af2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00782af6  57                   push edi
// 00782af7  e864f8fdff           call 0x762360
// 00782afc  6a01                 push 1
// 00782afe  57                   push edi
// 00782aff  8bd8                 mov ebx, eax
// 00782b01  e84afafdff           call 0x762550
// 00782b06  83c40c               add esp, 0xc
// 00782b09  83f804               cmp eax, 4
// 00782b0c  7525                 jne 0x782b33
// 00782b0e  6a00                 push 0
// 00782b10  6a01                 push 1
// 00782b12  57                   push edi
// 00782b13  e848fcfdff           call 0x762760
// 00782b18  83c40c               add esp, 0xc
// 00782b1b  803823               cmp byte ptr [eax], 0x23
// 00782b1e  7513                 jne 0x782b33
// 00782b20  4b                   dec ebx
// 00782b21  53                   push ebx
// 00782b22  57                   push edi
// 00782b23  e818fefdff           call 0x762940
// 00782b28  83c408               add esp, 8
// 00782b2b  5f                   pop edi
// 00782b2c  b801000000           mov eax, 1
// 00782b31  5b                   pop ebx
// 00782b32  c3                   ret 
// 00782b33  56                   push esi
// 00782b34  6a01                 push 1
// 00782b36  57                   push edi
// 00782b37  e89417feff           call 0x7642d0
// 00782b3c  8bf0                 mov esi, eax
// 00782b3e  83c408               add esp, 8
// 00782b41  85f6                 test esi, esi
// 00782b43  7d04                 jge 0x782b49
// 00782b45  03f3                 add esi, ebx
// 00782b47  eb06                 jmp 0x782b4f
// 00782b49  3bf3                 cmp esi, ebx
// 00782b4b  7e02                 jle 0x782b4f
// 00782b4d  8bf3                 mov esi, ebx
// 00782b4f  83fe01               cmp esi, 1
// 00782b52  7d10                 jge 0x782b64
// 00782b54  687882ab00           push 0xab8278
// 00782b59  6a01                 push 1
// 00782b5b  57                   push edi
// 00782b5c  e83f14feff           call 0x763fa0
// 00782b61  83c40c               add esp, 0xc
// 00782b64  8bc3                 mov eax, ebx
// 00782b66  2bc6                 sub eax, esi
// 00782b68  5e                   pop esi
// 00782b69  5f                   pop edi
// 00782b6a  5b                   pop ebx
// 00782b6b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_select)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
