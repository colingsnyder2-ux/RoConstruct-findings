// from server: 100% by auto
// roc 2008-06 0053b2f0  unit: seg_00530000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b2f0
//
// 0053b2f0  83ec18               sub esp, 0x18
// 0053b2f3  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0053b2f8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053b2fc  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0053b302  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0053b305  8b4008               mov eax, dword ptr [eax + 8]
// 0053b308  894c2404             mov dword ptr [esp + 4], ecx
// 0053b30c  0f8820010000         js 0x53b432
// 0053b312  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053b316  53                   push ebx
// 0053b317  55                   push ebp
// 0053b318  56                   push esi
// 0053b319  8b742430             mov esi, dword ptr [esp + 0x30]
// 0053b31d  03c9                 add ecx, ecx
// 0053b31f  57                   push edi
// 0053b320  03c9                 add ecx, ecx
// 0053b322  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0053b326  8b17                 mov edx, dword ptr [edi]
// 0053b328  8b5e08               mov ebx, dword ptr [esi + 8]
// 0053b32b  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0053b32e  83c704               add edi, 4
// 0053b331  897c2430             mov dword ptr [esp + 0x30], edi
// 0053b335  8b3e                 mov edi, dword ptr [esi]
// 0053b337  8b2c39               mov ebp, dword ptr [ecx + edi]
// 0053b33a  8b7e04               mov edi, dword ptr [esi + 4]
// 0053b33d  8b3c39               mov edi, dword ptr [ecx + edi]
// 0053b340  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053b344  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0053b347  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 0053b34a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053b34e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053b352  83c104               add ecx, 4
// 0053b355  8954242c             mov dword ptr [esp + 0x2c], edx
// 0053b359  894c2424             mov dword ptr [esp + 0x24], ecx
// 0053b35d  85db                 test ebx, ebx
// 0053b35f  0f86be000000         jbe 0x53b423
// 0053b365  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053b369  2bcd                 sub ecx, ebp
// 0053b36b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053b36f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053b373  2bfd                 sub edi, ebp
// 0053b375  2bcd                 sub ecx, ebp
// 0053b377  897c2420             mov dword ptr [esp + 0x20], edi
// 0053b37b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053b37f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053b383  eb04                 jmp 0x53b389
// 0053b385  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053b389  0fb632               movzx esi, byte ptr [edx]
// 0053b38c  0fb67a01             movzx edi, byte ptr [edx + 1]
// 0053b390  0fb65a02             movzx ebx, byte ptr [edx + 2]
// 0053b394  8a5203               mov dl, byte ptr [edx + 3]
// 0053b397  b9ff000000           mov ecx, 0xff
// 0053b39c  2bce                 sub ecx, esi
// 0053b39e  beff000000           mov esi, 0xff
// 0053b3a3  2bf7                 sub esi, edi
// 0053b3a5  bfff000000           mov edi, 0xff
// 0053b3aa  2bfb                 sub edi, ebx
// 0053b3ac  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053b3b0  88142b               mov byte ptr [ebx + ebp], dl
// 0053b3b3  8b94b800080000       mov edx, dword ptr [eax + edi*4 + 0x800]
// 0053b3ba  0394b000040000       add edx, dword ptr [eax + esi*4 + 0x400]
// 0053b3c1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0053b3c5  031488               add edx, dword ptr [eax + ecx*4]
// 0053b3c8  8344242c04           add dword ptr [esp + 0x2c], 4
// 0053b3cd  c1fa10               sar edx, 0x10
// 0053b3d0  885500               mov byte ptr [ebp], dl
// 0053b3d3  8b94b800140000       mov edx, dword ptr [eax + edi*4 + 0x1400]
// 0053b3da  0394b000100000       add edx, dword ptr [eax + esi*4 + 0x1000]
// 0053b3e1  45                   inc ebp
// 0053b3e2  039488000c0000       add edx, dword ptr [eax + ecx*4 + 0xc00]
// 0053b3e9  c1fa10               sar edx, 0x10
// 0053b3ec  88542bff             mov byte ptr [ebx + ebp - 1], dl
// 0053b3f0  8b94b8001c0000       mov edx, dword ptr [eax + edi*4 + 0x1c00]
// 0053b3f7  0394b000180000       add edx, dword ptr [eax + esi*4 + 0x1800]
// 0053b3fe  03948800140000       add edx, dword ptr [eax + ecx*4 + 0x1400]
// 0053b405  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053b409  c1fa10               sar edx, 0x10
// 0053b40c  836c241001           sub dword ptr [esp + 0x10], 1
// 0053b411  885429ff             mov byte ptr [ecx + ebp - 1], dl
// 0053b415  0f856affffff         jne 0x53b385
// 0053b41b  8b742434             mov esi, dword ptr [esp + 0x34]
// 0053b41f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053b423  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0053b428  0f89f4feffff         jns 0x53b322
// 0053b42e  5f                   pop edi
// 0053b42f  5e                   pop esi
// 0053b430  5d                   pop ebp
// 0053b431  5b                   pop ebx
// 0053b432  83c418               add esp, 0x18
// 0053b435  c3                   ret 
// library jpeg-6b/jccolor.c (function _cmyk_ycck_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
