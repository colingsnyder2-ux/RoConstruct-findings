// roc 2009-12 00627580  unit: seg_00620000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00627580
//
// 00627580  83ec18               sub esp, 0x18
// 00627583  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00627588  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062758c  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 00627592  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00627595  8b4008               mov eax, dword ptr [eax + 8]
// 00627598  894c2404             mov dword ptr [esp + 4], ecx
// 0062759c  0f8820010000         js 0x6276c2
// 006275a2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006275a6  53                   push ebx
// 006275a7  55                   push ebp
// 006275a8  56                   push esi
// 006275a9  8b742430             mov esi, dword ptr [esp + 0x30]
// 006275ad  03c9                 add ecx, ecx
// 006275af  57                   push edi
// 006275b0  03c9                 add ecx, ecx
// 006275b2  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006275b6  8b17                 mov edx, dword ptr [edi]
// 006275b8  8b5e08               mov ebx, dword ptr [esi + 8]
// 006275bb  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 006275be  83c704               add edi, 4
// 006275c1  897c2430             mov dword ptr [esp + 0x30], edi
// 006275c5  8b3e                 mov edi, dword ptr [esi]
// 006275c7  8b2c39               mov ebp, dword ptr [ecx + edi]
// 006275ca  8b7e04               mov edi, dword ptr [esi + 4]
// 006275cd  8b3c39               mov edi, dword ptr [ecx + edi]
// 006275d0  895c2418             mov dword ptr [esp + 0x18], ebx
// 006275d4  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006275d7  8b1c19               mov ebx, dword ptr [ecx + ebx]
// 006275da  895c2410             mov dword ptr [esp + 0x10], ebx
// 006275de  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006275e2  83c104               add ecx, 4
// 006275e5  8954242c             mov dword ptr [esp + 0x2c], edx
// 006275e9  894c2424             mov dword ptr [esp + 0x24], ecx
// 006275ed  85db                 test ebx, ebx
// 006275ef  0f86be000000         jbe 0x6276b3
// 006275f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006275f9  2bcd                 sub ecx, ebp
// 006275fb  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006275ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00627603  2bfd                 sub edi, ebp
// 00627605  2bcd                 sub ecx, ebp
// 00627607  897c2420             mov dword ptr [esp + 0x20], edi
// 0062760b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0062760f  895c2410             mov dword ptr [esp + 0x10], ebx
// 00627613  eb04                 jmp 0x627619
// 00627615  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00627619  0fb632               movzx esi, byte ptr [edx]
// 0062761c  0fb67a01             movzx edi, byte ptr [edx + 1]
// 00627620  0fb65a02             movzx ebx, byte ptr [edx + 2]
// 00627624  8a5203               mov dl, byte ptr [edx + 3]
// 00627627  b9ff000000           mov ecx, 0xff
// 0062762c  2bce                 sub ecx, esi
// 0062762e  beff000000           mov esi, 0xff
// 00627633  2bf7                 sub esi, edi
// 00627635  bfff000000           mov edi, 0xff
// 0062763a  2bfb                 sub edi, ebx
// 0062763c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00627640  88142b               mov byte ptr [ebx + ebp], dl
// 00627643  8b94b800080000       mov edx, dword ptr [eax + edi*4 + 0x800]
// 0062764a  0394b000040000       add edx, dword ptr [eax + esi*4 + 0x400]
// 00627651  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00627655  031488               add edx, dword ptr [eax + ecx*4]
// 00627658  8344242c04           add dword ptr [esp + 0x2c], 4
// 0062765d  c1fa10               sar edx, 0x10
// 00627660  885500               mov byte ptr [ebp], dl
// 00627663  8b94b800140000       mov edx, dword ptr [eax + edi*4 + 0x1400]
// 0062766a  0394b000100000       add edx, dword ptr [eax + esi*4 + 0x1000]
// 00627671  45                   inc ebp
// 00627672  039488000c0000       add edx, dword ptr [eax + ecx*4 + 0xc00]
// 00627679  c1fa10               sar edx, 0x10
// 0062767c  88542bff             mov byte ptr [ebx + ebp - 1], dl
// 00627680  8b94b8001c0000       mov edx, dword ptr [eax + edi*4 + 0x1c00]
// 00627687  0394b000180000       add edx, dword ptr [eax + esi*4 + 0x1800]
// 0062768e  03948800140000       add edx, dword ptr [eax + ecx*4 + 0x1400]
// 00627695  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00627699  c1fa10               sar edx, 0x10
// 0062769c  836c241001           sub dword ptr [esp + 0x10], 1
// 006276a1  885429ff             mov byte ptr [ecx + ebp - 1], dl
// 006276a5  0f856affffff         jne 0x627615
// 006276ab  8b742434             mov esi, dword ptr [esp + 0x34]
// 006276af  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006276b3  836c243c01           sub dword ptr [esp + 0x3c], 1
// 006276b8  0f89f4feffff         jns 0x6275b2
// 006276be  5f                   pop edi
// 006276bf  5e                   pop esi
// 006276c0  5d                   pop ebp
// 006276c1  5b                   pop ebx
// 006276c2  83c418               add esp, 0x18
// 006276c5  c3                   ret 
// library jpeg-6b/jccolor.c (function _cmyk_ycck_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
