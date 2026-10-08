// roc 2007-03 0052a090  unit: seg_00520000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052a090
//
// 0052a090  83ec18               sub esp, 0x18
// 0052a093  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0052a098  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052a09c  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0052a0a2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0052a0a5  8b4008               mov eax, dword ptr [eax + 8]
// 0052a0a8  894c2404             mov dword ptr [esp + 4], ecx
// 0052a0ac  0f8822010000         js 0x52a1d4
// 0052a0b2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052a0b6  53                   push ebx
// 0052a0b7  55                   push ebp
// 0052a0b8  56                   push esi
// 0052a0b9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052a0bd  03c9                 add ecx, ecx
// 0052a0bf  57                   push edi
// 0052a0c0  03c9                 add ecx, ecx
// 0052a0c2  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0052a0c6  8b17                 mov edx, dword ptr [edi]
// 0052a0c8  8b5e08               mov ebx, dword ptr [esi + 8]
// 0052a0cb  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0052a0ce  83c704               add edi, 4
// 0052a0d1  897c2430             mov dword ptr [esp + 0x30], edi
// 0052a0d5  8b3e                 mov edi, dword ptr [esi]
// 0052a0d7  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0052a0da  8b7e04               mov edi, dword ptr [esi + 4]
// 0052a0dd  8b3c39               mov edi, dword ptr [ecx + edi]
// 0052a0e0  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052a0e4  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0052a0e7  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0052a0ea  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052a0ee  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052a0f2  83c104               add ecx, 4
// 0052a0f5  85db                 test ebx, ebx
// 0052a0f7  8954242c             mov dword ptr [esp + 0x2c], edx
// 0052a0fb  894c2424             mov dword ptr [esp + 0x24], ecx
// 0052a0ff  0f86c0000000         jbe 0x52a1c5
// 0052a105  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052a109  2bcd                 sub ecx, ebp
// 0052a10b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052a10f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052a113  2bfd                 sub edi, ebp
// 0052a115  2bcd                 sub ecx, ebp
// 0052a117  897c2420             mov dword ptr [esp + 0x20], edi
// 0052a11b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052a11f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052a123  eb04                 jmp 0x52a129
// 0052a125  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0052a129  0fb632               movzx esi, byte ptr [edx]
// 0052a12c  0fb67a01             movzx edi, byte ptr [edx + 1]
// 0052a130  0fb65a02             movzx ebx, byte ptr [edx + 2]
// 0052a134  8a5203               mov dl, byte ptr [edx + 3]
// 0052a137  b9ff000000           mov ecx, 0xff
// 0052a13c  2bce                 sub ecx, esi
// 0052a13e  beff000000           mov esi, 0xff
// 0052a143  2bf7                 sub esi, edi
// 0052a145  bfff000000           mov edi, 0xff
// 0052a14a  2bfb                 sub edi, ebx
// 0052a14c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052a150  88142b               mov byte ptr [ebx + ebp], dl
// 0052a153  8b94b800080000       mov edx, dword ptr [eax + edi*4 + 0x800]
// 0052a15a  0394b000040000       add edx, dword ptr [eax + esi*4 + 0x400]
// 0052a161  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052a165  031488               add edx, dword ptr [eax + ecx*4]
// 0052a168  8344242c04           add dword ptr [esp + 0x2c], 4
// 0052a16d  c1fa10               sar edx, 0x10
// 0052a170  885500               mov byte ptr [ebp], dl
// 0052a173  8b94b800140000       mov edx, dword ptr [eax + edi*4 + 0x1400]
// 0052a17a  0394b000100000       add edx, dword ptr [eax + esi*4 + 0x1000]
// 0052a181  83c501               add ebp, 1
// 0052a184  039488000c0000       add edx, dword ptr [eax + ecx*4 + 0xc00]
// 0052a18b  c1fa10               sar edx, 0x10
// 0052a18e  88542bff             mov byte ptr [ebx + ebp - 1], dl
// 0052a192  8b94b8001c0000       mov edx, dword ptr [eax + edi*4 + 0x1c00]
// 0052a199  0394b000180000       add edx, dword ptr [eax + esi*4 + 0x1800]
// 0052a1a0  03948800140000       add edx, dword ptr [eax + ecx*4 + 0x1400]
// 0052a1a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052a1ab  c1fa10               sar edx, 0x10
// 0052a1ae  836c241001           sub dword ptr [esp + 0x10], 1
// 0052a1b3  885429ff             mov byte ptr [ecx + ebp - 1], dl
// 0052a1b7  0f8568ffffff         jne 0x52a125
// 0052a1bd  8b742434             mov esi, dword ptr [esp + 0x34]
// 0052a1c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052a1c5  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0052a1ca  0f89f2feffff         jns 0x52a0c2
// 0052a1d0  5f                   pop edi
// 0052a1d1  5e                   pop esi
// 0052a1d2  5d                   pop ebp
// 0052a1d3  5b                   pop ebx
// 0052a1d4  83c418               add esp, 0x18
// 0052a1d7  c3                   ret 
// library jpeg-6b/jccolor.c (function _cmyk_ycck_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
