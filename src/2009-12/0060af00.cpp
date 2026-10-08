// roc 2009-12 0060af00  unit: seg_00600000  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060af00
//
// 0060af00  53                   push ebx
// 0060af01  55                   push ebp
// 0060af02  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0060af06  837d1464             cmp dword ptr [ebp + 0x14], 0x64
// 0060af0a  56                   push esi
// 0060af0b  57                   push edi
// 0060af0c  741e                 je 0x60af2c
// 0060af0e  8b4500               mov eax, dword ptr [ebp]
// 0060af11  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0060af18  8b4d00               mov ecx, dword ptr [ebp]
// 0060af1b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0060af1e  895118               mov dword ptr [ecx + 0x18], edx
// 0060af21  8b4500               mov eax, dword ptr [ebp]
// 0060af24  8b08                 mov ecx, dword ptr [eax]
// 0060af26  55                   push ebp
// 0060af27  ffd1                 call ecx
// 0060af29  83c404               add esp, 4
// 0060af2c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0060af30  85db                 test ebx, ebx
// 0060af32  7c05                 jl 0x60af39
// 0060af34  83fb04               cmp ebx, 4
// 0060af37  7c1b                 jl 0x60af54
// 0060af39  8b5500               mov edx, dword ptr [ebp]
// 0060af3c  c742141f000000       mov dword ptr [edx + 0x14], 0x1f
// 0060af43  8b4500               mov eax, dword ptr [ebp]
// 0060af46  895818               mov dword ptr [eax + 0x18], ebx
// 0060af49  8b4d00               mov ecx, dword ptr [ebp]
// 0060af4c  8b11                 mov edx, dword ptr [ecx]
// 0060af4e  55                   push ebp
// 0060af4f  ffd2                 call edx
// 0060af51  83c404               add esp, 4
// 0060af54  837c9d4800           cmp dword ptr [ebp + ebx*4 + 0x48], 0
// 0060af59  750d                 jne 0x60af68
// 0060af5b  55                   push ebp
// 0060af5c  e8ff5effff           call 0x600e60
// 0060af61  83c404               add esp, 4
// 0060af64  89449d48             mov dword ptr [ebp + ebx*4 + 0x48], eax
// 0060af68  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0060af6c  33f6                 xor esi, esi
// 0060af6e  83c708               add edi, 8
// 0060af71  8b4ff8               mov ecx, dword ptr [edi - 8]
// 0060af74  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0060af79  83c132               add ecx, 0x32
// 0060af7c  b81f85eb51           mov eax, 0x51eb851f
// 0060af81  f7e9                 imul ecx
// 0060af83  c1fa05               sar edx, 5
// 0060af86  8bc2                 mov eax, edx
// 0060af88  c1e81f               shr eax, 0x1f
// 0060af8b  03c2                 add eax, edx
// 0060af8d  85c0                 test eax, eax
// 0060af8f  7f07                 jg 0x60af98
// 0060af91  b801000000           mov eax, 1
// 0060af96  eb0c                 jmp 0x60afa4
// 0060af98  3dff7f0000           cmp eax, 0x7fff
// 0060af9d  7e05                 jle 0x60afa4
// 0060af9f  b8ff7f0000           mov eax, 0x7fff
// 0060afa4  807c242400           cmp byte ptr [esp + 0x24], 0
// 0060afa9  740c                 je 0x60afb7
// 0060afab  3dff000000           cmp eax, 0xff
// 0060afb0  7e05                 jle 0x60afb7
// 0060afb2  b8ff000000           mov eax, 0xff
// 0060afb7  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 0060afbb  6689040e             mov word ptr [esi + ecx], ax
// 0060afbf  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0060afc2  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0060afc7  83c132               add ecx, 0x32
// 0060afca  b81f85eb51           mov eax, 0x51eb851f
// 0060afcf  f7e9                 imul ecx
// 0060afd1  c1fa05               sar edx, 5
// 0060afd4  8bc2                 mov eax, edx
// 0060afd6  c1e81f               shr eax, 0x1f
// 0060afd9  03c2                 add eax, edx
// 0060afdb  85c0                 test eax, eax
// 0060afdd  7f07                 jg 0x60afe6
// 0060afdf  b801000000           mov eax, 1
// 0060afe4  eb0c                 jmp 0x60aff2
// 0060afe6  3dff7f0000           cmp eax, 0x7fff
// 0060afeb  7e05                 jle 0x60aff2
// 0060afed  b8ff7f0000           mov eax, 0x7fff
// 0060aff2  807c242400           cmp byte ptr [esp + 0x24], 0
// 0060aff7  740c                 je 0x60b005
// 0060aff9  3dff000000           cmp eax, 0xff
// 0060affe  7e05                 jle 0x60b005
// 0060b000  b8ff000000           mov eax, 0xff
// 0060b005  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 0060b009  6689443202           mov word ptr [edx + esi + 2], ax
// 0060b00e  8b0f                 mov ecx, dword ptr [edi]
// 0060b010  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0060b015  83c132               add ecx, 0x32
// 0060b018  b81f85eb51           mov eax, 0x51eb851f
// 0060b01d  f7e9                 imul ecx
// 0060b01f  c1fa05               sar edx, 5
// 0060b022  8bc2                 mov eax, edx
// 0060b024  c1e81f               shr eax, 0x1f
// 0060b027  03c2                 add eax, edx
// 0060b029  85c0                 test eax, eax
// 0060b02b  7f07                 jg 0x60b034
// 0060b02d  b801000000           mov eax, 1
// 0060b032  eb0c                 jmp 0x60b040
// 0060b034  3dff7f0000           cmp eax, 0x7fff
// 0060b039  7e05                 jle 0x60b040
// 0060b03b  b8ff7f0000           mov eax, 0x7fff
// 0060b040  807c242400           cmp byte ptr [esp + 0x24], 0
// 0060b045  740c                 je 0x60b053
// 0060b047  3dff000000           cmp eax, 0xff
// 0060b04c  7e05                 jle 0x60b053
// 0060b04e  b8ff000000           mov eax, 0xff
// 0060b053  8b4c9d48             mov ecx, dword ptr [ebp + ebx*4 + 0x48]
// 0060b057  6689443104           mov word ptr [ecx + esi + 4], ax
// 0060b05c  8b4f04               mov ecx, dword ptr [edi + 4]
// 0060b05f  0faf4c2420           imul ecx, dword ptr [esp + 0x20]
// 0060b064  83c132               add ecx, 0x32
// 0060b067  b81f85eb51           mov eax, 0x51eb851f
// 0060b06c  f7e9                 imul ecx
// 0060b06e  c1fa05               sar edx, 5
// 0060b071  8bc2                 mov eax, edx
// 0060b073  c1e81f               shr eax, 0x1f
// 0060b076  03c2                 add eax, edx
// 0060b078  85c0                 test eax, eax
// 0060b07a  7f07                 jg 0x60b083
// 0060b07c  b801000000           mov eax, 1
// 0060b081  eb0c                 jmp 0x60b08f
// 0060b083  3dff7f0000           cmp eax, 0x7fff
// 0060b088  7e05                 jle 0x60b08f
// 0060b08a  b8ff7f0000           mov eax, 0x7fff
// 0060b08f  807c242400           cmp byte ptr [esp + 0x24], 0
// 0060b094  740c                 je 0x60b0a2
// 0060b096  3dff000000           cmp eax, 0xff
// 0060b09b  7e05                 jle 0x60b0a2
// 0060b09d  b8ff000000           mov eax, 0xff
// 0060b0a2  8b549d48             mov edx, dword ptr [ebp + ebx*4 + 0x48]
// 0060b0a6  6689441606           mov word ptr [esi + edx + 6], ax
// 0060b0ab  83c608               add esi, 8
// 0060b0ae  83c710               add edi, 0x10
// 0060b0b1  81fe80000000         cmp esi, 0x80
// 0060b0b7  0f8cb4feffff         jl 0x60af71
// 0060b0bd  8b449d48             mov eax, dword ptr [ebp + ebx*4 + 0x48]
// 0060b0c1  5f                   pop edi
// 0060b0c2  5e                   pop esi
// 0060b0c3  5d                   pop ebp
// 0060b0c4  c6808000000000       mov byte ptr [eax + 0x80], 0
// 0060b0cb  5b                   pop ebx
// 0060b0cc  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_add_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
