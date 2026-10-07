// roc 2009-06 006ef690  unit: seg_006e0000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef690
//
// 006ef690  83ec0c               sub esp, 0xc
// 006ef693  53                   push ebx
// 006ef694  55                   push ebp
// 006ef695  56                   push esi
// 006ef696  57                   push edi
// 006ef697  8bf8                 mov edi, eax
// 006ef699  8b7730               mov esi, dword ptr [edi + 0x30]
// 006ef69c  b903000000           mov ecx, 3
// 006ef6a1  004e32               add byte ptr [esi + 0x32], cl
// 006ef6a4  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006ef6a8  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 006ef6ab  2bc1                 sub eax, ecx
// 006ef6ad  83e901               sub ecx, 1
// 006ef6b0  0fb78446ac000000     movzx eax, word ptr [esi + eax*2 + 0xac]
// 006ef6b8  8d1440               lea edx, [eax + eax*2]
// 006ef6bb  8b06                 mov eax, dword ptr [esi]
// 006ef6bd  8b4018               mov eax, dword ptr [eax + 0x18]
// 006ef6c0  895c9004             mov dword ptr [eax + edx*4 + 4], ebx
// 006ef6c4  75de                 jne 0x6ef6a4
// 006ef6c6  817f1003010000       cmp dword ptr [edi + 0x10], 0x103
// 006ef6cd  7424                 je 0x6ef6f3
// 006ef6cf  6803010000           push 0x103
// 006ef6d4  57                   push edi
// 006ef6d5  e8161b0000           call 0x6f11f0
// 006ef6da  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006ef6dd  50                   push eax
// 006ef6de  68b8dd8e00           push 0x8eddb8
// 006ef6e3  51                   push ecx
// 006ef6e4  e8b799fdff           call 0x6c90a0
// 006ef6e9  50                   push eax
// 006ef6ea  57                   push edi
// 006ef6eb  e8001c0000           call 0x6f12f0
// 006ef6f0  83c41c               add esp, 0x1c
// 006ef6f3  57                   push edi
// 006ef6f4  e8e72f0000           call 0x6f26e0
// 006ef6f9  33db                 xor ebx, ebx
// 006ef6fb  83c404               add esp, 4
// 006ef6fe  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 006ef702  7417                 je 0x6ef71b
// 006ef704  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ef708  68feff0100           push 0x1fffe
// 006ef70d  52                   push edx
// 006ef70e  6a20                 push 0x20
// 006ef710  56                   push esi
// 006ef711  e8eaaa0000           call 0x6fa200
// 006ef716  83c410               add esp, 0x10
// 006ef719  eb09                 jmp 0x6ef724
// 006ef71b  56                   push esi
// 006ef71c  e83fac0000           call 0x6fa360
// 006ef721  83c404               add esp, 4
// 006ef724  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006ef72c  885c241a             mov byte ptr [esp + 0x1a], bl
// 006ef730  8be8                 mov ebp, eax
// 006ef732  8a4632               mov al, byte ptr [esi + 0x32]
// 006ef735  88442418             mov byte ptr [esp + 0x18], al
// 006ef739  885c2419             mov byte ptr [esp + 0x19], bl
// 006ef73d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006ef740  8d542410             lea edx, [esp + 0x10]
// 006ef744  894c2410             mov dword ptr [esp + 0x10], ecx
// 006ef748  895614               mov dword ptr [esi + 0x14], edx
// 006ef74b  8b542428             mov edx, dword ptr [esp + 0x28]
// 006ef74f  8bc7                 mov eax, edi
// 006ef751  e8cae2ffff           call 0x6eda20
// 006ef756  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ef75a  50                   push eax
// 006ef75b  56                   push esi
// 006ef75c  e8dfa50000           call 0x6f9d40
// 006ef761  83c408               add esp, 8
// 006ef764  8bc7                 mov eax, edi
// 006ef766  e805faffff           call 0x6ef170
// 006ef76b  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006ef76e  8b0f                 mov ecx, dword ptr [edi]
// 006ef770  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ef773  894e14               mov dword ptr [esi + 0x14], ecx
// 006ef776  0fb65708             movzx edx, byte ptr [edi + 8]
// 006ef77a  e8e1e2ffff           call 0x6eda60
// 006ef77f  385f09               cmp byte ptr [edi + 9], bl
// 006ef782  7412                 je 0x6ef796
// 006ef784  0fb65708             movzx edx, byte ptr [edi + 8]
// 006ef788  53                   push ebx
// 006ef789  53                   push ebx
// 006ef78a  52                   push edx
// 006ef78b  6a23                 push 0x23
// 006ef78d  56                   push esi
// 006ef78e  e83daa0000           call 0x6fa1d0
// 006ef793  83c414               add esp, 0x14
// 006ef796  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006ef79a  894624               mov dword ptr [esi + 0x24], eax
// 006ef79d  8b4f04               mov ecx, dword ptr [edi + 4]
// 006ef7a0  51                   push ecx
// 006ef7a1  56                   push esi
// 006ef7a2  e889ac0000           call 0x6fa430
// 006ef7a7  55                   push ebp
// 006ef7a8  56                   push esi
// 006ef7a9  e882ac0000           call 0x6fa430
// 006ef7ae  83c410               add esp, 0x10
// 006ef7b1  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 006ef7b5  7417                 je 0x6ef7ce
// 006ef7b7  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ef7bb  68feff0100           push 0x1fffe
// 006ef7c0  52                   push edx
// 006ef7c1  6a1f                 push 0x1f
// 006ef7c3  56                   push esi
// 006ef7c4  e837aa0000           call 0x6fa200
// 006ef7c9  83c410               add esp, 0x10
// 006ef7cc  eb16                 jmp 0x6ef7e4
// 006ef7ce  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ef7d2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006ef7d6  50                   push eax
// 006ef7d7  53                   push ebx
// 006ef7d8  51                   push ecx
// 006ef7d9  6a21                 push 0x21
// 006ef7db  56                   push esi
// 006ef7dc  e8efa90000           call 0x6fa1d0
// 006ef7e1  83c414               add esp, 0x14
// 006ef7e4  8b542424             mov edx, dword ptr [esp + 0x24]
// 006ef7e8  52                   push edx
// 006ef7e9  56                   push esi
// 006ef7ea  8bf8                 mov edi, eax
// 006ef7ec  e81fa90000           call 0x6fa110
// 006ef7f1  83c408               add esp, 8
// 006ef7f4  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 006ef7f8  7416                 je 0x6ef810
// 006ef7fa  45                   inc ebp
// 006ef7fb  8bc7                 mov eax, edi
// 006ef7fd  55                   push ebp
// 006ef7fe  50                   push eax
// 006ef7ff  56                   push esi
// 006ef800  e81bbb0000           call 0x6fb320
// 006ef805  83c40c               add esp, 0xc
// 006ef808  5f                   pop edi
// 006ef809  5e                   pop esi
// 006ef80a  5d                   pop ebp
// 006ef80b  5b                   pop ebx
// 006ef80c  83c40c               add esp, 0xc
// 006ef80f  c3                   ret 
// 006ef810  56                   push esi
// 006ef811  e84aab0000           call 0x6fa360
// 006ef816  83c404               add esp, 4
// 006ef819  45                   inc ebp
// 006ef81a  55                   push ebp
// 006ef81b  50                   push eax
// 006ef81c  56                   push esi
// 006ef81d  e8feba0000           call 0x6fb320
// 006ef822  83c40c               add esp, 0xc
// 006ef825  5f                   pop edi
// 006ef826  5e                   pop esi
// 006ef827  5d                   pop ebp
// 006ef828  5b                   pop ebx
// 006ef829  83c40c               add esp, 0xc
// 006ef82c  c3                   ret 
// library lua-5.1.4/lparser.c (function _forbody)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
