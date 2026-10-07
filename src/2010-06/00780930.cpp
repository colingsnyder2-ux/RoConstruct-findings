// roc 2010-06 00780930  unit: seg_00780000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00780930
//
// 00780930  83ec0c               sub esp, 0xc
// 00780933  53                   push ebx
// 00780934  55                   push ebp
// 00780935  56                   push esi
// 00780936  57                   push edi
// 00780937  8bf8                 mov edi, eax
// 00780939  8b7730               mov esi, dword ptr [edi + 0x30]
// 0078093c  b903000000           mov ecx, 3
// 00780941  004e32               add byte ptr [esi + 0x32], cl
// 00780944  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00780948  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0078094b  2bc1                 sub eax, ecx
// 0078094d  83e901               sub ecx, 1
// 00780950  0fb78446ac000000     movzx eax, word ptr [esi + eax*2 + 0xac]
// 00780958  8d1440               lea edx, [eax + eax*2]
// 0078095b  8b06                 mov eax, dword ptr [esi]
// 0078095d  8b4018               mov eax, dword ptr [eax + 0x18]
// 00780960  895c9004             mov dword ptr [eax + edx*4 + 4], ebx
// 00780964  75de                 jne 0x780944
// 00780966  817f1003010000       cmp dword ptr [edi + 0x10], 0x103
// 0078096d  7424                 je 0x780993
// 0078096f  6803010000           push 0x103
// 00780974  57                   push edi
// 00780975  e8161b0000           call 0x782490
// 0078097a  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0078097d  50                   push eax
// 0078097e  683830a500           push 0xa53038
// 00780983  51                   push ecx
// 00780984  e85724fbff           call 0x732de0
// 00780989  50                   push eax
// 0078098a  57                   push edi
// 0078098b  e8001c0000           call 0x782590
// 00780990  83c41c               add esp, 0x1c
// 00780993  57                   push edi
// 00780994  e8e72f0000           call 0x783980
// 00780999  33db                 xor ebx, ebx
// 0078099b  83c404               add esp, 4
// 0078099e  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 007809a2  7417                 je 0x7809bb
// 007809a4  8b542420             mov edx, dword ptr [esp + 0x20]
// 007809a8  68feff0100           push 0x1fffe
// 007809ad  52                   push edx
// 007809ae  6a20                 push 0x20
// 007809b0  56                   push esi
// 007809b1  e8daf10000           call 0x78fb90
// 007809b6  83c410               add esp, 0x10
// 007809b9  eb09                 jmp 0x7809c4
// 007809bb  56                   push esi
// 007809bc  e82ff30000           call 0x78fcf0
// 007809c1  83c404               add esp, 4
// 007809c4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007809cc  885c241a             mov byte ptr [esp + 0x1a], bl
// 007809d0  8be8                 mov ebp, eax
// 007809d2  8a4632               mov al, byte ptr [esi + 0x32]
// 007809d5  88442418             mov byte ptr [esp + 0x18], al
// 007809d9  885c2419             mov byte ptr [esp + 0x19], bl
// 007809dd  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007809e0  8d542410             lea edx, [esp + 0x10]
// 007809e4  894c2410             mov dword ptr [esp + 0x10], ecx
// 007809e8  895614               mov dword ptr [esi + 0x14], edx
// 007809eb  8b542428             mov edx, dword ptr [esp + 0x28]
// 007809ef  8bc7                 mov eax, edi
// 007809f1  e8cae2ffff           call 0x77ecc0
// 007809f6  8b442428             mov eax, dword ptr [esp + 0x28]
// 007809fa  50                   push eax
// 007809fb  56                   push esi
// 007809fc  e8bfec0000           call 0x78f6c0
// 00780a01  83c408               add esp, 8
// 00780a04  8bc7                 mov eax, edi
// 00780a06  e805faffff           call 0x780410
// 00780a0b  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00780a0e  8b0f                 mov ecx, dword ptr [edi]
// 00780a10  8b460c               mov eax, dword ptr [esi + 0xc]
// 00780a13  894e14               mov dword ptr [esi + 0x14], ecx
// 00780a16  0fb65708             movzx edx, byte ptr [edi + 8]
// 00780a1a  e8e1e2ffff           call 0x77ed00
// 00780a1f  385f09               cmp byte ptr [edi + 9], bl
// 00780a22  7412                 je 0x780a36
// 00780a24  0fb65708             movzx edx, byte ptr [edi + 8]
// 00780a28  53                   push ebx
// 00780a29  53                   push ebx
// 00780a2a  52                   push edx
// 00780a2b  6a23                 push 0x23
// 00780a2d  56                   push esi
// 00780a2e  e82df10000           call 0x78fb60
// 00780a33  83c414               add esp, 0x14
// 00780a36  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00780a3a  894624               mov dword ptr [esi + 0x24], eax
// 00780a3d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00780a40  51                   push ecx
// 00780a41  56                   push esi
// 00780a42  e879f30000           call 0x78fdc0
// 00780a47  55                   push ebp
// 00780a48  56                   push esi
// 00780a49  e872f30000           call 0x78fdc0
// 00780a4e  83c410               add esp, 0x10
// 00780a51  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00780a55  7417                 je 0x780a6e
// 00780a57  8b542420             mov edx, dword ptr [esp + 0x20]
// 00780a5b  68feff0100           push 0x1fffe
// 00780a60  52                   push edx
// 00780a61  6a1f                 push 0x1f
// 00780a63  56                   push esi
// 00780a64  e827f10000           call 0x78fb90
// 00780a69  83c410               add esp, 0x10
// 00780a6c  eb16                 jmp 0x780a84
// 00780a6e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00780a72  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00780a76  50                   push eax
// 00780a77  53                   push ebx
// 00780a78  51                   push ecx
// 00780a79  6a21                 push 0x21
// 00780a7b  56                   push esi
// 00780a7c  e8dff00000           call 0x78fb60
// 00780a81  83c414               add esp, 0x14
// 00780a84  8b542424             mov edx, dword ptr [esp + 0x24]
// 00780a88  52                   push edx
// 00780a89  56                   push esi
// 00780a8a  8bf8                 mov edi, eax
// 00780a8c  e80ff00000           call 0x78faa0
// 00780a91  83c408               add esp, 8
// 00780a94  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00780a98  7416                 je 0x780ab0
// 00780a9a  45                   inc ebp
// 00780a9b  8bc7                 mov eax, edi
// 00780a9d  55                   push ebp
// 00780a9e  50                   push eax
// 00780a9f  56                   push esi
// 00780aa0  e80b020100           call 0x790cb0
// 00780aa5  83c40c               add esp, 0xc
// 00780aa8  5f                   pop edi
// 00780aa9  5e                   pop esi
// 00780aaa  5d                   pop ebp
// 00780aab  5b                   pop ebx
// 00780aac  83c40c               add esp, 0xc
// 00780aaf  c3                   ret 
// 00780ab0  56                   push esi
// 00780ab1  e83af20000           call 0x78fcf0
// 00780ab6  83c404               add esp, 4
// 00780ab9  45                   inc ebp
// 00780aba  55                   push ebp
// 00780abb  50                   push eax
// 00780abc  56                   push esi
// 00780abd  e8ee010100           call 0x790cb0
// 00780ac2  83c40c               add esp, 0xc
// 00780ac5  5f                   pop edi
// 00780ac6  5e                   pop esi
// 00780ac7  5d                   pop ebp
// 00780ac8  5b                   pop ebx
// 00780ac9  83c40c               add esp, 0xc
// 00780acc  c3                   ret 
// library lua-5.1.4/lparser.c (function _forbody)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
