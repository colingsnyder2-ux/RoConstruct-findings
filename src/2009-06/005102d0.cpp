// roc 2009-06 005102d0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005102d0
//
// 005102d0  83ec08               sub esp, 8
// 005102d3  56                   push esi
// 005102d4  8bf1                 mov esi, ecx
// 005102d6  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005102d9  8bc8                 mov ecx, eax
// 005102db  c1e918               shr ecx, 0x18
// 005102de  884c2404             mov byte ptr [esp + 4], cl
// 005102e2  8bd0                 mov edx, eax
// 005102e4  c1ea10               shr edx, 0x10
// 005102e7  88542405             mov byte ptr [esp + 5], dl
// 005102eb  8bc8                 mov ecx, eax
// 005102ed  c1e908               shr ecx, 8
// 005102f0  88442407             mov byte ptr [esp + 7], al
// 005102f4  8b4618               mov eax, dword ptr [esi + 0x18]
// 005102f7  884c2406             mov byte ptr [esp + 6], cl
// 005102fb  8bd0                 mov edx, eax
// 005102fd  c1ea18               shr edx, 0x18
// 00510300  57                   push edi
// 00510301  8854240c             mov byte ptr [esp + 0xc], dl
// 00510305  8bc8                 mov ecx, eax
// 00510307  c1e910               shr ecx, 0x10
// 0051030a  8bd0                 mov edx, eax
// 0051030c  6a01                 push 1
// 0051030e  884c2411             mov byte ptr [esp + 0x11], cl
// 00510312  c1ea08               shr edx, 8
// 00510315  6870998c00           push 0x8c9970
// 0051031a  8bce                 mov ecx, esi
// 0051031c  88542416             mov byte ptr [esp + 0x16], dl
// 00510320  88442417             mov byte ptr [esp + 0x17], al
// 00510324  e8e7feffff           call 0x510210
// 00510329  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051032c  25f8010000           and eax, 0x1f8
// 00510331  3dc0010000           cmp eax, 0x1c0
// 00510336  7427                 je 0x51035f
// 00510338  eb06                 jmp 0x510340
// 0051033a  8d9b00000000         lea ebx, [ebx]
// 00510340  6a01                 push 1
// 00510342  680c728b00           push 0x8b720c
// 00510347  8bce                 mov ecx, esi
// 00510349  e8c2feffff           call 0x510210
// 0051034e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00510351  81e1f8010000         and ecx, 0x1f8
// 00510357  81f9c0010000         cmp ecx, 0x1c0
// 0051035d  75e1                 jne 0x510340
// 0051035f  6a08                 push 8
// 00510361  8d54240c             lea edx, [esp + 0xc]
// 00510365  52                   push edx
// 00510366  8bce                 mov ecx, esi
// 00510368  e8a3feffff           call 0x510210
// 0051036d  33c0                 xor eax, eax
// 0051036f  90                   nop 
// 00510370  8bd0                 mov edx, eax
// 00510372  83e203               and edx, 3
// 00510375  b903000000           mov ecx, 3
// 0051037a  2bca                 sub ecx, edx
// 0051037c  03c9                 add ecx, ecx
// 0051037e  8bd0                 mov edx, eax
// 00510380  c1ea02               shr edx, 2
// 00510383  8b549604             mov edx, dword ptr [esi + edx*4 + 4]
// 00510387  03c9                 add ecx, ecx
// 00510389  03c9                 add ecx, ecx
// 0051038b  d3ea                 shr edx, cl
// 0051038d  40                   inc eax
// 0051038e  8854065f             mov byte ptr [esi + eax + 0x5f], dl
// 00510392  83f814               cmp eax, 0x14
// 00510395  72d9                 jb 0x510370
// 00510397  6a40                 push 0x40
// 00510399  8d7e20               lea edi, [esi + 0x20]
// 0051039c  6a00                 push 0
// 0051039e  57                   push edi
// 0051039f  e8d0982000           call 0x719c74
// 005103a4  33c9                 xor ecx, ecx
// 005103a6  8d4604               lea eax, [esi + 4]
// 005103a9  8908                 mov dword ptr [eax], ecx
// 005103ab  894804               mov dword ptr [eax + 4], ecx
// 005103ae  894808               mov dword ptr [eax + 8], ecx
// 005103b1  89480c               mov dword ptr [eax + 0xc], ecx
// 005103b4  83c40c               add esp, 0xc
// 005103b7  894810               mov dword ptr [eax + 0x10], ecx
// 005103ba  894e18               mov dword ptr [esi + 0x18], ecx
// 005103bd  57                   push edi
// 005103be  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005103c1  50                   push eax
// 005103c2  8bce                 mov ecx, esi
// 005103c4  e817edffff           call 0x50f0e0
// 005103c9  5f                   pop edi
// 005103ca  5e                   pop esi
// 005103cb  83c408               add esp, 8
// 005103ce  c3                   ret 
// library rbx2016-raknet/SHA1.cpp (function ?Final@CSHA1@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SHA1.cpp
