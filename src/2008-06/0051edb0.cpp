// from server: 100% by auto
// roc 2008-06 0051edb0  unit: seg_00510000  size: 817 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051edb0
//
// 0051edb0  53                   push ebx
// 0051edb1  55                   push ebp
// 0051edb2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051edb6  56                   push esi
// 0051edb7  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051edbb  8a862c010000         mov al, byte ptr [esi + 0x12c]
// 0051edc1  57                   push edi
// 0051edc2  3c08                 cmp al, 8
// 0051edc4  736a                 jae 0x51ee30
// 0051edc6  0fb6d8               movzx ebx, al
// 0051edc9  bf08000000           mov edi, 8
// 0051edce  2bfb                 sub edi, ebx
// 0051edd0  57                   push edi
// 0051edd1  8d442b20             lea eax, [ebx + ebp + 0x20]
// 0051edd5  50                   push eax
// 0051edd6  56                   push esi
// 0051edd7  e8d45c0000           call 0x524ab0
// 0051eddc  57                   push edi
// 0051eddd  8d4520               lea eax, [ebp + 0x20]
// 0051ede0  53                   push ebx
// 0051ede1  50                   push eax
// 0051ede2  c6862c01000008       mov byte ptr [esi + 0x12c], 8
// 0051ede9  e802eeffff           call 0x51dbf0
// 0051edee  83c418               add esp, 0x18
// 0051edf1  85c0                 test eax, eax
// 0051edf3  742f                 je 0x51ee24
// 0051edf5  83fb04               cmp ebx, 4
// 0051edf8  731c                 jae 0x51ee16
// 0051edfa  83c7fc               add edi, -4
// 0051edfd  57                   push edi
// 0051edfe  8d4520               lea eax, [ebp + 0x20]
// 0051ee01  53                   push ebx
// 0051ee02  50                   push eax
// 0051ee03  e8e8edffff           call 0x51dbf0
// 0051ee08  83c40c               add esp, 0xc
// 0051ee0b  85c0                 test eax, eax
// 0051ee0d  7407                 je 0x51ee16
// 0051ee0f  6838ab8200           push 0x82ab38
// 0051ee14  eb05                 jmp 0x51ee1b
// 0051ee16  6810ab8200           push 0x82ab10
// 0051ee1b  56                   push esi
// 0051ee1c  e88fab0000           call 0x5299b0
// 0051ee21  83c408               add esp, 8
// 0051ee24  83fb03               cmp ebx, 3
// 0051ee27  7307                 jae 0x51ee30
// 0051ee29  814e6800100000       or dword ptr [esi + 0x68], 0x1000
// 0051ee30  bb04000000           mov ebx, 4
// 0051ee35  53                   push ebx
// 0051ee36  8d4c2418             lea ecx, [esp + 0x18]
// 0051ee3a  51                   push ecx
// 0051ee3b  56                   push esi
// 0051ee3c  e86f5c0000           call 0x524ab0
// 0051ee41  8d542420             lea edx, [esp + 0x20]
// 0051ee45  52                   push edx
// 0051ee46  56                   push esi
// 0051ee47  e844e00000           call 0x52ce90
// 0051ee4c  56                   push esi
// 0051ee4d  8bf8                 mov edi, eax
// 0051ee4f  e80cefffff           call 0x51dd60
// 0051ee54  53                   push ebx
// 0051ee55  8d861c010000         lea eax, [esi + 0x11c]
// 0051ee5b  50                   push eax
// 0051ee5c  56                   push esi
// 0051ee5d  e83ed00000           call 0x52bea0
// 0051ee62  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0051ee68  8d8e1c010000         lea ecx, [esi + 0x11c]
// 0051ee6e  83c424               add esp, 0x24
// 0051ee71  3b0544948200         cmp eax, dword ptr [0x829444]
// 0051ee77  750d                 jne 0x51ee86
// 0051ee79  57                   push edi
// 0051ee7a  55                   push ebp
// 0051ee7b  56                   push esi
// 0051ee7c  e82fe10000           call 0x52cfb0
// 0051ee81  83c40c               add esp, 0xc
// 0051ee84  ebaa                 jmp 0x51ee30
// 0051ee86  3b0554948200         cmp eax, dword ptr [0x829454]
// 0051ee8c  750d                 jne 0x51ee9b
// 0051ee8e  57                   push edi
// 0051ee8f  55                   push ebp
// 0051ee90  56                   push esi
// 0051ee91  e87ae40000           call 0x52d310
// 0051ee96  83c40c               add esp, 0xc
// 0051ee99  eb95                 jmp 0x51ee30
// 0051ee9b  51                   push ecx
// 0051ee9c  56                   push esi
// 0051ee9d  e82ef3ffff           call 0x51e1d0
// 0051eea2  83c408               add esp, 8
// 0051eea5  85c0                 test eax, eax
// 0051eea7  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0051eead  7457                 je 0x51ef06
// 0051eeaf  3b054c948200         cmp eax, dword ptr [0x82944c]
// 0051eeb5  7503                 jne 0x51eeba
// 0051eeb7  095e68               or dword ptr [esi + 0x68], ebx
// 0051eeba  57                   push edi
// 0051eebb  55                   push ebp
// 0051eebc  56                   push esi
// 0051eebd  e81e030100           call 0x52f1e0
// 0051eec2  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0051eec8  83c40c               add esp, 0xc
// 0051eecb  3b055c948200         cmp eax, dword ptr [0x82945c]
// 0051eed1  7509                 jne 0x51eedc
// 0051eed3  834e6802             or dword ptr [esi + 0x68], 2
// 0051eed7  e954ffffff           jmp 0x51ee30
// 0051eedc  3b054c948200         cmp eax, dword ptr [0x82944c]
// 0051eee2  0f8548ffffff         jne 0x51ee30
// 0051eee8  8b4668               mov eax, dword ptr [esi + 0x68]
// 0051eeeb  a801                 test al, 1
// 0051eeed  0f8597010000         jne 0x51f08a
// 0051eef3  68f4aa8200           push 0x82aaf4
// 0051eef8  56                   push esi
// 0051eef9  e8b2aa0000           call 0x5299b0
// 0051eefe  83c408               add esp, 8
// 0051ef01  5f                   pop edi
// 0051ef02  5e                   pop esi
// 0051ef03  5d                   pop ebp
// 0051ef04  5b                   pop ebx
// 0051ef05  c3                   ret 
// 0051ef06  3b055c948200         cmp eax, dword ptr [0x82945c]
// 0051ef0c  7510                 jne 0x51ef1e
// 0051ef0e  57                   push edi
// 0051ef0f  55                   push ebp
// 0051ef10  56                   push esi
// 0051ef11  e85ae20000           call 0x52d170
// 0051ef16  83c40c               add esp, 0xc
// 0051ef19  e912ffffff           jmp 0x51ee30
// 0051ef1e  3b054c948200         cmp eax, dword ptr [0x82944c]
// 0051ef24  0f8480010000         je 0x51f0aa
// 0051ef2a  57                   push edi
// 0051ef2b  55                   push ebp
// 0051ef2c  56                   push esi
// 0051ef2d  3b0564948200         cmp eax, dword ptr [0x829464]
// 0051ef33  750d                 jne 0x51ef42
// 0051ef35  e8b6f40000           call 0x52e3f0
// 0051ef3a  83c40c               add esp, 0xc
// 0051ef3d  e9eefeffff           jmp 0x51ee30
// 0051ef42  3b056c948200         cmp eax, dword ptr [0x82946c]
// 0051ef48  750d                 jne 0x51ef57
// 0051ef4a  e811e70000           call 0x52d660
// 0051ef4f  83c40c               add esp, 0xc
// 0051ef52  e9d9feffff           jmp 0x51ee30
// 0051ef57  3b0574948200         cmp eax, dword ptr [0x829474]
// 0051ef5d  750d                 jne 0x51ef6c
// 0051ef5f  e8fce30000           call 0x52d360
// 0051ef64  83c40c               add esp, 0xc
// 0051ef67  e9c4feffff           jmp 0x51ee30
// 0051ef6c  3b057c948200         cmp eax, dword ptr [0x82947c]
// 0051ef72  750d                 jne 0x51ef81
// 0051ef74  e897f60000           call 0x52e610
// 0051ef79  83c40c               add esp, 0xc
// 0051ef7c  e9affeffff           jmp 0x51ee30
// 0051ef81  3b0594948200         cmp eax, dword ptr [0x829494]
// 0051ef87  750d                 jne 0x51ef96
// 0051ef89  e822f90000           call 0x52e8b0
// 0051ef8e  83c40c               add esp, 0xc
// 0051ef91  e99afeffff           jmp 0x51ee30
// 0051ef96  3b059c948200         cmp eax, dword ptr [0x82949c]
// 0051ef9c  750d                 jne 0x51efab
// 0051ef9e  e82dfa0000           call 0x52e9d0
// 0051efa3  83c40c               add esp, 0xc
// 0051efa6  e985feffff           jmp 0x51ee30
// 0051efab  3b05a4948200         cmp eax, dword ptr [0x8294a4]
// 0051efb1  750d                 jne 0x51efc0
// 0051efb3  e8d8fc0000           call 0x52ec90
// 0051efb8  83c40c               add esp, 0xc
// 0051efbb  e970feffff           jmp 0x51ee30
// 0051efc0  3b05ac948200         cmp eax, dword ptr [0x8294ac]
// 0051efc6  750d                 jne 0x51efd5
// 0051efc8  e8c3f70000           call 0x52e790
// 0051efcd  83c40c               add esp, 0xc
// 0051efd0  e95bfeffff           jmp 0x51ee30
// 0051efd5  3b05b4948200         cmp eax, dword ptr [0x8294b4]
// 0051efdb  750d                 jne 0x51efea
// 0051efdd  e8fee40000           call 0x52d4e0
// 0051efe2  83c40c               add esp, 0xc
// 0051efe5  e946feffff           jmp 0x51ee30
// 0051efea  3b05c4948200         cmp eax, dword ptr [0x8294c4]
// 0051eff0  750d                 jne 0x51efff
// 0051eff2  e889eb0000           call 0x52db80
// 0051eff7  83c40c               add esp, 0xc
// 0051effa  e931feffff           jmp 0x51ee30
// 0051efff  3b0584948200         cmp eax, dword ptr [0x829484]
// 0051f005  750d                 jne 0x51f014
// 0051f007  e874ed0000           call 0x52dd80
// 0051f00c  83c40c               add esp, 0xc
// 0051f00f  e91cfeffff           jmp 0x51ee30
// 0051f014  3b05bc948200         cmp eax, dword ptr [0x8294bc]
// 0051f01a  750d                 jne 0x51f029
// 0051f01c  e80fef0000           call 0x52df30
// 0051f021  83c40c               add esp, 0xc
// 0051f024  e907feffff           jmp 0x51ee30
// 0051f029  3b05cc948200         cmp eax, dword ptr [0x8294cc]
// 0051f02f  750d                 jne 0x51f03e
// 0051f031  e82aff0000           call 0x52ef60
// 0051f036  83c40c               add esp, 0xc
// 0051f039  e9f2fdffff           jmp 0x51ee30
// 0051f03e  3b05d4948200         cmp eax, dword ptr [0x8294d4]
// 0051f044  750d                 jne 0x51f053
// 0051f046  e805fe0000           call 0x52ee50
// 0051f04b  83c40c               add esp, 0xc
// 0051f04e  e9ddfdffff           jmp 0x51ee30
// 0051f053  3b05dc948200         cmp eax, dword ptr [0x8294dc]
// 0051f059  750d                 jne 0x51f068
// 0051f05b  e820f10000           call 0x52e180
// 0051f060  83c40c               add esp, 0xc
// 0051f063  e9c8fdffff           jmp 0x51ee30
// 0051f068  3b05e4948200         cmp eax, dword ptr [0x8294e4]
// 0051f06e  750d                 jne 0x51f07d
// 0051f070  e80b000100           call 0x52f080
// 0051f075  83c40c               add esp, 0xc
// 0051f078  e9b3fdffff           jmp 0x51ee30
// 0051f07d  e85e010100           call 0x52f1e0
// 0051f082  83c40c               add esp, 0xc
// 0051f085  e9a6fdffff           jmp 0x51ee30
// 0051f08a  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0051f091  7549                 jne 0x51f0dc
// 0051f093  a802                 test al, 2
// 0051f095  7545                 jne 0x51f0dc
// 0051f097  68d8aa8200           push 0x82aad8
// 0051f09c  56                   push esi
// 0051f09d  e80ea90000           call 0x5299b0
// 0051f0a2  83c408               add esp, 8
// 0051f0a5  5f                   pop edi
// 0051f0a6  5e                   pop esi
// 0051f0a7  5d                   pop ebp
// 0051f0a8  5b                   pop ebx
// 0051f0a9  c3                   ret 
// 0051f0aa  8b4668               mov eax, dword ptr [esi + 0x68]
// 0051f0ad  a801                 test al, 1
// 0051f0af  7507                 jne 0x51f0b8
// 0051f0b1  68f4aa8200           push 0x82aaf4
// 0051f0b6  eb12                 jmp 0x51f0ca
// 0051f0b8  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0051f0bf  7512                 jne 0x51f0d3
// 0051f0c1  a802                 test al, 2
// 0051f0c3  750e                 jne 0x51f0d3
// 0051f0c5  68d8aa8200           push 0x82aad8
// 0051f0ca  56                   push esi
// 0051f0cb  e8e0a80000           call 0x5299b0
// 0051f0d0  83c408               add esp, 8
// 0051f0d3  095e68               or dword ptr [esi + 0x68], ebx
// 0051f0d6  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 0051f0dc  5f                   pop edi
// 0051f0dd  5e                   pop esi
// 0051f0de  5d                   pop ebp
// 0051f0df  5b                   pop ebx
// 0051f0e0  c3                   ret 
// library libpng-1.2.6/pngread.c (function _png_read_info)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngread.c
