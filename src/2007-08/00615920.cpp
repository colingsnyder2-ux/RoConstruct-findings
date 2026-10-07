// roc 2007-08 00615920  unit: seg_00610000  size: 397 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00615920
//
// 00615920  83ec0c               sub esp, 0xc
// 00615923  53                   push ebx
// 00615924  55                   push ebp
// 00615925  56                   push esi
// 00615926  57                   push edi
// 00615927  8bf8                 mov edi, eax
// 00615929  8b7730               mov esi, dword ptr [edi + 0x30]
// 0061592c  b903000000           mov ecx, 3
// 00615931  004e32               add byte ptr [esi + 0x32], cl
// 00615934  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00615938  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0061593b  2bc1                 sub eax, ecx
// 0061593d  83e901               sub ecx, 1
// 00615940  0fb78446ac000000     movzx eax, word ptr [esi + eax*2 + 0xac]
// 00615948  8d1440               lea edx, [eax + eax*2]
// 0061594b  8b06                 mov eax, dword ptr [esi]
// 0061594d  8b4018               mov eax, dword ptr [eax + 0x18]
// 00615950  895c9004             mov dword ptr [eax + edx*4 + 4], ebx
// 00615954  75de                 jne 0x615934
// 00615956  817f1003010000       cmp dword ptr [edi + 0x10], 0x103
// 0061595d  7424                 je 0x615983
// 0061595f  6803010000           push 0x103
// 00615964  57                   push edi
// 00615965  e8561b0000           call 0x6174c0
// 0061596a  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0061596d  50                   push eax
// 0061596e  6870337c00           push 0x7c3370
// 00615973  51                   push ecx
// 00615974  e81795ffff           call 0x60ee90
// 00615979  50                   push eax
// 0061597a  57                   push edi
// 0061597b  e8401c0000           call 0x6175c0
// 00615980  83c41c               add esp, 0x1c
// 00615983  57                   push edi
// 00615984  e867300000           call 0x6189f0
// 00615989  33db                 xor ebx, ebx
// 0061598b  83c404               add esp, 4
// 0061598e  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00615992  7417                 je 0x6159ab
// 00615994  8b542420             mov edx, dword ptr [esp + 0x20]
// 00615998  68feff0100           push 0x1fffe
// 0061599d  52                   push edx
// 0061599e  6a20                 push 0x20
// 006159a0  56                   push esi
// 006159a1  e80a340100           call 0x628db0
// 006159a6  83c410               add esp, 0x10
// 006159a9  eb09                 jmp 0x6159b4
// 006159ab  56                   push esi
// 006159ac  e85f350100           call 0x628f10
// 006159b1  83c404               add esp, 4
// 006159b4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006159bc  885c241a             mov byte ptr [esp + 0x1a], bl
// 006159c0  8be8                 mov ebp, eax
// 006159c2  8a4632               mov al, byte ptr [esi + 0x32]
// 006159c5  88442418             mov byte ptr [esp + 0x18], al
// 006159c9  885c2419             mov byte ptr [esp + 0x19], bl
// 006159cd  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006159d0  8d542410             lea edx, [esp + 0x10]
// 006159d4  894c2410             mov dword ptr [esp + 0x10], ecx
// 006159d8  895614               mov dword ptr [esi + 0x14], edx
// 006159db  8b542428             mov edx, dword ptr [esp + 0x28]
// 006159df  8bc7                 mov eax, edi
// 006159e1  e8dae2ffff           call 0x613cc0
// 006159e6  8b442428             mov eax, dword ptr [esp + 0x28]
// 006159ea  50                   push eax
// 006159eb  56                   push esi
// 006159ec  e8bf2e0100           call 0x6288b0
// 006159f1  83c408               add esp, 8
// 006159f4  8bc7                 mov eax, edi
// 006159f6  e835faffff           call 0x615430
// 006159fb  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006159fe  8b0f                 mov ecx, dword ptr [edi]
// 00615a00  8b460c               mov eax, dword ptr [esi + 0xc]
// 00615a03  894e14               mov dword ptr [esi + 0x14], ecx
// 00615a06  0fb65708             movzx edx, byte ptr [edi + 8]
// 00615a0a  e8f1e2ffff           call 0x613d00
// 00615a0f  385f09               cmp byte ptr [edi + 9], bl
// 00615a12  7412                 je 0x615a26
// 00615a14  0fb65708             movzx edx, byte ptr [edi + 8]
// 00615a18  53                   push ebx
// 00615a19  53                   push ebx
// 00615a1a  52                   push edx
// 00615a1b  6a23                 push 0x23
// 00615a1d  56                   push esi
// 00615a1e  e85d330100           call 0x628d80
// 00615a23  83c414               add esp, 0x14
// 00615a26  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00615a2a  894624               mov dword ptr [esi + 0x24], eax
// 00615a2d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00615a30  51                   push ecx
// 00615a31  56                   push esi
// 00615a32  e8a9350100           call 0x628fe0
// 00615a37  55                   push ebp
// 00615a38  56                   push esi
// 00615a39  e8a2350100           call 0x628fe0
// 00615a3e  83c410               add esp, 0x10
// 00615a41  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00615a45  7417                 je 0x615a5e
// 00615a47  8b542420             mov edx, dword ptr [esp + 0x20]
// 00615a4b  68feff0100           push 0x1fffe
// 00615a50  52                   push edx
// 00615a51  6a1f                 push 0x1f
// 00615a53  56                   push esi
// 00615a54  e857330100           call 0x628db0
// 00615a59  83c410               add esp, 0x10
// 00615a5c  eb16                 jmp 0x615a74
// 00615a5e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00615a62  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00615a66  50                   push eax
// 00615a67  53                   push ebx
// 00615a68  51                   push ecx
// 00615a69  6a21                 push 0x21
// 00615a6b  56                   push esi
// 00615a6c  e80f330100           call 0x628d80
// 00615a71  83c414               add esp, 0x14
// 00615a74  8b542424             mov edx, dword ptr [esp + 0x24]
// 00615a78  52                   push edx
// 00615a79  56                   push esi
// 00615a7a  8bf8                 mov edi, eax
// 00615a7c  e83f320100           call 0x628cc0
// 00615a81  83c408               add esp, 8
// 00615a84  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00615a88  7404                 je 0x615a8e
// 00615a8a  8bc7                 mov eax, edi
// 00615a8c  eb09                 jmp 0x615a97
// 00615a8e  56                   push esi
// 00615a8f  e87c340100           call 0x628f10
// 00615a94  83c404               add esp, 4
// 00615a97  83c501               add ebp, 1
// 00615a9a  55                   push ebp
// 00615a9b  50                   push eax
// 00615a9c  56                   push esi
// 00615a9d  e8be430100           call 0x629e60
// 00615aa2  83c40c               add esp, 0xc
// 00615aa5  5f                   pop edi
// 00615aa6  5e                   pop esi
// 00615aa7  5d                   pop ebp
// 00615aa8  5b                   pop ebx
// 00615aa9  83c40c               add esp, 0xc
// 00615aac  c3                   ret 
// library lua-5.1.4/lparser.c (function _forbody)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
