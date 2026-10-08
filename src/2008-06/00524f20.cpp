// from server: 100% by auto
// roc 2008-06 00524f20  unit: seg_00520000  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524f20
//
// 00524f20  53                   push ebx
// 00524f21  55                   push ebp
// 00524f22  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00524f26  837d1464             cmp dword ptr [ebp + 0x14], 0x64
// 00524f2a  56                   push esi
// 00524f2b  57                   push edi
// 00524f2c  741e                 je 0x524f4c
// 00524f2e  8b4500               mov eax, dword ptr [ebp]
// 00524f31  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00524f38  8b4d00               mov ecx, dword ptr [ebp]
// 00524f3b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00524f3e  895118               mov dword ptr [ecx + 0x18], edx
// 00524f41  8b4500               mov eax, dword ptr [ebp]
// 00524f44  8b08                 mov ecx, dword ptr [eax]
// 00524f46  55                   push ebp
// 00524f47  ffd1                 call ecx
// 00524f49  83c404               add esp, 4
// 00524f4c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00524f50  85db                 test ebx, ebx
// 00524f52  7c05                 jl 0x524f59
// 00524f54  83fb04               cmp ebx, 4
// 00524f57  7c1b                 jl 0x524f74
// 00524f59  8b5500               mov edx, dword ptr [ebp]
// 00524f5c  c742141f000000       mov dword ptr [edx + 0x14], 0x1f
// 00524f63  8b4500               mov eax, dword ptr [ebp]
// 00524f66  895818               mov dword ptr [eax + 0x18], ebx
// 00524f69  8b4d00               mov ecx, dword ptr [ebp]
// 00524f6c  8b11                 mov edx, dword ptr [ecx]
// 00524f6e  55                   push ebp
// 00524f6f  ffd2                 call edx
// 00524f71  83c404               add esp, 4
// 00524f74  837c9d4800           cmp dword ptr [ebp + ebx*4 + 0x48], 0
// 00524f79  750d                 jne 0x524f88
// 00524f7b  55                   push ebp
// 00524f7c  e85f67ffff           call 0x51b6e0
// 00524f81  83c404               add esp, 4
// 00524f84  89449d48             mov dword ptr [ebp + ebx*4 + 0x48], eax
// 00524f88  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00524f8c  33f6                 xor esi, esi
// 00524f8e  83c708               add edi, 8
// 00524f91  8b4ff8               mov ecx, dword ptr [edi - 8]
// 00524f94  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00524f99  83c132               add ecx, 0x32
// 00524f9c  b81f85eb51           mov eax, 0x51eb851f
// 00524fa1  f7e9                 imul ecx
// 00524fa3  c1fa05               sar edx, 5
// 00524fa6  8bc2                 mov eax, edx
// 00524fa8  c1e81f               shr eax, 0x1f
// 00524fab  03c2                 add eax, edx
// 00524fad  85c0                 test eax, eax
// 00524faf  7f07                 jg 0x524fb8
// 00524fb1  b801000000           mov eax, 1
// 00524fb6  eb0c                 jmp 0x524fc4
// 00524fb8  3dff7f0000           cmp eax, 0x7fff
// 00524fbd  7e05                 jle 0x524fc4
// 00524fbf  b8ff7f0000           mov eax, 0x7fff
// 00524fc4  807c242400           cmp byte ptr [esp + 0x24], 0
// 00524fc9  740c                 je 0x524fd7
// 00524fcb  3dff000000           cmp eax, 0xff
// 00524fd0  7e05                 jle 0x524fd7
// 00524fd2  b8ff000000           mov eax, 0xff
// 00524fd7  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 00524fdb  6689040e             mov word ptr [esi + ecx], ax
// 00524fdf  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00524fe2  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00524fe7  83c132               add ecx, 0x32
// 00524fea  b81f85eb51           mov eax, 0x51eb851f
// 00524fef  f7e9                 imul ecx
// 00524ff1  c1fa05               sar edx, 5
// 00524ff4  8bc2                 mov eax, edx
// 00524ff6  c1e81f               shr eax, 0x1f
// 00524ff9  03c2                 add eax, edx
// 00524ffb  85c0                 test eax, eax
// 00524ffd  7f07                 jg 0x525006
// 00524fff  b801000000           mov eax, 1
// 00525004  eb0c                 jmp 0x525012
// 00525006  3dff7f0000           cmp eax, 0x7fff
// 0052500b  7e05                 jle 0x525012
// 0052500d  b8ff7f0000           mov eax, 0x7fff
// 00525012  807c242400           cmp byte ptr [esp + 0x24], 0
// 00525017  740c                 je 0x525025
// 00525019  3dff000000           cmp eax, 0xff
// 0052501e  7e05                 jle 0x525025
// 00525020  b8ff000000           mov eax, 0xff
// 00525025  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00525029  6689443202           mov word ptr [edx + esi + 2], ax
// 0052502e  8b0f                 mov ecx, dword ptr [edi]
// 00525030  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00525035  83c132               add ecx, 0x32
// 00525038  b81f85eb51           mov eax, 0x51eb851f
// 0052503d  f7e9                 imul ecx
// 0052503f  c1fa05               sar edx, 5
// 00525042  8bc2                 mov eax, edx
// 00525044  c1e81f               shr eax, 0x1f
// 00525047  03c2                 add eax, edx
// 00525049  85c0                 test eax, eax
// 0052504b  7f07                 jg 0x525054
// 0052504d  b801000000           mov eax, 1
// 00525052  eb0c                 jmp 0x525060
// 00525054  3dff7f0000           cmp eax, 0x7fff
// 00525059  7e05                 jle 0x525060
// 0052505b  b8ff7f0000           mov eax, 0x7fff
// 00525060  807c242400           cmp byte ptr [esp + 0x24], 0
// 00525065  740c                 je 0x525073
// 00525067  3dff000000           cmp eax, 0xff
// 0052506c  7e05                 jle 0x525073
// 0052506e  b8ff000000           mov eax, 0xff
// 00525073  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 00525077  6689443104           mov word ptr [ecx + esi + 4], ax
// 0052507c  8b4f04               mov ecx, dword ptr [edi + 4]
// 0052507f  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00525084  83c132               add ecx, 0x32
// 00525087  b81f85eb51           mov eax, 0x51eb851f
// 0052508c  f7e9                 imul ecx
// 0052508e  c1fa05               sar edx, 5
// 00525091  8bc2                 mov eax, edx
// 00525093  c1e81f               shr eax, 0x1f
// 00525096  03c2                 add eax, edx
// 00525098  85c0                 test eax, eax
// 0052509a  7f07                 jg 0x5250a3
// 0052509c  b801000000           mov eax, 1
// 005250a1  eb0c                 jmp 0x5250af
// 005250a3  3dff7f0000           cmp eax, 0x7fff
// 005250a8  7e05                 jle 0x5250af
// 005250aa  b8ff7f0000           mov eax, 0x7fff
// 005250af  807c242400           cmp byte ptr [esp + 0x24], 0
// 005250b4  740c                 je 0x5250c2
// 005250b6  3dff000000           cmp eax, 0xff
// 005250bb  7e05                 jle 0x5250c2
// 005250bd  b8ff000000           mov eax, 0xff
// 005250c2  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 005250c6  6689441606           mov word ptr [esi + edx + 6], ax
// 005250cb  83c608               add esi, 8
// 005250ce  83c710               add edi, 0x10
// 005250d1  81fe80000000         cmp esi, 0x80
// 005250d7  0f8cb4feffff         jl 0x524f91
// 005250dd  8b449d48             mov eax, dword ptr [ebp + ebx*4 + 0x48]
// 005250e1  5f                   pop edi
// 005250e2  5e                   pop esi
// 005250e3  5d                   pop ebp
// 005250e4  c6808000000000       mov byte ptr [eax + 0x80], 0
// 005250eb  5b                   pop ebx
// 005250ec  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_add_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
