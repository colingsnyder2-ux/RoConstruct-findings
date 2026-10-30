// roc 2010-06 007bbb20  unit: CXTPCommandBar  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bbb20
//
// 007bbb20  51                   push ecx
// 007bbb21  53                   push ebx
// 007bbb22  56                   push esi
// 007bbb23  8bf1                 mov esi, ecx
// 007bbb25  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 007bbb2b  33db                 xor ebx, ebx
// 007bbb2d  57                   push edi
// 007bbb2e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007bbb32  3bc3                 cmp eax, ebx
// 007bbb34  7404                 je 0x7bbb3a
// 007bbb36  3bfb                 cmp edi, ebx
// 007bbb38  7504                 jne 0x7bbb3e
// 007bbb3a  3bc7                 cmp eax, edi
// 007bbb3c  750f                 jne 0x7bbb4d
// 007bbb3e  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 007bbb44  5f                   pop edi
// 007bbb45  5e                   pop esi
// 007bbb46  33c0                 xor eax, eax
// 007bbb48  5b                   pop ebx
// 007bbb49  59                   pop ecx
// 007bbb4a  c20c00               ret 0xc
// 007bbb4d  55                   push ebp
// 007bbb4e  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 007bbb54  e877caffff           call 0x7b85d0
// 007bbb59  8bc8                 mov ecx, eax
// 007bbb5b  89442410             mov dword ptr [esp + 0x10], eax
// 007bbb5f  e8dce00000           call 0x7c9c40
// 007bbb64  8be8                 mov ebp, eax
// 007bbb66  3bfb                 cmp edi, ebx
// 007bbb68  0f84fe000000         je 0x7bbc6c
// 007bbb6e  399ef8000000         cmp dword ptr [esi + 0xf8], ebx
// 007bbb74  7518                 jne 0x7bbb8e
// 007bbb76  8bce                 mov ecx, esi
// 007bbb78  e883f6ffff           call 0x7bb200
// 007bbb7d  8b4020               mov eax, dword ptr [eax + 0x20]
// 007bbb80  53                   push ebx
// 007bbb81  56                   push esi
// 007bbb82  6858280000           push 0x2858
// 007bbb87  50                   push eax
// 007bbb88  ff1554ba9e00         call dword ptr [0x9eba54]
// 007bbb8e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007bbb92  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 007bbb96  750b                 jne 0x7bbba3
// 007bbb98  3bcb                 cmp ecx, ebx
// 007bbb9a  7507                 jne 0x7bbba3
// 007bbb9c  b801000000           mov eax, 1
// 007bbba1  eb02                 jmp 0x7bbba5
// 007bbba3  33c0                 xor eax, eax
// 007bbba5  89865c010000         mov dword ptr [esi + 0x15c], eax
// 007bbbab  898e30010000         mov dword ptr [esi + 0x130], ecx
// 007bbbb1  399ec4000000         cmp dword ptr [esi + 0xc4], ebx
// 007bbbb7  743d                 je 0x7bbbf6
// 007bbbb9  399ed4000000         cmp dword ptr [esi + 0xd4], ebx
// 007bbbbf  7528                 jne 0x7bbbe9
// 007bbbc1  8b3d80ba9e00         mov edi, dword ptr [0x9eba80]
// 007bbbc7  ffd7                 call edi
// 007bbbc9  85c0                 test eax, eax
// 007bbbcb  7404                 je 0x7bbbd1
// 007bbbcd  ffd7                 call edi
// 007bbbcf  eb12                 jmp 0x7bbbe3
// 007bbbd1  8bce                 mov ecx, esi
// 007bbbd3  e828f6ffff           call 0x7bb200
// 007bbbd8  3bc3                 cmp eax, ebx
// 007bbbda  7504                 jne 0x7bbbe0
// 007bbbdc  33c0                 xor eax, eax
// 007bbbde  eb03                 jmp 0x7bbbe3
// 007bbbe0  8b4020               mov eax, dword ptr [eax + 0x20]
// 007bbbe3  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 007bbbe9  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 007bbbef  51                   push ecx
// 007bbbf0  ff15b0ba9e00         call dword ptr [0x9ebab0]
// 007bbbf6  53                   push ebx
// 007bbbf7  56                   push esi
// 007bbbf8  8bcd                 mov ecx, ebp
// 007bbbfa  e8517a0600           call 0x823650
// 007bbbff  68a0477b00           push 0x7b47a0
// 007bbc04  b94462c200           mov ecx, 0xc26244
// 007bbc09  8d7e54               lea edi, [esi + 0x54]
// 007bbc0c  e867111c00           call 0x97cd78
// 007bbc11  3bc3                 cmp eax, ebx
// 007bbc13  7505                 jne 0x7bbc1a
// 007bbc15  e832c0feff           call 0x7a7c4c
// 007bbc1a  57                   push edi
// 007bbc1b  8bc8                 mov ecx, eax
// 007bbc1d  e85e570800           call 0x841380
// 007bbc22  e837c0feff           call 0x7a7c5e
// 007bbc27  68007f0000           push 0x7f00
// 007bbc2c  53                   push ebx
// 007bbc2d  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 007bbc33  50                   push eax
// 007bbc34  ff15b4bb9e00         call dword ptr [0x9ebbb4]
// 007bbc3a  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 007bbc3e  0f8405010000         je 0x7bbd49
// 007bbc44  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007bbc4a  8b3e                 mov edi, dword ptr [esi]
// 007bbc4c  6a02                 push 2
// 007bbc4e  6a01                 push 1
// 007bbc50  53                   push ebx
// 007bbc51  6a01                 push 1
// 007bbc53  6a01                 push 1
// 007bbc55  6aff                 push -1
// 007bbc57  e814d90300           call 0x7f9570
// 007bbc5c  8b9750010000         mov edx, dword ptr [edi + 0x150]
// 007bbc62  50                   push eax
// 007bbc63  8bce                 mov ecx, esi
// 007bbc65  ffd2                 call edx
// 007bbc67  e9dd000000           jmp 0x7bbd49
// 007bbc6c  56                   push esi
// 007bbc6d  8bcd                 mov ecx, ebp
// 007bbc6f  899e5c010000         mov dword ptr [esi + 0x15c], ebx
// 007bbc75  899e30010000         mov dword ptr [esi + 0x130], ebx
// 007bbc7b  e850740600           call 0x8230d0
// 007bbc80  68a0477b00           push 0x7b47a0
// 007bbc85  b94462c200           mov ecx, 0xc26244
// 007bbc8a  8d7e54               lea edi, [esi + 0x54]
// 007bbc8d  e8e6101c00           call 0x97cd78
// 007bbc92  3bc3                 cmp eax, ebx
// 007bbc94  7505                 jne 0x7bbc9b
// 007bbc96  e8b1bffeff           call 0x7a7c4c
// 007bbc9b  57                   push edi
// 007bbc9c  8bc8                 mov ecx, eax
// 007bbc9e  e81d570800           call 0x8413c0
// 007bbca3  53                   push ebx
// 007bbca4  6aff                 push -1
// 007bbca6  8bce                 mov ecx, esi
// 007bbca8  e863eaffff           call 0x7ba710
// 007bbcad  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 007bbcb1  740f                 je 0x7bbcc2
// 007bbcb3  8b06                 mov eax, dword ptr [esi]
// 007bbcb5  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007bbcbb  53                   push ebx
// 007bbcbc  6aff                 push -1
// 007bbcbe  8bce                 mov ecx, esi
// 007bbcc0  ffd2                 call edx
// 007bbcc2  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 007bbcc8  3bc3                 cmp eax, ebx
// 007bbcca  7415                 je 0x7bbce1
// 007bbccc  399ec4000000         cmp dword ptr [esi + 0xc4], ebx
// 007bbcd2  740d                 je 0x7bbce1
// 007bbcd4  50                   push eax
// 007bbcd5  ff15b4ba9e00         call dword ptr [0x9ebab4]
// 007bbcdb  899ed4000000         mov dword ptr [esi + 0xd4], ebx
// 007bbce1  8b06                 mov eax, dword ptr [esi]
// 007bbce3  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 007bbce9  6a01                 push 1
// 007bbceb  53                   push ebx
// 007bbcec  8bce                 mov ecx, esi
// 007bbcee  ffd2                 call edx
// 007bbcf0  53                   push ebx
// 007bbcf1  8bcd                 mov ecx, ebp
// 007bbcf3  e8b8720600           call 0x822fb0
// 007bbcf8  85c0                 test eax, eax
// 007bbcfa  7503                 jne 0x7bbcff
// 007bbcfc  895d28               mov dword ptr [ebp + 0x28], ebx
// 007bbcff  395e20               cmp dword ptr [esi + 0x20], ebx
// 007bbd02  743f                 je 0x7bbd43
// 007bbd04  ff1580ba9e00         call dword ptr [0x9eba80]
// 007bbd0a  50                   push eax
// 007bbd0b  e85abffeff           call 0x7a7c6a
// 007bbd10  3bc6                 cmp eax, esi
// 007bbd12  752f                 jne 0x7bbd43
// 007bbd14  8b4620               mov eax, dword ptr [esi + 0x20]
// 007bbd17  50                   push eax
// 007bbd18  ff154cba9e00         call dword ptr [0x9eba4c]
// 007bbd1e  50                   push eax
// 007bbd1f  e846bffeff           call 0x7a7c6a
// 007bbd24  85c0                 test eax, eax
// 007bbd26  741b                 je 0x7bbd43
// 007bbd28  53                   push ebx
// 007bbd29  56                   push esi
// 007bbd2a  8bce                 mov ecx, esi
// 007bbd2c  e81f70c4ff           call 0x402d50
// 007bbd31  8bc8                 mov ecx, eax
// 007bbd33  e8e8cdffff           call 0x7b8b20
// 007bbd38  3bc3                 cmp eax, ebx
// 007bbd3a  7407                 je 0x7bbd43
// 007bbd3c  8bc8                 mov ecx, eax
// 007bbd3e  e8ffbffeff           call 0x7a7d42
// 007bbd43  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 007bbd49  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007bbd4d  3bcb                 cmp ecx, ebx
// 007bbd4f  7410                 je 0x7bbd61
// 007bbd51  8b442418             mov eax, dword ptr [esp + 0x18]
// 007bbd55  8b11                 mov edx, dword ptr [ecx]
// 007bbd57  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 007bbd5d  50                   push eax
// 007bbd5e  56                   push esi
// 007bbd5f  ffd2                 call edx
// 007bbd61  5d                   pop ebp
// 007bbd62  5f                   pop edi
// 007bbd63  5e                   pop esi
// 007bbd64  b801000000           mov eax, 1
// 007bbd69  5b                   pop ebx
// 007bbd6a  59                   pop ecx
// 007bbd6b  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetTrackingMode@CXTPCommandBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp