// roc 2007-03 00524840  unit: seg_00520000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524840
//
// 00524840  83ec14               sub esp, 0x14
// 00524843  8b442418             mov eax, dword ptr [esp + 0x18]
// 00524847  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0052484d  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00524850  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00524853  56                   push esi
// 00524854  8b742428             mov esi, dword ptr [esp + 0x28]
// 00524858  85f6                 test esi, esi
// 0052485a  8954240c             mov dword ptr [esp + 0xc], edx
// 0052485e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00524862  0f8e9b000000         jle 0x524903
// 00524868  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052486c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00524870  53                   push ebx
// 00524871  2bd0                 sub edx, eax
// 00524873  55                   push ebp
// 00524874  8944240c             mov dword ptr [esp + 0xc], eax
// 00524878  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052487c  89742410             mov dword ptr [esp + 0x10], esi
// 00524880  57                   push edi
// 00524881  85c9                 test ecx, ecx
// 00524883  8b3402               mov esi, dword ptr [edx + eax]
// 00524886  8b18                 mov ebx, dword ptr [eax]
// 00524888  894c2434             mov dword ptr [esp + 0x34], ecx
// 0052488c  7664                 jbe 0x5248f2
// 0052488e  8bff                 mov edi, edi
// 00524890  0fb606               movzx eax, byte ptr [esi]
// 00524893  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00524897  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052489b  83c601               add esi, 1
// 0052489e  0fb65601             movzx edx, byte ptr [esi + 1]
// 005248a2  83c601               add esi, 1
// 005248a5  c1e902               shr ecx, 2
// 005248a8  8bf9                 mov edi, ecx
// 005248aa  c1e705               shl edi, 5
// 005248ad  c1e803               shr eax, 3
// 005248b0  8b6c8500             mov ebp, dword ptr [ebp + eax*4]
// 005248b4  c1ea03               shr edx, 3
// 005248b7  03fa                 add edi, edx
// 005248b9  8d7c7d00             lea edi, [ebp + edi*2]
// 005248bd  83c601               add esi, 1
// 005248c0  66833f00             cmp word ptr [edi], 0
// 005248c4  750f                 jne 0x5248d5
// 005248c6  52                   push edx
// 005248c7  50                   push eax
// 005248c8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005248cc  50                   push eax
// 005248cd  e82efeffff           call 0x524700
// 005248d2  83c40c               add esp, 0xc
// 005248d5  8a0f                 mov cl, byte ptr [edi]
// 005248d7  80e901               sub cl, 1
// 005248da  880b                 mov byte ptr [ebx], cl
// 005248dc  83c301               add ebx, 1
// 005248df  836c243401           sub dword ptr [esp + 0x34], 1
// 005248e4  75aa                 jne 0x524890
// 005248e6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005248ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 005248ee  8b542420             mov edx, dword ptr [esp + 0x20]
// 005248f2  83c004               add eax, 4
// 005248f5  836c241401           sub dword ptr [esp + 0x14], 1
// 005248fa  89442410             mov dword ptr [esp + 0x10], eax
// 005248fe  7581                 jne 0x524881
// 00524900  5f                   pop edi
// 00524901  5d                   pop ebp
// 00524902  5b                   pop ebx
// 00524903  5e                   pop esi
// 00524904  83c414               add esp, 0x14
// 00524907  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jquant2.c
