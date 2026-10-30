// roc 2007-03 00513410  unit: seg_00510000  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513410
//
// 00513410  53                   push ebx
// 00513411  55                   push ebp
// 00513412  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00513416  837d1464             cmp dword ptr [ebp + 0x14], 0x64
// 0051341a  56                   push esi
// 0051341b  57                   push edi
// 0051341c  741e                 je 0x51343c
// 0051341e  8b4500               mov eax, dword ptr [ebp]
// 00513421  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00513428  8b4d00               mov ecx, dword ptr [ebp]
// 0051342b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0051342e  895118               mov dword ptr [ecx + 0x18], edx
// 00513431  8b4500               mov eax, dword ptr [ebp]
// 00513434  8b08                 mov ecx, dword ptr [eax]
// 00513436  55                   push ebp
// 00513437  ffd1                 call ecx
// 00513439  83c404               add esp, 4
// 0051343c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00513440  85db                 test ebx, ebx
// 00513442  7c05                 jl 0x513449
// 00513444  83fb04               cmp ebx, 4
// 00513447  7c1b                 jl 0x513464
// 00513449  8b5500               mov edx, dword ptr [ebp]
// 0051344c  c742141f000000       mov dword ptr [edx + 0x14], 0x1f
// 00513453  8b4500               mov eax, dword ptr [ebp]
// 00513456  895818               mov dword ptr [eax + 0x18], ebx
// 00513459  8b4d00               mov ecx, dword ptr [ebp]
// 0051345c  8b11                 mov edx, dword ptr [ecx]
// 0051345e  55                   push ebp
// 0051345f  ffd2                 call edx
// 00513461  83c404               add esp, 4
// 00513464  837c9d4800           cmp dword ptr [ebp + ebx*4 + 0x48], 0
// 00513469  750d                 jne 0x513478
// 0051346b  55                   push ebp
// 0051346c  e88f1a0000           call 0x514f00
// 00513471  83c404               add esp, 4
// 00513474  89449d48             mov dword ptr [ebp + ebx*4 + 0x48], eax
// 00513478  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051347c  33f6                 xor esi, esi
// 0051347e  83c708               add edi, 8
// 00513481  8b4ff8               mov ecx, dword ptr [edi - 8]
// 00513484  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00513489  83c132               add ecx, 0x32
// 0051348c  b81f85eb51           mov eax, 0x51eb851f
// 00513491  f7e9                 imul ecx
// 00513493  c1fa05               sar edx, 5
// 00513496  8bc2                 mov eax, edx
// 00513498  c1e81f               shr eax, 0x1f
// 0051349b  03c2                 add eax, edx
// 0051349d  85c0                 test eax, eax
// 0051349f  7f07                 jg 0x5134a8
// 005134a1  b801000000           mov eax, 1
// 005134a6  eb0c                 jmp 0x5134b4
// 005134a8  3dff7f0000           cmp eax, 0x7fff
// 005134ad  7e05                 jle 0x5134b4
// 005134af  b8ff7f0000           mov eax, 0x7fff
// 005134b4  807c242400           cmp byte ptr [esp + 0x24], 0
// 005134b9  740c                 je 0x5134c7
// 005134bb  3dff000000           cmp eax, 0xff
// 005134c0  7e05                 jle 0x5134c7
// 005134c2  b8ff000000           mov eax, 0xff
// 005134c7  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 005134cb  6689040e             mov word ptr [esi + ecx], ax
// 005134cf  8b4ffc               mov ecx, dword ptr [edi - 4]
// 005134d2  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 005134d7  83c132               add ecx, 0x32
// 005134da  b81f85eb51           mov eax, 0x51eb851f
// 005134df  f7e9                 imul ecx
// 005134e1  c1fa05               sar edx, 5
// 005134e4  8bc2                 mov eax, edx
// 005134e6  c1e81f               shr eax, 0x1f
// 005134e9  03c2                 add eax, edx
// 005134eb  85c0                 test eax, eax
// 005134ed  7f07                 jg 0x5134f6
// 005134ef  b801000000           mov eax, 1
// 005134f4  eb0c                 jmp 0x513502
// 005134f6  3dff7f0000           cmp eax, 0x7fff
// 005134fb  7e05                 jle 0x513502
// 005134fd  b8ff7f0000           mov eax, 0x7fff
// 00513502  807c242400           cmp byte ptr [esp + 0x24], 0
// 00513507  740c                 je 0x513515
// 00513509  3dff000000           cmp eax, 0xff
// 0051350e  7e05                 jle 0x513515
// 00513510  b8ff000000           mov eax, 0xff
// 00513515  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00513519  6689443202           mov word ptr [edx + esi + 2], ax
// 0051351e  8b0f                 mov ecx, dword ptr [edi]
// 00513520  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00513525  83c132               add ecx, 0x32
// 00513528  b81f85eb51           mov eax, 0x51eb851f
// 0051352d  f7e9                 imul ecx
// 0051352f  c1fa05               sar edx, 5
// 00513532  8bc2                 mov eax, edx
// 00513534  c1e81f               shr eax, 0x1f
// 00513537  03c2                 add eax, edx
// 00513539  85c0                 test eax, eax
// 0051353b  7f07                 jg 0x513544
// 0051353d  b801000000           mov eax, 1
// 00513542  eb0c                 jmp 0x513550
// 00513544  3dff7f0000           cmp eax, 0x7fff
// 00513549  7e05                 jle 0x513550
// 0051354b  b8ff7f0000           mov eax, 0x7fff
// 00513550  807c242400           cmp byte ptr [esp + 0x24], 0
// 00513555  740c                 je 0x513563
// 00513557  3dff000000           cmp eax, 0xff
// 0051355c  7e05                 jle 0x513563
// 0051355e  b8ff000000           mov eax, 0xff
// 00513563  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 00513567  6689443104           mov word ptr [ecx + esi + 4], ax
// 0051356c  8b4f04               mov ecx, dword ptr [edi + 4]
// 0051356f  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00513574  83c132               add ecx, 0x32
// 00513577  b81f85eb51           mov eax, 0x51eb851f
// 0051357c  f7e9                 imul ecx
// 0051357e  c1fa05               sar edx, 5
// 00513581  8bc2                 mov eax, edx
// 00513583  c1e81f               shr eax, 0x1f
// 00513586  03c2                 add eax, edx
// 00513588  85c0                 test eax, eax
// 0051358a  7f07                 jg 0x513593
// 0051358c  b801000000           mov eax, 1
// 00513591  eb0c                 jmp 0x51359f
// 00513593  3dff7f0000           cmp eax, 0x7fff
// 00513598  7e05                 jle 0x51359f
// 0051359a  b8ff7f0000           mov eax, 0x7fff
// 0051359f  807c242400           cmp byte ptr [esp + 0x24], 0
// 005135a4  740c                 je 0x5135b2
// 005135a6  3dff000000           cmp eax, 0xff
// 005135ab  7e05                 jle 0x5135b2
// 005135ad  b8ff000000           mov eax, 0xff
// 005135b2  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 005135b6  6689441606           mov word ptr [esi + edx + 6], ax
// 005135bb  83c608               add esi, 8
// 005135be  83c710               add edi, 0x10
// 005135c1  81fe80000000         cmp esi, 0x80
// 005135c7  0f8cb4feffff         jl 0x513481
// 005135cd  8b449d48             mov eax, dword ptr [ebp + ebx*4 + 0x48]
// 005135d1  5f                   pop edi
// 005135d2  5e                   pop esi
// 005135d3  5d                   pop ebp
// 005135d4  c6808000000000       mov byte ptr [eax + 0x80], 0
// 005135db  5b                   pop ebx
// 005135dc  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_add_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
