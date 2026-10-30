// roc 2009-12 0083a860  unit: CXTPDockingPaneManager  size: 564 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a860
//
// 0083a860  6aff                 push -1
// 0083a862  6858319600           push 0x963158
// 0083a867  64a100000000         mov eax, dword ptr fs:[0]
// 0083a86d  50                   push eax
// 0083a86e  83ec28               sub esp, 0x28
// 0083a871  53                   push ebx
// 0083a872  55                   push ebp
// 0083a873  56                   push esi
// 0083a874  57                   push edi
// 0083a875  a10052b600           mov eax, dword ptr [0xb65200]
// 0083a87a  33c4                 xor eax, esp
// 0083a87c  50                   push eax
// 0083a87d  8d44243c             lea eax, [esp + 0x3c]
// 0083a881  64a300000000         mov dword ptr fs:[0], eax
// 0083a887  8bd9                 mov ebx, ecx
// 0083a889  895c2414             mov dword ptr [esp + 0x14], ebx
// 0083a88d  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0083a891  33ed                 xor ebp, ebp
// 0083a893  3bf5                 cmp esi, ebp
// 0083a895  0f84dc010000         je 0x83aa77
// 0083a89b  8b06                 mov eax, dword ptr [esi]
// 0083a89d  8b5018               mov edx, dword ptr [eax + 0x18]
// 0083a8a0  8bce                 mov ecx, esi
// 0083a8a2  ffd2                 call edx
// 0083a8a4  50                   push eax
// 0083a8a5  e8163c0700           call 0x8ae4c0
// 0083a8aa  50                   push eax
// 0083a8ab  e88e93fbff           call 0x7f3c3e
// 0083a8b0  8bf8                 mov edi, eax
// 0083a8b2  8b06                 mov eax, dword ptr [esi]
// 0083a8b4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0083a8b7  83c408               add esp, 8
// 0083a8ba  f7df                 neg edi
// 0083a8bc  1bff                 sbb edi, edi
// 0083a8be  8bce                 mov ecx, esi
// 0083a8c0  f7df                 neg edi
// 0083a8c2  ffd2                 call edx
// 0083a8c4  3bfd                 cmp edi, ebp
// 0083a8c6  750c                 jne 0x83a8d4
// 0083a8c8  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0083a8d0  3bc5                 cmp eax, ebp
// 0083a8d2  7404                 je 0x83a8d8
// 0083a8d4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0083a8d8  8b4618               mov eax, dword ptr [esi + 0x18]
// 0083a8db  83f802               cmp eax, 2
// 0083a8de  744c                 je 0x83a92c
// 0083a8e0  83f801               cmp eax, 1
// 0083a8e3  7447                 je 0x83a92c
// 0083a8e5  3bc5                 cmp eax, ebp
// 0083a8e7  0f8579010000         jne 0x83aa66
// 0083a8ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083a8f1  50                   push eax
// 0083a8f2  56                   push esi
// 0083a8f3  8bcb                 mov ecx, ebx
// 0083a8f5  e886e5ffff           call 0x838e80
// 0083a8fa  3bc5                 cmp eax, ebp
// 0083a8fc  741b                 je 0x83a919
// 0083a8fe  83c0ac               add eax, -0x54
// 0083a901  3bc5                 cmp eax, ebp
// 0083a903  7414                 je 0x83a919
// 0083a905  8d4854               lea ecx, [eax + 0x54]
// 0083a908  51                   push ecx
// 0083a909  8d46e0               lea eax, [esi - 0x20]
// 0083a90c  50                   push eax
// 0083a90d  8bcb                 mov ecx, ebx
// 0083a90f  e8ecfdffff           call 0x83a700
// 0083a914  e94d010000           jmp 0x83aa66
// 0083a919  33c9                 xor ecx, ecx
// 0083a91b  51                   push ecx
// 0083a91c  8d46e0               lea eax, [esi - 0x20]
// 0083a91f  50                   push eax
// 0083a920  8bcb                 mov ecx, ebx
// 0083a922  e8d9fdffff           call 0x83a700
// 0083a927  e93a010000           jmp 0x83aa66
// 0083a92c  6a0a                 push 0xa
// 0083a92e  8d4c2424             lea ecx, [esp + 0x24]
// 0083a932  e889edffff           call 0x8396c0
// 0083a937  8b16                 mov edx, dword ptr [esi]
// 0083a939  8b520c               mov edx, dword ptr [edx + 0xc]
// 0083a93c  8d442420             lea eax, [esp + 0x20]
// 0083a940  50                   push eax
// 0083a941  55                   push ebp
// 0083a942  8bce                 mov ecx, esi
// 0083a944  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0083a948  ffd2                 call edx
// 0083a94a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0083a94e  896c2418             mov dword ptr [esp + 0x18], ebp
// 0083a952  896c244c             mov dword ptr [esp + 0x4c], ebp
// 0083a956  3bf5                 cmp esi, ebp
// 0083a958  744a                 je 0x83a9a4
// 0083a95a  8d9b00000000         lea ebx, [ebx]
// 0083a960  8bc6                 mov eax, esi
// 0083a962  8b4008               mov eax, dword ptr [eax + 8]
// 0083a965  8b36                 mov esi, dword ptr [esi]
// 0083a967  3bc5                 cmp eax, ebp
// 0083a969  7405                 je 0x83a970
// 0083a96b  8d78e0               lea edi, [eax - 0x20]
// 0083a96e  eb02                 jmp 0x83a972
// 0083a970  33ff                 xor edi, edi
// 0083a972  8bcf                 mov ecx, edi
// 0083a974  e8b7200200           call 0x85ca30
// 0083a979  85c0                 test eax, eax
// 0083a97b  740a                 je 0x83a987
// 0083a97d  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0083a983  89442418             mov dword ptr [esp + 0x18], eax
// 0083a987  8bcf                 mov ecx, edi
// 0083a989  e8121e0200           call 0x85c7a0
// 0083a98e  85c0                 test eax, eax
// 0083a990  740a                 je 0x83a99c
// 0083a992  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 0083a998  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0083a99c  3bf5                 cmp esi, ebp
// 0083a99e  75c0                 jne 0x83a960
// 0083a9a0  8b742424             mov esi, dword ptr [esp + 0x24]
// 0083a9a4  8bde                 mov ebx, esi
// 0083a9a6  85f6                 test esi, esi
// 0083a9a8  747f                 je 0x83aa29
// 0083a9aa  8bc3                 mov eax, ebx
// 0083a9ac  8b4008               mov eax, dword ptr [eax + 8]
// 0083a9af  8b1b                 mov ebx, dword ptr [ebx]
// 0083a9b1  85c0                 test eax, eax
// 0083a9b3  740c                 je 0x83a9c1
// 0083a9b5  8d78e0               lea edi, [eax - 0x20]
// 0083a9b8  85ff                 test edi, edi
// 0083a9ba  7407                 je 0x83a9c3
// 0083a9bc  8d4720               lea eax, [edi + 0x20]
// 0083a9bf  eb04                 jmp 0x83a9c5
// 0083a9c1  33ff                 xor edi, edi
// 0083a9c3  33c0                 xor eax, eax
// 0083a9c5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083a9c9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083a9cd  52                   push edx
// 0083a9ce  50                   push eax
// 0083a9cf  e8ace4ffff           call 0x838e80
// 0083a9d4  85c0                 test eax, eax
// 0083a9d6  0f84b1000000         je 0x83aa8d
// 0083a9dc  8d70ac               lea esi, [eax - 0x54]
// 0083a9df  8d4654               lea eax, [esi + 0x54]
// 0083a9e2  85f6                 test esi, esi
// 0083a9e4  7502                 jne 0x83a9e8
// 0083a9e6  8bc5                 mov eax, ebp
// 0083a9e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083a9ec  50                   push eax
// 0083a9ed  57                   push edi
// 0083a9ee  e80dfdffff           call 0x83a700
// 0083a9f3  85c0                 test eax, eax
// 0083a9f5  7522                 jne 0x83aa19
// 0083a9f7  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0083a9fd  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0083aa01  7508                 jne 0x83aa0b
// 0083aa03  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0083aa0b  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 0083aa0f  7508                 jne 0x83aa19
// 0083aa11  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0083aa19  8d4654               lea eax, [esi + 0x54]
// 0083aa1c  85f6                 test esi, esi
// 0083aa1e  7503                 jne 0x83aa23
// 0083aa20  8b4730               mov eax, dword ptr [edi + 0x30]
// 0083aa23  8be8                 mov ebp, eax
// 0083aa25  85db                 test ebx, ebx
// 0083aa27  7581                 jne 0x83a9aa
// 0083aa29  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0083aa2d  85c0                 test eax, eax
// 0083aa2f  7f08                 jg 0x83aa39
// 0083aa31  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083aa35  85c0                 test eax, eax
// 0083aa37  7e16                 jle 0x83aa4f
// 0083aa39  8b742414             mov esi, dword ptr [esp + 0x14]
// 0083aa3d  6a01                 push 1
// 0083aa3f  50                   push eax
// 0083aa40  8bce                 mov ecx, esi
// 0083aa42  e8b9e5ffff           call 0x839000
// 0083aa47  50                   push eax
// 0083aa48  8bce                 mov ecx, esi
// 0083aa4a  e8f1e5ffff           call 0x839040
// 0083aa4f  8d4c2420             lea ecx, [esp + 0x20]
// 0083aa53  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0083aa5b  e890ecffff           call 0x8396f0
// 0083aa60  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0083aa64  33ed                 xor ebp, ebp
// 0083aa66  8b8bd0000000         mov ecx, dword ptr [ebx + 0xd0]
// 0083aa6c  e8cfde0600           call 0x8a8940
// 0083aa71  89ab38010000         mov dword ptr [ebx + 0x138], ebp
// 0083aa77  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083aa7b  64890d00000000       mov dword ptr fs:[0], ecx
// 0083aa82  59                   pop ecx
// 0083aa83  5f                   pop edi
// 0083aa84  5e                   pop esi
// 0083aa85  5d                   pop ebp
// 0083aa86  5b                   pop ebx
// 0083aa87  83c434               add esp, 0x34
// 0083aa8a  c20400               ret 4
// 0083aa8d  33f6                 xor esi, esi
// 0083aa8f  e952ffffff           jmp 0x83a9e6
// copied from an identical function in another client (function ?ToggleDocking@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp