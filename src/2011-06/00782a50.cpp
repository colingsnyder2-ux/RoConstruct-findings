// roc 2011-06 00782a50  unit: seg_00780000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782a50
//
// 00782a50  53                   push ebx
// 00782a51  56                   push esi
// 00782a52  57                   push edi
// 00782a53  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00782a57  6a05                 push 5
// 00782a59  6a01                 push 1
// 00782a5b  57                   push edi
// 00782a5c  e8af16feff           call 0x764110
// 00782a61  6a01                 push 1
// 00782a63  6a02                 push 2
// 00782a65  57                   push edi
// 00782a66  e8d518feff           call 0x764340
// 00782a6b  6a03                 push 3
// 00782a6d  57                   push edi
// 00782a6e  8bf0                 mov esi, eax
// 00782a70  e8dbfafdff           call 0x762550
// 00782a75  83c420               add esp, 0x20
// 00782a78  85c0                 test eax, eax
// 00782a7a  7f0a                 jg 0x782a86
// 00782a7c  6a01                 push 1
// 00782a7e  57                   push edi
// 00782a7f  e84cfdfdff           call 0x7627d0
// 00782a84  eb08                 jmp 0x782a8e
// 00782a86  6a03                 push 3
// 00782a88  57                   push edi
// 00782a89  e84218feff           call 0x7642d0
// 00782a8e  8bd8                 mov ebx, eax
// 00782a90  83c408               add esp, 8
// 00782a93  3bf3                 cmp esi, ebx
// 00782a95  7e06                 jle 0x782a9d
// 00782a97  5f                   pop edi
// 00782a98  5e                   pop esi
// 00782a99  33c0                 xor eax, eax
// 00782a9b  5b                   pop ebx
// 00782a9c  c3                   ret 
// 00782a9d  55                   push ebp
// 00782a9e  8beb                 mov ebp, ebx
// 00782aa0  2bee                 sub ebp, esi
// 00782aa2  45                   inc ebp
// 00782aa3  85ed                 test ebp, ebp
// 00782aa5  7e36                 jle 0x782add
// 00782aa7  55                   push ebp
// 00782aa8  57                   push edi
// 00782aa9  e8b2f7fdff           call 0x762260
// 00782aae  83c408               add esp, 8
// 00782ab1  85c0                 test eax, eax
// 00782ab3  7428                 je 0x782add
// 00782ab5  56                   push esi
// 00782ab6  6a01                 push 1
// 00782ab8  57                   push edi
// 00782ab9  e89201feff           call 0x762c50
// 00782abe  83c40c               add esp, 0xc
// 00782ac1  3bf3                 cmp esi, ebx
// 00782ac3  7d11                 jge 0x782ad6
// 00782ac5  46                   inc esi
// 00782ac6  56                   push esi
// 00782ac7  6a01                 push 1
// 00782ac9  57                   push edi
// 00782aca  e88101feff           call 0x762c50
// 00782acf  83c40c               add esp, 0xc
// 00782ad2  3bf3                 cmp esi, ebx
// 00782ad4  7cef                 jl 0x782ac5
// 00782ad6  8bc5                 mov eax, ebp
// 00782ad8  5d                   pop ebp
// 00782ad9  5f                   pop edi
// 00782ada  5e                   pop esi
// 00782adb  5b                   pop ebx
// 00782adc  c3                   ret 
// 00782add  685c82ab00           push 0xab825c
// 00782ae2  57                   push edi
// 00782ae3  e8280cfeff           call 0x763710
// 00782ae8  83c408               add esp, 8
// 00782aeb  5d                   pop ebp
// 00782aec  5f                   pop edi
// 00782aed  5e                   pop esi
// 00782aee  5b                   pop ebx
// 00782aef  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
