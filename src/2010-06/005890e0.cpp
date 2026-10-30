// from server: 100% by auto
// roc 2010-06 005890e0  unit: seg_00580000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005890e0
//
// 005890e0  83ec18               sub esp, 0x18
// 005890e3  836c242c01           sub dword ptr [esp + 0x2c], 1
// 005890e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005890ec  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005890f2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005890f5  8b4008               mov eax, dword ptr [eax + 8]
// 005890f8  894c2404             mov dword ptr [esp + 4], ecx
// 005890fc  0f8820010000         js 0x589222
// 00589102  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00589106  53                   push ebx
// 00589107  55                   push ebp
// 00589108  56                   push esi
// 00589109  8b742430             mov esi, dword ptr [esp + 0x30]
// 0058910d  03c9                 add ecx, ecx
// 0058910f  57                   push edi
// 00589110  03c9                 add ecx, ecx
// 00589112  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00589116  8b17                 mov edx, dword ptr [edi]
// 00589118  8b5e08               mov ebx, dword ptr [esi + 8]
// 0058911b  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0058911e  83c704               add edi, 4
// 00589121  897c2430             mov dword ptr [esp + 0x30], edi
// 00589125  8b3e                 mov edi, dword ptr [esi]
// 00589127  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0058912a  8b7e04               mov edi, dword ptr [esi + 4]
// 0058912d  8b3c39               mov edi, dword ptr [ecx + edi]
// 00589130  895c2418             mov dword ptr [esp + 0x18], ebx
// 00589134  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00589137  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0058913a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058913e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00589142  83c104               add ecx, 4
// 00589145  8954242c             mov dword ptr [esp + 0x2c], edx
// 00589149  894c2424             mov dword ptr [esp + 0x24], ecx
// 0058914d  85db                 test ebx, ebx
// 0058914f  0f86be000000         jbe 0x589213
// 00589155  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00589159  2bcd                 sub ecx, ebp
// 0058915b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058915f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00589163  2bfd                 sub edi, ebp
// 00589165  2bcd                 sub ecx, ebp
// 00589167  897c2420             mov dword ptr [esp + 0x20], edi
// 0058916b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058916f  895c2410             mov dword ptr [esp + 0x10], ebx
// 00589173  eb04                 jmp 0x589179
// 00589175  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00589179  0fb632               movzx esi, byte ptr [edx]
// 0058917c  0fb67a01             movzx edi, byte ptr [edx + 1]
// 00589180  0fb65a02             movzx ebx, byte ptr [edx + 2]
// 00589184  8a5203               mov dl, byte ptr [edx + 3]
// 00589187  b9ff000000           mov ecx, 0xff
// 0058918c  2bce                 sub ecx, esi
// 0058918e  beff000000           mov esi, 0xff
// 00589193  2bf7                 sub esi, edi
// 00589195  bfff000000           mov edi, 0xff
// 0058919a  2bfb                 sub edi, ebx
// 0058919c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005891a0  88142b               mov byte ptr [ebx + ebp], dl
// 005891a3  8b94b800080000       mov edx, dword ptr [eax + edi*4 + 0x800]
// 005891aa  0394b000040000       add edx, dword ptr [eax + esi*4 + 0x400]
// 005891b1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005891b5  031488               add edx, dword ptr [eax + ecx*4]
// 005891b8  8344242c04           add dword ptr [esp + 0x2c], 4
// 005891bd  c1fa10               sar edx, 0x10
// 005891c0  885500               mov byte ptr [ebp], dl
// 005891c3  8b94b800140000       mov edx, dword ptr [eax + edi*4 + 0x1400]
// 005891ca  0394b000100000       add edx, dword ptr [eax + esi*4 + 0x1000]
// 005891d1  45                   inc ebp
// 005891d2  039488000c0000       add edx, dword ptr [eax + ecx*4 + 0xc00]
// 005891d9  c1fa10               sar edx, 0x10
// 005891dc  88542bff             mov byte ptr [ebx + ebp - 1], dl
// 005891e0  8b94b8001c0000       mov edx, dword ptr [eax + edi*4 + 0x1c00]
// 005891e7  0394b000180000       add edx, dword ptr [eax + esi*4 + 0x1800]
// 005891ee  03948800140000       add edx, dword ptr [eax + ecx*4 + 0x1400]
// 005891f5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005891f9  c1fa10               sar edx, 0x10
// 005891fc  836c241001           sub dword ptr [esp + 0x10], 1
// 00589201  885429ff             mov byte ptr [ecx + ebp - 1], dl
// 00589205  0f856affffff         jne 0x589175
// 0058920b  8b742434             mov esi, dword ptr [esp + 0x34]
// 0058920f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00589213  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00589218  0f89f4feffff         jns 0x589112
// 0058921e  5f                   pop edi
// 0058921f  5e                   pop esi
// 00589220  5d                   pop ebp
// 00589221  5b                   pop ebx
// 00589222  83c418               add esp, 0x18
// 00589225  c3                   ret 
// library jpeg-6b/jccolor.c (function _cmyk_ycck_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
