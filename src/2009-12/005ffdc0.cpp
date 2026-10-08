// roc 2009-12 005ffdc0  unit: G3D::_internal::DialogTemplate  size: 596 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ffdc0
//
// 005ffdc0  83ec14               sub esp, 0x14
// 005ffdc3  53                   push ebx
// 005ffdc4  55                   push ebp
// 005ffdc5  56                   push esi
// 005ffdc6  8b7718               mov esi, dword ptr [edi + 0x18]
// 005ffdc9  8b6e04               mov ebp, dword ptr [esi + 4]
// 005ffdcc  8b1e                 mov ebx, dword ptr [esi]
// 005ffdce  89742410             mov dword ptr [esp + 0x10], esi
// 005ffdd2  85ed                 test ebp, ebp
// 005ffdd4  751b                 jne 0x5ffdf1
// 005ffdd6  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ffdd9  57                   push edi
// 005ffdda  ffd0                 call eax
// 005ffddc  83c404               add esp, 4
// 005ffddf  84c0                 test al, al
// 005ffde1  7509                 jne 0x5ffdec
// 005ffde3  5e                   pop esi
// 005ffde4  5d                   pop ebp
// 005ffde5  32c0                 xor al, al
// 005ffde7  5b                   pop ebx
// 005ffde8  83c414               add esp, 0x14
// 005ffdeb  c3                   ret 
// 005ffdec  8b1e                 mov ebx, dword ptr [esi]
// 005ffdee  8b6e04               mov ebp, dword ptr [esi + 4]
// 005ffdf1  0fb603               movzx eax, byte ptr [ebx]
// 005ffdf4  4d                   dec ebp
// 005ffdf5  c1e008               shl eax, 8
// 005ffdf8  43                   inc ebx
// 005ffdf9  8944240c             mov dword ptr [esp + 0xc], eax
// 005ffdfd  85ed                 test ebp, ebp
// 005ffdff  7516                 jne 0x5ffe17
// 005ffe01  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ffe04  57                   push edi
// 005ffe05  ffd1                 call ecx
// 005ffe07  83c404               add esp, 4
// 005ffe0a  84c0                 test al, al
// 005ffe0c  74d5                 je 0x5ffde3
// 005ffe0e  8b1e                 mov ebx, dword ptr [esi]
// 005ffe10  8b6e04               mov ebp, dword ptr [esi + 4]
// 005ffe13  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ffe17  0fb613               movzx edx, byte ptr [ebx]
// 005ffe1a  03c2                 add eax, edx
// 005ffe1c  83e802               sub eax, 2
// 005ffe1f  4d                   dec ebp
// 005ffe20  43                   inc ebx
// 005ffe21  8944240c             mov dword ptr [esp + 0xc], eax
// 005ffe25  85c0                 test eax, eax
// 005ffe27  0f8ec4010000         jle 0x5ffff1
// 005ffe2d  8d4900               lea ecx, [ecx]
// 005ffe30  85ed                 test ebp, ebp
// 005ffe32  7512                 jne 0x5ffe46
// 005ffe34  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ffe37  57                   push edi
// 005ffe38  ffd0                 call eax
// 005ffe3a  83c404               add esp, 4
// 005ffe3d  84c0                 test al, al
// 005ffe3f  74a2                 je 0x5ffde3
// 005ffe41  8b1e                 mov ebx, dword ptr [esi]
// 005ffe43  8b6e04               mov ebp, dword ptr [esi + 4]
// 005ffe46  0fb633               movzx esi, byte ptr [ebx]
// 005ffe49  8b0f                 mov ecx, dword ptr [edi]
// 005ffe4b  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 005ffe52  8b17                 mov edx, dword ptr [edi]
// 005ffe54  8bc6                 mov eax, esi
// 005ffe56  c1f804               sar eax, 4
// 005ffe59  83e60f               and esi, 0xf
// 005ffe5c  897218               mov dword ptr [edx + 0x18], esi
// 005ffe5f  8b0f                 mov ecx, dword ptr [edi]
// 005ffe61  89411c               mov dword ptr [ecx + 0x1c], eax
// 005ffe64  8b17                 mov edx, dword ptr [edi]
// 005ffe66  8944241c             mov dword ptr [esp + 0x1c], eax
// 005ffe6a  8b4204               mov eax, dword ptr [edx + 4]
// 005ffe6d  6a01                 push 1
// 005ffe6f  57                   push edi
// 005ffe70  4d                   dec ebp
// 005ffe71  43                   inc ebx
// 005ffe72  ffd0                 call eax
// 005ffe74  83c408               add esp, 8
// 005ffe77  83fe04               cmp esi, 4
// 005ffe7a  7c18                 jl 0x5ffe94
// 005ffe7c  8b0f                 mov ecx, dword ptr [edi]
// 005ffe7e  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 005ffe85  8b17                 mov edx, dword ptr [edi]
// 005ffe87  897218               mov dword ptr [edx + 0x18], esi
// 005ffe8a  8b07                 mov eax, dword ptr [edi]
// 005ffe8c  8b08                 mov ecx, dword ptr [eax]
// 005ffe8e  57                   push edi
// 005ffe8f  ffd1                 call ecx
// 005ffe91  83c404               add esp, 4
// 005ffe94  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 005ffe9c  7510                 jne 0x5ffeae
// 005ffe9e  57                   push edi
// 005ffe9f  e8bc0f0000           call 0x600e60
// 005ffea4  83c404               add esp, 4
// 005ffea7  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 005ffeae  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 005ffeb5  89542418             mov dword ptr [esp + 0x18], edx
// 005ffeb9  c744241498579c00     mov dword ptr [esp + 0x14], 0x9c5798
// 005ffec1  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 005ffec6  744c                 je 0x5fff14
// 005ffec8  85ed                 test ebp, ebp
// 005ffeca  751a                 jne 0x5ffee6
// 005ffecc  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ffed0  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ffed3  57                   push edi
// 005ffed4  ffd0                 call eax
// 005ffed6  83c404               add esp, 4
// 005ffed9  84c0                 test al, al
// 005ffedb  0f8402ffffff         je 0x5ffde3
// 005ffee1  8b1e                 mov ebx, dword ptr [esi]
// 005ffee3  8b6e04               mov ebp, dword ptr [esi + 4]
// 005ffee6  0fb633               movzx esi, byte ptr [ebx]
// 005ffee9  4d                   dec ebp
// 005ffeea  c1e608               shl esi, 8
// 005ffeed  43                   inc ebx
// 005ffeee  85ed                 test ebp, ebp
// 005ffef0  751b                 jne 0x5fff0d
// 005ffef2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005ffef6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ffef9  57                   push edi
// 005ffefa  ffd1                 call ecx
// 005ffefc  83c404               add esp, 4
// 005ffeff  84c0                 test al, al
// 005fff01  0f84dcfeffff         je 0x5ffde3
// 005fff07  8b5d00               mov ebx, dword ptr [ebp]
// 005fff0a  8b6d04               mov ebp, dword ptr [ebp + 4]
// 005fff0d  0fb613               movzx edx, byte ptr [ebx]
// 005fff10  03f2                 add esi, edx
// 005fff12  eb21                 jmp 0x5fff35
// 005fff14  85ed                 test ebp, ebp
// 005fff16  751a                 jne 0x5fff32
// 005fff18  8b742410             mov esi, dword ptr [esp + 0x10]
// 005fff1c  8b460c               mov eax, dword ptr [esi + 0xc]
// 005fff1f  57                   push edi
// 005fff20  ffd0                 call eax
// 005fff22  83c404               add esp, 4
// 005fff25  84c0                 test al, al
// 005fff27  0f84b6feffff         je 0x5ffde3
// 005fff2d  8b1e                 mov ebx, dword ptr [esi]
// 005fff2f  8b6e04               mov ebp, dword ptr [esi + 4]
// 005fff32  0fb633               movzx esi, byte ptr [ebx]
// 005fff35  8b442414             mov eax, dword ptr [esp + 0x14]
// 005fff39  8b08                 mov ecx, dword ptr [eax]
// 005fff3b  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fff3f  83c004               add eax, 4
// 005fff42  4d                   dec ebp
// 005fff43  43                   inc ebx
// 005fff44  3d98589c00           cmp eax, 0x9c5898
// 005fff49  6689344a             mov word ptr [edx + ecx*2], si
// 005fff4d  89442414             mov dword ptr [esp + 0x14], eax
// 005fff51  0f8c6affffff         jl 0x5ffec1
// 005fff57  8b07                 mov eax, dword ptr [edi]
// 005fff59  83786802             cmp dword ptr [eax + 0x68], 2
// 005fff5d  7c6c                 jl 0x5fffcb
// 005fff5f  8bf2                 mov esi, edx
// 005fff61  83c604               add esi, 4
// 005fff64  c744241808000000     mov dword ptr [esp + 0x18], 8
// 005fff6c  8d642400             lea esp, [esp]
// 005fff70  8b07                 mov eax, dword ptr [edi]
// 005fff72  0fb74efc             movzx ecx, word ptr [esi - 4]
// 005fff76  83c018               add eax, 0x18
// 005fff79  8908                 mov dword ptr [eax], ecx
// 005fff7b  0fb756fe             movzx edx, word ptr [esi - 2]
// 005fff7f  895004               mov dword ptr [eax + 4], edx
// 005fff82  0fb70e               movzx ecx, word ptr [esi]
// 005fff85  894808               mov dword ptr [eax + 8], ecx
// 005fff88  0fb75602             movzx edx, word ptr [esi + 2]
// 005fff8c  89500c               mov dword ptr [eax + 0xc], edx
// 005fff8f  0fb74e04             movzx ecx, word ptr [esi + 4]
// 005fff93  894810               mov dword ptr [eax + 0x10], ecx
// 005fff96  0fb75606             movzx edx, word ptr [esi + 6]
// 005fff9a  895014               mov dword ptr [eax + 0x14], edx
// 005fff9d  0fb74e08             movzx ecx, word ptr [esi + 8]
// 005fffa1  894818               mov dword ptr [eax + 0x18], ecx
// 005fffa4  0fb7560a             movzx edx, word ptr [esi + 0xa]
// 005fffa8  89501c               mov dword ptr [eax + 0x1c], edx
// 005fffab  8b07                 mov eax, dword ptr [edi]
// 005fffad  c740145d000000       mov dword ptr [eax + 0x14], 0x5d
// 005fffb4  8b0f                 mov ecx, dword ptr [edi]
// 005fffb6  8b5104               mov edx, dword ptr [ecx + 4]
// 005fffb9  6a02                 push 2
// 005fffbb  57                   push edi
// 005fffbc  ffd2                 call edx
// 005fffbe  83c408               add esp, 8
// 005fffc1  83c610               add esi, 0x10
// 005fffc4  836c241801           sub dword ptr [esp + 0x18], 1
// 005fffc9  75a5                 jne 0x5fff70
// 005fffcb  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 005fffd0  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 005fffd5  7405                 je 0x5fffdc
// 005fffd7  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 005fffdc  837c240c00           cmp dword ptr [esp + 0xc], 0
// 005fffe1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005fffe5  0f8f45feffff         jg 0x5ffe30
// 005fffeb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fffef  85c0                 test eax, eax
// 005ffff1  7413                 je 0x600006
// 005ffff3  8b07                 mov eax, dword ptr [edi]
// 005ffff5  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005ffffc  8b0f                 mov ecx, dword ptr [edi]
// 005ffffe  8b11                 mov edx, dword ptr [ecx]
// 00600000  57                   push edi
// 00600001  ffd2                 call edx
// 00600003  83c404               add esp, 4
// 00600006  891e                 mov dword ptr [esi], ebx
// 00600008  896e04               mov dword ptr [esi + 4], ebp
// 0060000b  5e                   pop esi
// 0060000c  5d                   pop ebp
// 0060000d  b001                 mov al, 1
// 0060000f  5b                   pop ebx
// 00600010  83c414               add esp, 0x14
// 00600013  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
