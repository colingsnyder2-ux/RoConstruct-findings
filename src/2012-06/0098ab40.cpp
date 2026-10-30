// roc 2012-06 0098ab40  unit: CXTPPaintManager  size: 1809 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ab40
//
// 0098ab40  6aff                 push -1
// 0098ab42  6860c1ad00           push 0xadc160
// 0098ab47  64a100000000         mov eax, dword ptr fs:[0]
// 0098ab4d  50                   push eax
// 0098ab4e  83ec4c               sub esp, 0x4c
// 0098ab51  53                   push ebx
// 0098ab52  55                   push ebp
// 0098ab53  56                   push esi
// 0098ab54  57                   push edi
// 0098ab55  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098ab5a  33c4                 xor eax, esp
// 0098ab5c  50                   push eax
// 0098ab5d  8d442460             lea eax, [esp + 0x60]
// 0098ab61  64a300000000         mov dword ptr fs:[0], eax
// 0098ab67  8bf9                 mov edi, ecx
// 0098ab69  8b442478             mov eax, dword ptr [esp + 0x78]
// 0098ab6d  85c0                 test eax, eax
// 0098ab6f  0f85a8030000         jne 0x98af1d
// 0098ab75  39842484000000       cmp dword ptr [esp + 0x84], eax
// 0098ab7c  0f8588000000         jne 0x98ac0a
// 0098ab82  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0098ab89  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0098ab90  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 0098ab96  8b01                 mov eax, dword ptr [ecx]
// 0098ab98  8b4904               mov ecx, dword ptr [ecx + 4]
// 0098ab9b  83fa02               cmp edx, 2
// 0098ab9e  743a                 je 0x98abda
// 0098aba0  83fa03               cmp edx, 3
// 0098aba3  7435                 je 0x98abda
// 0098aba5  83fa05               cmp edx, 5
// 0098aba8  7430                 je 0x98abda
// 0098abaa  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 0098abae  8b2b                 mov ebp, dword ptr [ebx]
// 0098abb0  8d50f3               lea edx, [eax - 0xd]
// 0098abb3  8d78fe               lea edi, [eax - 2]
// 0098abb6  83ec10               sub esp, 0x10
// 0098abb9  8bc4                 mov eax, esp
// 0098abbb  8910                 mov dword ptr [eax], edx
// 0098abbd  be02000000           mov esi, 2
// 0098abc2  897004               mov dword ptr [eax + 4], esi
// 0098abc5  83c1fe               add ecx, -2
// 0098abc8  897808               mov dword ptr [eax + 8], edi
// 0098abcb  89480c               mov dword ptr [eax + 0xc], ecx
// 0098abce  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 0098abd1  8bcb                 mov ecx, ebx
// 0098abd3  ffd0                 call eax
// 0098abd5  e9e3010000           jmp 0x98adbd
// 0098abda  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 0098abde  8b2b                 mov ebp, dword ptr [ebx]
// 0098abe0  8d78fe               lea edi, [eax - 2]
// 0098abe3  83ec10               sub esp, 0x10
// 0098abe6  8bc4                 mov eax, esp
// 0098abe8  8d71f3               lea esi, [ecx - 0xd]
// 0098abeb  ba02000000           mov edx, 2
// 0098abf0  8910                 mov dword ptr [eax], edx
// 0098abf2  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 0098abf5  83c1fe               add ecx, -2
// 0098abf8  897004               mov dword ptr [eax + 4], esi
// 0098abfb  897808               mov dword ptr [eax + 8], edi
// 0098abfe  89480c               mov dword ptr [eax + 0xc], ecx
// 0098ac01  8bcb                 mov ecx, ebx
// 0098ac03  ffd2                 call edx
// 0098ac05  e9b3010000           jmp 0x98adbd
// 0098ac0a  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 0098ac0e  8b07                 mov eax, dword ptr [edi]
// 0098ac10  8b742474             mov esi, dword ptr [esp + 0x74]
// 0098ac14  8b5078               mov edx, dword ptr [eax + 0x78]
// 0098ac17  55                   push ebp
// 0098ac18  56                   push esi
// 0098ac19  ffd2                 call edx
// 0098ac1b  8b07                 mov eax, dword ptr [edi]
// 0098ac1d  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0098ac20  55                   push ebp
// 0098ac21  8bcf                 mov ecx, edi
// 0098ac23  ffd2                 call edx
// 0098ac25  8bbdc0000000         mov edi, dword ptr [ebp + 0xc0]
// 0098ac2b  8b9dc4000000         mov ebx, dword ptr [ebp + 0xc4]
// 0098ac31  8bc8                 mov ecx, eax
// 0098ac33  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0098ac3a  8b10                 mov edx, dword ptr [eax]
// 0098ac3c  8b85c8000000         mov eax, dword ptr [ebp + 0xc8]
// 0098ac42  8badcc000000         mov ebp, dword ptr [ebp + 0xcc]
// 0098ac48  8954247c             mov dword ptr [esp + 0x7c], edx
// 0098ac4c  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0098ac53  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 0098ac59  894c2474             mov dword ptr [esp + 0x74], ecx
// 0098ac5d  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098ac61  83fa02               cmp edx, 2
// 0098ac64  0f847a010000         je 0x98ade4
// 0098ac6a  83fa03               cmp edx, 3
// 0098ac6d  0f8471010000         je 0x98ade4
// 0098ac73  83fa05               cmp edx, 5
// 0098ac76  0f8468010000         je 0x98ade4
// 0098ac7c  2bc7                 sub eax, edi
// 0098ac7e  99                   cdq 
// 0098ac7f  2bc2                 sub eax, edx
// 0098ac81  51                   push ecx
// 0098ac82  8d55fb               lea edx, [ebp - 5]
// 0098ac85  d1f8                 sar eax, 1
// 0098ac87  03c7                 add eax, edi
// 0098ac89  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 0098ac90  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0098ac97  51                   push ecx
// 0098ac98  8d55f9               lea edx, [ebp - 7]
// 0098ac9b  50                   push eax
// 0098ac9c  8d6802               lea ebp, [eax + 2]
// 0098ac9f  52                   push edx
// 0098aca0  896c2424             mov dword ptr [esp + 0x24], ebp
// 0098aca4  8d68fe               lea ebp, [eax - 2]
// 0098aca7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0098acab  50                   push eax
// 0098acac  52                   push edx
// 0098acad  55                   push ebp
// 0098acae  56                   push esi
// 0098acaf  e8ecdbffff           call 0x9888a0
// 0098acb4  83c420               add esp, 0x20
// 0098acb7  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 0098acbc  0f84fb000000         je 0x98adbd
// 0098acc2  85f6                 test esi, esi
// 0098acc4  7504                 jne 0x98acca
// 0098acc6  33c0                 xor eax, eax
// 0098acc8  eb03                 jmp 0x98accd
// 0098acca  8b4604               mov eax, dword ptr [esi + 4]
// 0098accd  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0098acd1  51                   push ecx
// 0098acd2  50                   push eax
// 0098acd3  8d4c242c             lea ecx, [esp + 0x2c]
// 0098acd7  e8f4a80400           call 0x9d55d0
// 0098acdc  8d6b04               lea ebp, [ebx + 4]
// 0098acdf  55                   push ebp
// 0098ace0  8d4702               lea eax, [edi + 2]
// 0098ace3  50                   push eax
// 0098ace4  8d54241c             lea edx, [esp + 0x1c]
// 0098ace8  52                   push edx
// 0098ace9  8bce                 mov ecx, esi
// 0098aceb  c744247400000000     mov dword ptr [esp + 0x74], 0
// 0098acf3  e80a83ffff           call 0x983002
// 0098acf8  8d4306               lea eax, [ebx + 6]
// 0098acfb  50                   push eax
// 0098acfc  89842480000000       mov dword ptr [esp + 0x80], eax
// 0098ad03  8d4704               lea eax, [edi + 4]
// 0098ad06  50                   push eax
// 0098ad07  8bce                 mov ecx, esi
// 0098ad09  e8ee82ffff           call 0x982ffc
// 0098ad0e  83c309               add ebx, 9
// 0098ad11  53                   push ebx
// 0098ad12  8d4f01               lea ecx, [edi + 1]
// 0098ad15  51                   push ecx
// 0098ad16  8bce                 mov ecx, esi
// 0098ad18  e8df82ffff           call 0x982ffc
// 0098ad1d  55                   push ebp
// 0098ad1e  8d5703               lea edx, [edi + 3]
// 0098ad21  52                   push edx
// 0098ad22  8d44241c             lea eax, [esp + 0x1c]
// 0098ad26  50                   push eax
// 0098ad27  8bce                 mov ecx, esi
// 0098ad29  e8d482ffff           call 0x983002
// 0098ad2e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0098ad32  51                   push ecx
// 0098ad33  8d4705               lea eax, [edi + 5]
// 0098ad36  50                   push eax
// 0098ad37  8bce                 mov ecx, esi
// 0098ad39  e8be82ffff           call 0x982ffc
// 0098ad3e  53                   push ebx
// 0098ad3f  8d4702               lea eax, [edi + 2]
// 0098ad42  50                   push eax
// 0098ad43  8bce                 mov ecx, esi
// 0098ad45  e8b282ffff           call 0x982ffc
// 0098ad4a  8d4706               lea eax, [edi + 6]
// 0098ad4d  55                   push ebp
// 0098ad4e  50                   push eax
// 0098ad4f  8d54241c             lea edx, [esp + 0x1c]
// 0098ad53  52                   push edx
// 0098ad54  8bce                 mov ecx, esi
// 0098ad56  89842480000000       mov dword ptr [esp + 0x80], eax
// 0098ad5d  e8a082ffff           call 0x983002
// 0098ad62  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 0098ad66  50                   push eax
// 0098ad67  8d4f08               lea ecx, [edi + 8]
// 0098ad6a  51                   push ecx
// 0098ad6b  8bce                 mov ecx, esi
// 0098ad6d  e88a82ffff           call 0x982ffc
// 0098ad72  53                   push ebx
// 0098ad73  8d4705               lea eax, [edi + 5]
// 0098ad76  50                   push eax
// 0098ad77  8bce                 mov ecx, esi
// 0098ad79  e87e82ffff           call 0x982ffc
// 0098ad7e  55                   push ebp
// 0098ad7f  8d5707               lea edx, [edi + 7]
// 0098ad82  52                   push edx
// 0098ad83  8d44241c             lea eax, [esp + 0x1c]
// 0098ad87  50                   push eax
// 0098ad88  8bce                 mov ecx, esi
// 0098ad8a  e87382ffff           call 0x983002
// 0098ad8f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0098ad93  51                   push ecx
// 0098ad94  83c709               add edi, 9
// 0098ad97  57                   push edi
// 0098ad98  8bce                 mov ecx, esi
// 0098ad9a  e85d82ffff           call 0x982ffc
// 0098ad9f  8b542474             mov edx, dword ptr [esp + 0x74]
// 0098ada3  53                   push ebx
// 0098ada4  52                   push edx
// 0098ada5  8bce                 mov ecx, esi
// 0098ada7  e85082ffff           call 0x982ffc
// 0098adac  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0098adb4  8d4c2424             lea ecx, [esp + 0x24]
// 0098adb8  e8a3a80400           call 0x9d5660
// 0098adbd  8b442470             mov eax, dword ptr [esp + 0x70]
// 0098adc1  c7400400000000       mov dword ptr [eax + 4], 0
// 0098adc8  c70000000000         mov dword ptr [eax], 0
// 0098adce  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0098add2  64890d00000000       mov dword ptr fs:[0], ecx
// 0098add9  59                   pop ecx
// 0098adda  5f                   pop edi
// 0098addb  5e                   pop esi
// 0098addc  5d                   pop ebp
// 0098addd  5b                   pop ebx
// 0098adde  83c458               add esp, 0x58
// 0098ade1  c21c00               ret 0x1c
// 0098ade4  51                   push ecx
// 0098ade5  8d6b05               lea ebp, [ebx + 5]
// 0098ade8  55                   push ebp
// 0098ade9  83c704               add edi, 4
// 0098adec  57                   push edi
// 0098aded  8d4d02               lea ecx, [ebp + 2]
// 0098adf0  51                   push ecx
// 0098adf1  8d4702               lea eax, [edi + 2]
// 0098adf4  50                   push eax
// 0098adf5  8d55fe               lea edx, [ebp - 2]
// 0098adf8  52                   push edx
// 0098adf9  50                   push eax
// 0098adfa  56                   push esi
// 0098adfb  e8a0daffff           call 0x9888a0
// 0098ae00  83c420               add esp, 0x20
// 0098ae03  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 0098ae08  74b3                 je 0x98adbd
// 0098ae0a  85f6                 test esi, esi
// 0098ae0c  7504                 jne 0x98ae12
// 0098ae0e  33c0                 xor eax, eax
// 0098ae10  eb03                 jmp 0x98ae15
// 0098ae12  8b4604               mov eax, dword ptr [esi + 4]
// 0098ae15  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0098ae19  51                   push ecx
// 0098ae1a  50                   push eax
// 0098ae1b  8d4c2440             lea ecx, [esp + 0x40]
// 0098ae1f  e8aca70400           call 0x9d55d0
// 0098ae24  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0098ae28  8d4302               lea eax, [ebx + 2]
// 0098ae2b  50                   push eax
// 0098ae2c  83c7f8               add edi, -8
// 0098ae2f  57                   push edi
// 0098ae30  8d54241c             lea edx, [esp + 0x1c]
// 0098ae34  52                   push edx
// 0098ae35  8bce                 mov ecx, esi
// 0098ae37  c744247401000000     mov dword ptr [esp + 0x74], 1
// 0098ae3f  e8be81ffff           call 0x983002
// 0098ae44  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098ae48  8d4b04               lea ecx, [ebx + 4]
// 0098ae4b  83c0fa               add eax, -6
// 0098ae4e  51                   push ecx
// 0098ae4f  50                   push eax
// 0098ae50  8bce                 mov ecx, esi
// 0098ae52  8944247c             mov dword ptr [esp + 0x7c], eax
// 0098ae56  e8a181ffff           call 0x982ffc
// 0098ae5b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098ae5f  8d5301               lea edx, [ebx + 1]
// 0098ae62  83c0fd               add eax, -3
// 0098ae65  52                   push edx
// 0098ae66  50                   push eax
// 0098ae67  8bce                 mov ecx, esi
// 0098ae69  89842490000000       mov dword ptr [esp + 0x90], eax
// 0098ae70  e88781ffff           call 0x982ffc
// 0098ae75  8d4303               lea eax, [ebx + 3]
// 0098ae78  50                   push eax
// 0098ae79  57                   push edi
// 0098ae7a  8d4c241c             lea ecx, [esp + 0x1c]
// 0098ae7e  51                   push ecx
// 0098ae7f  8bce                 mov ecx, esi
// 0098ae81  e87c81ffff           call 0x983002
// 0098ae86  8b542474             mov edx, dword ptr [esp + 0x74]
// 0098ae8a  55                   push ebp
// 0098ae8b  52                   push edx
// 0098ae8c  8bce                 mov ecx, esi
// 0098ae8e  e86981ffff           call 0x982ffc
// 0098ae93  8d4302               lea eax, [ebx + 2]
// 0098ae96  50                   push eax
// 0098ae97  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0098ae9e  50                   push eax
// 0098ae9f  8bce                 mov ecx, esi
// 0098aea1  e85681ffff           call 0x982ffc
// 0098aea6  8d4306               lea eax, [ebx + 6]
// 0098aea9  50                   push eax
// 0098aeaa  57                   push edi
// 0098aeab  8d4c241c             lea ecx, [esp + 0x1c]
// 0098aeaf  51                   push ecx
// 0098aeb0  8bce                 mov ecx, esi
// 0098aeb2  89842488000000       mov dword ptr [esp + 0x88], eax
// 0098aeb9  e84481ffff           call 0x983002
// 0098aebe  8b442474             mov eax, dword ptr [esp + 0x74]
// 0098aec2  8d5308               lea edx, [ebx + 8]
// 0098aec5  52                   push edx
// 0098aec6  50                   push eax
// 0098aec7  8bce                 mov ecx, esi
// 0098aec9  e82e81ffff           call 0x982ffc
// 0098aece  55                   push ebp
// 0098aecf  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0098aed6  55                   push ebp
// 0098aed7  8bce                 mov ecx, esi
// 0098aed9  e81e81ffff           call 0x982ffc
// 0098aede  8d4b07               lea ecx, [ebx + 7]
// 0098aee1  51                   push ecx
// 0098aee2  57                   push edi
// 0098aee3  8d54241c             lea edx, [esp + 0x1c]
// 0098aee7  52                   push edx
// 0098aee8  8bce                 mov ecx, esi
// 0098aeea  e81381ffff           call 0x983002
// 0098aeef  8b442474             mov eax, dword ptr [esp + 0x74]
// 0098aef3  83c309               add ebx, 9
// 0098aef6  53                   push ebx
// 0098aef7  50                   push eax
// 0098aef8  8bce                 mov ecx, esi
// 0098aefa  e8fd80ffff           call 0x982ffc
// 0098aeff  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0098af03  51                   push ecx
// 0098af04  55                   push ebp
// 0098af05  8bce                 mov ecx, esi
// 0098af07  e8f080ffff           call 0x982ffc
// 0098af0c  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0098af14  8d4c2438             lea ecx, [esp + 0x38]
// 0098af18  e99bfeffff           jmp 0x98adb8
// 0098af1d  83f803               cmp eax, 3
// 0098af20  0f85b6000000         jne 0x98afdc
// 0098af26  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 0098af2a  8b17                 mov edx, dword ptr [edi]
// 0098af2c  8b442474             mov eax, dword ptr [esp + 0x74]
// 0098af30  8b5278               mov edx, dword ptr [edx + 0x78]
// 0098af33  56                   push esi
// 0098af34  50                   push eax
// 0098af35  ffd2                 call edx
// 0098af37  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0098af3d  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0098af43  8b17                 mov edx, dword ptr [edi]
// 0098af45  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 0098af4b  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 0098af51  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098af55  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0098af58  894c2430             mov dword ptr [esp + 0x30], ecx
// 0098af5c  56                   push esi
// 0098af5d  8bcf                 mov ecx, edi
// 0098af5f  ffd0                 call eax
// 0098af61  8b16                 mov edx, dword ptr [esi]
// 0098af63  8944247c             mov dword ptr [esp + 0x7c], eax
// 0098af67  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0098af6a  8bce                 mov ecx, esi
// 0098af6c  ffd0                 call eax
// 0098af6e  85c0                 test eax, eax
// 0098af70  7525                 jne 0x98af97
// 0098af72  8b16                 mov edx, dword ptr [esi]
// 0098af74  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0098af7a  8bce                 mov ecx, esi
// 0098af7c  ffd0                 call eax
// 0098af7e  85c0                 test eax, eax
// 0098af80  7515                 jne 0x98af97
// 0098af82  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0098af85  83f8ff               cmp eax, -1
// 0098af88  7509                 jne 0x98af93
// 0098af8a  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0098af8d  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0098af91  eb04                 jmp 0x98af97
// 0098af93  8944247c             mov dword ptr [esp + 0x7c], eax
// 0098af97  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098af9b  2bc3                 sub eax, ebx
// 0098af9d  99                   cdq 
// 0098af9e  2bc2                 sub eax, edx
// 0098afa0  8bc8                 mov ecx, eax
// 0098afa2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098afa6  2bc5                 sub eax, ebp
// 0098afa8  99                   cdq 
// 0098afa9  2bc2                 sub eax, edx
// 0098afab  d1f9                 sar ecx, 1
// 0098afad  03cb                 add ecx, ebx
// 0098afaf  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 0098afb3  d1f8                 sar eax, 1
// 0098afb5  53                   push ebx
// 0098afb6  03c5                 add eax, ebp
// 0098afb8  8d5001               lea edx, [eax + 1]
// 0098afbb  52                   push edx
// 0098afbc  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0098afc0  51                   push ecx
// 0098afc1  83c0fe               add eax, -2
// 0098afc4  50                   push eax
// 0098afc5  8d7103               lea esi, [ecx + 3]
// 0098afc8  56                   push esi
// 0098afc9  50                   push eax
// 0098afca  8d79fd               lea edi, [ecx - 3]
// 0098afcd  57                   push edi
// 0098afce  52                   push edx
// 0098afcf  e8ccd8ffff           call 0x9888a0
// 0098afd4  83c420               add esp, 0x20
// 0098afd7  e9e1fdffff           jmp 0x98adbd
// 0098afdc  83f802               cmp eax, 2
// 0098afdf  0f851f010000         jne 0x98b104
// 0098afe5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0098afed  c74424145007b600     mov dword ptr [esp + 0x14], 0xb60750
// 0098aff5  8b742474             mov esi, dword ptr [esp + 0x74]
// 0098aff9  89442468             mov dword ptr [esp + 0x68], eax
// 0098affd  8b4608               mov eax, dword ptr [esi + 8]
// 0098b000  6a58                 push 0x58
// 0098b002  50                   push eax
// 0098b003  ff154821b200         call dword ptr [0xb22148]
// 0098b009  6a00                 push 0
// 0098b00b  6854d2c000           push 0xc0d254
// 0098b010  50                   push eax
// 0098b011  6a60                 push 0x60
// 0098b013  6a50                 push 0x50
// 0098b015  ff150423b200         call dword ptr [0xb22304]
// 0098b01b  50                   push eax
// 0098b01c  8d4c2420             lea ecx, [esp + 0x20]
// 0098b020  e87de51000           call 0xa995a2
// 0098b025  8b16                 mov edx, dword ptr [esi]
// 0098b027  8b5230               mov edx, dword ptr [edx + 0x30]
// 0098b02a  8d442414             lea eax, [esp + 0x14]
// 0098b02e  50                   push eax
// 0098b02f  8bce                 mov ecx, esi
// 0098b031  ffd2                 call edx
// 0098b033  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 0098b037  89442474             mov dword ptr [esp + 0x74], eax
// 0098b03b  8b07                 mov eax, dword ptr [edi]
// 0098b03d  8b5078               mov edx, dword ptr [eax + 0x78]
// 0098b040  53                   push ebx
// 0098b041  56                   push esi
// 0098b042  8bcf                 mov ecx, edi
// 0098b044  ffd2                 call edx
// 0098b046  8b03                 mov eax, dword ptr [ebx]
// 0098b048  8b5078               mov edx, dword ptr [eax + 0x78]
// 0098b04b  8bcb                 mov ecx, ebx
// 0098b04d  ffd2                 call edx
// 0098b04f  85c0                 test eax, eax
// 0098b051  7532                 jne 0x98b085
// 0098b053  8b03                 mov eax, dword ptr [ebx]
// 0098b055  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0098b058  8bcb                 mov ecx, ebx
// 0098b05a  ffd2                 call edx
// 0098b05c  85c0                 test eax, eax
// 0098b05e  7525                 jne 0x98b085
// 0098b060  8b475c               mov eax, dword ptr [edi + 0x5c]
// 0098b063  83f8ff               cmp eax, -1
// 0098b066  750f                 jne 0x98b077
// 0098b068  8b7f58               mov edi, dword ptr [edi + 0x58]
// 0098b06b  8b06                 mov eax, dword ptr [esi]
// 0098b06d  8b5038               mov edx, dword ptr [eax + 0x38]
// 0098b070  57                   push edi
// 0098b071  8bce                 mov ecx, esi
// 0098b073  ffd2                 call edx
// 0098b075  eb22                 jmp 0x98b099
// 0098b077  8bf8                 mov edi, eax
// 0098b079  8b06                 mov eax, dword ptr [esi]
// 0098b07b  8b5038               mov edx, dword ptr [eax + 0x38]
// 0098b07e  57                   push edi
// 0098b07f  8bce                 mov ecx, esi
// 0098b081  ffd2                 call edx
// 0098b083  eb14                 jmp 0x98b099
// 0098b085  8b07                 mov eax, dword ptr [edi]
// 0098b087  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0098b08a  8b2e                 mov ebp, dword ptr [esi]
// 0098b08c  53                   push ebx
// 0098b08d  8bcf                 mov ecx, edi
// 0098b08f  ffd2                 call edx
// 0098b091  50                   push eax
// 0098b092  8b4538               mov eax, dword ptr [ebp + 0x38]
// 0098b095  8bce                 mov ecx, esi
// 0098b097  ffd0                 call eax
// 0098b099  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 0098b09f  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 0098b0a5  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 0098b0ab  6a25                 push 0x25
// 0098b0ad  89442430             mov dword ptr [esp + 0x30], eax
// 0098b0b1  8d442428             lea eax, [esp + 0x28]
// 0098b0b5  894c2428             mov dword ptr [esp + 0x28], ecx
// 0098b0b9  8b8bcc000000         mov ecx, dword ptr [ebx + 0xcc]
// 0098b0bf  50                   push eax
// 0098b0c0  89542430             mov dword ptr [esp + 0x30], edx
// 0098b0c4  8b16                 mov edx, dword ptr [esi]
// 0098b0c6  8b5270               mov edx, dword ptr [edx + 0x70]
// 0098b0c9  6a01                 push 1
// 0098b0cb  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0098b0cf  685c39b800           push 0xb8395c
// 0098b0d4  8bce                 mov ecx, esi
// 0098b0d6  ffd2                 call edx
// 0098b0d8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0098b0dc  8b06                 mov eax, dword ptr [esi]
// 0098b0de  8b5030               mov edx, dword ptr [eax + 0x30]
// 0098b0e1  51                   push ecx
// 0098b0e2  8bce                 mov ecx, esi
// 0098b0e4  ffd2                 call edx
// 0098b0e6  8d4c2414             lea ecx, [esp + 0x14]
// 0098b0ea  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0098b0f2  c74424145007b600     mov dword ptr [esp + 0x14], 0xb60750
// 0098b0fa  e801bba8ff           call 0x416c00
// 0098b0ff  e9b9fcffff           jmp 0x98adbd
// 0098b104  83f801               cmp eax, 1
// 0098b107  0f85b0fcffff         jne 0x98adbd
// 0098b10d  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 0098b115  0f8426010000         je 0x98b241
// 0098b11b  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 0098b11f  8b07                 mov eax, dword ptr [edi]
// 0098b121  8b742474             mov esi, dword ptr [esp + 0x74]
// 0098b125  8b5078               mov edx, dword ptr [eax + 0x78]
// 0098b128  53                   push ebx
// 0098b129  56                   push esi
// 0098b12a  ffd2                 call edx
// 0098b12c  8d442424             lea eax, [esp + 0x24]
// 0098b130  50                   push eax
// 0098b131  8bcb                 mov ecx, ebx
// 0098b133  e83895ffff           call 0x984670
// 0098b138  8d4c2414             lea ecx, [esp + 0x14]
// 0098b13c  51                   push ecx
// 0098b13d  8d4c2428             lea ecx, [esp + 0x28]
// 0098b141  e89aeca9ff           call 0x429de0
// 0098b146  8b18                 mov ebx, dword ptr [eax]
// 0098b148  85f6                 test esi, esi
// 0098b14a  7504                 jne 0x98b150
// 0098b14c  33c0                 xor eax, eax
// 0098b14e  eb03                 jmp 0x98b153
// 0098b150  8b4604               mov eax, dword ptr [esi + 4]
// 0098b153  6a00                 push 0
// 0098b155  50                   push eax
// 0098b156  8d4c2454             lea ecx, [esp + 0x54]
// 0098b15a  e871a40400           call 0x9d55d0
// 0098b15f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0098b163  8d4702               lea eax, [edi + 2]
// 0098b166  50                   push eax
// 0098b167  8d6bfe               lea ebp, [ebx - 2]
// 0098b16a  55                   push ebp
// 0098b16b  8d54241c             lea edx, [esp + 0x1c]
// 0098b16f  52                   push edx
// 0098b170  8bce                 mov ecx, esi
// 0098b172  c744247403000000     mov dword ptr [esp + 0x74], 3
// 0098b17a  e8837effff           call 0x983002
// 0098b17f  8d4704               lea eax, [edi + 4]
// 0098b182  50                   push eax
// 0098b183  53                   push ebx
// 0098b184  8bce                 mov ecx, esi
// 0098b186  e8717effff           call 0x982ffc
// 0098b18b  8d4f01               lea ecx, [edi + 1]
// 0098b18e  8d4303               lea eax, [ebx + 3]
// 0098b191  51                   push ecx
// 0098b192  50                   push eax
// 0098b193  8bce                 mov ecx, esi
// 0098b195  89842484000000       mov dword ptr [esp + 0x84], eax
// 0098b19c  e85b7effff           call 0x982ffc
// 0098b1a1  8d5703               lea edx, [edi + 3]
// 0098b1a4  52                   push edx
// 0098b1a5  55                   push ebp
// 0098b1a6  8d44241c             lea eax, [esp + 0x1c]
// 0098b1aa  50                   push eax
// 0098b1ab  8bce                 mov ecx, esi
// 0098b1ad  e8507effff           call 0x983002
// 0098b1b2  8d4705               lea eax, [edi + 5]
// 0098b1b5  50                   push eax
// 0098b1b6  53                   push ebx
// 0098b1b7  8bce                 mov ecx, esi
// 0098b1b9  e83e7effff           call 0x982ffc
// 0098b1be  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0098b1c2  8d4702               lea eax, [edi + 2]
// 0098b1c5  50                   push eax
// 0098b1c6  51                   push ecx
// 0098b1c7  8bce                 mov ecx, esi
// 0098b1c9  e82e7effff           call 0x982ffc
// 0098b1ce  8d4706               lea eax, [edi + 6]
// 0098b1d1  50                   push eax
// 0098b1d2  55                   push ebp
// 0098b1d3  8d54241c             lea edx, [esp + 0x1c]
// 0098b1d7  52                   push edx
// 0098b1d8  8bce                 mov ecx, esi
// 0098b1da  89842480000000       mov dword ptr [esp + 0x80], eax
// 0098b1e1  e81c7effff           call 0x983002
// 0098b1e6  8d4708               lea eax, [edi + 8]
// 0098b1e9  50                   push eax
// 0098b1ea  53                   push ebx
// 0098b1eb  8bce                 mov ecx, esi
// 0098b1ed  e80a7effff           call 0x982ffc
// 0098b1f2  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0098b1f6  8d4705               lea eax, [edi + 5]
// 0098b1f9  50                   push eax
// 0098b1fa  51                   push ecx
// 0098b1fb  8bce                 mov ecx, esi
// 0098b1fd  e8fa7dffff           call 0x982ffc
// 0098b202  8d5707               lea edx, [edi + 7]
// 0098b205  52                   push edx
// 0098b206  55                   push ebp
// 0098b207  8d442424             lea eax, [esp + 0x24]
// 0098b20b  50                   push eax
// 0098b20c  8bce                 mov ecx, esi
// 0098b20e  e8ef7dffff           call 0x983002
// 0098b213  83c709               add edi, 9
// 0098b216  57                   push edi
// 0098b217  53                   push ebx
// 0098b218  8bce                 mov ecx, esi
// 0098b21a  e8dd7dffff           call 0x982ffc
// 0098b21f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0098b223  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0098b227  51                   push ecx
// 0098b228  52                   push edx
// 0098b229  8bce                 mov ecx, esi
// 0098b22b  e8cc7dffff           call 0x982ffc
// 0098b230  8d4c244c             lea ecx, [esp + 0x4c]
// 0098b234  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 0098b23c  e81fa40400           call 0x9d5660
// 0098b241  8b442470             mov eax, dword ptr [esp + 0x70]
// 0098b245  c740040c000000       mov dword ptr [eax + 4], 0xc
// 0098b24c  e977fbffff           jmp 0x98adc8
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp