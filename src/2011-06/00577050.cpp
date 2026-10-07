// roc 2011-06 00577050  unit: seg_00570000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577050
//
// 00577050  83ec18               sub esp, 0x18
// 00577053  56                   push esi
// 00577054  8b742420             mov esi, dword ptr [esp + 0x20]
// 00577058  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0057705e  b801000000           mov eax, 1
// 00577063  d3e0                 shl eax, cl
// 00577065  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0057706c  57                   push edi
// 0057706d  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00577073  89442408             mov dword ptr [esp + 8], eax
// 00577077  7415                 je 0x57708e
// 00577079  837f2800             cmp dword ptr [edi + 0x28], 0
// 0057707d  750f                 jne 0x57708e
// 0057707f  e8ccfaffff           call 0x576b50
// 00577084  84c0                 test al, al
// 00577086  7506                 jne 0x57708e
// 00577088  5f                   pop edi
// 00577089  5e                   pop esi
// 0057708a  83c418               add esp, 0x18
// 0057708d  c3                   ret 
// 0057708e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00577091  8974241c             mov dword ptr [esp + 0x1c], esi
// 00577095  8b08                 mov ecx, dword ptr [eax]
// 00577097  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057709b  8b5004               mov edx, dword ptr [eax + 4]
// 0057709e  53                   push ebx
// 0057709f  33db                 xor ebx, ebx
// 005770a1  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 005770a7  89542414             mov dword ptr [esp + 0x14], edx
// 005770ab  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005770ae  55                   push ebp
// 005770af  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 005770b2  7e4c                 jle 0x577100
// 005770b4  83f901               cmp ecx, 1
// 005770b7  8b442430             mov eax, dword ptr [esp + 0x30]
// 005770bb  8b0498               mov eax, dword ptr [eax + ebx*4]
// 005770be  8944242c             mov dword ptr [esp + 0x2c], eax
// 005770c2  7d21                 jge 0x5770e5
// 005770c4  6a01                 push 1
// 005770c6  51                   push ecx
// 005770c7  8d4c241c             lea ecx, [esp + 0x1c]
// 005770cb  55                   push ebp
// 005770cc  51                   push ecx
// 005770cd  e83ef2ffff           call 0x576310
// 005770d2  83c410               add esp, 0x10
// 005770d5  84c0                 test al, al
// 005770d7  744d                 je 0x577126
// 005770d9  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005770dd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005770e1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005770e5  49                   dec ecx
// 005770e6  8bd5                 mov edx, ebp
// 005770e8  d3fa                 sar edx, cl
// 005770ea  f6c201               test dl, 1
// 005770ed  7408                 je 0x5770f7
// 005770ef  668b542410           mov dx, word ptr [esp + 0x10]
// 005770f4  660910               or word ptr [eax], dx
// 005770f7  43                   inc ebx
// 005770f8  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 005770fe  7cb4                 jl 0x5770b4
// 00577100  8b4618               mov eax, dword ptr [esi + 0x18]
// 00577103  8b542414             mov edx, dword ptr [esp + 0x14]
// 00577107  8910                 mov dword ptr [eax], edx
// 00577109  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057710c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00577110  895004               mov dword ptr [eax + 4], edx
// 00577113  ff4f28               dec dword ptr [edi + 0x28]
// 00577116  896f0c               mov dword ptr [edi + 0xc], ebp
// 00577119  5d                   pop ebp
// 0057711a  5b                   pop ebx
// 0057711b  894f10               mov dword ptr [edi + 0x10], ecx
// 0057711e  5f                   pop edi
// 0057711f  b001                 mov al, 1
// 00577121  5e                   pop esi
// 00577122  83c418               add esp, 0x18
// 00577125  c3                   ret 
// 00577126  5d                   pop ebp
// 00577127  5b                   pop ebx
// 00577128  5f                   pop edi
// 00577129  32c0                 xor al, al
// 0057712b  5e                   pop esi
// 0057712c  83c418               add esp, 0x18
// 0057712f  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
