// roc 2010-06 009118e0  unit: G3D::GFont  size: 680 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009118e0
//
// 009118e0  6aff                 push -1
// 009118e2  6849169c00           push 0x9c1649
// 009118e7  64a100000000         mov eax, dword ptr fs:[0]
// 009118ed  50                   push eax
// 009118ee  64892500000000       mov dword ptr fs:[0], esp
// 009118f5  83ec7c               sub esp, 0x7c
// 009118f8  53                   push ebx
// 009118f9  55                   push ebp
// 009118fa  33ed                 xor ebp, ebp
// 009118fc  56                   push esi
// 009118fd  8bf1                 mov esi, ecx
// 009118ff  896c2410             mov dword ptr [esp + 0x10], ebp
// 00911903  89742414             mov dword ptr [esp + 0x14], esi
// 00911907  892e                 mov dword ptr [esi], ebp
// 00911909  68f0ca5200           push 0x52caf0
// 0091190e  6890586300           push 0x635890
// 00911913  6a02                 push 2
// 00911915  6a04                 push 4
// 00911917  8d4608               lea eax, [esi + 8]
// 0091191a  50                   push eax
// 0091191b  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 00911922  e8c972e9ff           call 0x7a8bf0
// 00911927  896e10               mov dword ptr [esi + 0x10], ebp
// 0091192a  bb01000000           mov ebx, 1
// 0091192f  c6461401             mov byte ptr [esi + 0x14], 1
// 00911933  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0091193b  391d68ebbf00         cmp dword ptr [0xbfeb68], ebx
// 00911941  0f85ff010000         jne 0x911b46
// 00911947  803db438c00000       cmp byte ptr [0xc038b4], 0
// 0091194e  892d68ebbf00         mov dword ptr [0xbfeb68], ebp
// 00911954  0f8414020000         je 0x911b6e
// 0091195a  e83169b8ff           call 0x498290
// 0091195f  84c0                 test al, al
// 00911961  740f                 je 0x911972
// 00911963  c70568ebbf0004000000 mov dword ptr [0xbfeb68], 4
// 0091196d  e9dc010000           jmp 0x911b4e
// 00911972  6850bfa800           push 0xa8bf50
// 00911977  8d4c2470             lea ecx, [esp + 0x70]
// 0091197b  ff1510a49e00         call dword ptr [0x9ea410]
// 00911981  8d4c246c             lea ecx, [esp + 0x6c]
// 00911985  51                   push ecx
// 00911986  c684249400000003     mov byte ptr [esp + 0x94], 3
// 0091198e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00911992  e849bab7ff           call 0x48d3e0
// 00911997  83c404               add esp, 4
// 0091199a  84c0                 test al, al
// 0091199c  0f84aa000000         je 0x911a4c
// 009119a2  682468a100           push 0xa16824
// 009119a7  8d4c2454             lea ecx, [esp + 0x54]
// 009119ab  ff1510a49e00         call dword ptr [0x9ea410]
// 009119b1  8d542450             lea edx, [esp + 0x50]
// 009119b5  bb03000000           mov ebx, 3
// 009119ba  52                   push edx
// 009119bb  c784249400000004000000 mov dword ptr [esp + 0x94], 4
// 009119c6  895c2414             mov dword ptr [esp + 0x14], ebx
// 009119ca  e811bab7ff           call 0x48d3e0
// 009119cf  83c404               add esp, 4
// 009119d2  84c0                 test al, al
// 009119d4  7476                 je 0x911a4c
// 009119d6  684068a100           push 0xa16840
// 009119db  8d4c2438             lea ecx, [esp + 0x38]
// 009119df  ff1510a49e00         call dword ptr [0x9ea410]
// 009119e5  8d442434             lea eax, [esp + 0x34]
// 009119e9  bb07000000           mov ebx, 7
// 009119ee  50                   push eax
// 009119ef  c784249400000005000000 mov dword ptr [esp + 0x94], 5
// 009119fa  895c2414             mov dword ptr [esp + 0x14], ebx
// 009119fe  e8ddb9b7ff           call 0x48d3e0
// 00911a03  83c404               add esp, 4
// 00911a06  84c0                 test al, al
// 00911a08  7442                 je 0x911a4c
// 00911a0a  6838bfa800           push 0xa8bf38
// 00911a0f  8d4c241c             lea ecx, [esp + 0x1c]
// 00911a13  ff1510a49e00         call dword ptr [0x9ea410]
// 00911a19  8d4c2418             lea ecx, [esp + 0x18]
// 00911a1d  bb0f000000           mov ebx, 0xf
// 00911a22  51                   push ecx
// 00911a23  c784249400000006000000 mov dword ptr [esp + 0x94], 6
// 00911a2e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00911a32  e8a9b9b7ff           call 0x48d3e0
// 00911a37  83c404               add esp, 4
// 00911a3a  84c0                 test al, al
// 00911a3c  740e                 je 0x911a4c
// 00911a3e  833dac38c00004       cmp dword ptr [0xc038ac], 4
// 00911a45  c644240f01           mov byte ptr [esp + 0xf], 1
// 00911a4a  7d05                 jge 0x911a51
// 00911a4c  c644240f00           mov byte ptr [esp + 0xf], 0
// 00911a51  c784249000000005000000 mov dword ptr [esp + 0x90], 5
// 00911a5c  f6c308               test bl, 8
// 00911a5f  7411                 je 0x911a72
// 00911a61  83e3f7               and ebx, 0xfffffff7
// 00911a64  8d4c2418             lea ecx, [esp + 0x18]
// 00911a68  895c2410             mov dword ptr [esp + 0x10], ebx
// 00911a6c  ff1500a49e00         call dword ptr [0x9ea400]
// 00911a72  c784249000000004000000 mov dword ptr [esp + 0x90], 4
// 00911a7d  f6c304               test bl, 4
// 00911a80  7411                 je 0x911a93
// 00911a82  83e3fb               and ebx, 0xfffffffb
// 00911a85  8d4c2434             lea ecx, [esp + 0x34]
// 00911a89  895c2410             mov dword ptr [esp + 0x10], ebx
// 00911a8d  ff1500a49e00         call dword ptr [0x9ea400]
// 00911a93  c784249000000003000000 mov dword ptr [esp + 0x90], 3
// 00911a9e  f6c302               test bl, 2
// 00911aa1  7411                 je 0x911ab4
// 00911aa3  83e3fd               and ebx, 0xfffffffd
// 00911aa6  8d4c2450             lea ecx, [esp + 0x50]
// 00911aaa  895c2410             mov dword ptr [esp + 0x10], ebx
// 00911aae  ff1500a49e00         call dword ptr [0x9ea400]
// 00911ab4  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 00911abf  f6c301               test bl, 1
// 00911ac2  740d                 je 0x911ad1
// 00911ac4  8d4c246c             lea ecx, [esp + 0x6c]
// 00911ac8  83e3fe               and ebx, 0xfffffffe
// 00911acb  ff1500a49e00         call dword ptr [0x9ea400]
// 00911ad1  807c240f00           cmp byte ptr [esp + 0xf], 0
// 00911ad6  740b                 je 0x911ae3
// 00911ad8  892d68ebbf00         mov dword ptr [0xbfeb68], ebp
// 00911ade  e98b000000           jmp 0x911b6e
// 00911ae3  6830eca100           push 0xa1ec30
// 00911ae8  8d4c2470             lea ecx, [esp + 0x70]
// 00911aec  ff1510a49e00         call dword ptr [0x9ea410]
// 00911af2  8d54246c             lea edx, [esp + 0x6c]
// 00911af6  83cb10               or ebx, 0x10
// 00911af9  52                   push edx
// 00911afa  c684249400000007     mov byte ptr [esp + 0x94], 7
// 00911b02  895c2414             mov dword ptr [esp + 0x14], ebx
// 00911b06  e8d5b8b7ff           call 0x48d3e0
// 00911b0b  83c404               add esp, 4
// 00911b0e  84c0                 test al, al
// 00911b10  740e                 je 0x911b20
// 00911b12  833dac38c00004       cmp dword ptr [0xc038ac], 4
// 00911b19  c644240f01           mov byte ptr [esp + 0xf], 1
// 00911b1e  7d05                 jge 0x911b25
// 00911b20  c644240f00           mov byte ptr [esp + 0xf], 0
// 00911b25  c784249000000002000000 mov dword ptr [esp + 0x90], 2
// 00911b30  f6c310               test bl, 0x10
// 00911b33  740a                 je 0x911b3f
// 00911b35  8d4c246c             lea ecx, [esp + 0x6c]
// 00911b39  ff1500a49e00         call dword ptr [0x9ea400]
// 00911b3f  807c240f00           cmp byte ptr [esp + 0xf], 0
// 00911b44  7592                 jne 0x911ad8
// 00911b46  392d68ebbf00         cmp dword ptr [0xbfeb68], ebp
// 00911b4c  7420                 je 0x911b6e
// 00911b4e  e80de8ffff           call 0x910360
// 00911b53  a168ebbf00           mov eax, dword ptr [0xbfeb68]
// 00911b58  83f804               cmp eax, 4
// 00911b5b  7507                 jne 0x911b64
// 00911b5d  e84efaffff           call 0x9115b0
// 00911b62  eb0a                 jmp 0x911b6e
// 00911b64  83f802               cmp eax, 2
// 00911b67  7505                 jne 0x911b6e
// 00911b69  e8b2e5ffff           call 0x910120
// 00911b6e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00911b75  8bc6                 mov eax, esi
// 00911b77  5e                   pop esi
// 00911b78  5d                   pop ebp
// 00911b79  5b                   pop ebx
// 00911b7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00911b81  81c488000000         add esp, 0x88
// 00911b87  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??0ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
