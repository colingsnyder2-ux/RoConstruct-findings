// roc 2010-06 0056c870  unit: seg_00560000  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c870
//
// 0056c870  53                   push ebx
// 0056c871  55                   push ebp
// 0056c872  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0056c876  837d1464             cmp dword ptr [ebp + 0x14], 0x64
// 0056c87a  56                   push esi
// 0056c87b  57                   push edi
// 0056c87c  741e                 je 0x56c89c
// 0056c87e  8b4500               mov eax, dword ptr [ebp]
// 0056c881  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056c888  8b4d00               mov ecx, dword ptr [ebp]
// 0056c88b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0056c88e  895118               mov dword ptr [ecx + 0x18], edx
// 0056c891  8b4500               mov eax, dword ptr [ebp]
// 0056c894  8b08                 mov ecx, dword ptr [eax]
// 0056c896  55                   push ebp
// 0056c897  ffd1                 call ecx
// 0056c899  83c404               add esp, 4
// 0056c89c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056c8a0  85db                 test ebx, ebx
// 0056c8a2  7c05                 jl 0x56c8a9
// 0056c8a4  83fb04               cmp ebx, 4
// 0056c8a7  7c1b                 jl 0x56c8c4
// 0056c8a9  8b5500               mov edx, dword ptr [ebp]
// 0056c8ac  c742141f000000       mov dword ptr [edx + 0x14], 0x1f
// 0056c8b3  8b4500               mov eax, dword ptr [ebp]
// 0056c8b6  895818               mov dword ptr [eax + 0x18], ebx
// 0056c8b9  8b4d00               mov ecx, dword ptr [ebp]
// 0056c8bc  8b11                 mov edx, dword ptr [ecx]
// 0056c8be  55                   push ebp
// 0056c8bf  ffd2                 call edx
// 0056c8c1  83c404               add esp, 4
// 0056c8c4  837c9d4800           cmp dword ptr [ebp + ebx*4 + 0x48], 0
// 0056c8c9  750d                 jne 0x56c8d8
// 0056c8cb  55                   push ebp
// 0056c8cc  e8ff5effff           call 0x5627d0
// 0056c8d1  83c404               add esp, 4
// 0056c8d4  89449d48             mov dword ptr [ebp + ebx*4 + 0x48], eax
// 0056c8d8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056c8dc  33f6                 xor esi, esi
// 0056c8de  83c708               add edi, 8
// 0056c8e1  8b4ff8               mov ecx, dword ptr [edi - 8]
// 0056c8e4  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0056c8e9  83c132               add ecx, 0x32
// 0056c8ec  b81f85eb51           mov eax, 0x51eb851f
// 0056c8f1  f7e9                 imul ecx
// 0056c8f3  c1fa05               sar edx, 5
// 0056c8f6  8bc2                 mov eax, edx
// 0056c8f8  c1e81f               shr eax, 0x1f
// 0056c8fb  03c2                 add eax, edx
// 0056c8fd  85c0                 test eax, eax
// 0056c8ff  7f07                 jg 0x56c908
// 0056c901  b801000000           mov eax, 1
// 0056c906  eb0c                 jmp 0x56c914
// 0056c908  3dff7f0000           cmp eax, 0x7fff
// 0056c90d  7e05                 jle 0x56c914
// 0056c90f  b8ff7f0000           mov eax, 0x7fff
// 0056c914  807c242400           cmp byte ptr [esp + 0x24], 0
// 0056c919  740c                 je 0x56c927
// 0056c91b  3dff000000           cmp eax, 0xff
// 0056c920  7e05                 jle 0x56c927
// 0056c922  b8ff000000           mov eax, 0xff
// 0056c927  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 0056c92b  6689040e             mov word ptr [esi + ecx], ax
// 0056c92f  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0056c932  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0056c937  83c132               add ecx, 0x32
// 0056c93a  b81f85eb51           mov eax, 0x51eb851f
// 0056c93f  f7e9                 imul ecx
// 0056c941  c1fa05               sar edx, 5
// 0056c944  8bc2                 mov eax, edx
// 0056c946  c1e81f               shr eax, 0x1f
// 0056c949  03c2                 add eax, edx
// 0056c94b  85c0                 test eax, eax
// 0056c94d  7f07                 jg 0x56c956
// 0056c94f  b801000000           mov eax, 1
// 0056c954  eb0c                 jmp 0x56c962
// 0056c956  3dff7f0000           cmp eax, 0x7fff
// 0056c95b  7e05                 jle 0x56c962
// 0056c95d  b8ff7f0000           mov eax, 0x7fff
// 0056c962  807c242400           cmp byte ptr [esp + 0x24], 0
// 0056c967  740c                 je 0x56c975
// 0056c969  3dff000000           cmp eax, 0xff
// 0056c96e  7e05                 jle 0x56c975
// 0056c970  b8ff000000           mov eax, 0xff
// 0056c975  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 0056c979  6689443202           mov word ptr [edx + esi + 2], ax
// 0056c97e  8b0f                 mov ecx, dword ptr [edi]
// 0056c980  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0056c985  83c132               add ecx, 0x32
// 0056c988  b81f85eb51           mov eax, 0x51eb851f
// 0056c98d  f7e9                 imul ecx
// 0056c98f  c1fa05               sar edx, 5
// 0056c992  8bc2                 mov eax, edx
// 0056c994  c1e81f               shr eax, 0x1f
// 0056c997  03c2                 add eax, edx
// 0056c999  85c0                 test eax, eax
// 0056c99b  7f07                 jg 0x56c9a4
// 0056c99d  b801000000           mov eax, 1
// 0056c9a2  eb0c                 jmp 0x56c9b0
// 0056c9a4  3dff7f0000           cmp eax, 0x7fff
// 0056c9a9  7e05                 jle 0x56c9b0
// 0056c9ab  b8ff7f0000           mov eax, 0x7fff
// 0056c9b0  807c242400           cmp byte ptr [esp + 0x24], 0
// 0056c9b5  740c                 je 0x56c9c3
// 0056c9b7  3dff000000           cmp eax, 0xff
// 0056c9bc  7e05                 jle 0x56c9c3
// 0056c9be  b8ff000000           mov eax, 0xff
// 0056c9c3  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 0056c9c7  6689443104           mov word ptr [ecx + esi + 4], ax
// 0056c9cc  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056c9cf  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0056c9d4  83c132               add ecx, 0x32
// 0056c9d7  b81f85eb51           mov eax, 0x51eb851f
// 0056c9dc  f7e9                 imul ecx
// 0056c9de  c1fa05               sar edx, 5
// 0056c9e1  8bc2                 mov eax, edx
// 0056c9e3  c1e81f               shr eax, 0x1f
// 0056c9e6  03c2                 add eax, edx
// 0056c9e8  85c0                 test eax, eax
// 0056c9ea  7f07                 jg 0x56c9f3
// 0056c9ec  b801000000           mov eax, 1
// 0056c9f1  eb0c                 jmp 0x56c9ff
// 0056c9f3  3dff7f0000           cmp eax, 0x7fff
// 0056c9f8  7e05                 jle 0x56c9ff
// 0056c9fa  b8ff7f0000           mov eax, 0x7fff
// 0056c9ff  807c242400           cmp byte ptr [esp + 0x24], 0
// 0056ca04  740c                 je 0x56ca12
// 0056ca06  3dff000000           cmp eax, 0xff
// 0056ca0b  7e05                 jle 0x56ca12
// 0056ca0d  b8ff000000           mov eax, 0xff
// 0056ca12  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 0056ca16  6689441606           mov word ptr [esi + edx + 6], ax
// 0056ca1b  83c608               add esi, 8
// 0056ca1e  83c710               add edi, 0x10
// 0056ca21  81fe80000000         cmp esi, 0x80
// 0056ca27  0f8cb4feffff         jl 0x56c8e1
// 0056ca2d  8b449d48             mov eax, dword ptr [ebp + ebx*4 + 0x48]
// 0056ca31  5f                   pop edi
// 0056ca32  5e                   pop esi
// 0056ca33  5d                   pop ebp
// 0056ca34  c6808000000000       mov byte ptr [eax + 0x80], 0
// 0056ca3b  5b                   pop ebx
// 0056ca3c  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_add_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
