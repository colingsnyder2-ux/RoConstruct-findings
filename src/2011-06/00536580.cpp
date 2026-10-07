// roc 2011-06 00536580  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536580
//
// 00536580  83ec08               sub esp, 8
// 00536583  56                   push esi
// 00536584  8bf1                 mov esi, ecx
// 00536586  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00536589  8bc8                 mov ecx, eax
// 0053658b  c1e918               shr ecx, 0x18
// 0053658e  884c2404             mov byte ptr [esp + 4], cl
// 00536592  8bd0                 mov edx, eax
// 00536594  c1ea10               shr edx, 0x10
// 00536597  88542405             mov byte ptr [esp + 5], dl
// 0053659b  8bc8                 mov ecx, eax
// 0053659d  c1e908               shr ecx, 8
// 005365a0  88442407             mov byte ptr [esp + 7], al
// 005365a4  8b4618               mov eax, dword ptr [esi + 0x18]
// 005365a7  884c2406             mov byte ptr [esp + 6], cl
// 005365ab  8bd0                 mov edx, eax
// 005365ad  c1ea18               shr edx, 0x18
// 005365b0  57                   push edi
// 005365b1  8854240c             mov byte ptr [esp + 0xc], dl
// 005365b5  8bc8                 mov ecx, eax
// 005365b7  c1e910               shr ecx, 0x10
// 005365ba  8bd0                 mov edx, eax
// 005365bc  6a01                 push 1
// 005365be  884c2411             mov byte ptr [esp + 0x11], cl
// 005365c2  c1ea08               shr edx, 8
// 005365c5  6800f4a700           push 0xa7f400
// 005365ca  8bce                 mov ecx, esi
// 005365cc  88542416             mov byte ptr [esp + 0x16], dl
// 005365d0  88442417             mov byte ptr [esp + 0x17], al
// 005365d4  e8e7feffff           call 0x5364c0
// 005365d9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005365dc  25f8010000           and eax, 0x1f8
// 005365e1  3dc0010000           cmp eax, 0x1c0
// 005365e6  7427                 je 0x53660f
// 005365e8  eb06                 jmp 0x5365f0
// 005365ea  8d9b00000000         lea ebx, [ebx]
// 005365f0  6a01                 push 1
// 005365f2  68fcf3a700           push 0xa7f3fc
// 005365f7  8bce                 mov ecx, esi
// 005365f9  e8c2feffff           call 0x5364c0
// 005365fe  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00536601  81e1f8010000         and ecx, 0x1f8
// 00536607  81f9c0010000         cmp ecx, 0x1c0
// 0053660d  75e1                 jne 0x5365f0
// 0053660f  6a08                 push 8
// 00536611  8d54240c             lea edx, [esp + 0xc]
// 00536615  52                   push edx
// 00536616  8bce                 mov ecx, esi
// 00536618  e8a3feffff           call 0x5364c0
// 0053661d  33c0                 xor eax, eax
// 0053661f  90                   nop 
// 00536620  8bd0                 mov edx, eax
// 00536622  83e203               and edx, 3
// 00536625  b903000000           mov ecx, 3
// 0053662a  2bca                 sub ecx, edx
// 0053662c  03c9                 add ecx, ecx
// 0053662e  8bd0                 mov edx, eax
// 00536630  c1ea02               shr edx, 2
// 00536633  8b549604             mov edx, dword ptr [esi + edx*4 + 4]
// 00536637  03c9                 add ecx, ecx
// 00536639  03c9                 add ecx, ecx
// 0053663b  d3ea                 shr edx, cl
// 0053663d  40                   inc eax
// 0053663e  8854065f             mov byte ptr [esi + eax + 0x5f], dl
// 00536642  83f814               cmp eax, 0x14
// 00536645  72d9                 jb 0x536620
// 00536647  6a40                 push 0x40
// 00536649  8d7e20               lea edi, [esi + 0x20]
// 0053664c  6a00                 push 0
// 0053664e  57                   push edi
// 0053664f  e8904c2d00           call 0x80b2e4
// 00536654  33c9                 xor ecx, ecx
// 00536656  8d4604               lea eax, [esi + 4]
// 00536659  8908                 mov dword ptr [eax], ecx
// 0053665b  894804               mov dword ptr [eax + 4], ecx
// 0053665e  894808               mov dword ptr [eax + 8], ecx
// 00536661  89480c               mov dword ptr [eax + 0xc], ecx
// 00536664  83c40c               add esp, 0xc
// 00536667  894810               mov dword ptr [eax + 0x10], ecx
// 0053666a  894e18               mov dword ptr [esi + 0x18], ecx
// 0053666d  57                   push edi
// 0053666e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00536671  50                   push eax
// 00536672  8bce                 mov ecx, esi
// 00536674  e817edffff           call 0x535390
// 00536679  5f                   pop edi
// 0053667a  5e                   pop esi
// 0053667b  83c408               add esp, 8
// 0053667e  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Final@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
