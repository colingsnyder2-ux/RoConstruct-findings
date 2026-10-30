// roc 2009-12 008e7d00  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 1232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e7d00
//
// 008e7d00  83ec08               sub esp, 8
// 008e7d03  53                   push ebx
// 008e7d04  55                   push ebp
// 008e7d05  56                   push esi
// 008e7d06  57                   push edi
// 008e7d07  8bf1                 mov esi, ecx
// 008e7d09  e842f4ffff           call 0x8e7150
// 008e7d0e  e8bd7cf4ff           call 0x82f9d0
// 008e7d13  6a05                 push 5
// 008e7d15  8bc8                 mov ecx, eax
// 008e7d17  e8e473f4ff           call 0x82f100
// 008e7d1c  8bd8                 mov ebx, eax
// 008e7d1e  e8ad7cf4ff           call 0x82f9d0
// 008e7d23  6a0f                 push 0xf
// 008e7d25  8bc8                 mov ecx, eax
// 008e7d27  e8d473f4ff           call 0x82f100
// 008e7d2c  8be8                 mov ebp, eax
// 008e7d2e  e89d7cf4ff           call 0x82f9d0
// 008e7d33  89442410             mov dword ptr [esp + 0x10], eax
// 008e7d37  e8947cf4ff           call 0x82f9d0
// 008e7d3c  6a0f                 push 0xf
// 008e7d3e  8bc8                 mov ecx, eax
// 008e7d40  e8bb73f4ff           call 0x82f100
// 008e7d45  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e7d4b  51                   push ecx
// 008e7d4c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e7d50  d91c24               fstp dword ptr [esp]
// 008e7d53  68cd000000           push 0xcd
// 008e7d58  53                   push ebx
// 008e7d59  55                   push ebp
// 008e7d5a  89442424             mov dword ptr [esp + 0x24], eax
// 008e7d5e  8d7e04               lea edi, [esi + 4]
// 008e7d61  e8ea72f4ff           call 0x82f050
// 008e7d66  50                   push eax
// 008e7d67  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e7d6b  50                   push eax
// 008e7d6c  8bcf                 mov ecx, edi
// 008e7d6e  e8ed70f4ff           call 0x82ee60
// 008e7d73  e8587cf4ff           call 0x82f9d0
// 008e7d78  6a24                 push 0x24
// 008e7d7a  8bc8                 mov ecx, eax
// 008e7d7c  8daee0000000         lea ebp, [esi + 0xe0]
// 008e7d82  e87973f4ff           call 0x82f100
// 008e7d87  50                   push eax
// 008e7d88  8bcd                 mov ecx, ebp
// 008e7d8a  e8917bf4ff           call 0x82f920
// 008e7d8f  e83c7cf4ff           call 0x82f9d0
// 008e7d94  6a25                 push 0x25
// 008e7d96  8bc8                 mov ecx, eax
// 008e7d98  8d9e00010000         lea ebx, [esi + 0x100]
// 008e7d9e  e85d73f4ff           call 0x82f100
// 008e7da3  50                   push eax
// 008e7da4  8bcb                 mov ecx, ebx
// 008e7da6  e8757bf4ff           call 0x82f920
// 008e7dab  e8207cf4ff           call 0x82f9d0
// 008e7db0  6a24                 push 0x24
// 008e7db2  8bc8                 mov ecx, eax
// 008e7db4  e84773f4ff           call 0x82f100
// 008e7db9  898684000000         mov dword ptr [esi + 0x84], eax
// 008e7dbf  e80c7cf4ff           call 0x82f9d0
// 008e7dc4  6a21                 push 0x21
// 008e7dc6  8bc8                 mov ecx, eax
// 008e7dc8  e83373f4ff           call 0x82f100
// 008e7dcd  898690000000         mov dword ptr [esi + 0x90], eax
// 008e7dd3  e8f87bf4ff           call 0x82f9d0
// 008e7dd8  6a12                 push 0x12
// 008e7dda  8bc8                 mov ecx, eax
// 008e7ddc  e81f73f4ff           call 0x82f100
// 008e7de1  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008e7de7  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008e7dea  894e30               mov dword ptr [esi + 0x30], ecx
// 008e7ded  8b5708               mov edx, dword ptr [edi + 8]
// 008e7df0  8d5e24               lea ebx, [esi + 0x24]
// 008e7df3  895308               mov dword ptr [ebx + 8], edx
// 008e7df6  8b4718               mov eax, dword ptr [edi + 0x18]
// 008e7df9  894318               mov dword ptr [ebx + 0x18], eax
// 008e7dfc  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 008e7dff  894b14               mov dword ptr [ebx + 0x14], ecx
// 008e7e02  d9471c               fld dword ptr [edi + 0x1c]
// 008e7e05  d95b1c               fstp dword ptr [ebx + 0x1c]
// 008e7e08  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008e7e0e  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 008e7e18  e8a389feff           call 0x8d07c0
// 008e7e1d  85c0                 test eax, eax
// 008e7e1f  0f856b020000         jne 0x8e8090
// 008e7e25  e8a67bf4ff           call 0x82f9d0
// 008e7e2a  8bc8                 mov ecx, eax
// 008e7e2c  e8ff78f4ff           call 0x82f730
// 008e7e31  48                   dec eax
// 008e7e32  83f804               cmp eax, 4
// 008e7e35  0f8744020000         ja 0x8e807f
// 008e7e3b  ff2485bc818e00       jmp dword ptr [eax*4 + 0x8e81bc]
// 008e7e42  b83b619c00           mov eax, 0x9c613b
// 008e7e47  894648               mov dword ptr [esi + 0x48], eax
// 008e7e4a  898654010000         mov dword ptr [esi + 0x154], eax
// 008e7e50  b800359a00           mov eax, 0x9a3500
// 008e7e55  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008e7e5b  898648010000         mov dword ptr [esi + 0x148], eax
// 008e7e61  b875a6f100           mov eax, 0xf1a675
// 008e7e66  68ffc06f00           push 0x6fc0ff
// 008e7e6b  8bcd                 mov ecx, ebp
// 008e7e6d  898630010000         mov dword ptr [esi + 0x130], eax
// 008e7e73  898660010000         mov dword ptr [esi + 0x160], eax
// 008e7e79  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008e7e83  e8987af4ff           call 0x82f920
// 008e7e88  6800008000           push 0x800000
// 008e7e8d  8d8e00010000         lea ecx, [esi + 0x100]
// 008e7e93  e8887af4ff           call 0x82f920
// 008e7e98  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e7e9e  51                   push ecx
// 008e7e9f  d91c24               fstp dword ptr [esp]
// 008e7ea2  68fcfdfe00           push 0xfefdfc
// 008e7ea7  68c4dafa00           push 0xfadac4
// 008e7eac  8bcf                 mov ecx, edi
// 008e7eae  e8ad6ff4ff           call 0x82ee60
// 008e7eb3  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e7eb9  51                   push ecx
// 008e7eba  d91c24               fstp dword ptr [esp]
// 008e7ebd  68c4dafa00           push 0xfadac4
// 008e7ec2  689ebef500           push 0xf5be9e
// 008e7ec7  8bcb                 mov ecx, ebx
// 008e7ec9  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 008e7ed3  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 008e7eda  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 008e7ee4  e8776ff4ff           call 0x82ee60
// 008e7ee9  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 008e7ef3  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 008e7efd  e98e010000           jmp 0x8e8090
// 008e7f02  b860805800           mov eax, 0x588060
// 008e7f07  894648               mov dword ptr [esi + 0x48], eax
// 008e7f0a  898654010000         mov dword ptr [esi + 0x154], eax
// 008e7f10  b860776b00           mov eax, 0x6b7760
// 008e7f15  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008e7f1b  898648010000         mov dword ptr [esi + 0x148], eax
// 008e7f21  b8b0c28c00           mov eax, 0x8cc2b0
// 008e7f26  68ffc06f00           push 0x6fc0ff
// 008e7f2b  8bcd                 mov ecx, ebp
// 008e7f2d  898630010000         mov dword ptr [esi + 0x130], eax
// 008e7f33  898660010000         mov dword ptr [esi + 0x160], eax
// 008e7f39  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008e7f43  e8d879f4ff           call 0x82f920
// 008e7f48  683f5d3800           push 0x385d3f
// 008e7f4d  8d8e00010000         lea ecx, [esi + 0x100]
// 008e7f53  e8c879f4ff           call 0x82f920
// 008e7f58  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e7f5e  51                   push ecx
// 008e7f5f  d91c24               fstp dword ptr [esp]
// 008e7f62  68fcfefe00           push 0xfefefc
// 008e7f67  68f2f1e400           push 0xe4f1f2
// 008e7f6c  8bcf                 mov ecx, edi
// 008e7f6e  e8ed6ef4ff           call 0x82ee60
// 008e7f73  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e7f79  51                   push ecx
// 008e7f7a  d91c24               fstp dword ptr [esp]
// 008e7f7d  68f2f1e400           push 0xe4f1f2
// 008e7f82  68d9d9a700           push 0xa7d9d9
// 008e7f87  8bcb                 mov ecx, ebx
// 008e7f89  c7869c000000d0deaa00 mov dword ptr [esi + 0x9c], 0xaaded0
// 008e7f93  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 008e7f9a  c78684000000fff0c700 mov dword ptr [esi + 0x84], 0xc7f0ff
// 008e7fa4  e8b76ef4ff           call 0x82ee60
// 008e7fa9  c7860c0200003f5d3800 mov dword ptr [esi + 0x20c], 0x385d3f
// 008e7fb3  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 008e7fbd  e9ce000000           jmp 0x8e8090
// 008e7fc2  b87c7c9400           mov eax, 0x947c7c
// 008e7fc7  894648               mov dword ptr [esi + 0x48], eax
// 008e7fca  898654010000         mov dword ptr [esi + 0x154], eax
// 008e7fd0  b876749200           mov eax, 0x927476
// 008e7fd5  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008e7fdb  898648010000         mov dword ptr [esi + 0x148], eax
// 008e7fe1  b8bab9ce00           mov eax, 0xceb9ba
// 008e7fe6  68ffc06f00           push 0x6fc0ff
// 008e7feb  8bcd                 mov ecx, ebp
// 008e7fed  898630010000         mov dword ptr [esi + 0x130], eax
// 008e7ff3  898660010000         mov dword ptr [esi + 0x160], eax
// 008e7ff9  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008e8003  e81879f4ff           call 0x82f920
// 008e8008  684b4b6f00           push 0x6f4b4b
// 008e800d  8d8e00010000         lea ecx, [esi + 0x100]
// 008e8013  e80879f4ff           call 0x82f920
// 008e8018  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e801e  51                   push ecx
// 008e801f  d91c24               fstp dword ptr [esp]
// 008e8022  68fcfefe00           push 0xfefefc
// 008e8027  68f3f3f700           push 0xf7f3f3
// 008e802c  8bcf                 mov ecx, edi
// 008e802e  e82d6ef4ff           call 0x82ee60
// 008e8033  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e8039  51                   push ecx
// 008e803a  d91c24               fstp dword ptr [esp]
// 008e803d  68f3f3f700           push 0xf7f3f3
// 008e8042  68d7d7e500           push 0xe5d7d7
// 008e8047  8bcb                 mov ecx, ebx
// 008e8049  c7869c000000d9d9e600 mov dword ptr [esi + 0x9c], 0xe6d9d9
// 008e8053  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 008e805a  c78684000000ffeec200 mov dword ptr [esi + 0x84], 0xc2eeff
// 008e8064  e8f76df4ff           call 0x82ee60
// 008e8069  c7860c0200004b4b6f00 mov dword ptr [esi + 0x20c], 0x6f4b4b
// 008e8073  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 008e807d  eb11                 jmp 0x8e8090
// 008e807f  e84c79f4ff           call 0x82f9d0
// 008e8084  6a24                 push 0x24
// 008e8086  8bc8                 mov ecx, eax
// 008e8088  e87370f4ff           call 0x82f100
// 008e808d  894678               mov dword ptr [esi + 0x78], eax
// 008e8090  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 008e8097  740a                 je 0x8e80a3
// 008e8099  c78690000000fe8e4b00 mov dword ptr [esi + 0x90], 0x4b8efe
// 008e80a3  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e80a6  83c9ff               or ecx, 0xffffffff
// 008e80a9  3bc1                 cmp eax, ecx
// 008e80ab  7503                 jne 0x8e80b0
// 008e80ad  8b4648               mov eax, dword ptr [esi + 0x48]
// 008e80b0  898690010000         mov dword ptr [esi + 0x190], eax
// 008e80b6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e80b9  3bc1                 cmp eax, ecx
// 008e80bb  7503                 jne 0x8e80c0
// 008e80bd  8b4648               mov eax, dword ptr [esi + 0x48]
// 008e80c0  898678010000         mov dword ptr [esi + 0x178], eax
// 008e80c6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e80c9  3bc1                 cmp eax, ecx
// 008e80cb  7503                 jne 0x8e80d0
// 008e80cd  8b4648               mov eax, dword ptr [esi + 0x48]
// 008e80d0  898eb4010000         mov dword ptr [esi + 0x1b4], ecx
// 008e80d6  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 008e80dc  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 008e80e2  898684010000         mov dword ptr [esi + 0x184], eax
// 008e80e8  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 008e80ee  8996c4010000         mov dword ptr [esi + 0x1c4], edx
// 008e80f4  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 008e80fa  8986c0010000         mov dword ptr [esi + 0x1c0], eax
// 008e8100  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 008e8106  898ed0010000         mov dword ptr [esi + 0x1d0], ecx
// 008e810c  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 008e8112  8996cc010000         mov dword ptr [esi + 0x1cc], edx
// 008e8118  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 008e811e  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 008e8124  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 008e812a  898ed8010000         mov dword ptr [esi + 0x1d8], ecx
// 008e8130  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 008e8136  8996e8010000         mov dword ptr [esi + 0x1e8], edx
// 008e813c  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 008e8142  8986e4010000         mov dword ptr [esi + 0x1e4], eax
// 008e8148  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 008e814e  898ef4010000         mov dword ptr [esi + 0x1f4], ecx
// 008e8154  8b96a8010000         mov edx, dword ptr [esi + 0x1a8]
// 008e815a  8996f0010000         mov dword ptr [esi + 0x1f0], edx
// 008e8160  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 008e8166  898600020000         mov dword ptr [esi + 0x200], eax
// 008e816c  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 008e8172  898efc010000         mov dword ptr [esi + 0x1fc], ecx
// 008e8178  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008e817e  e85dc7f7ff           call 0x8648e0
// 008e8183  83f804               cmp eax, 4
// 008e8186  752c                 jne 0x8e81b4
// 008e8188  e84378f4ff           call 0x82f9d0
// 008e818d  6a0f                 push 0xf
// 008e818f  8bc8                 mov ecx, eax
// 008e8191  e86a6ff4ff           call 0x82f100
// 008e8196  50                   push eax
// 008e8197  8bcb                 mov ecx, ebx
// 008e8199  e88277f4ff           call 0x82f920
// 008e819e  e82d78f4ff           call 0x82f9d0
// 008e81a3  6a0f                 push 0xf
// 008e81a5  8bc8                 mov ecx, eax
// 008e81a7  e8546ff4ff           call 0x82f100
// 008e81ac  50                   push eax
// 008e81ad  8bcf                 mov ecx, edi
// 008e81af  e86c77f4ff           call 0x82f920
// 008e81b4  5f                   pop edi
// 008e81b5  5e                   pop esi
// 008e81b6  5d                   pop ebp
// 008e81b7  5b                   pop ebx
// 008e81b8  83c408               add esp, 8
// 008e81bb  c3                   ret 
// 008e81bc  42                   inc edx
// 008e81bd  7e8e                 jle 0x8e814d
// 008e81bf  0002                 add byte ptr [edx], al
// 008e81c1  7f8e                 jg 0x8e8151
// 008e81c3  00c2                 add dl, al
// 008e81c5  7f8e                 jg 0x8e8155
// 008e81c7  00427e               add byte ptr [edx + 0x7e], al
// 008e81ca  8e00                 mov es, word ptr [eax]
// 008e81cc  42                   inc edx
// 008e81cd  7e8e                 jle 0x8e815d
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2003@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp