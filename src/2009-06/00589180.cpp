// from server: 100% by auto
// roc 2009-06 00589180  unit: seg_00580000  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589180
//
// 00589180  53                   push ebx
// 00589181  55                   push ebp
// 00589182  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00589186  837d1464             cmp dword ptr [ebp + 0x14], 0x64
// 0058918a  56                   push esi
// 0058918b  57                   push edi
// 0058918c  741e                 je 0x5891ac
// 0058918e  8b4500               mov eax, dword ptr [ebp]
// 00589191  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00589198  8b4d00               mov ecx, dword ptr [ebp]
// 0058919b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0058919e  895118               mov dword ptr [ecx + 0x18], edx
// 005891a1  8b4500               mov eax, dword ptr [ebp]
// 005891a4  8b08                 mov ecx, dword ptr [eax]
// 005891a6  55                   push ebp
// 005891a7  ffd1                 call ecx
// 005891a9  83c404               add esp, 4
// 005891ac  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005891b0  85db                 test ebx, ebx
// 005891b2  7c05                 jl 0x5891b9
// 005891b4  83fb04               cmp ebx, 4
// 005891b7  7c1b                 jl 0x5891d4
// 005891b9  8b5500               mov edx, dword ptr [ebp]
// 005891bc  c742141f000000       mov dword ptr [edx + 0x14], 0x1f
// 005891c3  8b4500               mov eax, dword ptr [ebp]
// 005891c6  895818               mov dword ptr [eax + 0x18], ebx
// 005891c9  8b4d00               mov ecx, dword ptr [ebp]
// 005891cc  8b11                 mov edx, dword ptr [ecx]
// 005891ce  55                   push ebp
// 005891cf  ffd2                 call edx
// 005891d1  83c404               add esp, 4
// 005891d4  837c9d4800           cmp dword ptr [ebp + ebx*4 + 0x48], 0
// 005891d9  750d                 jne 0x5891e8
// 005891db  55                   push ebp
// 005891dc  e89f5effff           call 0x57f080
// 005891e1  83c404               add esp, 4
// 005891e4  89449d48             mov dword ptr [ebp + ebx*4 + 0x48], eax
// 005891e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005891ec  33f6                 xor esi, esi
// 005891ee  83c708               add edi, 8
// 005891f1  8b4ff8               mov ecx, dword ptr [edi - 8]
// 005891f4  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 005891f9  83c132               add ecx, 0x32
// 005891fc  b81f85eb51           mov eax, 0x51eb851f
// 00589201  f7e9                 imul ecx
// 00589203  c1fa05               sar edx, 5
// 00589206  8bc2                 mov eax, edx
// 00589208  c1e81f               shr eax, 0x1f
// 0058920b  03c2                 add eax, edx
// 0058920d  85c0                 test eax, eax
// 0058920f  7f07                 jg 0x589218
// 00589211  b801000000           mov eax, 1
// 00589216  eb0c                 jmp 0x589224
// 00589218  3dff7f0000           cmp eax, 0x7fff
// 0058921d  7e05                 jle 0x589224
// 0058921f  b8ff7f0000           mov eax, 0x7fff
// 00589224  807c242400           cmp byte ptr [esp + 0x24], 0
// 00589229  740c                 je 0x589237
// 0058922b  3dff000000           cmp eax, 0xff
// 00589230  7e05                 jle 0x589237
// 00589232  b8ff000000           mov eax, 0xff
// 00589237  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 0058923b  6689040e             mov word ptr [esi + ecx], ax
// 0058923f  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00589242  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00589247  83c132               add ecx, 0x32
// 0058924a  b81f85eb51           mov eax, 0x51eb851f
// 0058924f  f7e9                 imul ecx
// 00589251  c1fa05               sar edx, 5
// 00589254  8bc2                 mov eax, edx
// 00589256  c1e81f               shr eax, 0x1f
// 00589259  03c2                 add eax, edx
// 0058925b  85c0                 test eax, eax
// 0058925d  7f07                 jg 0x589266
// 0058925f  b801000000           mov eax, 1
// 00589264  eb0c                 jmp 0x589272
// 00589266  3dff7f0000           cmp eax, 0x7fff
// 0058926b  7e05                 jle 0x589272
// 0058926d  b8ff7f0000           mov eax, 0x7fff
// 00589272  807c242400           cmp byte ptr [esp + 0x24], 0
// 00589277  740c                 je 0x589285
// 00589279  3dff000000           cmp eax, 0xff
// 0058927e  7e05                 jle 0x589285
// 00589280  b8ff000000           mov eax, 0xff
// 00589285  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00589289  6689443202           mov word ptr [edx + esi + 2], ax
// 0058928e  8b0f                 mov ecx, dword ptr [edi]
// 00589290  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 00589295  83c132               add ecx, 0x32
// 00589298  b81f85eb51           mov eax, 0x51eb851f
// 0058929d  f7e9                 imul ecx
// 0058929f  c1fa05               sar edx, 5
// 005892a2  8bc2                 mov eax, edx
// 005892a4  c1e81f               shr eax, 0x1f
// 005892a7  03c2                 add eax, edx
// 005892a9  85c0                 test eax, eax
// 005892ab  7f07                 jg 0x5892b4
// 005892ad  b801000000           mov eax, 1
// 005892b2  eb0c                 jmp 0x5892c0
// 005892b4  3dff7f0000           cmp eax, 0x7fff
// 005892b9  7e05                 jle 0x5892c0
// 005892bb  b8ff7f0000           mov eax, 0x7fff
// 005892c0  807c242400           cmp byte ptr [esp + 0x24], 0
// 005892c5  740c                 je 0x5892d3
// 005892c7  3dff000000           cmp eax, 0xff
// 005892cc  7e05                 jle 0x5892d3
// 005892ce  b8ff000000           mov eax, 0xff
// 005892d3  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 005892d7  6689443104           mov word ptr [ecx + esi + 4], ax
// 005892dc  8b4f04               mov ecx, dword ptr [edi + 4]
// 005892df  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 005892e4  83c132               add ecx, 0x32
// 005892e7  b81f85eb51           mov eax, 0x51eb851f
// 005892ec  f7e9                 imul ecx
// 005892ee  c1fa05               sar edx, 5
// 005892f1  8bc2                 mov eax, edx
// 005892f3  c1e81f               shr eax, 0x1f
// 005892f6  03c2                 add eax, edx
// 005892f8  85c0                 test eax, eax
// 005892fa  7f07                 jg 0x589303
// 005892fc  b801000000           mov eax, 1
// 00589301  eb0c                 jmp 0x58930f
// 00589303  3dff7f0000           cmp eax, 0x7fff
// 00589308  7e05                 jle 0x58930f
// 0058930a  b8ff7f0000           mov eax, 0x7fff
// 0058930f  807c242400           cmp byte ptr [esp + 0x24], 0
// 00589314  740c                 je 0x589322
// 00589316  3dff000000           cmp eax, 0xff
// 0058931b  7e05                 jle 0x589322
// 0058931d  b8ff000000           mov eax, 0xff
// 00589322  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 00589326  6689441606           mov word ptr [esi + edx + 6], ax
// 0058932b  83c608               add esi, 8
// 0058932e  83c710               add edi, 0x10
// 00589331  81fe80000000         cmp esi, 0x80
// 00589337  0f8cb4feffff         jl 0x5891f1
// 0058933d  8b449d48             mov eax, dword ptr [ebp + ebx*4 + 0x48]
// 00589341  5f                   pop edi
// 00589342  5e                   pop esi
// 00589343  5d                   pop ebp
// 00589344  c6808000000000       mov byte ptr [eax + 0x80], 0
// 0058934b  5b                   pop ebx
// 0058934c  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_add_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
