// from server: 100% by auto
// roc 2011-06 007dcdd0  unit: seg_007d0000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dcdd0
//
// 007dcdd0  83ec0c               sub esp, 0xc
// 007dcdd3  53                   push ebx
// 007dcdd4  55                   push ebp
// 007dcdd5  56                   push esi
// 007dcdd6  57                   push edi
// 007dcdd7  8bf8                 mov edi, eax
// 007dcdd9  8b7730               mov esi, dword ptr [edi + 0x30]
// 007dcddc  b903000000           mov ecx, 3
// 007dcde1  004e32               add byte ptr [esi + 0x32], cl
// 007dcde4  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 007dcde8  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 007dcdeb  2bc1                 sub eax, ecx
// 007dcded  83e901               sub ecx, 1
// 007dcdf0  0fb78446ac000000     movzx eax, word ptr [esi + eax*2 + 0xac]
// 007dcdf8  8d1440               lea edx, [eax + eax*2]
// 007dcdfb  8b06                 mov eax, dword ptr [esi]
// 007dcdfd  8b4018               mov eax, dword ptr [eax + 0x18]
// 007dce00  895c9004             mov dword ptr [eax + edx*4 + 4], ebx
// 007dce04  75de                 jne 0x7dcde4
// 007dce06  817f1003010000       cmp dword ptr [edi + 0x10], 0x103
// 007dce0d  7424                 je 0x7dce33
// 007dce0f  6803010000           push 0x103
// 007dce14  57                   push edi
// 007dce15  e8561b0000           call 0x7de970
// 007dce1a  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 007dce1d  50                   push eax
// 007dce1e  682ce1ab00           push 0xabe12c
// 007dce23  51                   push ecx
// 007dce24  e8f7fff9ff           call 0x77ce20
// 007dce29  50                   push eax
// 007dce2a  57                   push edi
// 007dce2b  e8401c0000           call 0x7dea70
// 007dce30  83c41c               add esp, 0x1c
// 007dce33  57                   push edi
// 007dce34  e8e72d0000           call 0x7dfc20
// 007dce39  33db                 xor ebx, ebx
// 007dce3b  83c404               add esp, 4
// 007dce3e  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 007dce42  7417                 je 0x7dce5b
// 007dce44  8b542420             mov edx, dword ptr [esp + 0x20]
// 007dce48  68feff0100           push 0x1fffe
// 007dce4d  52                   push edx
// 007dce4e  6a20                 push 0x20
// 007dce50  56                   push esi
// 007dce51  e88a590100           call 0x7f27e0
// 007dce56  83c410               add esp, 0x10
// 007dce59  eb09                 jmp 0x7dce64
// 007dce5b  56                   push esi
// 007dce5c  e8df5a0100           call 0x7f2940
// 007dce61  83c404               add esp, 4
// 007dce64  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007dce6c  885c241a             mov byte ptr [esp + 0x1a], bl
// 007dce70  8be8                 mov ebp, eax
// 007dce72  8a4632               mov al, byte ptr [esi + 0x32]
// 007dce75  88442418             mov byte ptr [esp + 0x18], al
// 007dce79  885c2419             mov byte ptr [esp + 0x19], bl
// 007dce7d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007dce80  8d542410             lea edx, [esp + 0x10]
// 007dce84  894c2410             mov dword ptr [esp + 0x10], ecx
// 007dce88  895614               mov dword ptr [esi + 0x14], edx
// 007dce8b  8b542428             mov edx, dword ptr [esp + 0x28]
// 007dce8f  8bc7                 mov eax, edi
// 007dce91  e86ae2ffff           call 0x7db100
// 007dce96  8b442428             mov eax, dword ptr [esp + 0x28]
// 007dce9a  50                   push eax
// 007dce9b  56                   push esi
// 007dce9c  e83f540100           call 0x7f22e0
// 007dcea1  83c408               add esp, 8
// 007dcea4  8bc7                 mov eax, edi
// 007dcea6  e8f5f9ffff           call 0x7dc8a0
// 007dceab  8b7e14               mov edi, dword ptr [esi + 0x14]
// 007dceae  8b0f                 mov ecx, dword ptr [edi]
// 007dceb0  8b460c               mov eax, dword ptr [esi + 0xc]
// 007dceb3  894e14               mov dword ptr [esi + 0x14], ecx
// 007dceb6  0fb65708             movzx edx, byte ptr [edi + 8]
// 007dceba  e881e2ffff           call 0x7db140
// 007dcebf  385f09               cmp byte ptr [edi + 9], bl
// 007dcec2  7412                 je 0x7dced6
// 007dcec4  0fb65708             movzx edx, byte ptr [edi + 8]
// 007dcec8  53                   push ebx
// 007dcec9  53                   push ebx
// 007dceca  52                   push edx
// 007dcecb  6a23                 push 0x23
// 007dcecd  56                   push esi
// 007dcece  e8dd580100           call 0x7f27b0
// 007dced3  83c414               add esp, 0x14
// 007dced6  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 007dceda  894624               mov dword ptr [esi + 0x24], eax
// 007dcedd  8b4f04               mov ecx, dword ptr [edi + 4]
// 007dcee0  51                   push ecx
// 007dcee1  56                   push esi
// 007dcee2  e8295b0100           call 0x7f2a10
// 007dcee7  55                   push ebp
// 007dcee8  56                   push esi
// 007dcee9  e8225b0100           call 0x7f2a10
// 007dceee  83c410               add esp, 0x10
// 007dcef1  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 007dcef5  7417                 je 0x7dcf0e
// 007dcef7  8b542420             mov edx, dword ptr [esp + 0x20]
// 007dcefb  68feff0100           push 0x1fffe
// 007dcf00  52                   push edx
// 007dcf01  6a1f                 push 0x1f
// 007dcf03  56                   push esi
// 007dcf04  e8d7580100           call 0x7f27e0
// 007dcf09  83c410               add esp, 0x10
// 007dcf0c  eb16                 jmp 0x7dcf24
// 007dcf0e  8b442428             mov eax, dword ptr [esp + 0x28]
// 007dcf12  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007dcf16  50                   push eax
// 007dcf17  53                   push ebx
// 007dcf18  51                   push ecx
// 007dcf19  6a21                 push 0x21
// 007dcf1b  56                   push esi
// 007dcf1c  e88f580100           call 0x7f27b0
// 007dcf21  83c414               add esp, 0x14
// 007dcf24  8b542424             mov edx, dword ptr [esp + 0x24]
// 007dcf28  52                   push edx
// 007dcf29  56                   push esi
// 007dcf2a  8bf8                 mov edi, eax
// 007dcf2c  e8bf570100           call 0x7f26f0
// 007dcf31  83c408               add esp, 8
// 007dcf34  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 007dcf38  7416                 je 0x7dcf50
// 007dcf3a  45                   inc ebp
// 007dcf3b  8bc7                 mov eax, edi
// 007dcf3d  55                   push ebp
// 007dcf3e  50                   push eax
// 007dcf3f  56                   push esi
// 007dcf40  e88b6a0100           call 0x7f39d0
// 007dcf45  83c40c               add esp, 0xc
// 007dcf48  5f                   pop edi
// 007dcf49  5e                   pop esi
// 007dcf4a  5d                   pop ebp
// 007dcf4b  5b                   pop ebx
// 007dcf4c  83c40c               add esp, 0xc
// 007dcf4f  c3                   ret 
// 007dcf50  56                   push esi
// 007dcf51  e8ea590100           call 0x7f2940
// 007dcf56  83c404               add esp, 4
// 007dcf59  45                   inc ebp
// 007dcf5a  55                   push ebp
// 007dcf5b  50                   push eax
// 007dcf5c  56                   push esi
// 007dcf5d  e86e6a0100           call 0x7f39d0
// 007dcf62  83c40c               add esp, 0xc
// 007dcf65  5f                   pop edi
// 007dcf66  5e                   pop esi
// 007dcf67  5d                   pop ebp
// 007dcf68  5b                   pop ebx
// 007dcf69  83c40c               add esp, 0xc
// 007dcf6c  c3                   ret 
// library lua-5.1.4/lparser.c (function _forbody)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
