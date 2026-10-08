// roc 2007-03 004c0540  unit: seg_004c0000  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0540
//
// 004c0540  83ec08               sub esp, 8
// 004c0543  56                   push esi
// 004c0544  8bf1                 mov esi, ecx
// 004c0546  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004c0549  8bc8                 mov ecx, eax
// 004c054b  c1e918               shr ecx, 0x18
// 004c054e  884c2404             mov byte ptr [esp + 4], cl
// 004c0552  8bd0                 mov edx, eax
// 004c0554  c1ea10               shr edx, 0x10
// 004c0557  88542405             mov byte ptr [esp + 5], dl
// 004c055b  8bc8                 mov ecx, eax
// 004c055d  c1e908               shr ecx, 8
// 004c0560  88442407             mov byte ptr [esp + 7], al
// 004c0564  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c0567  884c2406             mov byte ptr [esp + 6], cl
// 004c056b  8bd0                 mov edx, eax
// 004c056d  c1ea18               shr edx, 0x18
// 004c0570  57                   push edi
// 004c0571  8854240c             mov byte ptr [esp + 0xc], dl
// 004c0575  8bc8                 mov ecx, eax
// 004c0577  c1e910               shr ecx, 0x10
// 004c057a  8bd0                 mov edx, eax
// 004c057c  6a01                 push 1
// 004c057e  884c2411             mov byte ptr [esp + 0x11], cl
// 004c0582  c1ea08               shr edx, 8
// 004c0585  6850e57900           push 0x79e550
// 004c058a  8bce                 mov ecx, esi
// 004c058c  88542416             mov byte ptr [esp + 0x16], dl
// 004c0590  88442417             mov byte ptr [esp + 0x17], al
// 004c0594  e8e7feffff           call 0x4c0480
// 004c0599  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c059c  25f8010000           and eax, 0x1f8
// 004c05a1  3dc0010000           cmp eax, 0x1c0
// 004c05a6  7427                 je 0x4c05cf
// 004c05a8  eb06                 jmp 0x4c05b0
// 004c05aa  8d9b00000000         lea ebx, [ebx]
// 004c05b0  6a01                 push 1
// 004c05b2  684ce57900           push 0x79e54c
// 004c05b7  8bce                 mov ecx, esi
// 004c05b9  e8c2feffff           call 0x4c0480
// 004c05be  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004c05c1  81e1f8010000         and ecx, 0x1f8
// 004c05c7  81f9c0010000         cmp ecx, 0x1c0
// 004c05cd  75e1                 jne 0x4c05b0
// 004c05cf  6a08                 push 8
// 004c05d1  8d54240c             lea edx, [esp + 0xc]
// 004c05d5  52                   push edx
// 004c05d6  8bce                 mov ecx, esi
// 004c05d8  e8a3feffff           call 0x4c0480
// 004c05dd  33c0                 xor eax, eax
// 004c05df  90                   nop 
// 004c05e0  8bd0                 mov edx, eax
// 004c05e2  83e203               and edx, 3
// 004c05e5  b903000000           mov ecx, 3
// 004c05ea  2bca                 sub ecx, edx
// 004c05ec  03c9                 add ecx, ecx
// 004c05ee  8bd0                 mov edx, eax
// 004c05f0  c1ea02               shr edx, 2
// 004c05f3  8b549604             mov edx, dword ptr [esi + edx*4 + 4]
// 004c05f7  03c9                 add ecx, ecx
// 004c05f9  03c9                 add ecx, ecx
// 004c05fb  d3ea                 shr edx, cl
// 004c05fd  83c001               add eax, 1
// 004c0600  83f814               cmp eax, 0x14
// 004c0603  8854065f             mov byte ptr [esi + eax + 0x5f], dl
// 004c0607  72d7                 jb 0x4c05e0
// 004c0609  6a40                 push 0x40
// 004c060b  8d7e20               lea edi, [esi + 0x20]
// 004c060e  6a00                 push 0
// 004c0610  57                   push edi
// 004c0611  e806ea1500           call 0x61f01c
// 004c0616  33c9                 xor ecx, ecx
// 004c0618  8d4604               lea eax, [esi + 4]
// 004c061b  8908                 mov dword ptr [eax], ecx
// 004c061d  894804               mov dword ptr [eax + 4], ecx
// 004c0620  894808               mov dword ptr [eax + 8], ecx
// 004c0623  89480c               mov dword ptr [eax + 0xc], ecx
// 004c0626  83c40c               add esp, 0xc
// 004c0629  894810               mov dword ptr [eax + 0x10], ecx
// 004c062c  894e18               mov dword ptr [esi + 0x18], ecx
// 004c062f  57                   push edi
// 004c0630  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004c0633  50                   push eax
// 004c0634  8bce                 mov ecx, esi
// 004c0636  e875eaffff           call 0x4bf0b0
// 004c063b  5f                   pop edi
// 004c063c  5e                   pop esi
// 004c063d  83c408               add esp, 8
// 004c0640  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ?Final@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
