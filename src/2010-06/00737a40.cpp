// roc 2010-06 00737a40  unit: seg_00730000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737a40
//
// 00737a40  53                   push ebx
// 00737a41  56                   push esi
// 00737a42  57                   push edi
// 00737a43  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00737a47  6a05                 push 5
// 00737a49  6a01                 push 1
// 00737a4b  57                   push edi
// 00737a4c  e84fb4feff           call 0x722ea0
// 00737a51  6a01                 push 1
// 00737a53  6a02                 push 2
// 00737a55  57                   push edi
// 00737a56  e875b6feff           call 0x7230d0
// 00737a5b  6a03                 push 3
// 00737a5d  57                   push edi
// 00737a5e  8bf0                 mov esi, eax
// 00737a60  e8db96feff           call 0x721140
// 00737a65  83c420               add esp, 0x20
// 00737a68  85c0                 test eax, eax
// 00737a6a  7f0a                 jg 0x737a76
// 00737a6c  6a01                 push 1
// 00737a6e  57                   push edi
// 00737a6f  e84c99feff           call 0x7213c0
// 00737a74  eb08                 jmp 0x737a7e
// 00737a76  6a03                 push 3
// 00737a78  57                   push edi
// 00737a79  e8e2b5feff           call 0x723060
// 00737a7e  8bd8                 mov ebx, eax
// 00737a80  83c408               add esp, 8
// 00737a83  3bf3                 cmp esi, ebx
// 00737a85  7e06                 jle 0x737a8d
// 00737a87  5f                   pop edi
// 00737a88  5e                   pop esi
// 00737a89  33c0                 xor eax, eax
// 00737a8b  5b                   pop ebx
// 00737a8c  c3                   ret 
// 00737a8d  55                   push ebp
// 00737a8e  8beb                 mov ebp, ebx
// 00737a90  2bee                 sub ebp, esi
// 00737a92  45                   inc ebp
// 00737a93  85ed                 test ebp, ebp
// 00737a95  7e36                 jle 0x737acd
// 00737a97  55                   push ebp
// 00737a98  57                   push edi
// 00737a99  e8b293feff           call 0x720e50
// 00737a9e  83c408               add esp, 8
// 00737aa1  85c0                 test eax, eax
// 00737aa3  7428                 je 0x737acd
// 00737aa5  56                   push esi
// 00737aa6  6a01                 push 1
// 00737aa8  57                   push edi
// 00737aa9  e8929dfeff           call 0x721840
// 00737aae  83c40c               add esp, 0xc
// 00737ab1  3bf3                 cmp esi, ebx
// 00737ab3  7d11                 jge 0x737ac6
// 00737ab5  46                   inc esi
// 00737ab6  56                   push esi
// 00737ab7  6a01                 push 1
// 00737ab9  57                   push edi
// 00737aba  e8819dfeff           call 0x721840
// 00737abf  83c40c               add esp, 0xc
// 00737ac2  3bf3                 cmp esi, ebx
// 00737ac4  7cef                 jl 0x737ab5
// 00737ac6  8bc5                 mov eax, ebp
// 00737ac8  5d                   pop ebp
// 00737ac9  5f                   pop edi
// 00737aca  5e                   pop esi
// 00737acb  5b                   pop ebx
// 00737acc  c3                   ret 
// 00737acd  68b4e8a400           push 0xa4e8b4
// 00737ad2  57                   push edi
// 00737ad3  e8c8a9feff           call 0x7224a0
// 00737ad8  83c408               add esp, 8
// 00737adb  5d                   pop ebp
// 00737adc  5f                   pop edi
// 00737add  5e                   pop esi
// 00737ade  5b                   pop ebx
// 00737adf  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
