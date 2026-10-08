// roc 2009-12 0079f1e0  unit: seg_00790000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079f1e0
//
// 0079f1e0  53                   push ebx
// 0079f1e1  56                   push esi
// 0079f1e2  57                   push edi
// 0079f1e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0079f1e7  6a05                 push 5
// 0079f1e9  6a01                 push 1
// 0079f1eb  57                   push edi
// 0079f1ec  e8ffb4feff           call 0x78a6f0
// 0079f1f1  6a01                 push 1
// 0079f1f3  6a02                 push 2
// 0079f1f5  57                   push edi
// 0079f1f6  e825b7feff           call 0x78a920
// 0079f1fb  6a03                 push 3
// 0079f1fd  57                   push edi
// 0079f1fe  8bf0                 mov esi, eax
// 0079f200  e88b97feff           call 0x788990
// 0079f205  83c420               add esp, 0x20
// 0079f208  85c0                 test eax, eax
// 0079f20a  7f0a                 jg 0x79f216
// 0079f20c  6a01                 push 1
// 0079f20e  57                   push edi
// 0079f20f  e8fc99feff           call 0x788c10
// 0079f214  eb08                 jmp 0x79f21e
// 0079f216  6a03                 push 3
// 0079f218  57                   push edi
// 0079f219  e892b6feff           call 0x78a8b0
// 0079f21e  8bd8                 mov ebx, eax
// 0079f220  83c408               add esp, 8
// 0079f223  3bf3                 cmp esi, ebx
// 0079f225  7e06                 jle 0x79f22d
// 0079f227  5f                   pop edi
// 0079f228  5e                   pop esi
// 0079f229  33c0                 xor eax, eax
// 0079f22b  5b                   pop ebx
// 0079f22c  c3                   ret 
// 0079f22d  55                   push ebp
// 0079f22e  8beb                 mov ebp, ebx
// 0079f230  2bee                 sub ebp, esi
// 0079f232  45                   inc ebp
// 0079f233  85ed                 test ebp, ebp
// 0079f235  7e36                 jle 0x79f26d
// 0079f237  55                   push ebp
// 0079f238  57                   push edi
// 0079f239  e86294feff           call 0x7886a0
// 0079f23e  83c408               add esp, 8
// 0079f241  85c0                 test eax, eax
// 0079f243  7428                 je 0x79f26d
// 0079f245  56                   push esi
// 0079f246  6a01                 push 1
// 0079f248  57                   push edi
// 0079f249  e8429efeff           call 0x789090
// 0079f24e  83c40c               add esp, 0xc
// 0079f251  3bf3                 cmp esi, ebx
// 0079f253  7d11                 jge 0x79f266
// 0079f255  46                   inc esi
// 0079f256  56                   push esi
// 0079f257  6a01                 push 1
// 0079f259  57                   push edi
// 0079f25a  e8319efeff           call 0x789090
// 0079f25f  83c40c               add esp, 0xc
// 0079f262  3bf3                 cmp esi, ebx
// 0079f264  7cef                 jl 0x79f255
// 0079f266  8bc5                 mov eax, ebp
// 0079f268  5d                   pop ebp
// 0079f269  5f                   pop edi
// 0079f26a  5e                   pop esi
// 0079f26b  5b                   pop ebx
// 0079f26c  c3                   ret 
// 0079f26d  6864b69e00           push 0x9eb664
// 0079f272  57                   push edi
// 0079f273  e878aafeff           call 0x789cf0
// 0079f278  83c408               add esp, 8
// 0079f27b  5d                   pop ebp
// 0079f27c  5f                   pop edi
// 0079f27d  5e                   pop esi
// 0079f27e  5b                   pop ebx
// 0079f27f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
