// roc 2010-06 0051e860  unit: RakPeer  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051e860
//
// 0051e860  83ec08               sub esp, 8
// 0051e863  56                   push esi
// 0051e864  8bf1                 mov esi, ecx
// 0051e866  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0051e869  8bc8                 mov ecx, eax
// 0051e86b  c1e918               shr ecx, 0x18
// 0051e86e  884c2404             mov byte ptr [esp + 4], cl
// 0051e872  8bd0                 mov edx, eax
// 0051e874  c1ea10               shr edx, 0x10
// 0051e877  88542405             mov byte ptr [esp + 5], dl
// 0051e87b  8bc8                 mov ecx, eax
// 0051e87d  c1e908               shr ecx, 8
// 0051e880  88442407             mov byte ptr [esp + 7], al
// 0051e884  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051e887  884c2406             mov byte ptr [esp + 6], cl
// 0051e88b  8bd0                 mov edx, eax
// 0051e88d  c1ea18               shr edx, 0x18
// 0051e890  57                   push edi
// 0051e891  8854240c             mov byte ptr [esp + 0xc], dl
// 0051e895  8bc8                 mov ecx, eax
// 0051e897  c1e910               shr ecx, 0x10
// 0051e89a  8bd0                 mov edx, eax
// 0051e89c  6a01                 push 1
// 0051e89e  884c2411             mov byte ptr [esp + 0x11], cl
// 0051e8a2  c1ea08               shr edx, 8
// 0051e8a5  6810e6a100           push 0xa1e610
// 0051e8aa  8bce                 mov ecx, esi
// 0051e8ac  88542416             mov byte ptr [esp + 0x16], dl
// 0051e8b0  88442417             mov byte ptr [esp + 0x17], al
// 0051e8b4  e8e7feffff           call 0x51e7a0
// 0051e8b9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051e8bc  25f8010000           and eax, 0x1f8
// 0051e8c1  3dc0010000           cmp eax, 0x1c0
// 0051e8c6  7427                 je 0x51e8ef
// 0051e8c8  eb06                 jmp 0x51e8d0
// 0051e8ca  8d9b00000000         lea ebx, [ebx]
// 0051e8d0  6a01                 push 1
// 0051e8d2  6844c2a000           push 0xa0c244
// 0051e8d7  8bce                 mov ecx, esi
// 0051e8d9  e8c2feffff           call 0x51e7a0
// 0051e8de  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0051e8e1  81e1f8010000         and ecx, 0x1f8
// 0051e8e7  81f9c0010000         cmp ecx, 0x1c0
// 0051e8ed  75e1                 jne 0x51e8d0
// 0051e8ef  6a08                 push 8
// 0051e8f1  8d54240c             lea edx, [esp + 0xc]
// 0051e8f5  52                   push edx
// 0051e8f6  8bce                 mov ecx, esi
// 0051e8f8  e8a3feffff           call 0x51e7a0
// 0051e8fd  33c0                 xor eax, eax
// 0051e8ff  90                   nop 
// 0051e900  8bd0                 mov edx, eax
// 0051e902  83e203               and edx, 3
// 0051e905  b903000000           mov ecx, 3
// 0051e90a  2bca                 sub ecx, edx
// 0051e90c  03c9                 add ecx, ecx
// 0051e90e  8bd0                 mov edx, eax
// 0051e910  c1ea02               shr edx, 2
// 0051e913  8b549604             mov edx, dword ptr [esi + edx*4 + 4]
// 0051e917  03c9                 add ecx, ecx
// 0051e919  03c9                 add ecx, ecx
// 0051e91b  d3ea                 shr edx, cl
// 0051e91d  40                   inc eax
// 0051e91e  8854065f             mov byte ptr [esi + eax + 0x5f], dl
// 0051e922  83f814               cmp eax, 0x14
// 0051e925  72d9                 jb 0x51e900
// 0051e927  6a40                 push 0x40
// 0051e929  8d7e20               lea edi, [esi + 0x20]
// 0051e92c  6a00                 push 0
// 0051e92e  57                   push edi
// 0051e92f  e8b0a22800           call 0x7a8be4
// 0051e934  33c9                 xor ecx, ecx
// 0051e936  8d4604               lea eax, [esi + 4]
// 0051e939  8908                 mov dword ptr [eax], ecx
// 0051e93b  894804               mov dword ptr [eax + 4], ecx
// 0051e93e  894808               mov dword ptr [eax + 8], ecx
// 0051e941  89480c               mov dword ptr [eax + 0xc], ecx
// 0051e944  83c40c               add esp, 0xc
// 0051e947  894810               mov dword ptr [eax + 0x10], ecx
// 0051e94a  894e18               mov dword ptr [esi + 0x18], ecx
// 0051e94d  57                   push edi
// 0051e94e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0051e951  50                   push eax
// 0051e952  8bce                 mov ecx, esi
// 0051e954  e817edffff           call 0x51d670
// 0051e959  5f                   pop edi
// 0051e95a  5e                   pop esi
// 0051e95b  83c408               add esp, 8
// 0051e95e  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Final@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
