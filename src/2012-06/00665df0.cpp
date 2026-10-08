// from server: 100% by auto
// roc 2012-06 00665df0  unit: seg_00660000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665df0
//
// 00665df0  83ec18               sub esp, 0x18
// 00665df3  56                   push esi
// 00665df4  57                   push edi
// 00665df5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00665df9  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 00665dfd  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 00665e03  89742418             mov dword ptr [esp + 0x18], esi
// 00665e07  750e                 jne 0x665e17
// 00665e09  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 00665e11  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00665e15  eb0c                 jmp 0x665e23
// 00665e17  c744240800000000     mov dword ptr [esp + 8], 0
// 00665e1f  c6461c00             mov byte ptr [esi + 0x1c], 0
// 00665e23  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 00665e26  8b542408             mov edx, dword ptr [esp + 8]
// 00665e2a  8b4704               mov eax, dword ptr [edi + 4]
// 00665e2d  8b4008               mov eax, dword ptr [eax + 8]
// 00665e30  51                   push ecx
// 00665e31  81c200010000         add edx, 0x100
// 00665e37  52                   push edx
// 00665e38  6a01                 push 1
// 00665e3a  57                   push edi
// 00665e3b  ffd0                 call eax
// 00665e3d  33c9                 xor ecx, ecx
// 00665e3f  894618               mov dword ptr [esi + 0x18], eax
// 00665e42  8b4614               mov eax, dword ptr [esi + 0x14]
// 00665e45  83c410               add esp, 0x10
// 00665e48  394f64               cmp dword ptr [edi + 0x64], ecx
// 00665e4b  894c2414             mov dword ptr [esp + 0x14], ecx
// 00665e4f  0f8ee1000000         jle 0x665f36
// 00665e55  53                   push ebx
// 00665e56  8d5620               lea edx, [esi + 0x20]
// 00665e59  55                   push ebp
// 00665e5a  89542414             mov dword ptr [esp + 0x14], edx
// 00665e5e  eb08                 jmp 0x665e68
// 00665e60  8b442418             mov eax, dword ptr [esp + 0x18]
// 00665e64  8b742420             mov esi, dword ptr [esp + 0x20]
// 00665e68  8b542414             mov edx, dword ptr [esp + 0x14]
// 00665e6c  8b3a                 mov edi, dword ptr [edx]
// 00665e6e  99                   cdq 
// 00665e6f  f7ff                 idiv edi
// 00665e71  837c241000           cmp dword ptr [esp + 0x10], 0
// 00665e76  89442418             mov dword ptr [esp + 0x18], eax
// 00665e7a  740d                 je 0x665e89
// 00665e7c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00665e7f  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 00665e86  8d0488               lea eax, [eax + ecx*4]
// 00665e89  8b5618               mov edx, dword ptr [esi + 0x18]
// 00665e8c  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 00665e8f  8d87fe000000         lea eax, [edi + 0xfe]
// 00665e95  8d743ffe             lea esi, [edi + edi - 2]
// 00665e99  99                   cdq 
// 00665e9a  f7fe                 idiv esi
// 00665e9c  33db                 xor ebx, ebx
// 00665e9e  896c2424             mov dword ptr [esp + 0x24], ebp
// 00665ea2  33f6                 xor esi, esi
// 00665ea4  8bd0                 mov edx, eax
// 00665ea6  3bf2                 cmp esi, edx
// 00665ea8  7e35                 jle 0x665edf
// 00665eaa  8bcb                 mov ecx, ebx
// 00665eac  8d6c3ffe             lea ebp, [edi + edi - 2]
// 00665eb0  69c9fe010000         imul ecx, ecx, 0x1fe
// 00665eb6  eb08                 jmp 0x665ec0
// 00665eb8  8da42400000000       lea esp, [esp]
// 00665ebf  90                   nop 
// 00665ec0  81c1fe010000         add ecx, 0x1fe
// 00665ec6  8d8439fe000000       lea eax, [ecx + edi + 0xfe]
// 00665ecd  99                   cdq 
// 00665ece  f7fd                 idiv ebp
// 00665ed0  43                   inc ebx
// 00665ed1  8bd0                 mov edx, eax
// 00665ed3  3bf2                 cmp esi, edx
// 00665ed5  7fe9                 jg 0x665ec0
// 00665ed7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00665edb  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00665edf  8a442418             mov al, byte ptr [esp + 0x18]
// 00665ee3  f6eb                 imul bl
// 00665ee5  88042e               mov byte ptr [esi + ebp], al
// 00665ee8  46                   inc esi
// 00665ee9  81feff000000         cmp esi, 0xff
// 00665eef  7eb5                 jle 0x665ea6
// 00665ef1  837c241000           cmp dword ptr [esp + 0x10], 0
// 00665ef6  7425                 je 0x665f1d
// 00665ef8  b801000000           mov eax, 1
// 00665efd  8d55ff               lea edx, [ebp - 1]
// 00665f00  0fb65d00             movzx ebx, byte ptr [ebp]
// 00665f04  881a                 mov byte ptr [edx], bl
// 00665f06  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 00665f0d  889c28ff000000       mov byte ptr [eax + ebp + 0xff], bl
// 00665f14  40                   inc eax
// 00665f15  4a                   dec edx
// 00665f16  3dff000000           cmp eax, 0xff
// 00665f1b  7ee3                 jle 0x665f00
// 00665f1d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00665f21  8344241404           add dword ptr [esp + 0x14], 4
// 00665f26  41                   inc ecx
// 00665f27  3b4864               cmp ecx, dword ptr [eax + 0x64]
// 00665f2a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00665f2e  0f8c2cffffff         jl 0x665e60
// 00665f34  5d                   pop ebp
// 00665f35  5b                   pop ebx
// 00665f36  5f                   pop edi
// 00665f37  5e                   pop esi
// 00665f38  83c418               add esp, 0x18
// 00665f3b  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
