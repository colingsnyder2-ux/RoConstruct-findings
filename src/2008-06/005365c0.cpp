// roc 2008-06 005365c0  unit: seg_00530000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005365c0
//
// 005365c0  83ec18               sub esp, 0x18
// 005365c3  56                   push esi
// 005365c4  57                   push edi
// 005365c5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005365c9  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 005365cd  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 005365d3  89742418             mov dword ptr [esp + 0x18], esi
// 005365d7  750e                 jne 0x5365e7
// 005365d9  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 005365e1  c6461c01             mov byte ptr [esi + 0x1c], 1
// 005365e5  eb0c                 jmp 0x5365f3
// 005365e7  c744240800000000     mov dword ptr [esp + 8], 0
// 005365ef  c6461c00             mov byte ptr [esi + 0x1c], 0
// 005365f3  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 005365f6  8b542408             mov edx, dword ptr [esp + 8]
// 005365fa  8b4704               mov eax, dword ptr [edi + 4]
// 005365fd  8b4008               mov eax, dword ptr [eax + 8]
// 00536600  51                   push ecx
// 00536601  81c200010000         add edx, 0x100
// 00536607  52                   push edx
// 00536608  6a01                 push 1
// 0053660a  57                   push edi
// 0053660b  ffd0                 call eax
// 0053660d  33c9                 xor ecx, ecx
// 0053660f  894618               mov dword ptr [esi + 0x18], eax
// 00536612  8b4614               mov eax, dword ptr [esi + 0x14]
// 00536615  83c410               add esp, 0x10
// 00536618  394f64               cmp dword ptr [edi + 0x64], ecx
// 0053661b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053661f  0f8ee1000000         jle 0x536706
// 00536625  53                   push ebx
// 00536626  8d5620               lea edx, [esi + 0x20]
// 00536629  55                   push ebp
// 0053662a  89542414             mov dword ptr [esp + 0x14], edx
// 0053662e  eb08                 jmp 0x536638
// 00536630  8b442418             mov eax, dword ptr [esp + 0x18]
// 00536634  8b742420             mov esi, dword ptr [esp + 0x20]
// 00536638  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053663c  8b3a                 mov edi, dword ptr [edx]
// 0053663e  99                   cdq 
// 0053663f  f7ff                 idiv edi
// 00536641  837c241000           cmp dword ptr [esp + 0x10], 0
// 00536646  89442418             mov dword ptr [esp + 0x18], eax
// 0053664a  740d                 je 0x536659
// 0053664c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0053664f  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 00536656  8d0488               lea eax, [eax + ecx*4]
// 00536659  8b5618               mov edx, dword ptr [esi + 0x18]
// 0053665c  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 0053665f  8d87fe000000         lea eax, [edi + 0xfe]
// 00536665  8d743ffe             lea esi, [edi + edi - 2]
// 00536669  99                   cdq 
// 0053666a  f7fe                 idiv esi
// 0053666c  33db                 xor ebx, ebx
// 0053666e  896c2424             mov dword ptr [esp + 0x24], ebp
// 00536672  33f6                 xor esi, esi
// 00536674  8bd0                 mov edx, eax
// 00536676  3bf2                 cmp esi, edx
// 00536678  7e35                 jle 0x5366af
// 0053667a  8bcb                 mov ecx, ebx
// 0053667c  8d6c3ffe             lea ebp, [edi + edi - 2]
// 00536680  69c9fe010000         imul ecx, ecx, 0x1fe
// 00536686  eb08                 jmp 0x536690
// 00536688  8da42400000000       lea esp, [esp]
// 0053668f  90                   nop 
// 00536690  81c1fe010000         add ecx, 0x1fe
// 00536696  8d8439fe000000       lea eax, [ecx + edi + 0xfe]
// 0053669d  99                   cdq 
// 0053669e  f7fd                 idiv ebp
// 005366a0  43                   inc ebx
// 005366a1  8bd0                 mov edx, eax
// 005366a3  3bf2                 cmp esi, edx
// 005366a5  7fe9                 jg 0x536690
// 005366a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005366ab  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005366af  8a442418             mov al, byte ptr [esp + 0x18]
// 005366b3  f6eb                 imul bl
// 005366b5  88042e               mov byte ptr [esi + ebp], al
// 005366b8  46                   inc esi
// 005366b9  81feff000000         cmp esi, 0xff
// 005366bf  7eb5                 jle 0x536676
// 005366c1  837c241000           cmp dword ptr [esp + 0x10], 0
// 005366c6  7425                 je 0x5366ed
// 005366c8  b801000000           mov eax, 1
// 005366cd  8d55ff               lea edx, [ebp - 1]
// 005366d0  0fb65d00             movzx ebx, byte ptr [ebp]
// 005366d4  881a                 mov byte ptr [edx], bl
// 005366d6  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 005366dd  889c28ff000000       mov byte ptr [eax + ebp + 0xff], bl
// 005366e4  40                   inc eax
// 005366e5  4a                   dec edx
// 005366e6  3dff000000           cmp eax, 0xff
// 005366eb  7ee3                 jle 0x5366d0
// 005366ed  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005366f1  8344241404           add dword ptr [esp + 0x14], 4
// 005366f6  41                   inc ecx
// 005366f7  3b4864               cmp ecx, dword ptr [eax + 0x64]
// 005366fa  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005366fe  0f8c2cffffff         jl 0x536630
// 00536704  5d                   pop ebp
// 00536705  5b                   pop ebx
// 00536706  5f                   pop edi
// 00536707  5e                   pop esi
// 00536708  83c418               add esp, 0x18
// 0053670b  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
