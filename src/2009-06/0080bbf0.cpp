// roc 2009-06 0080bbf0  unit: CXTCaptionPopupWnd  size: 626 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080bbf0
//
// 0080bbf0  6aff                 push -1
// 0080bbf2  6829208800           push 0x882029
// 0080bbf7  64a100000000         mov eax, dword ptr fs:[0]
// 0080bbfd  50                   push eax
// 0080bbfe  83ec20               sub esp, 0x20
// 0080bc01  53                   push ebx
// 0080bc02  55                   push ebp
// 0080bc03  56                   push esi
// 0080bc04  57                   push edi
// 0080bc05  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080bc0a  33c4                 xor eax, esp
// 0080bc0c  50                   push eax
// 0080bc0d  8d442434             lea eax, [esp + 0x34]
// 0080bc11  64a300000000         mov dword ptr fs:[0], eax
// 0080bc17  8bf1                 mov esi, ecx
// 0080bc19  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0080bc1d  33db                 xor ebx, ebx
// 0080bc1f  3bfb                 cmp edi, ebx
// 0080bc21  0f84e4000000         je 0x80bd0b
// 0080bc27  8b4720               mov eax, dword ptr [edi + 0x20]
// 0080bc2a  50                   push eax
// 0080bc2b  ff15e0ed8900         call dword ptr [0x89ede0]
// 0080bc31  85c0                 test eax, eax
// 0080bc33  0f84d2000000         je 0x80bd0b
// 0080bc39  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0080bc3d  897e54               mov dword ptr [esi + 0x54], edi
// 0080bc40  3beb                 cmp ebp, ebx
// 0080bc42  0f84c3000000         je 0x80bd0b
// 0080bc48  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0080bc4b  51                   push ecx
// 0080bc4c  ff15e0ed8900         call dword ptr [0x89ede0]
// 0080bc52  85c0                 test eax, eax
// 0080bc54  0f84b1000000         je 0x80bd0b
// 0080bc5a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0080bc5e  53                   push ebx
// 0080bc5f  53                   push ebx
// 0080bc60  896e58               mov dword ptr [esi + 0x58], ebp
// 0080bc63  8b5004               mov edx, dword ptr [eax + 4]
// 0080bc66  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0080bc69  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 0080bc6c  8b38                 mov edi, dword ptr [eax]
// 0080bc6e  8b4008               mov eax, dword ptr [eax + 8]
// 0080bc71  55                   push ebp
// 0080bc72  2bca                 sub ecx, edx
// 0080bc74  51                   push ecx
// 0080bc75  2bc7                 sub eax, edi
// 0080bc77  50                   push eax
// 0080bc78  52                   push edx
// 0080bc79  57                   push edi
// 0080bc7a  6800004090           push 0x90400000
// 0080bc7f  6816d28a00           push 0x8ad216
// 0080bc84  68a8c69000           push 0x90c6a8
// 0080bc89  6880000000           push 0x80
// 0080bc8e  8bce                 mov ecx, esi
// 0080bc90  e81bcef0ff           call 0x718ab0
// 0080bc95  85c0                 test eax, eax
// 0080bc97  7472                 je 0x80bd0b
// 0080bc99  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0080bc9c  56                   push esi
// 0080bc9d  e8fee7f4ff           call 0x75a4a0
// 0080bca2  8d4c2448             lea ecx, [esp + 0x48]
// 0080bca6  89465c               mov dword ptr [esi + 0x5c], eax
// 0080bca9  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0080bcaf  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0080bcb3  e888f4f8ff           call 0x79b140
// 0080bcb8  8b10                 mov edx, dword ptr [eax]
// 0080bcba  8b5208               mov edx, dword ptr [edx + 8]
// 0080bcbd  6883240000           push 0x2483
// 0080bcc2  8d4c244c             lea ecx, [esp + 0x4c]
// 0080bcc6  51                   push ecx
// 0080bcc7  8bc8                 mov ecx, eax
// 0080bcc9  ffd2                 call edx
// 0080bccb  8b7e60               mov edi, dword ptr [esi + 0x60]
// 0080bcce  8d6e60               lea ebp, [esi + 0x60]
// 0080bcd1  68ffff0000           push 0xffff
// 0080bcd6  8d4c2428             lea ecx, [esp + 0x28]
// 0080bcda  e85147f6ff           call 0x770430
// 0080bcdf  50                   push eax
// 0080bce0  6801020010           push 0x10000201
// 0080bce5  6a02                 push 2
// 0080bce7  8d4c2458             lea ecx, [esp + 0x58]
// 0080bceb  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0080bcf1  50                   push eax
// 0080bcf2  8b8764010000         mov eax, dword ptr [edi + 0x164]
// 0080bcf8  56                   push esi
// 0080bcf9  8bcd                 mov ecx, ebp
// 0080bcfb  ffd0                 call eax
// 0080bcfd  85c0                 test eax, eax
// 0080bcff  7522                 jne 0x80bd23
// 0080bd01  8d4c2448             lea ecx, [esp + 0x48]
// 0080bd05  ff1510fd8900         call dword ptr [0x89fd10]
// 0080bd0b  33c0                 xor eax, eax
// 0080bd0d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080bd11  64890d00000000       mov dword ptr fs:[0], ecx
// 0080bd18  59                   pop ecx
// 0080bd19  5f                   pop edi
// 0080bd1a  5e                   pop esi
// 0080bd1b  5d                   pop ebp
// 0080bd1c  5b                   pop ebx
// 0080bd1d  83c42c               add esp, 0x2c
// 0080bd20  c20c00               ret 0xc
// 0080bd23  8b8ef0010000         mov ecx, dword ptr [esi + 0x1f0]
// 0080bd29  8dbef0010000         lea edi, [esi + 0x1f0]
// 0080bd2f  6a64                 push 0x64
// 0080bd31  894c2450             mov dword ptr [esp + 0x50], ecx
// 0080bd35  56                   push esi
// 0080bd36  8d4c242c             lea ecx, [esp + 0x2c]
// 0080bd3a  889ee1000000         mov byte ptr [esi + 0xe1], bl
// 0080bd40  e8eb46f6ff           call 0x770430
// 0080bd45  8b542454             mov edx, dword ptr [esp + 0x54]
// 0080bd49  50                   push eax
// 0080bd4a  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0080bd50  684b0f0010           push 0x10000f4b
// 0080bd55  53                   push ebx
// 0080bd56  8bcf                 mov ecx, edi
// 0080bd58  ffd0                 call eax
// 0080bd5a  85c0                 test eax, eax
// 0080bd5c  74a3                 je 0x80bd01
// 0080bd5e  8d4c2414             lea ecx, [esp + 0x14]
// 0080bd62  89ae9c020000         mov dword ptr [esi + 0x29c], ebp
// 0080bd68  e87bd4f0ff           call 0x7191e8
// 0080bd6d  6a01                 push 1
// 0080bd6f  53                   push ebx
// 0080bd70  6a09                 push 9
// 0080bd72  6a0f                 push 0xf
// 0080bd74  6a10                 push 0x10
// 0080bd76  8d4c2428             lea ecx, [esp + 0x28]
// 0080bd7a  c644245001           mov byte ptr [esp + 0x50], 1
// 0080bd7f  e85ed4f0ff           call 0x7191e2
// 0080bd84  895c2420             mov dword ptr [esp + 0x20], ebx
// 0080bd88  c744241c64f68a00     mov dword ptr [esp + 0x1c], 0x8af664
// 0080bd90  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0080bd95  e8a6f3f8ff           call 0x79b140
// 0080bd9a  8b10                 mov edx, dword ptr [eax]
// 0080bd9c  8b5214               mov edx, dword ptr [edx + 0x14]
// 0080bd9f  6856240000           push 0x2456
// 0080bda4  8d4c2420             lea ecx, [esp + 0x20]
// 0080bda8  51                   push ecx
// 0080bda9  8bc8                 mov ecx, eax
// 0080bdab  ffd2                 call edx
// 0080bdad  68ff00ff00           push 0xff00ff
// 0080bdb2  8d442420             lea eax, [esp + 0x20]
// 0080bdb6  50                   push eax
// 0080bdb7  8d4c241c             lea ecx, [esp + 0x1c]
// 0080bdbb  e8e079c0ff           call 0x4137a0
// 0080bdc0  53                   push ebx
// 0080bdc1  8d4c2418             lea ecx, [esp + 0x18]
// 0080bdc5  e8e66ff2ff           call 0x732db0
// 0080bdca  50                   push eax
// 0080bdcb  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 0080bdd1  e8baee0000           call 0x81ac90
// 0080bdd6  6a01                 push 1
// 0080bdd8  8d4c2418             lea ecx, [esp + 0x18]
// 0080bddc  e8cf6ff2ff           call 0x732db0
// 0080bde1  50                   push eax
// 0080bde2  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 0080bde8  e8a3ee0000           call 0x81ac90
// 0080bded  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 0080bdf3  8b8eac020000         mov ecx, dword ptr [esi + 0x2ac]
// 0080bdf9  8b1f                 mov ebx, dword ptr [edi]
// 0080bdfb  6a01                 push 1
// 0080bdfd  50                   push eax
// 0080bdfe  ba10000000           mov edx, 0x10
// 0080be03  51                   push ecx
// 0080be04  8d6aff               lea ebp, [edx - 1]
// 0080be07  55                   push ebp
// 0080be08  52                   push edx
// 0080be09  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 0080be0f  8bcf                 mov ecx, edi
// 0080be11  ffd2                 call edx
// 0080be13  8d4c2414             lea ecx, [esp + 0x14]
// 0080be17  e812090400           call 0x84c72e
// 0080be1c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080be1f  6a00                 push 0
// 0080be21  6a0a                 push 0xa
// 0080be23  6a01                 push 1
// 0080be25  50                   push eax
// 0080be26  ff150cee8900         call dword ptr [0x89ee0c]
// 0080be2c  8d4c241c             lea ecx, [esp + 0x1c]
// 0080be30  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0080be35  c744241c64f68a00     mov dword ptr [esp + 0x1c], 0x8af664
// 0080be3d  e88e36c0ff           call 0x40f4d0
// 0080be42  8d4c2414             lea ecx, [esp + 0x14]
// 0080be46  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0080be4b  e87ad3f0ff           call 0x7191ca
// 0080be50  8d4c2448             lea ecx, [esp + 0x48]
// 0080be54  ff1510fd8900         call dword ptr [0x89fd10]
// 0080be5a  8d45f2               lea eax, [ebp - 0xe]
// 0080be5d  e9abfeffff           jmp 0x80bd0d
// copied from an identical function in another client (function ?Create@CXTCaptionPopupWnd@@UAEHABVCRect@@PAVCWnd@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp