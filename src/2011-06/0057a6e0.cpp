// from server: 100% by auto
// roc 2011-06 0057a6e0  unit: seg_00570000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a6e0
//
// 0057a6e0  83ec18               sub esp, 0x18
// 0057a6e3  56                   push esi
// 0057a6e4  57                   push edi
// 0057a6e5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057a6e9  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 0057a6ed  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 0057a6f3  89742418             mov dword ptr [esp + 0x18], esi
// 0057a6f7  750e                 jne 0x57a707
// 0057a6f9  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 0057a701  c6461c01             mov byte ptr [esi + 0x1c], 1
// 0057a705  eb0c                 jmp 0x57a713
// 0057a707  c744240800000000     mov dword ptr [esp + 8], 0
// 0057a70f  c6461c00             mov byte ptr [esi + 0x1c], 0
// 0057a713  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0057a716  8b542408             mov edx, dword ptr [esp + 8]
// 0057a71a  8b4704               mov eax, dword ptr [edi + 4]
// 0057a71d  8b4008               mov eax, dword ptr [eax + 8]
// 0057a720  51                   push ecx
// 0057a721  81c200010000         add edx, 0x100
// 0057a727  52                   push edx
// 0057a728  6a01                 push 1
// 0057a72a  57                   push edi
// 0057a72b  ffd0                 call eax
// 0057a72d  33c9                 xor ecx, ecx
// 0057a72f  894618               mov dword ptr [esi + 0x18], eax
// 0057a732  8b4614               mov eax, dword ptr [esi + 0x14]
// 0057a735  83c410               add esp, 0x10
// 0057a738  394f64               cmp dword ptr [edi + 0x64], ecx
// 0057a73b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057a73f  0f8ee1000000         jle 0x57a826
// 0057a745  53                   push ebx
// 0057a746  8d5620               lea edx, [esi + 0x20]
// 0057a749  55                   push ebp
// 0057a74a  89542414             mov dword ptr [esp + 0x14], edx
// 0057a74e  eb08                 jmp 0x57a758
// 0057a750  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057a754  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057a758  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057a75c  8b3a                 mov edi, dword ptr [edx]
// 0057a75e  99                   cdq 
// 0057a75f  f7ff                 idiv edi
// 0057a761  837c241000           cmp dword ptr [esp + 0x10], 0
// 0057a766  89442418             mov dword ptr [esp + 0x18], eax
// 0057a76a  740d                 je 0x57a779
// 0057a76c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057a76f  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 0057a776  8d0488               lea eax, [eax + ecx*4]
// 0057a779  8b5618               mov edx, dword ptr [esi + 0x18]
// 0057a77c  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 0057a77f  8d87fe000000         lea eax, [edi + 0xfe]
// 0057a785  8d743ffe             lea esi, [edi + edi - 2]
// 0057a789  99                   cdq 
// 0057a78a  f7fe                 idiv esi
// 0057a78c  33db                 xor ebx, ebx
// 0057a78e  896c2424             mov dword ptr [esp + 0x24], ebp
// 0057a792  33f6                 xor esi, esi
// 0057a794  8bd0                 mov edx, eax
// 0057a796  3bf2                 cmp esi, edx
// 0057a798  7e35                 jle 0x57a7cf
// 0057a79a  8bcb                 mov ecx, ebx
// 0057a79c  8d6c3ffe             lea ebp, [edi + edi - 2]
// 0057a7a0  69c9fe010000         imul ecx, ecx, 0x1fe
// 0057a7a6  eb08                 jmp 0x57a7b0
// 0057a7a8  8da42400000000       lea esp, [esp]
// 0057a7af  90                   nop 
// 0057a7b0  81c1fe010000         add ecx, 0x1fe
// 0057a7b6  8d8439fe000000       lea eax, [ecx + edi + 0xfe]
// 0057a7bd  99                   cdq 
// 0057a7be  f7fd                 idiv ebp
// 0057a7c0  43                   inc ebx
// 0057a7c1  8bd0                 mov edx, eax
// 0057a7c3  3bf2                 cmp esi, edx
// 0057a7c5  7fe9                 jg 0x57a7b0
// 0057a7c7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057a7cb  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0057a7cf  8a442418             mov al, byte ptr [esp + 0x18]
// 0057a7d3  f6eb                 imul bl
// 0057a7d5  88042e               mov byte ptr [esi + ebp], al
// 0057a7d8  46                   inc esi
// 0057a7d9  81feff000000         cmp esi, 0xff
// 0057a7df  7eb5                 jle 0x57a796
// 0057a7e1  837c241000           cmp dword ptr [esp + 0x10], 0
// 0057a7e6  7425                 je 0x57a80d
// 0057a7e8  b801000000           mov eax, 1
// 0057a7ed  8d55ff               lea edx, [ebp - 1]
// 0057a7f0  0fb65d00             movzx ebx, byte ptr [ebp]
// 0057a7f4  881a                 mov byte ptr [edx], bl
// 0057a7f6  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 0057a7fd  889c28ff000000       mov byte ptr [eax + ebp + 0xff], bl
// 0057a804  40                   inc eax
// 0057a805  4a                   dec edx
// 0057a806  3dff000000           cmp eax, 0xff
// 0057a80b  7ee3                 jle 0x57a7f0
// 0057a80d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057a811  8344241404           add dword ptr [esp + 0x14], 4
// 0057a816  41                   inc ecx
// 0057a817  3b4864               cmp ecx, dword ptr [eax + 0x64]
// 0057a81a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057a81e  0f8c2cffffff         jl 0x57a750
// 0057a824  5d                   pop ebp
// 0057a825  5b                   pop ebx
// 0057a826  5f                   pop edi
// 0057a827  5e                   pop esi
// 0057a828  83c418               add esp, 0x18
// 0057a82b  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
