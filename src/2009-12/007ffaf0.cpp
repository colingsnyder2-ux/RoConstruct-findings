// roc 2009-12 007ffaf0  unit: CXTPPaintManager  size: 527 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ffaf0
//
// 007ffaf0  6aff                 push -1
// 007ffaf2  68b8329600           push 0x9632b8
// 007ffaf7  64a100000000         mov eax, dword ptr fs:[0]
// 007ffafd  50                   push eax
// 007ffafe  83ec2c               sub esp, 0x2c
// 007ffb01  53                   push ebx
// 007ffb02  55                   push ebp
// 007ffb03  56                   push esi
// 007ffb04  57                   push edi
// 007ffb05  a10052b600           mov eax, dword ptr [0xb65200]
// 007ffb0a  33c4                 xor eax, esp
// 007ffb0c  50                   push eax
// 007ffb0d  8d442440             lea eax, [esp + 0x40]
// 007ffb11  64a300000000         mov dword ptr fs:[0], eax
// 007ffb17  8bf9                 mov edi, ecx
// 007ffb19  8b742450             mov esi, dword ptr [esp + 0x50]
// 007ffb1d  8b442454             mov eax, dword ptr [esp + 0x54]
// 007ffb21  898720010000         mov dword ptr [edi + 0x120], eax
// 007ffb27  85f6                 test esi, esi
// 007ffb29  0f84ba010000         je 0x7ffce9
// 007ffb2f  837f7000             cmp dword ptr [edi + 0x70], 0
// 007ffb33  7414                 je 0x7ffb49
// 007ffb35  e8e6bb0300           call 0x83b720
// 007ffb3a  8bc8                 mov ecx, eax
// 007ffb3c  e81fc50300           call 0x83c060
// 007ffb41  85c0                 test eax, eax
// 007ffb43  7404                 je 0x7ffb49
// 007ffb45  c6461a05             mov byte ptr [esi + 0x1a], 5
// 007ffb49  8daff0000000         lea ebp, [edi + 0xf0]
// 007ffb4f  8bcd                 mov ecx, ebp
// 007ffb51  e8c842ffff           call 0x7f3e1e
// 007ffb56  8d8ff8000000         lea ecx, [edi + 0xf8]
// 007ffb5c  e8bd42ffff           call 0x7f3e1e
// 007ffb61  8d8f00010000         lea ecx, [edi + 0x100]
// 007ffb67  e8b242ffff           call 0x7f3e1e
// 007ffb6c  8d8f08010000         lea ecx, [edi + 0x108]
// 007ffb72  e8a742ffff           call 0x7f3e1e
// 007ffb77  8d8fb0000000         lea ecx, [edi + 0xb0]
// 007ffb7d  e89c42ffff           call 0x7f3e1e
// 007ffb82  8d9f1c010000         lea ebx, [edi + 0x11c]
// 007ffb88  8bcb                 mov ecx, ebx
// 007ffb8a  ff1580de9800         call dword ptr [0x98de80]
// 007ffb90  50                   push eax
// 007ffb91  e8cadeffff           call 0x7fda60
// 007ffb96  89442454             mov dword ptr [esp + 0x54], eax
// 007ffb9a  83c404               add esp, 4
// 007ffb9d  8d461c               lea eax, [esi + 0x1c]
// 007ffba0  50                   push eax
// 007ffba1  8bcb                 mov ecx, ebx
// 007ffba3  ff15d4cf9800         call dword ptr [0x98cfd4]
// 007ffba9  85c0                 test eax, eax
// 007ffbab  0f94c0               sete al
// 007ffbae  84c0                 test al, al
// 007ffbb0  740a                 je 0x7ffbbc
// 007ffbb2  c7871801000001000000 mov dword ptr [edi + 0x118], 1
// 007ffbbc  837c245400           cmp dword ptr [esp + 0x54], 0
// 007ffbc1  7428                 je 0x7ffbeb
// 007ffbc3  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007ffbca  741f                 je 0x7ffbeb
// 007ffbcc  837c245000           cmp dword ptr [esp + 0x50], 0
// 007ffbd1  7418                 je 0x7ffbeb
// 007ffbd3  8bcb                 mov ecx, ebx
// 007ffbd5  ff1580de9800         call dword ptr [0x98de80]
// 007ffbdb  50                   push eax
// 007ffbdc  8d461c               lea eax, [esi + 0x1c]
// 007ffbdf  6a20                 push 0x20
// 007ffbe1  50                   push eax
// 007ffbe2  ff15c8b79800         call dword ptr [0x98b7c8]
// 007ffbe8  83c40c               add esp, 0xc
// 007ffbeb  8b1d28b19800         mov ebx, dword ptr [0x98b128]
// 007ffbf1  56                   push esi
// 007ffbf2  ffd3                 call ebx
// 007ffbf4  50                   push eax
// 007ffbf5  8bcd                 mov ecx, ebp
// 007ffbf7  e82e42ffff           call 0x7f3e2a
// 007ffbfc  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007ffbff  56                   push esi
// 007ffc00  894c2458             mov dword ptr [esp + 0x58], ecx
// 007ffc04  c74610bc020000       mov dword ptr [esi + 0x10], 0x2bc
// 007ffc0b  ffd3                 call ebx
// 007ffc0d  50                   push eax
// 007ffc0e  8d8ff8000000         lea ecx, [edi + 0xf8]
// 007ffc14  e81142ffff           call 0x7f3e2a
// 007ffc19  8b542454             mov edx, dword ptr [esp + 0x54]
// 007ffc1d  c7460c84030000       mov dword ptr [esi + 0xc], 0x384
// 007ffc24  c746088c0a0000       mov dword ptr [esi + 8], 0xa8c
// 007ffc2b  895610               mov dword ptr [esi + 0x10], edx
// 007ffc2e  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 007ffc34  50                   push eax
// 007ffc35  8d4c2458             lea ecx, [esp + 0x58]
// 007ffc39  51                   push ecx
// 007ffc3a  e881ac0400           call 0x84a8c0
// 007ffc3f  83c408               add esp, 8
// 007ffc42  8bc8                 mov ecx, eax
// 007ffc44  ff1580de9800         call dword ptr [0x98de80]
// 007ffc4a  50                   push eax
// 007ffc4b  8d461c               lea eax, [esi + 0x1c]
// 007ffc4e  6a20                 push 0x20
// 007ffc50  50                   push eax
// 007ffc51  ff15c8b79800         call dword ptr [0x98b7c8]
// 007ffc57  83c40c               add esp, 0xc
// 007ffc5a  8d4c2454             lea ecx, [esp + 0x54]
// 007ffc5e  ff15c0de9800         call dword ptr [0x98dec0]
// 007ffc64  56                   push esi
// 007ffc65  ffd3                 call ebx
// 007ffc67  50                   push eax
// 007ffc68  8d8f00010000         lea ecx, [edi + 0x100]
// 007ffc6e  e8b741ffff           call 0x7f3e2a
// 007ffc73  56                   push esi
// 007ffc74  c74610bc020000       mov dword ptr [esi + 0x10], 0x2bc
// 007ffc7b  ffd3                 call ebx
// 007ffc7d  50                   push eax
// 007ffc7e  8d8f08010000         lea ecx, [edi + 0x108]
// 007ffc84  e8a141ffff           call 0x7f3e2a
// 007ffc89  6a00                 push 0
// 007ffc8b  8d4c2430             lea ecx, [esp + 0x30]
// 007ffc8f  e8f6671200           call 0x92648a
// 007ffc94  55                   push ebp
// 007ffc95  8d542430             lea edx, [esp + 0x30]
// 007ffc99  52                   push edx
// 007ffc9a  8d4c2424             lea ecx, [esp + 0x24]
// 007ffc9e  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007ffca6  e8b5b90400           call 0x84b660
// 007ffcab  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007ffcaf  8d442414             lea eax, [esp + 0x14]
// 007ffcb3  50                   push eax
// 007ffcb4  6a01                 push 1
// 007ffcb6  6868619a00           push 0x9a6168
// 007ffcbb  51                   push ecx
// 007ffcbc  ff156cb19800         call dword ptr [0x98b16c]
// 007ffcc2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ffcc6  83c206               add edx, 6
// 007ffcc9  8d4c241c             lea ecx, [esp + 0x1c]
// 007ffccd  899710010000         mov dword ptr [edi + 0x110], edx
// 007ffcd3  e808ba0400           call 0x84b6e0
// 007ffcd8  8d4c242c             lea ecx, [esp + 0x2c]
// 007ffcdc  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 007ffce4  e89b671200           call 0x926484
// 007ffce9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007ffced  64890d00000000       mov dword ptr fs:[0], ecx
// 007ffcf4  59                   pop ecx
// 007ffcf5  5f                   pop edi
// 007ffcf6  5e                   pop esi
// 007ffcf7  5d                   pop ebp
// 007ffcf8  5b                   pop ebx
// 007ffcf9  83c438               add esp, 0x38
// 007ffcfc  c20800               ret 8
// copied from an identical function in another client (function ?SetCommandBarsFontIndirect@CXTPPaintManager@@QAEXPAUtagLOGFONTA@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp