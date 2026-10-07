// roc 2012-06 0066aaa0  unit: seg_00660000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066aaa0
//
// 0066aaa0  83ec18               sub esp, 0x18
// 0066aaa3  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0066aaa8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066aaac  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0066aab2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0066aab5  8b4008               mov eax, dword ptr [eax + 8]
// 0066aab8  894c2404             mov dword ptr [esp + 4], ecx
// 0066aabc  0f8820010000         js 0x66abe2
// 0066aac2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0066aac6  53                   push ebx
// 0066aac7  55                   push ebp
// 0066aac8  56                   push esi
// 0066aac9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0066aacd  03c9                 add ecx, ecx
// 0066aacf  57                   push edi
// 0066aad0  03c9                 add ecx, ecx
// 0066aad2  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0066aad6  8b17                 mov edx, dword ptr [edi]
// 0066aad8  8b5e08               mov ebx, dword ptr [esi + 8]
// 0066aadb  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0066aade  83c704               add edi, 4
// 0066aae1  897c2430             mov dword ptr [esp + 0x30], edi
// 0066aae5  8b3e                 mov edi, dword ptr [esi]
// 0066aae7  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0066aaea  8b7e04               mov edi, dword ptr [esi + 4]
// 0066aaed  8b3c39               mov edi, dword ptr [ecx + edi]
// 0066aaf0  895c2418             mov dword ptr [esp + 0x18], ebx
// 0066aaf4  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0066aaf7  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0066aafa  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066aafe  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066ab02  83c104               add ecx, 4
// 0066ab05  8954242c             mov dword ptr [esp + 0x2c], edx
// 0066ab09  894c2424             mov dword ptr [esp + 0x24], ecx
// 0066ab0d  85db                 test ebx, ebx
// 0066ab0f  0f86be000000         jbe 0x66abd3
// 0066ab15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066ab19  2bcd                 sub ecx, ebp
// 0066ab1b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066ab1f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066ab23  2bfd                 sub edi, ebp
// 0066ab25  2bcd                 sub ecx, ebp
// 0066ab27  897c2420             mov dword ptr [esp + 0x20], edi
// 0066ab2b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066ab2f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066ab33  eb04                 jmp 0x66ab39
// 0066ab35  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0066ab39  0fb632               movzx esi, byte ptr [edx]
// 0066ab3c  0fb67a01             movzx edi, byte ptr [edx + 1]
// 0066ab40  0fb65a02             movzx ebx, byte ptr [edx + 2]
// 0066ab44  8a5203               mov dl, byte ptr [edx + 3]
// 0066ab47  b9ff000000           mov ecx, 0xff
// 0066ab4c  2bce                 sub ecx, esi
// 0066ab4e  beff000000           mov esi, 0xff
// 0066ab53  2bf7                 sub esi, edi
// 0066ab55  bfff000000           mov edi, 0xff
// 0066ab5a  2bfb                 sub edi, ebx
// 0066ab5c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066ab60  88142b               mov byte ptr [ebx + ebp], dl
// 0066ab63  8b94b800080000       mov edx, dword ptr [eax + edi*4 + 0x800]
// 0066ab6a  0394b000040000       add edx, dword ptr [eax + esi*4 + 0x400]
// 0066ab71  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066ab75  031488               add edx, dword ptr [eax + ecx*4]
// 0066ab78  8344242c04           add dword ptr [esp + 0x2c], 4
// 0066ab7d  c1fa10               sar edx, 0x10
// 0066ab80  885500               mov byte ptr [ebp], dl
// 0066ab83  8b94b800140000       mov edx, dword ptr [eax + edi*4 + 0x1400]
// 0066ab8a  0394b000100000       add edx, dword ptr [eax + esi*4 + 0x1000]
// 0066ab91  45                   inc ebp
// 0066ab92  039488000c0000       add edx, dword ptr [eax + ecx*4 + 0xc00]
// 0066ab99  c1fa10               sar edx, 0x10
// 0066ab9c  88542bff             mov byte ptr [ebx + ebp - 1], dl
// 0066aba0  8b94b8001c0000       mov edx, dword ptr [eax + edi*4 + 0x1c00]
// 0066aba7  0394b000180000       add edx, dword ptr [eax + esi*4 + 0x1800]
// 0066abae  03948800140000       add edx, dword ptr [eax + ecx*4 + 0x1400]
// 0066abb5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066abb9  c1fa10               sar edx, 0x10
// 0066abbc  836c241001           sub dword ptr [esp + 0x10], 1
// 0066abc1  885429ff             mov byte ptr [ecx + ebp - 1], dl
// 0066abc5  0f856affffff         jne 0x66ab35
// 0066abcb  8b742434             mov esi, dword ptr [esp + 0x34]
// 0066abcf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0066abd3  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0066abd8  0f89f4feffff         jns 0x66aad2
// 0066abde  5f                   pop edi
// 0066abdf  5e                   pop esi
// 0066abe0  5d                   pop ebp
// 0066abe1  5b                   pop ebx
// 0066abe2  83c418               add esp, 0x18
// 0066abe5  c3                   ret 
// library jpeg-6b/jccolor.c (function _cmyk_ycck_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
