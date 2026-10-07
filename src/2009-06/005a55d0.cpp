// roc 2009-06 005a55d0  unit: seg_005a0000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a55d0
//
// 005a55d0  83ec18               sub esp, 0x18
// 005a55d3  836c242c01           sub dword ptr [esp + 0x2c], 1
// 005a55d8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a55dc  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005a55e2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005a55e5  8b4008               mov eax, dword ptr [eax + 8]
// 005a55e8  894c2404             mov dword ptr [esp + 4], ecx
// 005a55ec  0f8820010000         js 0x5a5712
// 005a55f2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a55f6  53                   push ebx
// 005a55f7  55                   push ebp
// 005a55f8  56                   push esi
// 005a55f9  8b742430             mov esi, dword ptr [esp + 0x30]
// 005a55fd  03c9                 add ecx, ecx
// 005a55ff  57                   push edi
// 005a5600  03c9                 add ecx, ecx
// 005a5602  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005a5606  8b17                 mov edx, dword ptr [edi]
// 005a5608  8b5e08               mov ebx, dword ptr [esi + 8]
// 005a560b  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 005a560e  83c704               add edi, 4
// 005a5611  897c2430             mov dword ptr [esp + 0x30], edi
// 005a5615  8b3e                 mov edi, dword ptr [esi]
// 005a5617  8b2c39               mov ebp, dword ptr [ecx + edi]
// 005a561a  8b7e04               mov edi, dword ptr [esi + 4]
// 005a561d  8b3c39               mov edi, dword ptr [ecx + edi]
// 005a5620  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a5624  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 005a5627  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 005a562a  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a562e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a5632  83c104               add ecx, 4
// 005a5635  8954242c             mov dword ptr [esp + 0x2c], edx
// 005a5639  894c2424             mov dword ptr [esp + 0x24], ecx
// 005a563d  85db                 test ebx, ebx
// 005a563f  0f86be000000         jbe 0x5a5703
// 005a5645  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a5649  2bcd                 sub ecx, ebp
// 005a564b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a564f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a5653  2bfd                 sub edi, ebp
// 005a5655  2bcd                 sub ecx, ebp
// 005a5657  897c2420             mov dword ptr [esp + 0x20], edi
// 005a565b  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a565f  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a5663  eb04                 jmp 0x5a5669
// 005a5665  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a5669  0fb632               movzx esi, byte ptr [edx]
// 005a566c  0fb67a01             movzx edi, byte ptr [edx + 1]
// 005a5670  0fb65a02             movzx ebx, byte ptr [edx + 2]
// 005a5674  8a5203               mov dl, byte ptr [edx + 3]
// 005a5677  b9ff000000           mov ecx, 0xff
// 005a567c  2bce                 sub ecx, esi
// 005a567e  beff000000           mov esi, 0xff
// 005a5683  2bf7                 sub esi, edi
// 005a5685  bfff000000           mov edi, 0xff
// 005a568a  2bfb                 sub edi, ebx
// 005a568c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a5690  88142b               mov byte ptr [ebx + ebp], dl
// 005a5693  8b94b800080000       mov edx, dword ptr [eax + edi*4 + 0x800]
// 005a569a  0394b000040000       add edx, dword ptr [eax + esi*4 + 0x400]
// 005a56a1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005a56a5  031488               add edx, dword ptr [eax + ecx*4]
// 005a56a8  8344242c04           add dword ptr [esp + 0x2c], 4
// 005a56ad  c1fa10               sar edx, 0x10
// 005a56b0  885500               mov byte ptr [ebp], dl
// 005a56b3  8b94b800140000       mov edx, dword ptr [eax + edi*4 + 0x1400]
// 005a56ba  0394b000100000       add edx, dword ptr [eax + esi*4 + 0x1000]
// 005a56c1  45                   inc ebp
// 005a56c2  039488000c0000       add edx, dword ptr [eax + ecx*4 + 0xc00]
// 005a56c9  c1fa10               sar edx, 0x10
// 005a56cc  88542bff             mov byte ptr [ebx + ebp - 1], dl
// 005a56d0  8b94b8001c0000       mov edx, dword ptr [eax + edi*4 + 0x1c00]
// 005a56d7  0394b000180000       add edx, dword ptr [eax + esi*4 + 0x1800]
// 005a56de  03948800140000       add edx, dword ptr [eax + ecx*4 + 0x1400]
// 005a56e5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a56e9  c1fa10               sar edx, 0x10
// 005a56ec  836c241001           sub dword ptr [esp + 0x10], 1
// 005a56f1  885429ff             mov byte ptr [ecx + ebp - 1], dl
// 005a56f5  0f856affffff         jne 0x5a5665
// 005a56fb  8b742434             mov esi, dword ptr [esp + 0x34]
// 005a56ff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a5703  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005a5708  0f89f4feffff         jns 0x5a5602
// 005a570e  5f                   pop edi
// 005a570f  5e                   pop esi
// 005a5710  5d                   pop ebp
// 005a5711  5b                   pop ebx
// 005a5712  83c418               add esp, 0x18
// 005a5715  c3                   ret 
// library jpeg-6b/jccolor.c (function _cmyk_ycck_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
