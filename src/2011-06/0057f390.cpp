// roc 2011-06 0057f390  unit: seg_00570000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f390
//
// 0057f390  83ec18               sub esp, 0x18
// 0057f393  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0057f398  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057f39c  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0057f3a2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0057f3a5  8b4008               mov eax, dword ptr [eax + 8]
// 0057f3a8  894c2404             mov dword ptr [esp + 4], ecx
// 0057f3ac  0f8820010000         js 0x57f4d2
// 0057f3b2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057f3b6  53                   push ebx
// 0057f3b7  55                   push ebp
// 0057f3b8  56                   push esi
// 0057f3b9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057f3bd  03c9                 add ecx, ecx
// 0057f3bf  57                   push edi
// 0057f3c0  03c9                 add ecx, ecx
// 0057f3c2  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057f3c6  8b17                 mov edx, dword ptr [edi]
// 0057f3c8  8b5e08               mov ebx, dword ptr [esi + 8]
// 0057f3cb  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0057f3ce  83c704               add edi, 4
// 0057f3d1  897c2430             mov dword ptr [esp + 0x30], edi
// 0057f3d5  8b3e                 mov edi, dword ptr [esi]
// 0057f3d7  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0057f3da  8b7e04               mov edi, dword ptr [esi + 4]
// 0057f3dd  8b3c39               mov edi, dword ptr [ecx + edi]
// 0057f3e0  895c2418             mov dword ptr [esp + 0x18], ebx
// 0057f3e4  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0057f3e7  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0057f3ea  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057f3ee  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057f3f2  83c104               add ecx, 4
// 0057f3f5  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057f3f9  894c2424             mov dword ptr [esp + 0x24], ecx
// 0057f3fd  85db                 test ebx, ebx
// 0057f3ff  0f86be000000         jbe 0x57f4c3
// 0057f405  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057f409  2bcd                 sub ecx, ebp
// 0057f40b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057f40f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057f413  2bfd                 sub edi, ebp
// 0057f415  2bcd                 sub ecx, ebp
// 0057f417  897c2420             mov dword ptr [esp + 0x20], edi
// 0057f41b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057f41f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057f423  eb04                 jmp 0x57f429
// 0057f425  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057f429  0fb632               movzx esi, byte ptr [edx]
// 0057f42c  0fb67a01             movzx edi, byte ptr [edx + 1]
// 0057f430  0fb65a02             movzx ebx, byte ptr [edx + 2]
// 0057f434  8a5203               mov dl, byte ptr [edx + 3]
// 0057f437  b9ff000000           mov ecx, 0xff
// 0057f43c  2bce                 sub ecx, esi
// 0057f43e  beff000000           mov esi, 0xff
// 0057f443  2bf7                 sub esi, edi
// 0057f445  bfff000000           mov edi, 0xff
// 0057f44a  2bfb                 sub edi, ebx
// 0057f44c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057f450  88142b               mov byte ptr [ebx + ebp], dl
// 0057f453  8b94b800080000       mov edx, dword ptr [eax + edi*4 + 0x800]
// 0057f45a  0394b000040000       add edx, dword ptr [eax + esi*4 + 0x400]
// 0057f461  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057f465  031488               add edx, dword ptr [eax + ecx*4]
// 0057f468  8344242c04           add dword ptr [esp + 0x2c], 4
// 0057f46d  c1fa10               sar edx, 0x10
// 0057f470  885500               mov byte ptr [ebp], dl
// 0057f473  8b94b800140000       mov edx, dword ptr [eax + edi*4 + 0x1400]
// 0057f47a  0394b000100000       add edx, dword ptr [eax + esi*4 + 0x1000]
// 0057f481  45                   inc ebp
// 0057f482  039488000c0000       add edx, dword ptr [eax + ecx*4 + 0xc00]
// 0057f489  c1fa10               sar edx, 0x10
// 0057f48c  88542bff             mov byte ptr [ebx + ebp - 1], dl
// 0057f490  8b94b8001c0000       mov edx, dword ptr [eax + edi*4 + 0x1c00]
// 0057f497  0394b000180000       add edx, dword ptr [eax + esi*4 + 0x1800]
// 0057f49e  03948800140000       add edx, dword ptr [eax + ecx*4 + 0x1400]
// 0057f4a5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057f4a9  c1fa10               sar edx, 0x10
// 0057f4ac  836c241001           sub dword ptr [esp + 0x10], 1
// 0057f4b1  885429ff             mov byte ptr [ecx + ebp - 1], dl
// 0057f4b5  0f856affffff         jne 0x57f425
// 0057f4bb  8b742434             mov esi, dword ptr [esp + 0x34]
// 0057f4bf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057f4c3  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0057f4c8  0f89f4feffff         jns 0x57f3c2
// 0057f4ce  5f                   pop edi
// 0057f4cf  5e                   pop esi
// 0057f4d0  5d                   pop ebp
// 0057f4d1  5b                   pop ebx
// 0057f4d2  83c418               add esp, 0x18
// 0057f4d5  c3                   ret 
// library jpeg-6b/jccolor.c (function _cmyk_ycck_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
