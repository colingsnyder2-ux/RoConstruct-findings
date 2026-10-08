// roc 2009-12 006228d0  unit: seg_00620000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006228d0
//
// 006228d0  83ec18               sub esp, 0x18
// 006228d3  56                   push esi
// 006228d4  57                   push edi
// 006228d5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006228d9  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 006228dd  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 006228e3  89742418             mov dword ptr [esp + 0x18], esi
// 006228e7  750e                 jne 0x6228f7
// 006228e9  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 006228f1  c6461c01             mov byte ptr [esi + 0x1c], 1
// 006228f5  eb0c                 jmp 0x622903
// 006228f7  c744240800000000     mov dword ptr [esp + 8], 0
// 006228ff  c6461c00             mov byte ptr [esi + 0x1c], 0
// 00622903  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 00622906  8b542408             mov edx, dword ptr [esp + 8]
// 0062290a  8b4704               mov eax, dword ptr [edi + 4]
// 0062290d  8b4008               mov eax, dword ptr [eax + 8]
// 00622910  51                   push ecx
// 00622911  81c200010000         add edx, 0x100
// 00622917  52                   push edx
// 00622918  6a01                 push 1
// 0062291a  57                   push edi
// 0062291b  ffd0                 call eax
// 0062291d  33c9                 xor ecx, ecx
// 0062291f  894618               mov dword ptr [esi + 0x18], eax
// 00622922  8b4614               mov eax, dword ptr [esi + 0x14]
// 00622925  83c410               add esp, 0x10
// 00622928  394f64               cmp dword ptr [edi + 0x64], ecx
// 0062292b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0062292f  0f8ee1000000         jle 0x622a16
// 00622935  53                   push ebx
// 00622936  8d5620               lea edx, [esi + 0x20]
// 00622939  55                   push ebp
// 0062293a  89542414             mov dword ptr [esp + 0x14], edx
// 0062293e  eb08                 jmp 0x622948
// 00622940  8b442418             mov eax, dword ptr [esp + 0x18]
// 00622944  8b742420             mov esi, dword ptr [esp + 0x20]
// 00622948  8b542414             mov edx, dword ptr [esp + 0x14]
// 0062294c  8b3a                 mov edi, dword ptr [edx]
// 0062294e  99                   cdq 
// 0062294f  f7ff                 idiv edi
// 00622951  837c241000           cmp dword ptr [esp + 0x10], 0
// 00622956  89442418             mov dword ptr [esp + 0x18], eax
// 0062295a  740d                 je 0x622969
// 0062295c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0062295f  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 00622966  8d0488               lea eax, [eax + ecx*4]
// 00622969  8b5618               mov edx, dword ptr [esi + 0x18]
// 0062296c  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 0062296f  8d87fe000000         lea eax, [edi + 0xfe]
// 00622975  8d743ffe             lea esi, [edi + edi - 2]
// 00622979  99                   cdq 
// 0062297a  f7fe                 idiv esi
// 0062297c  33db                 xor ebx, ebx
// 0062297e  896c2424             mov dword ptr [esp + 0x24], ebp
// 00622982  33f6                 xor esi, esi
// 00622984  8bd0                 mov edx, eax
// 00622986  3bf2                 cmp esi, edx
// 00622988  7e35                 jle 0x6229bf
// 0062298a  8bcb                 mov ecx, ebx
// 0062298c  8d6c3ffe             lea ebp, [edi + edi - 2]
// 00622990  69c9fe010000         imul ecx, ecx, 0x1fe
// 00622996  eb08                 jmp 0x6229a0
// 00622998  8da42400000000       lea esp, [esp]
// 0062299f  90                   nop 
// 006229a0  81c1fe010000         add ecx, 0x1fe
// 006229a6  8d8439fe000000       lea eax, [ecx + edi + 0xfe]
// 006229ad  99                   cdq 
// 006229ae  f7fd                 idiv ebp
// 006229b0  43                   inc ebx
// 006229b1  8bd0                 mov edx, eax
// 006229b3  3bf2                 cmp esi, edx
// 006229b5  7fe9                 jg 0x6229a0
// 006229b7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006229bb  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006229bf  8a442418             mov al, byte ptr [esp + 0x18]
// 006229c3  f6eb                 imul bl
// 006229c5  88042e               mov byte ptr [esi + ebp], al
// 006229c8  46                   inc esi
// 006229c9  81feff000000         cmp esi, 0xff
// 006229cf  7eb5                 jle 0x622986
// 006229d1  837c241000           cmp dword ptr [esp + 0x10], 0
// 006229d6  7425                 je 0x6229fd
// 006229d8  b801000000           mov eax, 1
// 006229dd  8d55ff               lea edx, [ebp - 1]
// 006229e0  0fb65d00             movzx ebx, byte ptr [ebp]
// 006229e4  881a                 mov byte ptr [edx], bl
// 006229e6  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 006229ed  889c28ff000000       mov byte ptr [eax + ebp + 0xff], bl
// 006229f4  40                   inc eax
// 006229f5  4a                   dec edx
// 006229f6  3dff000000           cmp eax, 0xff
// 006229fb  7ee3                 jle 0x6229e0
// 006229fd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00622a01  8344241404           add dword ptr [esp + 0x14], 4
// 00622a06  41                   inc ecx
// 00622a07  3b4864               cmp ecx, dword ptr [eax + 0x64]
// 00622a0a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00622a0e  0f8c2cffffff         jl 0x622940
// 00622a14  5d                   pop ebp
// 00622a15  5b                   pop ebx
// 00622a16  5f                   pop edi
// 00622a17  5e                   pop esi
// 00622a18  83c418               add esp, 0x18
// 00622a1b  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
