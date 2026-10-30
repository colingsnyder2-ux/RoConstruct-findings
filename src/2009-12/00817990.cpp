// roc 2009-12 00817990  unit: MyXTPCommandBars  size: 650 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817990
//
// 00817990  51                   push ecx
// 00817991  53                   push ebx
// 00817992  55                   push ebp
// 00817993  56                   push esi
// 00817994  8b742414             mov esi, dword ptr [esp + 0x14]
// 00817998  57                   push edi
// 00817999  33db                 xor ebx, ebx
// 0081799b  8bf9                 mov edi, ecx
// 0081799d  895e3c               mov dword ptr [esi + 0x3c], ebx
// 008179a0  895e40               mov dword ptr [esi + 0x40], ebx
// 008179a3  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 008179a9  e832cdffff           call 0x8146e0
// 008179ae  8bc8                 mov ecx, eax
// 008179b0  e8fb5cfeff           call 0x7fd6b0
// 008179b5  89442410             mov dword ptr [esp + 0x10], eax
// 008179b9  6a20                 push 0x20
// 008179bb  8d44241c             lea eax, [esp + 0x1c]
// 008179bf  50                   push eax
// 008179c0  68ec409f00           push 0x9f40ec
// 008179c5  56                   push esi
// 008179c6  c744242820000000     mov dword ptr [esp + 0x28], 0x20
// 008179ce  e82d900300           call 0x850a00
// 008179d3  6a01                 push 1
// 008179d5  8d4f20               lea ecx, [edi + 0x20]
// 008179d8  51                   push ecx
// 008179d9  68d8409f00           push 0x9f40d8
// 008179de  56                   push esi
// 008179df  e87c900300           call 0x850a60
// 008179e4  6a01                 push 1
// 008179e6  8d5724               lea edx, [edi + 0x24]
// 008179e9  52                   push edx
// 008179ea  68c4409f00           push 0x9f40c4
// 008179ef  56                   push esi
// 008179f0  e86b900300           call 0x850a60
// 008179f5  6a01                 push 1
// 008179f7  8d4728               lea eax, [edi + 0x28]
// 008179fa  50                   push eax
// 008179fb  68b0409f00           push 0x9f40b0
// 00817a00  56                   push esi
// 00817a01  e85a900300           call 0x850a60
// 00817a06  83c440               add esp, 0x40
// 00817a09  53                   push ebx
// 00817a0a  8d4f2c               lea ecx, [edi + 0x2c]
// 00817a0d  51                   push ecx
// 00817a0e  689c409f00           push 0x9f409c
// 00817a13  56                   push esi
// 00817a14  e847900300           call 0x850a60
// 00817a19  53                   push ebx
// 00817a1a  8d5730               lea edx, [edi + 0x30]
// 00817a1d  52                   push edx
// 00817a1e  6890409f00           push 0x9f4090
// 00817a23  56                   push esi
// 00817a24  e837900300           call 0x850a60
// 00817a29  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00817a2d  83c420               add esp, 0x20
// 00817a30  837c241807           cmp dword ptr [esp + 0x18], 7
// 00817a35  7639                 jbe 0x817a70
// 00817a37  395e28               cmp dword ptr [esi + 0x28], ebx
// 00817a3a  7518                 jne 0x817a54
// 00817a3c  8b06                 mov eax, dword ptr [esi]
// 00817a3e  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 00817a44  8bce                 mov ecx, esi
// 00817a46  ffd2                 call edx
// 00817a48  85c0                 test eax, eax
// 00817a4a  7408                 je 0x817a54
// 00817a4c  399fb4000000         cmp dword ptr [edi + 0xb4], ebx
// 00817a52  7415                 je 0x817a69
// 00817a54  8d87a8000000         lea eax, [edi + 0xa8]
// 00817a5a  50                   push eax
// 00817a5b  6880409f00           push 0x9f4080
// 00817a60  56                   push esi
// 00817a61  e86afdffff           call 0x8177d0
// 00817a66  83c40c               add esp, 0xc
// 00817a69  837c241807           cmp dword ptr [esp + 0x18], 7
// 00817a6e  7704                 ja 0x817a74
// 00817a70  3beb                 cmp ebp, ebx
// 00817a72  741b                 je 0x817a8f
// 00817a74  53                   push ebx
// 00817a75  8d4f54               lea ecx, [edi + 0x54]
// 00817a78  51                   push ecx
// 00817a79  6874409f00           push 0x9f4074
// 00817a7e  56                   push esi
// 00817a7f  e87c8f0300           call 0x850a00
// 00817a84  83c410               add esp, 0x10
// 00817a87  3beb                 cmp ebp, ebx
// 00817a89  0f8583010000         jne 0x817c12
// 00817a8f  6a01                 push 1
// 00817a91  8d5f34               lea ebx, [edi + 0x34]
// 00817a94  53                   push ebx
// 00817a95  6860409f00           push 0x9f4060
// 00817a9a  56                   push esi
// 00817a9b  e8c08f0300           call 0x850a60
// 00817aa0  6a01                 push 1
// 00817aa2  8d6f38               lea ebp, [edi + 0x38]
// 00817aa5  55                   push ebp
// 00817aa6  6848409f00           push 0x9f4048
// 00817aab  56                   push esi
// 00817aac  e8af8f0300           call 0x850a60
// 00817ab1  33c9                 xor ecx, ecx
// 00817ab3  51                   push ecx
// 00817ab4  33c0                 xor eax, eax
// 00817ab6  50                   push eax
// 00817ab7  8d5764               lea edx, [edi + 0x64]
// 00817aba  52                   push edx
// 00817abb  683c409f00           push 0x9f403c
// 00817ac0  56                   push esi
// 00817ac1  e88a900300           call 0x850b50
// 00817ac6  33c9                 xor ecx, ecx
// 00817ac8  51                   push ecx
// 00817ac9  33c0                 xor eax, eax
// 00817acb  50                   push eax
// 00817acc  8d476c               lea eax, [edi + 0x6c]
// 00817acf  50                   push eax
// 00817ad0  682c409f00           push 0x9f402c
// 00817ad5  56                   push esi
// 00817ad6  e875900300           call 0x850b50
// 00817adb  83c448               add esp, 0x48
// 00817ade  837e2800             cmp dword ptr [esi + 0x28], 0
// 00817ae2  7519                 jne 0x817afd
// 00817ae4  8b16                 mov edx, dword ptr [esi]
// 00817ae6  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00817aec  8bce                 mov ecx, esi
// 00817aee  ffd0                 call eax
// 00817af0  85c0                 test eax, eax
// 00817af2  7409                 je 0x817afd
// 00817af4  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 00817afb  7415                 je 0x817b12
// 00817afd  8d8f8c000000         lea ecx, [edi + 0x8c]
// 00817b03  51                   push ecx
// 00817b04  681c409f00           push 0x9f401c
// 00817b09  56                   push esi
// 00817b0a  e8c1fcffff           call 0x8177d0
// 00817b0f  83c40c               add esp, 0xc
// 00817b12  8b542410             mov edx, dword ptr [esp + 0x10]
// 00817b16  6a00                 push 0
// 00817b18  83c208               add edx, 8
// 00817b1b  52                   push edx
// 00817b1c  680c409f00           push 0x9f400c
// 00817b21  56                   push esi
// 00817b22  e8398f0300           call 0x850a60
// 00817b27  8b442420             mov eax, dword ptr [esp + 0x20]
// 00817b2b  6a01                 push 1
// 00817b2d  83c004               add eax, 4
// 00817b30  50                   push eax
// 00817b31  68f83f9f00           push 0x9f3ff8
// 00817b36  56                   push esi
// 00817b37  e8248f0300           call 0x850a60
// 00817b3c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00817b40  6a01                 push 1
// 00817b42  51                   push ecx
// 00817b43  68e83f9f00           push 0x9f3fe8
// 00817b48  56                   push esi
// 00817b49  e8128f0300           call 0x850a60
// 00817b4e  83c430               add esp, 0x30
// 00817b51  837c241807           cmp dword ptr [esp + 0x18], 7
// 00817b56  767b                 jbe 0x817bd3
// 00817b58  6a01                 push 1
// 00817b5a  53                   push ebx
// 00817b5b  6860409f00           push 0x9f4060
// 00817b60  56                   push esi
// 00817b61  e8fa8e0300           call 0x850a60
// 00817b66  6a01                 push 1
// 00817b68  55                   push ebp
// 00817b69  6848409f00           push 0x9f4048
// 00817b6e  56                   push esi
// 00817b6f  e8ec8e0300           call 0x850a60
// 00817b74  6a00                 push 0
// 00817b76  8d573c               lea edx, [edi + 0x3c]
// 00817b79  52                   push edx
// 00817b7a  68d83f9f00           push 0x9f3fd8
// 00817b7f  56                   push esi
// 00817b80  e8db8e0300           call 0x850a60
// 00817b85  6a00                 push 0
// 00817b87  8d4740               lea eax, [edi + 0x40]
// 00817b8a  50                   push eax
// 00817b8b  68c43f9f00           push 0x9f3fc4
// 00817b90  56                   push esi
// 00817b91  e8ca8e0300           call 0x850a60
// 00817b96  83c440               add esp, 0x40
// 00817b99  6a01                 push 1
// 00817b9b  8d4f44               lea ecx, [edi + 0x44]
// 00817b9e  51                   push ecx
// 00817b9f  68ac3f9f00           push 0x9f3fac
// 00817ba4  56                   push esi
// 00817ba5  e8b68e0300           call 0x850a60
// 00817baa  6a01                 push 1
// 00817bac  8d5748               lea edx, [edi + 0x48]
// 00817baf  52                   push edx
// 00817bb0  68943f9f00           push 0x9f3f94
// 00817bb5  56                   push esi
// 00817bb6  e8a58e0300           call 0x850a60
// 00817bbb  33c9                 xor ecx, ecx
// 00817bbd  51                   push ecx
// 00817bbe  33c0                 xor eax, eax
// 00817bc0  50                   push eax
// 00817bc1  8d4774               lea eax, [edi + 0x74]
// 00817bc4  50                   push eax
// 00817bc5  68843f9f00           push 0x9f3f84
// 00817bca  56                   push esi
// 00817bcb  e8808f0300           call 0x850b50
// 00817bd0  83c434               add esp, 0x34
// 00817bd3  837c241808           cmp dword ptr [esp + 0x18], 8
// 00817bd8  7638                 jbe 0x817c12
// 00817bda  6a01                 push 1
// 00817bdc  8d4f5c               lea ecx, [edi + 0x5c]
// 00817bdf  51                   push ecx
// 00817be0  68743f9f00           push 0x9f3f74
// 00817be5  56                   push esi
// 00817be6  e8158e0300           call 0x850a00
// 00817beb  6a00                 push 0
// 00817bed  8d9fcc000000         lea ebx, [edi + 0xcc]
// 00817bf3  53                   push ebx
// 00817bf4  68603f9f00           push 0x9f3f60
// 00817bf9  56                   push esi
// 00817bfa  e8018e0300           call 0x850a00
// 00817bff  83c420               add esp, 0x20
// 00817c02  837e2800             cmp dword ptr [esi + 0x28], 0
// 00817c06  740a                 je 0x817c12
// 00817c08  8b13                 mov edx, dword ptr [ebx]
// 00817c0a  52                   push edx
// 00817c0b  8bcf                 mov ecx, edi
// 00817c0d  e88ec3ffff           call 0x813fa0
// 00817c12  5f                   pop edi
// 00817c13  5e                   pop esi
// 00817c14  5d                   pop ebp
// 00817c15  5b                   pop ebx
// 00817c16  59                   pop ecx
// 00817c17  c20800               ret 8
// copied from an identical function in another client (function ?DoPropExchange@CXTPCommandBarsOptions@@QAEXPAVCXTPPropExchange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp