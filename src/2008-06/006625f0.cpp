// roc 2008-06 006625f0  unit: RBX::FilterStairs  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006625f0
//
// 006625f0  83ec0c               sub esp, 0xc
// 006625f3  53                   push ebx
// 006625f4  55                   push ebp
// 006625f5  56                   push esi
// 006625f6  57                   push edi
// 006625f7  8bf8                 mov edi, eax
// 006625f9  8b7730               mov esi, dword ptr [edi + 0x30]
// 006625fc  b903000000           mov ecx, 3
// 00662601  004e32               add byte ptr [esi + 0x32], cl
// 00662604  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00662608  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0066260b  2bc1                 sub eax, ecx
// 0066260d  83e901               sub ecx, 1
// 00662610  0fb78446ac000000     movzx eax, word ptr [esi + eax*2 + 0xac]
// 00662618  8d1440               lea edx, [eax + eax*2]
// 0066261b  8b06                 mov eax, dword ptr [esi]
// 0066261d  8b4018               mov eax, dword ptr [eax + 0x18]
// 00662620  895c9004             mov dword ptr [eax + edx*4 + 4], ebx
// 00662624  75de                 jne 0x662604
// 00662626  817f1003010000       cmp dword ptr [edi + 0x10], 0x103
// 0066262d  7424                 je 0x662653
// 0066262f  6803010000           push 0x103
// 00662634  57                   push edi
// 00662635  e8d61a0000           call 0x664110
// 0066263a  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0066263d  50                   push eax
// 0066263e  68c0c48400           push 0x84c4c0
// 00662643  51                   push ecx
// 00662644  e87704fcff           call 0x622ac0
// 00662649  50                   push eax
// 0066264a  57                   push edi
// 0066264b  e8c01b0000           call 0x664210
// 00662650  83c41c               add esp, 0x1c
// 00662653  57                   push edi
// 00662654  e8a72f0000           call 0x665600
// 00662659  33db                 xor ebx, ebx
// 0066265b  83c404               add esp, 4
// 0066265e  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00662662  7417                 je 0x66267b
// 00662664  8b542420             mov edx, dword ptr [esp + 0x20]
// 00662668  68feff0100           push 0x1fffe
// 0066266d  52                   push edx
// 0066266e  6a20                 push 0x20
// 00662670  56                   push esi
// 00662671  e8ea8b0000           call 0x66b260
// 00662676  83c410               add esp, 0x10
// 00662679  eb09                 jmp 0x662684
// 0066267b  56                   push esi
// 0066267c  e82f8d0000           call 0x66b3b0
// 00662681  83c404               add esp, 4
// 00662684  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0066268c  885c241a             mov byte ptr [esp + 0x1a], bl
// 00662690  8be8                 mov ebp, eax
// 00662692  8a4632               mov al, byte ptr [esi + 0x32]
// 00662695  88442418             mov byte ptr [esp + 0x18], al
// 00662699  885c2419             mov byte ptr [esp + 0x19], bl
// 0066269d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006626a0  8d542410             lea edx, [esp + 0x10]
// 006626a4  894c2410             mov dword ptr [esp + 0x10], ecx
// 006626a8  895614               mov dword ptr [esi + 0x14], edx
// 006626ab  8b542428             mov edx, dword ptr [esp + 0x28]
// 006626af  8bc7                 mov eax, edi
// 006626b1  e8fae2ffff           call 0x6609b0
// 006626b6  8b442428             mov eax, dword ptr [esp + 0x28]
// 006626ba  50                   push eax
// 006626bb  56                   push esi
// 006626bc  e8df860000           call 0x66ada0
// 006626c1  83c408               add esp, 8
// 006626c4  8bc7                 mov eax, edi
// 006626c6  e835faffff           call 0x662100
// 006626cb  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006626ce  8b0f                 mov ecx, dword ptr [edi]
// 006626d0  8b460c               mov eax, dword ptr [esi + 0xc]
// 006626d3  894e14               mov dword ptr [esi + 0x14], ecx
// 006626d6  0fb65708             movzx edx, byte ptr [edi + 8]
// 006626da  e811e3ffff           call 0x6609f0
// 006626df  385f09               cmp byte ptr [edi + 9], bl
// 006626e2  7412                 je 0x6626f6
// 006626e4  0fb65708             movzx edx, byte ptr [edi + 8]
// 006626e8  53                   push ebx
// 006626e9  53                   push ebx
// 006626ea  52                   push edx
// 006626eb  6a23                 push 0x23
// 006626ed  56                   push esi
// 006626ee  e83d8b0000           call 0x66b230
// 006626f3  83c414               add esp, 0x14
// 006626f6  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006626fa  894624               mov dword ptr [esi + 0x24], eax
// 006626fd  8b4f04               mov ecx, dword ptr [edi + 4]
// 00662700  51                   push ecx
// 00662701  56                   push esi
// 00662702  e8798d0000           call 0x66b480
// 00662707  55                   push ebp
// 00662708  56                   push esi
// 00662709  e8728d0000           call 0x66b480
// 0066270e  83c410               add esp, 0x10
// 00662711  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00662715  7417                 je 0x66272e
// 00662717  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066271b  68feff0100           push 0x1fffe
// 00662720  52                   push edx
// 00662721  6a1f                 push 0x1f
// 00662723  56                   push esi
// 00662724  e8378b0000           call 0x66b260
// 00662729  83c410               add esp, 0x10
// 0066272c  eb16                 jmp 0x662744
// 0066272e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00662732  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00662736  50                   push eax
// 00662737  53                   push ebx
// 00662738  51                   push ecx
// 00662739  6a21                 push 0x21
// 0066273b  56                   push esi
// 0066273c  e8ef8a0000           call 0x66b230
// 00662741  83c414               add esp, 0x14
// 00662744  8b542424             mov edx, dword ptr [esp + 0x24]
// 00662748  52                   push edx
// 00662749  56                   push esi
// 0066274a  8bf8                 mov edi, eax
// 0066274c  e81f8a0000           call 0x66b170
// 00662751  83c408               add esp, 8
// 00662754  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00662758  7416                 je 0x662770
// 0066275a  45                   inc ebp
// 0066275b  8bc7                 mov eax, edi
// 0066275d  55                   push ebp
// 0066275e  50                   push eax
// 0066275f  56                   push esi
// 00662760  e88b9b0000           call 0x66c2f0
// 00662765  83c40c               add esp, 0xc
// 00662768  5f                   pop edi
// 00662769  5e                   pop esi
// 0066276a  5d                   pop ebp
// 0066276b  5b                   pop ebx
// 0066276c  83c40c               add esp, 0xc
// 0066276f  c3                   ret 
// 00662770  56                   push esi
// 00662771  e83a8c0000           call 0x66b3b0
// 00662776  83c404               add esp, 4
// 00662779  45                   inc ebp
// 0066277a  55                   push ebp
// 0066277b  50                   push eax
// 0066277c  56                   push esi
// 0066277d  e86e9b0000           call 0x66c2f0
// 00662782  83c40c               add esp, 0xc
// 00662785  5f                   pop edi
// 00662786  5e                   pop esi
// 00662787  5d                   pop ebp
// 00662788  5b                   pop ebx
// 00662789  83c40c               add esp, 0xc
// 0066278c  c3                   ret 
// library lua-5.1.4/lparser.c (function _forbody)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
