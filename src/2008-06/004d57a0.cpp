// roc 2008-06 004d57a0  unit: seg_004d0000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d57a0
//
// 004d57a0  83ec08               sub esp, 8
// 004d57a3  56                   push esi
// 004d57a4  8bf1                 mov esi, ecx
// 004d57a6  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004d57a9  8bc8                 mov ecx, eax
// 004d57ab  c1e918               shr ecx, 0x18
// 004d57ae  884c2404             mov byte ptr [esp + 4], cl
// 004d57b2  8bd0                 mov edx, eax
// 004d57b4  c1ea10               shr edx, 0x10
// 004d57b7  88542405             mov byte ptr [esp + 5], dl
// 004d57bb  8bc8                 mov ecx, eax
// 004d57bd  c1e908               shr ecx, 8
// 004d57c0  88442407             mov byte ptr [esp + 7], al
// 004d57c4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d57c7  884c2406             mov byte ptr [esp + 6], cl
// 004d57cb  8bd0                 mov edx, eax
// 004d57cd  c1ea18               shr edx, 0x18
// 004d57d0  57                   push edi
// 004d57d1  8854240c             mov byte ptr [esp + 0xc], dl
// 004d57d5  8bc8                 mov ecx, eax
// 004d57d7  c1e910               shr ecx, 0x10
// 004d57da  8bd0                 mov edx, eax
// 004d57dc  6a01                 push 1
// 004d57de  884c2411             mov byte ptr [esp + 0x11], cl
// 004d57e2  c1ea08               shr edx, 8
// 004d57e5  68106b8200           push 0x826b10
// 004d57ea  8bce                 mov ecx, esi
// 004d57ec  88542416             mov byte ptr [esp + 0x16], dl
// 004d57f0  88442417             mov byte ptr [esp + 0x17], al
// 004d57f4  e8e7feffff           call 0x4d56e0
// 004d57f9  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d57fc  25f8010000           and eax, 0x1f8
// 004d5801  3dc0010000           cmp eax, 0x1c0
// 004d5806  7427                 je 0x4d582f
// 004d5808  eb06                 jmp 0x4d5810
// 004d580a  8d9b00000000         lea ebx, [ebx]
// 004d5810  6a01                 push 1
// 004d5812  680c6b8200           push 0x826b0c
// 004d5817  8bce                 mov ecx, esi
// 004d5819  e8c2feffff           call 0x4d56e0
// 004d581e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d5821  81e1f8010000         and ecx, 0x1f8
// 004d5827  81f9c0010000         cmp ecx, 0x1c0
// 004d582d  75e1                 jne 0x4d5810
// 004d582f  6a08                 push 8
// 004d5831  8d54240c             lea edx, [esp + 0xc]
// 004d5835  52                   push edx
// 004d5836  8bce                 mov ecx, esi
// 004d5838  e8a3feffff           call 0x4d56e0
// 004d583d  33c0                 xor eax, eax
// 004d583f  90                   nop 
// 004d5840  8bd0                 mov edx, eax
// 004d5842  83e203               and edx, 3
// 004d5845  b903000000           mov ecx, 3
// 004d584a  2bca                 sub ecx, edx
// 004d584c  03c9                 add ecx, ecx
// 004d584e  8bd0                 mov edx, eax
// 004d5850  c1ea02               shr edx, 2
// 004d5853  8b549604             mov edx, dword ptr [esi + edx*4 + 4]
// 004d5857  03c9                 add ecx, ecx
// 004d5859  03c9                 add ecx, ecx
// 004d585b  d3ea                 shr edx, cl
// 004d585d  40                   inc eax
// 004d585e  8854065f             mov byte ptr [esi + eax + 0x5f], dl
// 004d5862  83f814               cmp eax, 0x14
// 004d5865  72d9                 jb 0x4d5840
// 004d5867  6a40                 push 0x40
// 004d5869  8d7e20               lea edi, [esi + 0x20]
// 004d586c  6a00                 push 0
// 004d586e  57                   push edi
// 004d586f  e890be1c00           call 0x6a1704
// 004d5874  33c9                 xor ecx, ecx
// 004d5876  8d4604               lea eax, [esi + 4]
// 004d5879  8908                 mov dword ptr [eax], ecx
// 004d587b  894804               mov dword ptr [eax + 4], ecx
// 004d587e  894808               mov dword ptr [eax + 8], ecx
// 004d5881  89480c               mov dword ptr [eax + 0xc], ecx
// 004d5884  83c40c               add esp, 0xc
// 004d5887  894810               mov dword ptr [eax + 0x10], ecx
// 004d588a  894e18               mov dword ptr [esi + 0x18], ecx
// 004d588d  57                   push edi
// 004d588e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004d5891  50                   push eax
// 004d5892  8bce                 mov ecx, esi
// 004d5894  e877eaffff           call 0x4d4310
// 004d5899  5f                   pop edi
// 004d589a  5e                   pop esi
// 004d589b  83c408               add esp, 8
// 004d589e  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Final@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
