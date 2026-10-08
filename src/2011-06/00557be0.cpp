// from server: 100% by auto
// roc 2011-06 00557be0  unit: seg_00550000  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557be0
//
// 00557be0  53                   push ebx
// 00557be1  55                   push ebp
// 00557be2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00557be6  837d1464             cmp dword ptr [ebp + 0x14], 0x64
// 00557bea  56                   push esi
// 00557beb  57                   push edi
// 00557bec  741e                 je 0x557c0c
// 00557bee  8b4500               mov eax, dword ptr [ebp]
// 00557bf1  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00557bf8  8b4d00               mov ecx, dword ptr [ebp]
// 00557bfb  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00557bfe  895118               mov dword ptr [ecx + 0x18], edx
// 00557c01  8b4500               mov eax, dword ptr [ebp]
// 00557c04  8b08                 mov ecx, dword ptr [eax]
// 00557c06  55                   push ebp
// 00557c07  ffd1                 call ecx
// 00557c09  83c404               add esp, 4
// 00557c0c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00557c10  85db                 test ebx, ebx
// 00557c12  7c05                 jl 0x557c19
// 00557c14  83fb04               cmp ebx, 4
// 00557c17  7c1b                 jl 0x557c34
// 00557c19  8b5500               mov edx, dword ptr [ebp]
// 00557c1c  c742141f000000       mov dword ptr [edx + 0x14], 0x1f
// 00557c23  8b4500               mov eax, dword ptr [ebp]
// 00557c26  895818               mov dword ptr [eax + 0x18], ebx
// 00557c29  8b4d00               mov ecx, dword ptr [ebp]
// 00557c2c  8b11                 mov edx, dword ptr [ecx]
// 00557c2e  55                   push ebp
// 00557c2f  ffd2                 call edx
// 00557c31  83c404               add esp, 4
// 00557c34  837c9d4800           cmp dword ptr [ebp + ebx*4 + 0x48], 0
// 00557c39  750d                 jne 0x557c48
// 00557c3b  55                   push ebp
// 00557c3c  e81f010100           call 0x567d60
// 00557c41  83c404               add esp, 4
// 00557c44  89449d48             mov dword ptr [ebp + ebx*4 + 0x48], eax
// 00557c48  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00557c4c  33f6                 xor esi, esi
// 00557c4e  83c708               add edi, 8
// 00557c51  8b4ff8               mov ecx, dword ptr [edi - 8]
// 00557c54  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00557c59  83c132               add ecx, 0x32
// 00557c5c  b81f85eb51           mov eax, 0x51eb851f
// 00557c61  f7e9                 imul ecx
// 00557c63  c1fa05               sar edx, 5
// 00557c66  8bc2                 mov eax, edx
// 00557c68  c1e81f               shr eax, 0x1f
// 00557c6b  03c2                 add eax, edx
// 00557c6d  85c0                 test eax, eax
// 00557c6f  7f07                 jg 0x557c78
// 00557c71  b801000000           mov eax, 1
// 00557c76  eb0c                 jmp 0x557c84
// 00557c78  3dff7f0000           cmp eax, 0x7fff
// 00557c7d  7e05                 jle 0x557c84
// 00557c7f  b8ff7f0000           mov eax, 0x7fff
// 00557c84  807c242400           cmp byte ptr [esp + 0x24], 0
// 00557c89  740c                 je 0x557c97
// 00557c8b  3dff000000           cmp eax, 0xff
// 00557c90  7e05                 jle 0x557c97
// 00557c92  b8ff000000           mov eax, 0xff
// 00557c97  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 00557c9b  6689040e             mov word ptr [esi + ecx], ax
// 00557c9f  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00557ca2  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00557ca7  83c132               add ecx, 0x32
// 00557caa  b81f85eb51           mov eax, 0x51eb851f
// 00557caf  f7e9                 imul ecx
// 00557cb1  c1fa05               sar edx, 5
// 00557cb4  8bc2                 mov eax, edx
// 00557cb6  c1e81f               shr eax, 0x1f
// 00557cb9  03c2                 add eax, edx
// 00557cbb  85c0                 test eax, eax
// 00557cbd  7f07                 jg 0x557cc6
// 00557cbf  b801000000           mov eax, 1
// 00557cc4  eb0c                 jmp 0x557cd2
// 00557cc6  3dff7f0000           cmp eax, 0x7fff
// 00557ccb  7e05                 jle 0x557cd2
// 00557ccd  b8ff7f0000           mov eax, 0x7fff
// 00557cd2  807c242400           cmp byte ptr [esp + 0x24], 0
// 00557cd7  740c                 je 0x557ce5
// 00557cd9  3dff000000           cmp eax, 0xff
// 00557cde  7e05                 jle 0x557ce5
// 00557ce0  b8ff000000           mov eax, 0xff
// 00557ce5  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00557ce9  6689443202           mov word ptr [edx + esi + 2], ax
// 00557cee  8b0f                 mov ecx, dword ptr [edi]
// 00557cf0  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00557cf5  83c132               add ecx, 0x32
// 00557cf8  b81f85eb51           mov eax, 0x51eb851f
// 00557cfd  f7e9                 imul ecx
// 00557cff  c1fa05               sar edx, 5
// 00557d02  8bc2                 mov eax, edx
// 00557d04  c1e81f               shr eax, 0x1f
// 00557d07  03c2                 add eax, edx
// 00557d09  85c0                 test eax, eax
// 00557d0b  7f07                 jg 0x557d14
// 00557d0d  b801000000           mov eax, 1
// 00557d12  eb0c                 jmp 0x557d20
// 00557d14  3dff7f0000           cmp eax, 0x7fff
// 00557d19  7e05                 jle 0x557d20
// 00557d1b  b8ff7f0000           mov eax, 0x7fff
// 00557d20  807c242400           cmp byte ptr [esp + 0x24], 0
// 00557d25  740c                 je 0x557d33
// 00557d27  3dff000000           cmp eax, 0xff
// 00557d2c  7e05                 jle 0x557d33
// 00557d2e  b8ff000000           mov eax, 0xff
// 00557d33  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 00557d37  6689443104           mov word ptr [ecx + esi + 4], ax
// 00557d3c  8b4f04               mov ecx, dword ptr [edi + 4]
// 00557d3f  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00557d44  83c132               add ecx, 0x32
// 00557d47  b81f85eb51           mov eax, 0x51eb851f
// 00557d4c  f7e9                 imul ecx
// 00557d4e  c1fa05               sar edx, 5
// 00557d51  8bc2                 mov eax, edx
// 00557d53  c1e81f               shr eax, 0x1f
// 00557d56  03c2                 add eax, edx
// 00557d58  85c0                 test eax, eax
// 00557d5a  7f07                 jg 0x557d63
// 00557d5c  b801000000           mov eax, 1
// 00557d61  eb0c                 jmp 0x557d6f
// 00557d63  3dff7f0000           cmp eax, 0x7fff
// 00557d68  7e05                 jle 0x557d6f
// 00557d6a  b8ff7f0000           mov eax, 0x7fff
// 00557d6f  807c242400           cmp byte ptr [esp + 0x24], 0
// 00557d74  740c                 je 0x557d82
// 00557d76  3dff000000           cmp eax, 0xff
// 00557d7b  7e05                 jle 0x557d82
// 00557d7d  b8ff000000           mov eax, 0xff
// 00557d82  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00557d86  6689441606           mov word ptr [esi + edx + 6], ax
// 00557d8b  83c608               add esi, 8
// 00557d8e  83c710               add edi, 0x10
// 00557d91  81fe80000000         cmp esi, 0x80
// 00557d97  0f8cb4feffff         jl 0x557c51
// 00557d9d  8b449d48             mov eax, dword ptr [ebp + ebx*4 + 0x48]
// 00557da1  5f                   pop edi
// 00557da2  5e                   pop esi
// 00557da3  5d                   pop ebp
// 00557da4  c6808000000000       mov byte ptr [eax + 0x80], 0
// 00557dab  5b                   pop ebx
// 00557dac  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_add_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
