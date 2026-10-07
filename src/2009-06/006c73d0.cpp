// roc 2009-06 006c73d0  unit: seg_006c0000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c73d0
//
// 006c73d0  53                   push ebx
// 006c73d1  56                   push esi
// 006c73d2  57                   push edi
// 006c73d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c73d7  6a05                 push 5
// 006c73d9  6a01                 push 1
// 006c73db  57                   push edi
// 006c73dc  e85f38ffff           call 0x6bac40
// 006c73e1  6a01                 push 1
// 006c73e3  6a02                 push 2
// 006c73e5  57                   push edi
// 006c73e6  e8853affff           call 0x6bae70
// 006c73eb  6a03                 push 3
// 006c73ed  57                   push edi
// 006c73ee  8bf0                 mov esi, eax
// 006c73f0  e87b1bffff           call 0x6b8f70
// 006c73f5  83c420               add esp, 0x20
// 006c73f8  85c0                 test eax, eax
// 006c73fa  7f0a                 jg 0x6c7406
// 006c73fc  6a01                 push 1
// 006c73fe  57                   push edi
// 006c73ff  e8ec1dffff           call 0x6b91f0
// 006c7404  eb08                 jmp 0x6c740e
// 006c7406  6a03                 push 3
// 006c7408  57                   push edi
// 006c7409  e8f239ffff           call 0x6bae00
// 006c740e  8bd8                 mov ebx, eax
// 006c7410  83c408               add esp, 8
// 006c7413  3bf3                 cmp esi, ebx
// 006c7415  7e06                 jle 0x6c741d
// 006c7417  5f                   pop edi
// 006c7418  5e                   pop esi
// 006c7419  33c0                 xor eax, eax
// 006c741b  5b                   pop ebx
// 006c741c  c3                   ret 
// 006c741d  55                   push ebp
// 006c741e  8beb                 mov ebp, ebx
// 006c7420  2bee                 sub ebp, esi
// 006c7422  45                   inc ebp
// 006c7423  85ed                 test ebp, ebp
// 006c7425  7e36                 jle 0x6c745d
// 006c7427  55                   push ebp
// 006c7428  57                   push edi
// 006c7429  e85218ffff           call 0x6b8c80
// 006c742e  83c408               add esp, 8
// 006c7431  85c0                 test eax, eax
// 006c7433  7428                 je 0x6c745d
// 006c7435  56                   push esi
// 006c7436  6a01                 push 1
// 006c7438  57                   push edi
// 006c7439  e83222ffff           call 0x6b9670
// 006c743e  83c40c               add esp, 0xc
// 006c7441  3bf3                 cmp esi, ebx
// 006c7443  7d11                 jge 0x6c7456
// 006c7445  46                   inc esi
// 006c7446  56                   push esi
// 006c7447  6a01                 push 1
// 006c7449  57                   push edi
// 006c744a  e82122ffff           call 0x6b9670
// 006c744f  83c40c               add esp, 0xc
// 006c7452  3bf3                 cmp esi, ebx
// 006c7454  7cef                 jl 0x6c7445
// 006c7456  8bc5                 mov eax, ebp
// 006c7458  5d                   pop ebp
// 006c7459  5f                   pop edi
// 006c745a  5e                   pop esi
// 006c745b  5b                   pop ebx
// 006c745c  c3                   ret 
// 006c745d  684cc18e00           push 0x8ec14c
// 006c7462  57                   push edi
// 006c7463  e8d82dffff           call 0x6ba240
// 006c7468  83c408               add esp, 8
// 006c746b  5d                   pop ebp
// 006c746c  5f                   pop edi
// 006c746d  5e                   pop esi
// 006c746e  5b                   pop ebx
// 006c746f  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
