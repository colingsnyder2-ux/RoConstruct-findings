// from server: 100% by auto
// roc 2012-06 00644a60  unit: seg_00640000  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644a60
//
// 00644a60  53                   push ebx
// 00644a61  55                   push ebp
// 00644a62  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00644a66  837d1464             cmp dword ptr [ebp + 0x14], 0x64
// 00644a6a  56                   push esi
// 00644a6b  57                   push edi
// 00644a6c  741e                 je 0x644a8c
// 00644a6e  8b4500               mov eax, dword ptr [ebp]
// 00644a71  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00644a78  8b4d00               mov ecx, dword ptr [ebp]
// 00644a7b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00644a7e  895118               mov dword ptr [ecx + 0x18], edx
// 00644a81  8b4500               mov eax, dword ptr [ebp]
// 00644a84  8b08                 mov ecx, dword ptr [eax]
// 00644a86  55                   push ebp
// 00644a87  ffd1                 call ecx
// 00644a89  83c404               add esp, 4
// 00644a8c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00644a90  85db                 test ebx, ebx
// 00644a92  7c05                 jl 0x644a99
// 00644a94  83fb04               cmp ebx, 4
// 00644a97  7c1b                 jl 0x644ab4
// 00644a99  8b5500               mov edx, dword ptr [ebp]
// 00644a9c  c742141f000000       mov dword ptr [edx + 0x14], 0x1f
// 00644aa3  8b4500               mov eax, dword ptr [ebp]
// 00644aa6  895818               mov dword ptr [eax + 0x18], ebx
// 00644aa9  8b4d00               mov ecx, dword ptr [ebp]
// 00644aac  8b11                 mov edx, dword ptr [ecx]
// 00644aae  55                   push ebp
// 00644aaf  ffd2                 call edx
// 00644ab1  83c404               add esp, 4
// 00644ab4  837c9d4800           cmp dword ptr [ebp + ebx*4 + 0x48], 0
// 00644ab9  750d                 jne 0x644ac8
// 00644abb  55                   push ebp
// 00644abc  e8afe90000           call 0x653470
// 00644ac1  83c404               add esp, 4
// 00644ac4  89449d48             mov dword ptr [ebp + ebx*4 + 0x48], eax
// 00644ac8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00644acc  33f6                 xor esi, esi
// 00644ace  83c708               add edi, 8
// 00644ad1  8b4ff8               mov ecx, dword ptr [edi - 8]
// 00644ad4  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00644ad9  83c132               add ecx, 0x32
// 00644adc  b81f85eb51           mov eax, 0x51eb851f
// 00644ae1  f7e9                 imul ecx
// 00644ae3  c1fa05               sar edx, 5
// 00644ae6  8bc2                 mov eax, edx
// 00644ae8  c1e81f               shr eax, 0x1f
// 00644aeb  03c2                 add eax, edx
// 00644aed  85c0                 test eax, eax
// 00644aef  7f07                 jg 0x644af8
// 00644af1  b801000000           mov eax, 1
// 00644af6  eb0c                 jmp 0x644b04
// 00644af8  3dff7f0000           cmp eax, 0x7fff
// 00644afd  7e05                 jle 0x644b04
// 00644aff  b8ff7f0000           mov eax, 0x7fff
// 00644b04  807c242400           cmp byte ptr [esp + 0x24], 0
// 00644b09  740c                 je 0x644b17
// 00644b0b  3dff000000           cmp eax, 0xff
// 00644b10  7e05                 jle 0x644b17
// 00644b12  b8ff000000           mov eax, 0xff
// 00644b17  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 00644b1b  6689040e             mov word ptr [esi + ecx], ax
// 00644b1f  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00644b22  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00644b27  83c132               add ecx, 0x32
// 00644b2a  b81f85eb51           mov eax, 0x51eb851f
// 00644b2f  f7e9                 imul ecx
// 00644b31  c1fa05               sar edx, 5
// 00644b34  8bc2                 mov eax, edx
// 00644b36  c1e81f               shr eax, 0x1f
// 00644b39  03c2                 add eax, edx
// 00644b3b  85c0                 test eax, eax
// 00644b3d  7f07                 jg 0x644b46
// 00644b3f  b801000000           mov eax, 1
// 00644b44  eb0c                 jmp 0x644b52
// 00644b46  3dff7f0000           cmp eax, 0x7fff
// 00644b4b  7e05                 jle 0x644b52
// 00644b4d  b8ff7f0000           mov eax, 0x7fff
// 00644b52  807c242400           cmp byte ptr [esp + 0x24], 0
// 00644b57  740c                 je 0x644b65
// 00644b59  3dff000000           cmp eax, 0xff
// 00644b5e  7e05                 jle 0x644b65
// 00644b60  b8ff000000           mov eax, 0xff
// 00644b65  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00644b69  6689443202           mov word ptr [edx + esi + 2], ax
// 00644b6e  8b0f                 mov ecx, dword ptr [edi]
// 00644b70  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00644b75  83c132               add ecx, 0x32
// 00644b78  b81f85eb51           mov eax, 0x51eb851f
// 00644b7d  f7e9                 imul ecx
// 00644b7f  c1fa05               sar edx, 5
// 00644b82  8bc2                 mov eax, edx
// 00644b84  c1e81f               shr eax, 0x1f
// 00644b87  03c2                 add eax, edx
// 00644b89  85c0                 test eax, eax
// 00644b8b  7f07                 jg 0x644b94
// 00644b8d  b801000000           mov eax, 1
// 00644b92  eb0c                 jmp 0x644ba0
// 00644b94  3dff7f0000           cmp eax, 0x7fff
// 00644b99  7e05                 jle 0x644ba0
// 00644b9b  b8ff7f0000           mov eax, 0x7fff
// 00644ba0  807c242400           cmp byte ptr [esp + 0x24], 0
// 00644ba5  740c                 je 0x644bb3
// 00644ba7  3dff000000           cmp eax, 0xff
// 00644bac  7e05                 jle 0x644bb3
// 00644bae  b8ff000000           mov eax, 0xff
// 00644bb3  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 00644bb7  6689443104           mov word ptr [ecx + esi + 4], ax
// 00644bbc  8b4f04               mov ecx, dword ptr [edi + 4]
// 00644bbf  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00644bc4  83c132               add ecx, 0x32
// 00644bc7  b81f85eb51           mov eax, 0x51eb851f
// 00644bcc  f7e9                 imul ecx
// 00644bce  c1fa05               sar edx, 5
// 00644bd1  8bc2                 mov eax, edx
// 00644bd3  c1e81f               shr eax, 0x1f
// 00644bd6  03c2                 add eax, edx
// 00644bd8  85c0                 test eax, eax
// 00644bda  7f07                 jg 0x644be3
// 00644bdc  b801000000           mov eax, 1
// 00644be1  eb0c                 jmp 0x644bef
// 00644be3  3dff7f0000           cmp eax, 0x7fff
// 00644be8  7e05                 jle 0x644bef
// 00644bea  b8ff7f0000           mov eax, 0x7fff
// 00644bef  807c242400           cmp byte ptr [esp + 0x24], 0
// 00644bf4  740c                 je 0x644c02
// 00644bf6  3dff000000           cmp eax, 0xff
// 00644bfb  7e05                 jle 0x644c02
// 00644bfd  b8ff000000           mov eax, 0xff
// 00644c02  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00644c06  6689441606           mov word ptr [esi + edx + 6], ax
// 00644c0b  83c608               add esi, 8
// 00644c0e  83c710               add edi, 0x10
// 00644c11  81fe80000000         cmp esi, 0x80
// 00644c17  0f8cb4feffff         jl 0x644ad1
// 00644c1d  8b449d48             mov eax, dword ptr [ebp + ebx*4 + 0x48]
// 00644c21  5f                   pop edi
// 00644c22  5e                   pop esi
// 00644c23  5d                   pop ebp
// 00644c24  c6808000000000       mov byte ptr [eax + 0x80], 0
// 00644c2b  5b                   pop ebx
// 00644c2c  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_add_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
