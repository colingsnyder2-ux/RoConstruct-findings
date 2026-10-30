// roc 2012-06 00a2f110  unit: CXTPReportInplaceList  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2f110
//
// 00a2f110  56                   push esi
// 00a2f111  57                   push edi
// 00a2f112  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a2f116  8d47df               lea eax, [edi - 0x21]
// 00a2f119  8bf1                 mov esi, ecx
// 00a2f11b  83f807               cmp eax, 7
// 00a2f11e  7717                 ja 0xa2f137
// 00a2f120  0fb680acf1a200       movzx eax, byte ptr [eax + 0xa2f1ac]
// 00a2f127  ff2485a4f1a200       jmp dword ptr [eax*4 + 0xa2f1a4]
// 00a2f12e  8d4e78               lea ecx, [esi + 0x78]
// 00a2f131  ff150448b200         call dword ptr [0xb24804]
// 00a2f137  83ff1b               cmp edi, 0x1b
// 00a2f13a  750c                 jne 0xa2f148
// 00a2f13c  8bce                 mov ecx, esi
// 00a2f13e  e89dffffff           call 0xa2f0e0
// 00a2f143  5f                   pop edi
// 00a2f144  5e                   pop esi
// 00a2f145  c20c00               ret 0xc
// 00a2f148  83ff0d               cmp edi, 0xd
// 00a2f14b  744a                 je 0xa2f197
// 00a2f14d  83ff73               cmp edi, 0x73
// 00a2f150  7445                 je 0xa2f197
// 00a2f152  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f155  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00a2f15b  53                   push ebx
// 00a2f15c  6a00                 push 0
// 00a2f15e  6a00                 push 0
// 00a2f160  6888010000           push 0x188
// 00a2f165  51                   push ecx
// 00a2f166  ffd7                 call edi
// 00a2f168  8bce                 mov ecx, esi
// 00a2f16a  8bd8                 mov ebx, eax
// 00a2f16c  e86d35f5ff           call 0x9826de
// 00a2f171  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2f174  6a00                 push 0
// 00a2f176  6a00                 push 0
// 00a2f178  6888010000           push 0x188
// 00a2f17d  52                   push edx
// 00a2f17e  ffd7                 call edi
// 00a2f180  3bd8                 cmp ebx, eax
// 00a2f182  5b                   pop ebx
// 00a2f183  7419                 je 0xa2f19e
// 00a2f185  8b16                 mov edx, dword ptr [esi]
// 00a2f187  50                   push eax
// 00a2f188  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00a2f18e  8bce                 mov ecx, esi
// 00a2f190  ffd0                 call eax
// 00a2f192  5f                   pop edi
// 00a2f193  5e                   pop esi
// 00a2f194  c20c00               ret 0xc
// 00a2f197  8bce                 mov ecx, esi
// 00a2f199  e8f2f9ffff           call 0xa2eb90
// 00a2f19e  5f                   pop edi
// 00a2f19f  5e                   pop esi
// 00a2f1a0  c20c00               ret 0xc
// 00a2f1a3  90                   nop 
// 00a2f1a4  2ef1                 int1 
// 00a2f1a6  a20037f1a2           mov byte ptr [0xa2f13700], al
// 00a2f1ab  0000                 add byte ptr [eax], al
// 00a2f1ad  0000                 add byte ptr [eax], al
// 00a2f1af  0001                 add byte ptr [ecx], al
// 00a2f1b1  0001                 add byte ptr [ecx], al
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp