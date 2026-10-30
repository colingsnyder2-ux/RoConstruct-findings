// roc 2011-06 008f5d80  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 1198 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f5d80
//
// 008f5d80  6aff                 push -1
// 008f5d82  6806eea000           push 0xa0ee06
// 008f5d87  64a100000000         mov eax, dword ptr fs:[0]
// 008f5d8d  50                   push eax
// 008f5d8e  83ec08               sub esp, 8
// 008f5d91  55                   push ebp
// 008f5d92  56                   push esi
// 008f5d93  57                   push edi
// 008f5d94  a12058c900           mov eax, dword ptr [0xc95820]
// 008f5d99  33c4                 xor eax, esp
// 008f5d9b  50                   push eax
// 008f5d9c  8d442418             lea eax, [esp + 0x18]
// 008f5da0  64a300000000         mov dword ptr fs:[0], eax
// 008f5da6  8bf1                 mov esi, ecx
// 008f5da8  e8d3f8ffff           call 0x8f5680
// 008f5dad  e89e88ffff           call 0x8ee650
// 008f5db2  8bc8                 mov ecx, eax
// 008f5db4  e8776fffff           call 0x8ecd30
// 008f5db9  85c0                 test eax, eax
// 008f5dbb  0f8467030000         je 0x8f6128
// 008f5dc1  51                   push ecx
// 008f5dc2  8bcc                 mov ecx, esp
// 008f5dc4  89642414             mov dword ptr [esp + 0x14], esp
// 008f5dc8  33ff                 xor edi, edi
// 008f5dca  6850aaad00           push 0xadaa50
// 008f5dcf  89becc000000         mov dword ptr [esi + 0xcc], edi
// 008f5dd5  ff15002ea400         call dword ptr [0xa42e00]
// 008f5ddb  51                   push ecx
// 008f5ddc  8bcc                 mov ecx, esp
// 008f5dde  8964241c             mov dword ptr [esp + 0x1c], esp
// 008f5de2  6844aaad00           push 0xadaa44
// 008f5de7  897c242c             mov dword ptr [esp + 0x2c], edi
// 008f5deb  ff15002ea400         call dword ptr [0xa42e00]
// 008f5df1  c644242801           mov byte ptr [esp + 0x28], 1
// 008f5df6  e85588ffff           call 0x8ee650
// 008f5dfb  83cfff               or edi, 0xffffffff
// 008f5dfe  8bc8                 mov ecx, eax
// 008f5e00  897c2428             mov dword ptr [esp + 0x28], edi
// 008f5e04  e84781ffff           call 0x8edf50
// 008f5e09  894648               mov dword ptr [esi + 0x48], eax
// 008f5e0c  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008f5e0f  3bc7                 cmp eax, edi
// 008f5e11  7503                 jne 0x8f5e16
// 008f5e13  8b4648               mov eax, dword ptr [esi + 0x48]
// 008f5e16  51                   push ecx
// 008f5e17  8bcc                 mov ecx, esp
// 008f5e19  89642418             mov dword ptr [esp + 0x18], esp
// 008f5e1d  6838aaad00           push 0xadaa38
// 008f5e22  898654010000         mov dword ptr [esi + 0x154], eax
// 008f5e28  ff15002ea400         call dword ptr [0xa42e00]
// 008f5e2e  51                   push ecx
// 008f5e2f  8bcc                 mov ecx, esp
// 008f5e31  89642418             mov dword ptr [esp + 0x18], esp
// 008f5e35  6844aaad00           push 0xadaa44
// 008f5e3a  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 008f5e42  ff15002ea400         call dword ptr [0xa42e00]
// 008f5e48  c644242803           mov byte ptr [esp + 0x28], 3
// 008f5e4d  e8fe87ffff           call 0x8ee650
// 008f5e52  8bc8                 mov ecx, eax
// 008f5e54  897c2428             mov dword ptr [esp + 0x28], edi
// 008f5e58  e8f380ffff           call 0x8edf50
// 008f5e5d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008f5e63  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 008f5e69  3bc7                 cmp eax, edi
// 008f5e6b  7506                 jne 0x8f5e73
// 008f5e6d  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 008f5e73  51                   push ecx
// 008f5e74  8bcc                 mov ecx, esp
// 008f5e76  89642418             mov dword ptr [esp + 0x18], esp
// 008f5e7a  682caaad00           push 0xadaa2c
// 008f5e7f  898648010000         mov dword ptr [esi + 0x148], eax
// 008f5e85  ff15002ea400         call dword ptr [0xa42e00]
// 008f5e8b  51                   push ecx
// 008f5e8c  8bcc                 mov ecx, esp
// 008f5e8e  89642418             mov dword ptr [esp + 0x18], esp
// 008f5e92  6844aaad00           push 0xadaa44
// 008f5e97  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 008f5e9f  ff15002ea400         call dword ptr [0xa42e00]
// 008f5ea5  c644242805           mov byte ptr [esp + 0x28], 5
// 008f5eaa  e8a187ffff           call 0x8ee650
// 008f5eaf  8bc8                 mov ecx, eax
// 008f5eb1  897c2428             mov dword ptr [esp + 0x28], edi
// 008f5eb5  e89680ffff           call 0x8edf50
// 008f5eba  898630010000         mov dword ptr [esi + 0x130], eax
// 008f5ec0  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 008f5ec6  3bc7                 cmp eax, edi
// 008f5ec8  7506                 jne 0x8f5ed0
// 008f5eca  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008f5ed0  51                   push ecx
// 008f5ed1  8bcc                 mov ecx, esp
// 008f5ed3  89642418             mov dword ptr [esp + 0x18], esp
// 008f5ed7  686c02ad00           push 0xad026c
// 008f5edc  898660010000         mov dword ptr [esi + 0x160], eax
// 008f5ee2  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008f5eec  ff15002ea400         call dword ptr [0xa42e00]
// 008f5ef2  51                   push ecx
// 008f5ef3  8bcc                 mov ecx, esp
// 008f5ef5  89642418             mov dword ptr [esp + 0x18], esp
// 008f5ef9  686402ad00           push 0xad0264
// 008f5efe  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 008f5f06  ff15002ea400         call dword ptr [0xa42e00]
// 008f5f0c  c644242807           mov byte ptr [esp + 0x28], 7
// 008f5f11  e83a87ffff           call 0x8ee650
// 008f5f16  8bc8                 mov ecx, eax
// 008f5f18  897c2428             mov dword ptr [esp + 0x28], edi
// 008f5f1c  e82f80ffff           call 0x8edf50
// 008f5f21  8d6e04               lea ebp, [esi + 4]
// 008f5f24  50                   push eax
// 008f5f25  8bcd                 mov ecx, ebp
// 008f5f27  e804f4f4ff           call 0x845330
// 008f5f2c  55                   push ebp
// 008f5f2d  8d4e24               lea ecx, [esi + 0x24]
// 008f5f30  e8fbe9f4ff           call 0x844930
// 008f5f35  51                   push ecx
// 008f5f36  8bcc                 mov ecx, esp
// 008f5f38  89642418             mov dword ptr [esp + 0x18], esp
// 008f5f3c  683810ad00           push 0xad1038
// 008f5f41  ff15002ea400         call dword ptr [0xa42e00]
// 008f5f47  51                   push ecx
// 008f5f48  8bcc                 mov ecx, esp
// 008f5f4a  89642418             mov dword ptr [esp + 0x18], esp
// 008f5f4e  685cd0ac00           push 0xacd05c
// 008f5f53  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 008f5f5b  ff15002ea400         call dword ptr [0xa42e00]
// 008f5f61  c644242809           mov byte ptr [esp + 0x28], 9
// 008f5f66  e8e586ffff           call 0x8ee650
// 008f5f6b  8bc8                 mov ecx, eax
// 008f5f6d  897c2428             mov dword ptr [esp + 0x28], edi
// 008f5f71  e8da7fffff           call 0x8edf50
// 008f5f76  51                   push ecx
// 008f5f77  8bcc                 mov ecx, esp
// 008f5f79  89642418             mov dword ptr [esp + 0x18], esp
// 008f5f7d  68540fad00           push 0xad0f54
// 008f5f82  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008f5f88  ff15002ea400         call dword ptr [0xa42e00]
// 008f5f8e  51                   push ecx
// 008f5f8f  8bcc                 mov ecx, esp
// 008f5f91  89642418             mov dword ptr [esp + 0x18], esp
// 008f5f95  685cd0ac00           push 0xacd05c
// 008f5f9a  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 008f5fa2  ff15002ea400         call dword ptr [0xa42e00]
// 008f5fa8  c64424280b           mov byte ptr [esp + 0x28], 0xb
// 008f5fad  e89e86ffff           call 0x8ee650
// 008f5fb2  8bc8                 mov ecx, eax
// 008f5fb4  897c2428             mov dword ptr [esp + 0x28], edi
// 008f5fb8  e8937fffff           call 0x8edf50
// 008f5fbd  51                   push ecx
// 008f5fbe  8bcc                 mov ecx, esp
// 008f5fc0  89642418             mov dword ptr [esp + 0x18], esp
// 008f5fc4  68ac0fad00           push 0xad0fac
// 008f5fc9  894678               mov dword ptr [esi + 0x78], eax
// 008f5fcc  ff15002ea400         call dword ptr [0xa42e00]
// 008f5fd2  51                   push ecx
// 008f5fd3  8bcc                 mov ecx, esp
// 008f5fd5  89642418             mov dword ptr [esp + 0x18], esp
// 008f5fd9  685cd0ac00           push 0xacd05c
// 008f5fde  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 008f5fe6  ff15002ea400         call dword ptr [0xa42e00]
// 008f5fec  c64424280d           mov byte ptr [esp + 0x28], 0xd
// 008f5ff1  e85a86ffff           call 0x8ee650
// 008f5ff6  897c2428             mov dword ptr [esp + 0x28], edi
// 008f5ffa  8bc8                 mov ecx, eax
// 008f5ffc  e84f7fffff           call 0x8edf50
// 008f6001  51                   push ecx
// 008f6002  8bcc                 mov ecx, esp
// 008f6004  89642418             mov dword ptr [esp + 0x18], esp
// 008f6008  689410ad00           push 0xad1094
// 008f600d  898684000000         mov dword ptr [esi + 0x84], eax
// 008f6013  ff15002ea400         call dword ptr [0xa42e00]
// 008f6019  51                   push ecx
// 008f601a  8bcc                 mov ecx, esp
// 008f601c  89642418             mov dword ptr [esp + 0x18], esp
// 008f6020  685cd0ac00           push 0xacd05c
// 008f6025  c744242c0e000000     mov dword ptr [esp + 0x2c], 0xe
// 008f602d  ff15002ea400         call dword ptr [0xa42e00]
// 008f6033  c64424280f           mov byte ptr [esp + 0x28], 0xf
// 008f6038  e81386ffff           call 0x8ee650
// 008f603d  8bc8                 mov ecx, eax
// 008f603f  897c2428             mov dword ptr [esp + 0x28], edi
// 008f6043  e8087fffff           call 0x8edf50
// 008f6048  51                   push ecx
// 008f6049  8bcc                 mov ecx, esp
// 008f604b  89642418             mov dword ptr [esp + 0x18], esp
// 008f604f  685402ad00           push 0xad0254
// 008f6054  89860c020000         mov dword ptr [esi + 0x20c], eax
// 008f605a  ff15002ea400         call dword ptr [0xa42e00]
// 008f6060  51                   push ecx
// 008f6061  8bcc                 mov ecx, esp
// 008f6063  89642418             mov dword ptr [esp + 0x18], esp
// 008f6067  686402ad00           push 0xad0264
// 008f606c  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 008f6074  ff15002ea400         call dword ptr [0xa42e00]
// 008f607a  c644242811           mov byte ptr [esp + 0x28], 0x11
// 008f607f  e8cc85ffff           call 0x8ee650
// 008f6084  8bc8                 mov ecx, eax
// 008f6086  897c2428             mov dword ptr [esp + 0x28], edi
// 008f608a  e8c17effff           call 0x8edf50
// 008f608f  51                   push ecx
// 008f6090  8bcc                 mov ecx, esp
// 008f6092  89642418             mov dword ptr [esp + 0x18], esp
// 008f6096  685402ad00           push 0xad0254
// 008f609b  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008f60a1  ff15002ea400         call dword ptr [0xa42e00]
// 008f60a7  51                   push ecx
// 008f60a8  8bcc                 mov ecx, esp
// 008f60aa  89642418             mov dword ptr [esp + 0x18], esp
// 008f60ae  686402ad00           push 0xad0264
// 008f60b3  c744242c12000000     mov dword ptr [esp + 0x2c], 0x12
// 008f60bb  ff15002ea400         call dword ptr [0xa42e00]
// 008f60c1  c644242813           mov byte ptr [esp + 0x28], 0x13
// 008f60c6  e88585ffff           call 0x8ee650
// 008f60cb  8bc8                 mov ecx, eax
// 008f60cd  897c2428             mov dword ptr [esp + 0x28], edi
// 008f60d1  e87a7effff           call 0x8edf50
// 008f60d6  51                   push ecx
// 008f60d7  8bcc                 mov ecx, esp
// 008f60d9  89642418             mov dword ptr [esp + 0x18], esp
// 008f60dd  684402ad00           push 0xad0244
// 008f60e2  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008f60e8  ff15002ea400         call dword ptr [0xa42e00]
// 008f60ee  51                   push ecx
// 008f60ef  8bcc                 mov ecx, esp
// 008f60f1  89642418             mov dword ptr [esp + 0x18], esp
// 008f60f5  686402ad00           push 0xad0264
// 008f60fa  c744242c14000000     mov dword ptr [esp + 0x2c], 0x14
// 008f6102  ff15002ea400         call dword ptr [0xa42e00]
// 008f6108  c644242815           mov byte ptr [esp + 0x28], 0x15
// 008f610d  e83e85ffff           call 0x8ee650
// 008f6112  8bc8                 mov ecx, eax
// 008f6114  897c2428             mov dword ptr [esp + 0x28], edi
// 008f6118  e8337effff           call 0x8edf50
// 008f611d  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008f6123  e9e9000000           jmp 0x8f6211
// 008f6128  e8b3f2f4ff           call 0x8453e0
// 008f612d  6a21                 push 0x21
// 008f612f  8bc8                 mov ecx, eax
// 008f6131  e87aeaf4ff           call 0x844bb0
// 008f6136  898690000000         mov dword ptr [esi + 0x90], eax
// 008f613c  e89ff2f4ff           call 0x8453e0
// 008f6141  6a12                 push 0x12
// 008f6143  8bc8                 mov ecx, eax
// 008f6145  e866eaf4ff           call 0x844bb0
// 008f614a  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008f6150  c746483b619c00       mov dword ptr [esi + 0x48], 0x9c613b
// 008f6157  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008f615a  83f8ff               cmp eax, -1
// 008f615d  7503                 jne 0x8f6162
// 008f615f  8b4648               mov eax, dword ptr [esi + 0x48]
// 008f6162  898654010000         mov dword ptr [esi + 0x154], eax
// 008f6168  b800359a00           mov eax, 0x9a3500
// 008f616d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008f6173  898648010000         mov dword ptr [esi + 0x148], eax
// 008f6179  b875a6f100           mov eax, 0xf1a675
// 008f617e  68ffc06f00           push 0x6fc0ff
// 008f6183  8d8ee0000000         lea ecx, [esi + 0xe0]
// 008f6189  898630010000         mov dword ptr [esi + 0x130], eax
// 008f618f  898660010000         mov dword ptr [esi + 0x160], eax
// 008f6195  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008f619f  e88cf1f4ff           call 0x845330
// 008f61a4  6800008000           push 0x800000
// 008f61a9  8d8e00010000         lea ecx, [esi + 0x100]
// 008f61af  e87cf1f4ff           call 0x845330
// 008f61b4  d905685ba700         fld dword ptr [0xa75b68]
// 008f61ba  51                   push ecx
// 008f61bb  d91c24               fstp dword ptr [esp]
// 008f61be  68fcfdfe00           push 0xfefdfc
// 008f61c3  68c4dafa00           push 0xfadac4
// 008f61c8  8d4e04               lea ecx, [esi + 4]
// 008f61cb  e840e7f4ff           call 0x844910
// 008f61d0  d905685ba700         fld dword ptr [0xa75b68]
// 008f61d6  51                   push ecx
// 008f61d7  d91c24               fstp dword ptr [esp]
// 008f61da  68c4dafa00           push 0xfadac4
// 008f61df  689ebef500           push 0xf5be9e
// 008f61e4  8d4e24               lea ecx, [esi + 0x24]
// 008f61e7  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 008f61f1  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 008f61f8  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 008f6202  e809e7f4ff           call 0x844910
// 008f6207  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 008f6211  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 008f621b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f621f  64890d00000000       mov dword ptr fs:[0], ecx
// 008f6226  59                   pop ecx
// 008f6227  5f                   pop edi
// 008f6228  5e                   pop esi
// 008f6229  5d                   pop ebp
// 008f622a  83c414               add esp, 0x14
// 008f622d  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2007@CXTPTabPaintManager@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp