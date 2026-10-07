// roc 2012-06 00858830  unit: seg_00850000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00858830
//
// 00858830  53                   push ebx
// 00858831  56                   push esi
// 00858832  57                   push edi
// 00858833  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00858837  6a05                 push 5
// 00858839  6a01                 push 1
// 0085883b  57                   push edi
// 0085883c  e85fb0fdff           call 0x8338a0
// 00858841  6a01                 push 1
// 00858843  6a02                 push 2
// 00858845  57                   push edi
// 00858846  e885b2fdff           call 0x833ad0
// 0085884b  6a03                 push 3
// 0085884d  57                   push edi
// 0085884e  8bf0                 mov esi, eax
// 00858850  e88b94fdff           call 0x831ce0
// 00858855  83c420               add esp, 0x20
// 00858858  85c0                 test eax, eax
// 0085885a  7f0a                 jg 0x858866
// 0085885c  6a01                 push 1
// 0085885e  57                   push edi
// 0085885f  e8fc96fdff           call 0x831f60
// 00858864  eb08                 jmp 0x85886e
// 00858866  6a03                 push 3
// 00858868  57                   push edi
// 00858869  e8f2b1fdff           call 0x833a60
// 0085886e  8bd8                 mov ebx, eax
// 00858870  83c408               add esp, 8
// 00858873  3bf3                 cmp esi, ebx
// 00858875  7e06                 jle 0x85887d
// 00858877  5f                   pop edi
// 00858878  5e                   pop esi
// 00858879  33c0                 xor eax, eax
// 0085887b  5b                   pop ebx
// 0085887c  c3                   ret 
// 0085887d  55                   push ebp
// 0085887e  8beb                 mov ebp, ebx
// 00858880  2bee                 sub ebp, esi
// 00858882  45                   inc ebp
// 00858883  85ed                 test ebp, ebp
// 00858885  7e36                 jle 0x8588bd
// 00858887  55                   push ebp
// 00858888  57                   push edi
// 00858889  e86291fdff           call 0x8319f0
// 0085888e  83c408               add esp, 8
// 00858891  85c0                 test eax, eax
// 00858893  7428                 je 0x8588bd
// 00858895  56                   push esi
// 00858896  6a01                 push 1
// 00858898  57                   push edi
// 00858899  e8429bfdff           call 0x8323e0
// 0085889e  83c40c               add esp, 0xc
// 008588a1  3bf3                 cmp esi, ebx
// 008588a3  7d11                 jge 0x8588b6
// 008588a5  46                   inc esi
// 008588a6  56                   push esi
// 008588a7  6a01                 push 1
// 008588a9  57                   push edi
// 008588aa  e8319bfdff           call 0x8323e0
// 008588af  83c40c               add esp, 0xc
// 008588b2  3bf3                 cmp esi, ebx
// 008588b4  7cef                 jl 0x8588a5
// 008588b6  8bc5                 mov eax, ebp
// 008588b8  5d                   pop ebp
// 008588b9  5f                   pop edi
// 008588ba  5e                   pop esi
// 008588bb  5b                   pop ebx
// 008588bc  c3                   ret 
// 008588bd  680c43bd00           push 0xbd430c
// 008588c2  57                   push edi
// 008588c3  e8d8a5fdff           call 0x832ea0
// 008588c8  83c408               add esp, 8
// 008588cb  5d                   pop ebp
// 008588cc  5f                   pop edi
// 008588cd  5e                   pop esi
// 008588ce  5b                   pop ebx
// 008588cf  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
