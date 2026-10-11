// from server: 100% by auto
// roc 2007-08 004cbb40  unit: seg_004c0000  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cbb40
//
// 004cbb40  83ec0c               sub esp, 0xc
// 004cbb43  a188518b00           mov eax, dword ptr [0x8b5188]
// 004cbb48  33c4                 xor eax, esp
// 004cbb4a  89442408             mov dword ptr [esp + 8], eax
// 004cbb4e  56                   push esi
// 004cbb4f  8bf1                 mov esi, ecx
// 004cbb51  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004cbb54  8bc8                 mov ecx, eax
// 004cbb56  c1e918               shr ecx, 0x18
// 004cbb59  884c2404             mov byte ptr [esp + 4], cl
// 004cbb5d  8bd0                 mov edx, eax
// 004cbb5f  c1ea10               shr edx, 0x10
// 004cbb62  88542405             mov byte ptr [esp + 5], dl
// 004cbb66  8bc8                 mov ecx, eax
// 004cbb68  c1e908               shr ecx, 8
// 004cbb6b  88442407             mov byte ptr [esp + 7], al
// 004cbb6f  8b4618               mov eax, dword ptr [esi + 0x18]
// 004cbb72  884c2406             mov byte ptr [esp + 6], cl
// 004cbb76  8bd0                 mov edx, eax
// 004cbb78  c1ea18               shr edx, 0x18
// 004cbb7b  57                   push edi
// 004cbb7c  8854240c             mov byte ptr [esp + 0xc], dl
// 004cbb80  8bc8                 mov ecx, eax
// 004cbb82  c1e910               shr ecx, 0x10
// 004cbb85  8bd0                 mov edx, eax
// 004cbb87  6a01                 push 1
// 004cbb89  884c2411             mov byte ptr [esp + 0x11], cl
// 004cbb8d  c1ea08               shr edx, 8
// 004cbb90  68c0ef7900           push 0x79efc0
// 004cbb95  8bce                 mov ecx, esi
// 004cbb97  88542416             mov byte ptr [esp + 0x16], dl
// 004cbb9b  88442417             mov byte ptr [esp + 0x17], al
// 004cbb9f  e8dcfeffff           call 0x4cba80
// 004cbba4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004cbba7  25f8010000           and eax, 0x1f8
// 004cbbac  3dc0010000           cmp eax, 0x1c0
// 004cbbb1  741f                 je 0x4cbbd2
// 004cbbb3  6a01                 push 1
// 004cbbb5  68bcef7900           push 0x79efbc
// 004cbbba  8bce                 mov ecx, esi
// 004cbbbc  e8bffeffff           call 0x4cba80
// 004cbbc1  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004cbbc4  81e1f8010000         and ecx, 0x1f8
// 004cbbca  81f9c0010000         cmp ecx, 0x1c0
// 004cbbd0  75e1                 jne 0x4cbbb3
// 004cbbd2  6a08                 push 8
// 004cbbd4  8d54240c             lea edx, [esp + 0xc]
// 004cbbd8  52                   push edx
// 004cbbd9  8bce                 mov ecx, esi
// 004cbbdb  e8a0feffff           call 0x4cba80
// 004cbbe0  33c0                 xor eax, eax
// 004cbbe2  8bd0                 mov edx, eax
// 004cbbe4  83e203               and edx, 3
// 004cbbe7  b903000000           mov ecx, 3
// 004cbbec  2bca                 sub ecx, edx
// 004cbbee  03c9                 add ecx, ecx
// 004cbbf0  8bd0                 mov edx, eax
// 004cbbf2  c1ea02               shr edx, 2
// 004cbbf5  8b549604             mov edx, dword ptr [esi + edx*4 + 4]
// 004cbbf9  03c9                 add ecx, ecx
// 004cbbfb  03c9                 add ecx, ecx
// 004cbbfd  d3ea                 shr edx, cl
// 004cbbff  83c001               add eax, 1
// 004cbc02  83f814               cmp eax, 0x14
// 004cbc05  8854065f             mov byte ptr [esi + eax + 0x5f], dl
// 004cbc09  72d7                 jb 0x4cbbe2
// 004cbc0b  6a40                 push 0x40
// 004cbc0d  8d7e20               lea edi, [esi + 0x20]
// 004cbc10  6a00                 push 0
// 004cbc12  57                   push edi
// 004cbc13  e8744f1600           call 0x630b8c
// 004cbc18  33c9                 xor ecx, ecx
// 004cbc1a  8d4604               lea eax, [esi + 4]
// 004cbc1d  8908                 mov dword ptr [eax], ecx
// 004cbc1f  894804               mov dword ptr [eax + 4], ecx
// 004cbc22  894808               mov dword ptr [eax + 8], ecx
// 004cbc25  89480c               mov dword ptr [eax + 0xc], ecx
// 004cbc28  83c40c               add esp, 0xc
// 004cbc2b  894810               mov dword ptr [eax + 0x10], ecx
// 004cbc2e  894e18               mov dword ptr [esi + 0x18], ecx
// 004cbc31  57                   push edi
// 004cbc32  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004cbc35  50                   push eax
// 004cbc36  8bce                 mov ecx, esi
// 004cbc38  e873eaffff           call 0x4ca6b0
// 004cbc3d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cbc41  5f                   pop edi
// 004cbc42  5e                   pop esi
// 004cbc43  33cc                 xor ecx, esp
// 004cbc45  e8d44d1600           call 0x630a1e
// 004cbc4a  83c40c               add esp, 0xc
// 004cbc4d  c3                   ret 

// from server: 79% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp