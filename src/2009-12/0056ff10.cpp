// roc 2009-12 0056ff10  unit: RakPeer  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0056ff10
//
// 0056ff10  83ec08               sub esp, 8
// 0056ff13  56                   push esi
// 0056ff14  8bf1                 mov esi, ecx
// 0056ff16  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0056ff19  8bc8                 mov ecx, eax
// 0056ff1b  c1e918               shr ecx, 0x18
// 0056ff1e  884c2404             mov byte ptr [esp + 4], cl
// 0056ff22  8bd0                 mov edx, eax
// 0056ff24  c1ea10               shr edx, 0x10
// 0056ff27  88542405             mov byte ptr [esp + 5], dl
// 0056ff2b  8bc8                 mov ecx, eax
// 0056ff2d  c1e908               shr ecx, 8
// 0056ff30  88442407             mov byte ptr [esp + 7], al
// 0056ff34  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056ff37  884c2406             mov byte ptr [esp + 6], cl
// 0056ff3b  8bd0                 mov edx, eax
// 0056ff3d  c1ea18               shr edx, 0x18
// 0056ff40  57                   push edi
// 0056ff41  8854240c             mov byte ptr [esp + 0xc], dl
// 0056ff45  8bc8                 mov ecx, eax
// 0056ff47  c1e910               shr ecx, 0x10
// 0056ff4a  8bd0                 mov edx, eax
// 0056ff4c  6a01                 push 1
// 0056ff4e  884c2411             mov byte ptr [esp + 0x11], cl
// 0056ff52  c1ea08               shr edx, 8
// 0056ff55  6840069c00           push 0x9c0640
// 0056ff5a  8bce                 mov ecx, esi
// 0056ff5c  88542416             mov byte ptr [esp + 0x16], dl
// 0056ff60  88442417             mov byte ptr [esp + 0x17], al
// 0056ff64  e8e7feffff           call 0x56fe50
// 0056ff69  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056ff6c  25f8010000           and eax, 0x1f8
// 0056ff71  3dc0010000           cmp eax, 0x1c0
// 0056ff76  7427                 je 0x56ff9f
// 0056ff78  eb06                 jmp 0x56ff80
// 0056ff7a  8d9b00000000         lea ebx, [ebx]
// 0056ff80  6a01                 push 1
// 0056ff82  687cb49a00           push 0x9ab47c
// 0056ff87  8bce                 mov ecx, esi
// 0056ff89  e8c2feffff           call 0x56fe50
// 0056ff8e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056ff91  81e1f8010000         and ecx, 0x1f8
// 0056ff97  81f9c0010000         cmp ecx, 0x1c0
// 0056ff9d  75e1                 jne 0x56ff80
// 0056ff9f  6a08                 push 8
// 0056ffa1  8d54240c             lea edx, [esp + 0xc]
// 0056ffa5  52                   push edx
// 0056ffa6  8bce                 mov ecx, esi
// 0056ffa8  e8a3feffff           call 0x56fe50
// 0056ffad  33c0                 xor eax, eax
// 0056ffaf  90                   nop 
// 0056ffb0  8bd0                 mov edx, eax
// 0056ffb2  83e203               and edx, 3
// 0056ffb5  b903000000           mov ecx, 3
// 0056ffba  2bca                 sub ecx, edx
// 0056ffbc  03c9                 add ecx, ecx
// 0056ffbe  8bd0                 mov edx, eax
// 0056ffc0  c1ea02               shr edx, 2
// 0056ffc3  8b549604             mov edx, dword ptr [esi + edx*4 + 4]
// 0056ffc7  03c9                 add ecx, ecx
// 0056ffc9  03c9                 add ecx, ecx
// 0056ffcb  d3ea                 shr edx, cl
// 0056ffcd  40                   inc eax
// 0056ffce  8854065f             mov byte ptr [esi + eax + 0x5f], dl
// 0056ffd2  83f814               cmp eax, 0x14
// 0056ffd5  72d9                 jb 0x56ffb0
// 0056ffd7  6a40                 push 0x40
// 0056ffd9  8d7e20               lea edi, [esi + 0x20]
// 0056ffdc  6a00                 push 0
// 0056ffde  57                   push edi
// 0056ffdf  e8c04a2800           call 0x7f4aa4
// 0056ffe4  33c9                 xor ecx, ecx
// 0056ffe6  8d4604               lea eax, [esi + 4]
// 0056ffe9  8908                 mov dword ptr [eax], ecx
// 0056ffeb  894804               mov dword ptr [eax + 4], ecx
// 0056ffee  894808               mov dword ptr [eax + 8], ecx
// 0056fff1  89480c               mov dword ptr [eax + 0xc], ecx
// 0056fff4  83c40c               add esp, 0xc
// 0056fff7  894810               mov dword ptr [eax + 0x10], ecx
// 0056fffa  894e18               mov dword ptr [esi + 0x18], ecx
// 0056fffd  57                   push edi
// 0056fffe  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00570001  50                   push eax
// 00570002  8bce                 mov ecx, esi
// 00570004  e817edffff           call 0x56ed20
// 00570009  5f                   pop edi
// 0057000a  5e                   pop esi
// 0057000b  83c408               add esp, 8
// 0057000e  c3                   ret 
// library rbxgs-raknet/SHA1.cpp (function ?Final@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
