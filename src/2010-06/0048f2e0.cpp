// roc 2010-06 0048f2e0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 5268 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048f2e0
//
// 0048f2e0  8b442404             mov eax, dword ptr [esp + 4]
// 0048f2e4  3d00010000           cmp eax, 0x100
// 0048f2e9  7775                 ja 0x48f360
// 0048f2eb  746d                 je 0x48f35a
// 0048f2ed  3d80000000           cmp eax, 0x80
// 0048f2f2  0f87010d0000         ja 0x48fff9
// 0048f2f8  0fb68850004900       movzx ecx, byte ptr [eax + 0x490050]
// 0048f2ff  ff248d14004900       jmp dword ptr [ecx*4 + 0x490014]
// 0048f306  b8d466a100           mov eax, 0xa166d4
// 0048f30b  c3                   ret 
// 0048f30c  b8c466a100           mov eax, 0xa166c4
// 0048f311  c3                   ret 
// 0048f312  b8ac66a100           mov eax, 0xa166ac
// 0048f317  c3                   ret 
// 0048f318  b89866a100           mov eax, 0xa16698
// 0048f31d  c3                   ret 
// 0048f31e  b88866a100           mov eax, 0xa16688
// 0048f323  c3                   ret 
// 0048f324  b87c66a100           mov eax, 0xa1667c
// 0048f329  c3                   ret 
// 0048f32a  b86c66a100           mov eax, 0xa1666c
// 0048f32f  c3                   ret 
// 0048f330  b85c66a100           mov eax, 0xa1665c
// 0048f335  c3                   ret 
// 0048f336  b84866a100           mov eax, 0xa16648
// 0048f33b  c3                   ret 
// 0048f33c  b83866a100           mov eax, 0xa16638
// 0048f341  c3                   ret 
// 0048f342  b82c66a100           mov eax, 0xa1662c
// 0048f347  c3                   ret 
// 0048f348  b82066a100           mov eax, 0xa16620
// 0048f34d  c3                   ret 
// 0048f34e  b81866a100           mov eax, 0xa16618
// 0048f353  c3                   ret 
// 0048f354  b81066a100           mov eax, 0xa16610
// 0048f359  c3                   ret 
// 0048f35a  b80466a100           mov eax, 0xa16604
// 0048f35f  c3                   ret 
// 0048f360  3d00020000           cmp eax, 0x200
// 0048f365  7736                 ja 0x48f39d
// 0048f367  742e                 je 0x48f397
// 0048f369  8d88fffeffff         lea ecx, [eax - 0x101]
// 0048f36f  83f903               cmp ecx, 3
// 0048f372  0f87810c0000         ja 0x48fff9
// 0048f378  ff248dd4004900       jmp dword ptr [ecx*4 + 0x4900d4]
// 0048f37f  b8fc65a100           mov eax, 0xa165fc
// 0048f384  c3                   ret 
// 0048f385  b8f065a100           mov eax, 0xa165f0
// 0048f38a  c3                   ret 
// 0048f38b  b8e865a100           mov eax, 0xa165e8
// 0048f390  c3                   ret 
// 0048f391  b8e065a100           mov eax, 0xa165e0
// 0048f396  c3                   ret 
// 0048f397  b8d465a100           mov eax, 0xa165d4
// 0048f39c  c3                   ret 
// 0048f39d  3d00030000           cmp eax, 0x300
// 0048f3a2  7748                 ja 0x48f3ec
// 0048f3a4  7440                 je 0x48f3e6
// 0048f3a6  8d88fffdffff         lea ecx, [eax - 0x201]
// 0048f3ac  83f906               cmp ecx, 6
// 0048f3af  0f87440c0000         ja 0x48fff9
// 0048f3b5  ff248de4004900       jmp dword ptr [ecx*4 + 0x4900e4]
// 0048f3bc  b8cc65a100           mov eax, 0xa165cc
// 0048f3c1  c3                   ret 
// 0048f3c2  b8c065a100           mov eax, 0xa165c0
// 0048f3c7  c3                   ret 
// 0048f3c8  b8b465a100           mov eax, 0xa165b4
// 0048f3cd  c3                   ret 
// 0048f3ce  b8a865a100           mov eax, 0xa165a8
// 0048f3d3  c3                   ret 
// 0048f3d4  b89c65a100           mov eax, 0xa1659c
// 0048f3d9  c3                   ret 
// 0048f3da  b89065a100           mov eax, 0xa16590
// 0048f3df  c3                   ret 
// 0048f3e0  b88465a100           mov eax, 0xa16584
// 0048f3e5  c3                   ret 
// 0048f3e6  b87465a100           mov eax, 0xa16574
// 0048f3eb  c3                   ret 
// 0048f3ec  3d00160000           cmp eax, 0x1600
// 0048f3f1  0f8778050000         ja 0x48f96f
// 0048f3f7  0f846c050000         je 0x48f969
// 0048f3fd  3d600c0000           cmp eax, 0xc60
// 0048f402  0f8759020000         ja 0x48f661
// 0048f408  0f844d020000         je 0x48f65b
// 0048f40e  3d000b0000           cmp eax, 0xb00
// 0048f413  0f874b010000         ja 0x48f564
// 0048f419  0f843f010000         je 0x48f55e
// 0048f41f  3d00050000           cmp eax, 0x500
// 0048f424  0f8787000000         ja 0x48f4b1
// 0048f42a  747f                 je 0x48f4ab
// 0048f42c  3d00040000           cmp eax, 0x400
// 0048f431  7732                 ja 0x48f465
// 0048f433  742a                 je 0x48f45f
// 0048f435  8bc8                 mov ecx, eax
// 0048f437  81e901030000         sub ecx, 0x301
// 0048f43d  741a                 je 0x48f459
// 0048f43f  83e901               sub ecx, 1
// 0048f442  740f                 je 0x48f453
// 0048f444  83e901               sub ecx, 1
// 0048f447  0f85ac0b0000         jne 0x48fff9
// 0048f44d  b85c65a100           mov eax, 0xa1655c
// 0048f452  c3                   ret 
// 0048f453  b84c65a100           mov eax, 0xa1654c
// 0048f458  c3                   ret 
// 0048f459  b83465a100           mov eax, 0xa16534
// 0048f45e  c3                   ret 
// 0048f45f  b81c65a100           mov eax, 0xa1651c
// 0048f464  c3                   ret 
// 0048f465  8d88fffbffff         lea ecx, [eax - 0x401]
// 0048f46b  83f907               cmp ecx, 7
// 0048f46e  0f87850b0000         ja 0x48fff9
// 0048f474  ff248d00014900       jmp dword ptr [ecx*4 + 0x490100]
// 0048f47b  b80c65a100           mov eax, 0xa1650c
// 0048f480  c3                   ret 
// 0048f481  b8fc64a100           mov eax, 0xa164fc
// 0048f486  c3                   ret 
// 0048f487  b8ec64a100           mov eax, 0xa164ec
// 0048f48c  c3                   ret 
// 0048f48d  b8e064a100           mov eax, 0xa164e0
// 0048f492  c3                   ret 
// 0048f493  b8d864a100           mov eax, 0xa164d8
// 0048f498  c3                   ret 
// 0048f499  b8d064a100           mov eax, 0xa164d0
// 0048f49e  c3                   ret 
// 0048f49f  b8c464a100           mov eax, 0xa164c4
// 0048f4a4  c3                   ret 
// 0048f4a5  b8b064a100           mov eax, 0xa164b0
// 0048f4aa  c3                   ret 
// 0048f4ab  b8a064a100           mov eax, 0xa164a0
// 0048f4b0  c3                   ret 
// 0048f4b1  3d00060000           cmp eax, 0x600
// 0048f4b6  773c                 ja 0x48f4f4
// 0048f4b8  7434                 je 0x48f4ee
// 0048f4ba  8d88fffaffff         lea ecx, [eax - 0x501]
// 0048f4c0  83f904               cmp ecx, 4
// 0048f4c3  0f87300b0000         ja 0x48fff9
// 0048f4c9  ff248d20014900       jmp dword ptr [ecx*4 + 0x490120]
// 0048f4d0  b88c64a100           mov eax, 0xa1648c
// 0048f4d5  c3                   ret 
// 0048f4d6  b87464a100           mov eax, 0xa16474
// 0048f4db  c3                   ret 
// 0048f4dc  b86064a100           mov eax, 0xa16460
// 0048f4e1  c3                   ret 
// 0048f4e2  b84c64a100           mov eax, 0xa1644c
// 0048f4e7  c3                   ret 
// 0048f4e8  b83864a100           mov eax, 0xa16438
// 0048f4ed  c3                   ret 
// 0048f4ee  b83064a100           mov eax, 0xa16430
// 0048f4f3  c3                   ret 
// 0048f4f4  3d00080000           cmp eax, 0x800
// 0048f4f9  7736                 ja 0x48f531
// 0048f4fb  742e                 je 0x48f52b
// 0048f4fd  8d88fff9ffff         lea ecx, [eax - 0x601]
// 0048f503  83f903               cmp ecx, 3
// 0048f506  0f87ed0a0000         ja 0x48fff9
// 0048f50c  ff248d34014900       jmp dword ptr [ecx*4 + 0x490134]
// 0048f513  b82864a100           mov eax, 0xa16428
// 0048f518  c3                   ret 
// 0048f519  b81c64a100           mov eax, 0xa1641c
// 0048f51e  c3                   ret 
// 0048f51f  b80864a100           mov eax, 0xa16408
// 0048f524  c3                   ret 
// 0048f525  b8f463a100           mov eax, 0xa163f4
// 0048f52a  c3                   ret 
// 0048f52b  b8e463a100           mov eax, 0xa163e4
// 0048f530  c3                   ret 
// 0048f531  8bc8                 mov ecx, eax
// 0048f533  81e901080000         sub ecx, 0x801
// 0048f539  741d                 je 0x48f558
// 0048f53b  81e9ff000000         sub ecx, 0xff
// 0048f541  740f                 je 0x48f552
// 0048f543  83e901               sub ecx, 1
// 0048f546  0f85ad0a0000         jne 0x48fff9
// 0048f54c  b8dc63a100           mov eax, 0xa163dc
// 0048f551  c3                   ret 
// 0048f552  b8d463a100           mov eax, 0xa163d4
// 0048f557  c3                   ret 
// 0048f558  b8cc63a100           mov eax, 0xa163cc
// 0048f55d  c3                   ret 
// 0048f55e  b8b863a100           mov eax, 0xa163b8
// 0048f563  c3                   ret 
// 0048f564  3d110c0000           cmp eax, 0xc11
// 0048f569  0f878a0a0000         ja 0x48fff9
// 0048f56f  0f84e0000000         je 0x48f655
// 0048f575  8d88fff4ffff         lea ecx, [eax - 0xb01]
// 0048f57b  81f9f1000000         cmp ecx, 0xf1
// 0048f581  0f87720a0000         ja 0x48fff9
// 0048f587  0fb691c8014900       movzx edx, byte ptr [ecx + 0x4901c8]
// 0048f58e  ff249544014900       jmp dword ptr [edx*4 + 0x490144]
// 0048f595  b8ac63a100           mov eax, 0xa163ac
// 0048f59a  c3                   ret 
// 0048f59b  b89863a100           mov eax, 0xa16398
// 0048f5a0  c3                   ret 
// 0048f5a1  b88463a100           mov eax, 0xa16384
// 0048f5a6  c3                   ret 
// 0048f5a7  b86863a100           mov eax, 0xa16368
// 0048f5ac  c3                   ret 
// 0048f5ad  b85063a100           mov eax, 0xa16350
// 0048f5b2  c3                   ret 
// 0048f5b3  b83863a100           mov eax, 0xa16338
// 0048f5b8  c3                   ret 
// 0048f5b9  b81463a100           mov eax, 0xa16314
// 0048f5be  c3                   ret 
// 0048f5bf  b8f862a100           mov eax, 0xa162f8
// 0048f5c4  c3                   ret 
// 0048f5c5  b8d462a100           mov eax, 0xa162d4
// 0048f5ca  c3                   ret 
// 0048f5cb  b8b862a100           mov eax, 0xa162b8
// 0048f5d0  c3                   ret 
// 0048f5d1  b8a862a100           mov eax, 0xa162a8
// 0048f5d6  c3                   ret 
// 0048f5d7  b89862a100           mov eax, 0xa16298
// 0048f5dc  c3                   ret 
// 0048f5dd  b88462a100           mov eax, 0xa16284
// 0048f5e2  c3                   ret 
// 0048f5e3  b86862a100           mov eax, 0xa16268
// 0048f5e8  c3                   ret 
// 0048f5e9  b85862a100           mov eax, 0xa16258
// 0048f5ee  c3                   ret 
// 0048f5ef  b84862a100           mov eax, 0xa16248
// 0048f5f4  c3                   ret 
// 0048f5f5  b83462a100           mov eax, 0xa16234
// 0048f5fa  c3                   ret 
// 0048f5fb  b82062a100           mov eax, 0xa16220
// 0048f600  c3                   ret 
// 0048f601  b81462a100           mov eax, 0xa16214
// 0048f606  c3                   ret 
// 0048f607  b80462a100           mov eax, 0xa16204
// 0048f60c  c3                   ret 
// 0048f60d  b8f461a100           mov eax, 0xa161f4
// 0048f612  c3                   ret 
// 0048f613  b8e461a100           mov eax, 0xa161e4
// 0048f618  c3                   ret 
// 0048f619  b8d461a100           mov eax, 0xa161d4
// 0048f61e  c3                   ret 
// 0048f61f  b8c461a100           mov eax, 0xa161c4
// 0048f624  c3                   ret 
// 0048f625  b8b461a100           mov eax, 0xa161b4
// 0048f62a  c3                   ret 
// 0048f62b  b8a061a100           mov eax, 0xa161a0
// 0048f630  c3                   ret 
// 0048f631  b88c61a100           mov eax, 0xa1618c
// 0048f636  c3                   ret 
// 0048f637  b87c61a100           mov eax, 0xa1617c
// 0048f63c  c3                   ret 
// 0048f63d  b86c61a100           mov eax, 0xa1616c
// 0048f642  c3                   ret 
// 0048f643  b86061a100           mov eax, 0xa16160
// 0048f648  c3                   ret 
// 0048f649  b85861a100           mov eax, 0xa16158
// 0048f64e  c3                   ret 
// 0048f64f  b84461a100           mov eax, 0xa16144
// 0048f654  c3                   ret 
// 0048f655  b83461a100           mov eax, 0xa16134
// 0048f65a  c3                   ret 
// 0048f65b  b82061a100           mov eax, 0xa16120
// 0048f660  c3                   ret 
// 0048f661  3d800d0000           cmp eax, 0xd80
// 0048f666  0f879e000000         ja 0x48f70a
// 0048f66c  0f8492000000         je 0x48f704
// 0048f672  8d889ff3ffff         lea ecx, [eax - 0xc61]
// 0048f678  81f9d3000000         cmp ecx, 0xd3
// 0048f67e  0f8775090000         ja 0x48fff9
// 0048f684  0fb6890c034900       movzx ecx, byte ptr [ecx + 0x49030c]
// 0048f68b  ff248dbc024900       jmp dword ptr [ecx*4 + 0x4902bc]
// 0048f692  b81461a100           mov eax, 0xa16114
// 0048f697  c3                   ret 
// 0048f698  b80861a100           mov eax, 0xa16108
// 0048f69d  c3                   ret 
// 0048f69e  b8fc60a100           mov eax, 0xa160fc
// 0048f6a3  c3                   ret 
// 0048f6a4  b8ec60a100           mov eax, 0xa160ec
// 0048f6a9  c3                   ret 
// 0048f6aa  b8dc60a100           mov eax, 0xa160dc
// 0048f6af  c3                   ret 
// 0048f6b0  b8cc60a100           mov eax, 0xa160cc
// 0048f6b5  c3                   ret 
// 0048f6b6  b8bc60a100           mov eax, 0xa160bc
// 0048f6bb  c3                   ret 
// 0048f6bc  b8ac60a100           mov eax, 0xa160ac
// 0048f6c1  c3                   ret 
// 0048f6c2  b89c60a100           mov eax, 0xa1609c
// 0048f6c7  c3                   ret 
// 0048f6c8  b88c60a100           mov eax, 0xa1608c
// 0048f6cd  c3                   ret 
// 0048f6ce  b87c60a100           mov eax, 0xa1607c
// 0048f6d3  c3                   ret 
// 0048f6d4  b86860a100           mov eax, 0xa16068
// 0048f6d9  c3                   ret 
// 0048f6da  b85860a100           mov eax, 0xa16058
// 0048f6df  c3                   ret 
// 0048f6e0  b84460a100           mov eax, 0xa16044
// 0048f6e5  c3                   ret 
// 0048f6e6  b83060a100           mov eax, 0xa16030
// 0048f6eb  c3                   ret 
// 0048f6ec  b81860a100           mov eax, 0xa16018
// 0048f6f1  c3                   ret 
// 0048f6f2  b80460a100           mov eax, 0xa16004
// 0048f6f7  c3                   ret 
// 0048f6f8  b8f05fa100           mov eax, 0xa15ff0
// 0048f6fd  c3                   ret 
// 0048f6fe  b8dc5fa100           mov eax, 0xa15fdc
// 0048f703  c3                   ret 
// 0048f704  b8cc5fa100           mov eax, 0xa15fcc
// 0048f709  c3                   ret 
// 0048f70a  3d00100000           cmp eax, 0x1000
// 0048f70f  0f87a1000000         ja 0x48f7b6
// 0048f715  0f8495000000         je 0x48f7b0
// 0048f71b  8d8870f2ffff         lea ecx, [eax - 0xd90]
// 0048f721  83f951               cmp ecx, 0x51
// 0048f724  0f87cf080000         ja 0x48fff9
// 0048f72a  0fb69134044900       movzx edx, byte ptr [ecx + 0x490434]
// 0048f731  ff2495e0034900       jmp dword ptr [edx*4 + 0x4903e0]
// 0048f738  b8bc5fa100           mov eax, 0xa15fbc
// 0048f73d  c3                   ret 
// 0048f73e  b8ac5fa100           mov eax, 0xa15fac
// 0048f743  c3                   ret 
// 0048f744  b89c5fa100           mov eax, 0xa15f9c
// 0048f749  c3                   ret 
// 0048f74a  b8845fa100           mov eax, 0xa15f84
// 0048f74f  c3                   ret 
// 0048f750  b86c5fa100           mov eax, 0xa15f6c
// 0048f755  c3                   ret 
// 0048f756  b8545fa100           mov eax, 0xa15f54
// 0048f75b  c3                   ret 
// 0048f75c  b83c5fa100           mov eax, 0xa15f3c
// 0048f761  c3                   ret 
// 0048f762  b8285fa100           mov eax, 0xa15f28
// 0048f767  c3                   ret 
// 0048f768  b8145fa100           mov eax, 0xa15f14
// 0048f76d  c3                   ret 
// 0048f76e  b8045fa100           mov eax, 0xa15f04
// 0048f773  c3                   ret 
// 0048f774  b8f45ea100           mov eax, 0xa15ef4
// 0048f779  c3                   ret 
// 0048f77a  b8e45ea100           mov eax, 0xa15ee4
// 0048f77f  c3                   ret 
// 0048f780  b8cc5ea100           mov eax, 0xa15ecc
// 0048f785  c3                   ret 
// 0048f786  b8b45ea100           mov eax, 0xa15eb4
// 0048f78b  c3                   ret 
// 0048f78c  b89c5ea100           mov eax, 0xa15e9c
// 0048f791  c3                   ret 
// 0048f792  b8845ea100           mov eax, 0xa15e84
// 0048f797  c3                   ret 
// 0048f798  b8705ea100           mov eax, 0xa15e70
// 0048f79d  c3                   ret 
// 0048f79e  b85c5ea100           mov eax, 0xa15e5c
// 0048f7a3  c3                   ret 
// 0048f7a4  b84c5ea100           mov eax, 0xa15e4c
// 0048f7a9  c3                   ret 
// 0048f7aa  b83c5ea100           mov eax, 0xa15e3c
// 0048f7af  c3                   ret 
// 0048f7b0  b8285ea100           mov eax, 0xa15e28
// 0048f7b5  c3                   ret 
// 0048f7b6  3d00110000           cmp eax, 0x1100
// 0048f7bb  7736                 ja 0x48f7f3
// 0048f7bd  742e                 je 0x48f7ed
// 0048f7bf  8d88ffefffff         lea ecx, [eax - 0x1001]
// 0048f7c5  83f904               cmp ecx, 4
// 0048f7c8  0f872b080000         ja 0x48fff9
// 0048f7ce  ff248d88044900       jmp dword ptr [ecx*4 + 0x490488]
// 0048f7d5  b8145ea100           mov eax, 0xa15e14
// 0048f7da  c3                   ret 
// 0048f7db  b8f85da100           mov eax, 0xa15df8
// 0048f7e0  c3                   ret 
// 0048f7e1  b8e05da100           mov eax, 0xa15de0
// 0048f7e6  c3                   ret 
// 0048f7e7  b8cc5da100           mov eax, 0xa15dcc
// 0048f7ec  c3                   ret 
// 0048f7ed  b8bc5da100           mov eax, 0xa15dbc
// 0048f7f2  c3                   ret 
// 0048f7f3  3d00140000           cmp eax, 0x1400
// 0048f7f8  0f879a000000         ja 0x48f898
// 0048f7fe  0f848e000000         je 0x48f892
// 0048f804  3d00120000           cmp eax, 0x1200
// 0048f809  7727                 ja 0x48f832
// 0048f80b  741f                 je 0x48f82c
// 0048f80d  8bc8                 mov ecx, eax
// 0048f80f  81e901110000         sub ecx, 0x1101
// 0048f815  740f                 je 0x48f826
// 0048f817  83e901               sub ecx, 1
// 0048f81a  0f85d9070000         jne 0x48fff9
// 0048f820  b8b05da100           mov eax, 0xa15db0
// 0048f825  c3                   ret 
// 0048f826  b8a45da100           mov eax, 0xa15da4
// 0048f82b  c3                   ret 
// 0048f82c  b8985da100           mov eax, 0xa15d98
// 0048f831  c3                   ret 
// 0048f832  3d00130000           cmp eax, 0x1300
// 0048f837  7748                 ja 0x48f881
// 0048f839  7440                 je 0x48f87b
// 0048f83b  8d88ffedffff         lea ecx, [eax - 0x1201]
// 0048f841  83f906               cmp ecx, 6
// 0048f844  0f87af070000         ja 0x48fff9
// 0048f84a  ff248d9c044900       jmp dword ptr [ecx*4 + 0x49049c]
// 0048f851  b88c5da100           mov eax, 0xa15d8c
// 0048f856  c3                   ret 
// 0048f857  b8805da100           mov eax, 0xa15d80
// 0048f85c  c3                   ret 
// 0048f85d  b8745da100           mov eax, 0xa15d74
// 0048f862  c3                   ret 
// 0048f863  b8605da100           mov eax, 0xa15d60
// 0048f868  c3                   ret 
// 0048f869  b84c5da100           mov eax, 0xa15d4c
// 0048f86e  c3                   ret 
// 0048f86f  b83c5da100           mov eax, 0xa15d3c
// 0048f874  c3                   ret 
// 0048f875  b8245da100           mov eax, 0xa15d24
// 0048f87a  c3                   ret 
// 0048f87b  b8185da100           mov eax, 0xa15d18
// 0048f880  c3                   ret 
// 0048f881  3d01130000           cmp eax, 0x1301
// 0048f886  0f856d070000         jne 0x48fff9
// 0048f88c  b8005da100           mov eax, 0xa15d00
// 0048f891  c3                   ret 
// 0048f892  b8f85ca100           mov eax, 0xa15cf8
// 0048f897  c3                   ret 
// 0048f898  3d00150000           cmp eax, 0x1500
// 0048f89d  775a                 ja 0x48f8f9
// 0048f89f  7452                 je 0x48f8f3
// 0048f8a1  8d88ffebffff         lea ecx, [eax - 0x1401]
// 0048f8a7  83f909               cmp ecx, 9
// 0048f8aa  0f8749070000         ja 0x48fff9
// 0048f8b0  ff248db8044900       jmp dword ptr [ecx*4 + 0x4904b8]
// 0048f8b7  b8e45ca100           mov eax, 0xa15ce4
// 0048f8bc  c3                   ret 
// 0048f8bd  b8d85ca100           mov eax, 0xa15cd8
// 0048f8c2  c3                   ret 
// 0048f8c3  b8c45ca100           mov eax, 0xa15cc4
// 0048f8c8  c3                   ret 
// 0048f8c9  b8bc5ca100           mov eax, 0xa15cbc
// 0048f8ce  c3                   ret 
// 0048f8cf  b8ac5ca100           mov eax, 0xa15cac
// 0048f8d4  c3                   ret 
// 0048f8d5  b8a05ca100           mov eax, 0xa15ca0
// 0048f8da  c3                   ret 
// 0048f8db  b8945ca100           mov eax, 0xa15c94
// 0048f8e0  c3                   ret 
// 0048f8e1  b8885ca100           mov eax, 0xa15c88
// 0048f8e6  c3                   ret 
// 0048f8e7  b87c5ca100           mov eax, 0xa15c7c
// 0048f8ec  c3                   ret 
// 0048f8ed  b8705ca100           mov eax, 0xa15c70
// 0048f8f2  c3                   ret 
// 0048f8f3  b8645ca100           mov eax, 0xa15c64
// 0048f8f8  c3                   ret 
// 0048f8f9  8d88ffeaffff         lea ecx, [eax - 0x1501]
// 0048f8ff  83f90e               cmp ecx, 0xe
// 0048f902  0f87f1060000         ja 0x48fff9
// 0048f908  ff248de0044900       jmp dword ptr [ecx*4 + 0x4904e0]
// 0048f90f  b85c5ca100           mov eax, 0xa15c5c
// 0048f914  c3                   ret 
// 0048f915  b84c5ca100           mov eax, 0xa15c4c
// 0048f91a  c3                   ret 
// 0048f91b  b8445ca100           mov eax, 0xa15c44
// 0048f920  c3                   ret 
// 0048f921  b8345ca100           mov eax, 0xa15c34
// 0048f926  c3                   ret 
// 0048f927  b82c5ca100           mov eax, 0xa15c2c
// 0048f92c  c3                   ret 
// 0048f92d  b8245ca100           mov eax, 0xa15c24
// 0048f932  c3                   ret 
// 0048f933  b81c5ca100           mov eax, 0xa15c1c
// 0048f938  c3                   ret 
// 0048f939  b8145ca100           mov eax, 0xa15c14
// 0048f93e  c3                   ret 
// 0048f93f  b8085ca100           mov eax, 0xa15c08
// 0048f944  c3                   ret 
// 0048f945  b8fc5ba100           mov eax, 0xa15bfc
// 0048f94a  c3                   ret 
// 0048f94b  b8ec5ba100           mov eax, 0xa15bec
// 0048f950  c3                   ret 
// 0048f951  b8d85ba100           mov eax, 0xa15bd8
// 0048f956  c3                   ret 
// 0048f957  b8c85ba100           mov eax, 0xa15bc8
// 0048f95c  c3                   ret 
// 0048f95d  b8c05ba100           mov eax, 0xa15bc0
// 0048f962  c3                   ret 
// 0048f963  b8b85ba100           mov eax, 0xa15bb8
// 0048f968  c3                   ret 
// 0048f969  b8ac5ba100           mov eax, 0xa15bac
// 0048f96e  c3                   ret 
// 0048f96f  3d00400000           cmp eax, 0x4000
// 0048f974  0f871e040000         ja 0x48fd98
// 0048f97a  0f8412040000         je 0x48fd92
// 0048f980  3d001f0000           cmp eax, 0x1f00
// 0048f985  0f87c1010000         ja 0x48fb4c
// 0048f98b  0f84b5010000         je 0x48fb46
// 0048f991  3d00190000           cmp eax, 0x1900
// 0048f996  0f8798000000         ja 0x48fa34
// 0048f99c  0f848c000000         je 0x48fa2e
// 0048f9a2  3d01170000           cmp eax, 0x1701
// 0048f9a7  7747                 ja 0x48f9f0
// 0048f9a9  743f                 je 0x48f9ea
// 0048f9ab  3d03160000           cmp eax, 0x1603
// 0048f9b0  7727                 ja 0x48f9d9
// 0048f9b2  741f                 je 0x48f9d3
// 0048f9b4  8bc8                 mov ecx, eax
// 0048f9b6  81e901160000         sub ecx, 0x1601
// 0048f9bc  740f                 je 0x48f9cd
// 0048f9be  83e901               sub ecx, 1
// 0048f9c1  0f8532060000         jne 0x48fff9
// 0048f9c7  b8945ba100           mov eax, 0xa15b94
// 0048f9cc  c3                   ret 
// 0048f9cd  b8845ba100           mov eax, 0xa15b84
// 0048f9d2  c3                   ret 
// 0048f9d3  b8705ba100           mov eax, 0xa15b70
// 0048f9d8  c3                   ret 
// 0048f9d9  3d00170000           cmp eax, 0x1700
// 0048f9de  0f8515060000         jne 0x48fff9
// 0048f9e4  b8605ba100           mov eax, 0xa15b60
// 0048f9e9  c3                   ret 
// 0048f9ea  b8505ba100           mov eax, 0xa15b50
// 0048f9ef  c3                   ret 
// 0048f9f0  3d01180000           cmp eax, 0x1801
// 0048f9f5  7726                 ja 0x48fa1d
// 0048f9f7  741e                 je 0x48fa17
// 0048f9f9  3d02170000           cmp eax, 0x1702
// 0048f9fe  7411                 je 0x48fa11
// 0048fa00  3d00180000           cmp eax, 0x1800
// 0048fa05  0f85ee050000         jne 0x48fff9
// 0048fa0b  b8445ba100           mov eax, 0xa15b44
// 0048fa10  c3                   ret 
// 0048fa11  b8385ba100           mov eax, 0xa15b38
// 0048fa16  c3                   ret 
// 0048fa17  b82c5ba100           mov eax, 0xa15b2c
// 0048fa1c  c3                   ret 
// 0048fa1d  3d02180000           cmp eax, 0x1802
// 0048fa22  0f85d1050000         jne 0x48fff9
// 0048fa28  b8205ba100           mov eax, 0xa15b20
// 0048fa2d  c3                   ret 
// 0048fa2e  b8105ba100           mov eax, 0xa15b10
// 0048fa33  c3                   ret 
// 0048fa34  3d001a0000           cmp eax, 0x1a00
// 0048fa39  775a                 ja 0x48fa95
// 0048fa3b  7452                 je 0x48fa8f
// 0048fa3d  8d88ffe6ffff         lea ecx, [eax - 0x1901]
// 0048fa43  83f909               cmp ecx, 9
// 0048fa46  0f87ad050000         ja 0x48fff9
// 0048fa4c  ff248d1c054900       jmp dword ptr [ecx*4 + 0x49051c]
// 0048fa53  b8fc5aa100           mov eax, 0xa15afc
// 0048fa58  c3                   ret 
// 0048fa59  b8e85aa100           mov eax, 0xa15ae8
// 0048fa5e  c3                   ret 
// 0048fa5f  b8e05aa100           mov eax, 0xa15ae0
// 0048fa64  c3                   ret 
// 0048fa65  b8d45aa100           mov eax, 0xa15ad4
// 0048fa6a  c3                   ret 
// 0048fa6b  b8cc5aa100           mov eax, 0xa15acc
// 0048fa70  c3                   ret 
// 0048fa71  b8c05aa100           mov eax, 0xa15ac0
// 0048fa76  c3                   ret 
// 0048fa77  b8b85aa100           mov eax, 0xa15ab8
// 0048fa7c  c3                   ret 
// 0048fa7d  b8b05aa100           mov eax, 0xa15ab0
// 0048fa82  c3                   ret 
// 0048fa83  b8a05aa100           mov eax, 0xa15aa0
// 0048fa88  c3                   ret 
// 0048fa89  b88c5aa100           mov eax, 0xa15a8c
// 0048fa8e  c3                   ret 
// 0048fa8f  b8805aa100           mov eax, 0xa15a80
// 0048fa94  c3                   ret 
// 0048fa95  3d001d0000           cmp eax, 0x1d00
// 0048fa9a  7760                 ja 0x48fafc
// 0048fa9c  7458                 je 0x48faf6
// 0048fa9e  3d001c0000           cmp eax, 0x1c00
// 0048faa3  7732                 ja 0x48fad7
// 0048faa5  742a                 je 0x48fad1
// 0048faa7  8bc8                 mov ecx, eax
// 0048faa9  81e9001b0000         sub ecx, 0x1b00
// 0048faaf  741a                 je 0x48facb
// 0048fab1  83e901               sub ecx, 1
// 0048fab4  740f                 je 0x48fac5
// 0048fab6  83e901               sub ecx, 1
// 0048fab9  0f853a050000         jne 0x48fff9
// 0048fabf  b8785aa100           mov eax, 0xa15a78
// 0048fac4  c3                   ret 
// 0048fac5  b8705aa100           mov eax, 0xa15a70
// 0048faca  c3                   ret 
// 0048facb  b8645aa100           mov eax, 0xa15a64
// 0048fad0  c3                   ret 
// 0048fad1  b8585aa100           mov eax, 0xa15a58
// 0048fad6  c3                   ret 
// 0048fad7  8bc8                 mov ecx, eax
// 0048fad9  81e9011c0000         sub ecx, 0x1c01
// 0048fadf  740f                 je 0x48faf0
// 0048fae1  83e901               sub ecx, 1
// 0048fae4  0f850f050000         jne 0x48fff9
// 0048faea  b84c5aa100           mov eax, 0xa15a4c
// 0048faef  c3                   ret 
// 0048faf0  b8405aa100           mov eax, 0xa15a40
// 0048faf5  c3                   ret 
// 0048faf6  b8385aa100           mov eax, 0xa15a38
// 0048fafb  c3                   ret 
// 0048fafc  3d001e0000           cmp eax, 0x1e00
// 0048fb01  7719                 ja 0x48fb1c
// 0048fb03  7411                 je 0x48fb16
// 0048fb05  3d011d0000           cmp eax, 0x1d01
// 0048fb0a  0f85e9040000         jne 0x48fff9
// 0048fb10  b82c5aa100           mov eax, 0xa15a2c
// 0048fb15  c3                   ret 
// 0048fb16  b8245aa100           mov eax, 0xa15a24
// 0048fb1b  c3                   ret 
// 0048fb1c  8bc8                 mov ecx, eax
// 0048fb1e  81e9011e0000         sub ecx, 0x1e01
// 0048fb24  741a                 je 0x48fb40
// 0048fb26  83e901               sub ecx, 1
// 0048fb29  740f                 je 0x48fb3a
// 0048fb2b  83e901               sub ecx, 1
// 0048fb2e  0f85c5040000         jne 0x48fff9
// 0048fb34  b81c5aa100           mov eax, 0xa15a1c
// 0048fb39  c3                   ret 
// 0048fb3a  b8145aa100           mov eax, 0xa15a14
// 0048fb3f  c3                   ret 
// 0048fb40  b8085aa100           mov eax, 0xa15a08
// 0048fb45  c3                   ret 
// 0048fb46  b8fc59a100           mov eax, 0xa159fc
// 0048fb4b  c3                   ret 
// 0048fb4c  3d00260000           cmp eax, 0x2600
// 0048fb51  0f8720010000         ja 0x48fc77
// 0048fb57  0f8414010000         je 0x48fc71
// 0048fb5d  3d00220000           cmp eax, 0x2200
// 0048fb62  0f8792000000         ja 0x48fbfa
// 0048fb68  0f8486000000         je 0x48fbf4
// 0048fb6e  3d00200000           cmp eax, 0x2000
// 0048fb73  7732                 ja 0x48fba7
// 0048fb75  742a                 je 0x48fba1
// 0048fb77  8bc8                 mov ecx, eax
// 0048fb79  81e9011f0000         sub ecx, 0x1f01
// 0048fb7f  741a                 je 0x48fb9b
// 0048fb81  83e901               sub ecx, 1
// 0048fb84  740f                 je 0x48fb95
// 0048fb86  83e901               sub ecx, 1
// 0048fb89  0f856a040000         jne 0x48fff9
// 0048fb8f  b8ec59a100           mov eax, 0xa159ec
// 0048fb94  c3                   ret 
// 0048fb95  b8e059a100           mov eax, 0xa159e0
// 0048fb9a  c3                   ret 
// 0048fb9b  b8d459a100           mov eax, 0xa159d4
// 0048fba0  c3                   ret 
// 0048fba1  b8c459a100           mov eax, 0xa159c4
// 0048fba6  c3                   ret 
// 0048fba7  3d03200000           cmp eax, 0x2003
// 0048fbac  7727                 ja 0x48fbd5
// 0048fbae  741f                 je 0x48fbcf
// 0048fbb0  8bc8                 mov ecx, eax
// 0048fbb2  81e901200000         sub ecx, 0x2001
// 0048fbb8  740f                 je 0x48fbc9
// 0048fbba  83e901               sub ecx, 1
// 0048fbbd  0f8536040000         jne 0x48fff9
// 0048fbc3  b8bc59a100           mov eax, 0xa159bc
// 0048fbc8  c3                   ret 
// 0048fbc9  b8b459a100           mov eax, 0xa159b4
// 0048fbce  c3                   ret 
// 0048fbcf  b8ac59a100           mov eax, 0xa159ac
// 0048fbd4  c3                   ret 
// 0048fbd5  8bc8                 mov ecx, eax
// 0048fbd7  81e900210000         sub ecx, 0x2100
// 0048fbdd  740f                 je 0x48fbee
// 0048fbdf  83e901               sub ecx, 1
// 0048fbe2  0f8511040000         jne 0x48fff9
// 0048fbe8  b8a059a100           mov eax, 0xa159a0
// 0048fbed  c3                   ret 
// 0048fbee  b89459a100           mov eax, 0xa15994
// 0048fbf3  c3                   ret 
// 0048fbf4  b88059a100           mov eax, 0xa15980
// 0048fbf9  c3                   ret 
// 0048fbfa  3d02240000           cmp eax, 0x2402
// 0048fbff  7746                 ja 0x48fc47
// 0048fc01  743e                 je 0x48fc41
// 0048fc03  3d00240000           cmp eax, 0x2400
// 0048fc08  7726                 ja 0x48fc30
// 0048fc0a  741e                 je 0x48fc2a
// 0048fc0c  3d01220000           cmp eax, 0x2201
// 0048fc11  7411                 je 0x48fc24
// 0048fc13  3d00230000           cmp eax, 0x2300
// 0048fc18  0f85db030000         jne 0x48fff9
// 0048fc1e  b87059a100           mov eax, 0xa15970
// 0048fc23  c3                   ret 
// 0048fc24  b85859a100           mov eax, 0xa15958
// 0048fc29  c3                   ret 
// 0048fc2a  b84859a100           mov eax, 0xa15948
// 0048fc2f  c3                   ret 
// 0048fc30  3d01240000           cmp eax, 0x2401
// 0048fc35  0f85be030000         jne 0x48fff9
// 0048fc3b  b83459a100           mov eax, 0xa15934
// 0048fc40  c3                   ret 
// 0048fc41  b82459a100           mov eax, 0xa15924
// 0048fc46  c3                   ret 
// 0048fc47  8bc8                 mov ecx, eax
// 0048fc49  81e900250000         sub ecx, 0x2500
// 0048fc4f  741a                 je 0x48fc6b
// 0048fc51  83e901               sub ecx, 1
// 0048fc54  740f                 je 0x48fc65
// 0048fc56  83e901               sub ecx, 1
// 0048fc59  0f859a030000         jne 0x48fff9
// 0048fc5f  b81459a100           mov eax, 0xa15914
// 0048fc64  c3                   ret 
// 0048fc65  b80459a100           mov eax, 0xa15904
// 0048fc6a  c3                   ret 
// 0048fc6b  b8f058a100           mov eax, 0xa158f0
// 0048fc70  c3                   ret 
// 0048fc71  b8e458a100           mov eax, 0xa158e4
// 0048fc76  c3                   ret 
// 0048fc77  3d00290000           cmp eax, 0x2900
// 0048fc7c  0f878f000000         ja 0x48fd11
// 0048fc82  0f8483000000         je 0x48fd0b
// 0048fc88  3d00270000           cmp eax, 0x2700
// 0048fc8d  7719                 ja 0x48fca8
// 0048fc8f  7411                 je 0x48fca2
// 0048fc91  3d01260000           cmp eax, 0x2601
// 0048fc96  0f855d030000         jne 0x48fff9
// 0048fc9c  b8d858a100           mov eax, 0xa158d8
// 0048fca1  c3                   ret 
// 0048fca2  b8bc58a100           mov eax, 0xa158bc
// 0048fca7  c3                   ret 
// 0048fca8  3d00280000           cmp eax, 0x2800
// 0048fcad  7732                 ja 0x48fce1
// 0048fcaf  742a                 je 0x48fcdb
// 0048fcb1  8bc8                 mov ecx, eax
// 0048fcb3  81e901270000         sub ecx, 0x2701
// 0048fcb9  741a                 je 0x48fcd5
// 0048fcbb  83e901               sub ecx, 1
// 0048fcbe  740f                 je 0x48fccf
// 0048fcc0  83e901               sub ecx, 1
// 0048fcc3  0f8530030000         jne 0x48fff9
// 0048fcc9  b8a458a100           mov eax, 0xa158a4
// 0048fcce  c3                   ret 
// 0048fccf  b88858a100           mov eax, 0xa15888
// 0048fcd4  c3                   ret 
// 0048fcd5  b86c58a100           mov eax, 0xa1586c
// 0048fcda  c3                   ret 
// 0048fcdb  b85458a100           mov eax, 0xa15854
// 0048fce0  c3                   ret 
// 0048fce1  8bc8                 mov ecx, eax
// 0048fce3  81e901280000         sub ecx, 0x2801
// 0048fce9  741a                 je 0x48fd05
// 0048fceb  83e901               sub ecx, 1
// 0048fcee  740f                 je 0x48fcff
// 0048fcf0  83e901               sub ecx, 1
// 0048fcf3  0f8500030000         jne 0x48fff9
// 0048fcf9  b84058a100           mov eax, 0xa15840
// 0048fcfe  c3                   ret 
// 0048fcff  b82c58a100           mov eax, 0xa1582c
// 0048fd04  c3                   ret 
// 0048fd05  b81458a100           mov eax, 0xa15814
// 0048fd0a  c3                   ret 
// 0048fd0b  b80858a100           mov eax, 0xa15808
// 0048fd10  c3                   ret 
// 0048fd11  3d00300000           cmp eax, 0x3000
// 0048fd16  7746                 ja 0x48fd5e
// 0048fd18  743e                 je 0x48fd58
// 0048fd1a  3d012a0000           cmp eax, 0x2a01
// 0048fd1f  7726                 ja 0x48fd47
// 0048fd21  741e                 je 0x48fd41
// 0048fd23  3d01290000           cmp eax, 0x2901
// 0048fd28  7411                 je 0x48fd3b
// 0048fd2a  3d002a0000           cmp eax, 0x2a00
// 0048fd2f  0f85c4020000         jne 0x48fff9
// 0048fd35  b8f057a100           mov eax, 0xa157f0
// 0048fd3a  c3                   ret 
// 0048fd3b  b8e457a100           mov eax, 0xa157e4
// 0048fd40  c3                   ret 
// 0048fd41  b8cc57a100           mov eax, 0xa157cc
// 0048fd46  c3                   ret 
// 0048fd47  3d022a0000           cmp eax, 0x2a02
// 0048fd4c  0f85a7020000         jne 0x48fff9
// 0048fd52  b8b457a100           mov eax, 0xa157b4
// 0048fd57  c3                   ret 
// 0048fd58  b8a457a100           mov eax, 0xa157a4
// 0048fd5d  c3                   ret 
// 0048fd5e  8d88ffcfffff         lea ecx, [eax - 0x3001]
// 0048fd64  83f904               cmp ecx, 4
// 0048fd67  0f878c020000         ja 0x48fff9
// 0048fd6d  ff248d44054900       jmp dword ptr [ecx*4 + 0x490544]
// 0048fd74  b89457a100           mov eax, 0xa15794
// 0048fd79  c3                   ret 
// 0048fd7a  b88457a100           mov eax, 0xa15784
// 0048fd7f  c3                   ret 
// 0048fd80  b87457a100           mov eax, 0xa15774
// 0048fd85  c3                   ret 
// 0048fd86  b86457a100           mov eax, 0xa15764
// 0048fd8b  c3                   ret 
// 0048fd8c  b85457a100           mov eax, 0xa15754
// 0048fd91  c3                   ret 
// 0048fd92  b84857a100           mov eax, 0xa15748
// 0048fd97  c3                   ret 
// 0048fd98  3d00800000           cmp eax, 0x8000
// 0048fd9d  7748                 ja 0x48fde7
// 0048fd9f  7440                 je 0x48fde1
// 0048fda1  8d88ffbfffff         lea ecx, [eax - 0x4001]
// 0048fda7  83f906               cmp ecx, 6
// 0048fdaa  0f8749020000         ja 0x48fff9
// 0048fdb0  ff248d58054900       jmp dword ptr [ecx*4 + 0x490558]
// 0048fdb7  b83c57a100           mov eax, 0xa1573c
// 0048fdbc  c3                   ret 
// 0048fdbd  b83057a100           mov eax, 0xa15730
// 0048fdc2  c3                   ret 
// 0048fdc3  b82457a100           mov eax, 0xa15724
// 0048fdc8  c3                   ret 
// 0048fdc9  b81857a100           mov eax, 0xa15718
// 0048fdce  c3                   ret 
// 0048fdcf  b80c57a100           mov eax, 0xa1570c
// 0048fdd4  c3                   ret 
// 0048fdd5  b80057a100           mov eax, 0xa15700
// 0048fdda  c3                   ret 
// 0048fddb  b8f456a100           mov eax, 0xa156f4
// 0048fde0  c3                   ret 
// 0048fde1  b8e856a100           mov eax, 0xa156e8
// 0048fde6  c3                   ret 
// 0048fde7  3df5840000           cmp eax, 0x84f5
// 0048fdec  0f872e010000         ja 0x48ff20
// 0048fdf2  0f8422010000         je 0x48ff1a
// 0048fdf8  8d88c97fffff         lea ecx, [eax - 0x8037]
// 0048fdfe  81f9f8000000         cmp ecx, 0xf8
// 0048fe04  0f87ef010000         ja 0x48fff9
// 0048fe0a  0fb68924064900       movzx ecx, byte ptr [ecx + 0x490624]
// 0048fe11  ff248d74054900       jmp dword ptr [ecx*4 + 0x490574]
// 0048fe18  b8d456a100           mov eax, 0xa156d4
// 0048fe1d  c3                   ret 
// 0048fe1e  b8c056a100           mov eax, 0xa156c0
// 0048fe23  c3                   ret 
// 0048fe24  b8a456a100           mov eax, 0xa156a4
// 0048fe29  c3                   ret 
// 0048fe2a  b88c56a100           mov eax, 0xa1568c
// 0048fe2f  c3                   ret 
// 0048fe30  b87c56a100           mov eax, 0xa1567c
// 0048fe35  c3                   ret 
// 0048fe36  b86c56a100           mov eax, 0xa1566c
// 0048fe3b  c3                   ret 
// 0048fe3c  b85c56a100           mov eax, 0xa1565c
// 0048fe41  c3                   ret 
// 0048fe42  b84c56a100           mov eax, 0xa1564c
// 0048fe47  c3                   ret 
// 0048fe48  b83456a100           mov eax, 0xa15634
// 0048fe4d  c3                   ret 
// 0048fe4e  b82056a100           mov eax, 0xa15620
// 0048fe53  c3                   ret 
// 0048fe54  b80856a100           mov eax, 0xa15608
// 0048fe59  c3                   ret 
// 0048fe5a  b8f055a100           mov eax, 0xa155f0
// 0048fe5f  c3                   ret 
// 0048fe60  b8d855a100           mov eax, 0xa155d8
// 0048fe65  c3                   ret 
// 0048fe66  b8c055a100           mov eax, 0xa155c0
// 0048fe6b  c3                   ret 
// 0048fe6c  b8a855a100           mov eax, 0xa155a8
// 0048fe71  c3                   ret 
// 0048fe72  b89455a100           mov eax, 0xa15594
// 0048fe77  c3                   ret 
// 0048fe78  b88055a100           mov eax, 0xa15580
// 0048fe7d  c3                   ret 
// 0048fe7e  b86855a100           mov eax, 0xa15568
// 0048fe83  c3                   ret 
// 0048fe84  b85455a100           mov eax, 0xa15554
// 0048fe89  c3                   ret 
// 0048fe8a  b83c55a100           mov eax, 0xa1553c
// 0048fe8f  c3                   ret 
// 0048fe90  b82055a100           mov eax, 0xa15520
// 0048fe95  c3                   ret 
// 0048fe96  b80455a100           mov eax, 0xa15504
// 0048fe9b  c3                   ret 
// 0048fe9c  b8e854a100           mov eax, 0xa154e8
// 0048fea1  c3                   ret 
// 0048fea2  b8cc54a100           mov eax, 0xa154cc
// 0048fea7  c3                   ret 
// 0048fea8  b8ac54a100           mov eax, 0xa154ac
// 0048fead  c3                   ret 
// 0048feae  b88c54a100           mov eax, 0xa1548c
// 0048feb3  c3                   ret 
// 0048feb4  b86854a100           mov eax, 0xa15468
// 0048feb9  c3                   ret 
// 0048feba  b84454a100           mov eax, 0xa15444
// 0048febf  c3                   ret 
// 0048fec0  b82454a100           mov eax, 0xa15424
// 0048fec5  c3                   ret 
// 0048fec6  b80454a100           mov eax, 0xa15404
// 0048fecb  c3                   ret 
// 0048fecc  b8e853a100           mov eax, 0xa153e8
// 0048fed1  c3                   ret 
// 0048fed2  b8cc53a100           mov eax, 0xa153cc
// 0048fed7  c3                   ret 
// 0048fed8  b8b053a100           mov eax, 0xa153b0
// 0048fedd  c3                   ret 
// 0048fede  b89453a100           mov eax, 0xa15394
// 0048fee3  c3                   ret 
// 0048fee4  b87053a100           mov eax, 0xa15370
// 0048fee9  c3                   ret 
// 0048feea  b85053a100           mov eax, 0xa15350
// 0048feef  c3                   ret 
// 0048fef0  b84053a100           mov eax, 0xa15340
// 0048fef5  c3                   ret 
// 0048fef6  b82c53a100           mov eax, 0xa1532c
// 0048fefb  c3                   ret 
// 0048fefc  b81053a100           mov eax, 0xa15310
// 0048ff01  c3                   ret 
// 0048ff02  b80053a100           mov eax, 0xa15300
// 0048ff07  c3                   ret 
// 0048ff08  b8e852a100           mov eax, 0xa152e8
// 0048ff0d  c3                   ret 
// 0048ff0e  b8d052a100           mov eax, 0xa152d0
// 0048ff13  c3                   ret 
// 0048ff14  b8b852a100           mov eax, 0xa152b8
// 0048ff19  c3                   ret 
// 0048ff1a  b89c52a100           mov eax, 0xa1529c
// 0048ff1f  c3                   ret 
// 0048ff20  3d488b0000           cmp eax, 0x8b48
// 0048ff25  7727                 ja 0x48ff4e
// 0048ff27  741f                 je 0x48ff48
// 0048ff29  8bc8                 mov ecx, eax
// 0048ff2b  81e907850000         sub ecx, 0x8507
// 0048ff31  740f                 je 0x48ff42
// 0048ff33  83e901               sub ecx, 1
// 0048ff36  0f85bd000000         jne 0x48fff9
// 0048ff3c  b88852a100           mov eax, 0xa15288
// 0048ff41  c3                   ret 
// 0048ff42  b87452a100           mov eax, 0xa15274
// 0048ff47  c3                   ret 
// 0048ff48  b85c52a100           mov eax, 0xa1525c
// 0048ff4d  c3                   ret 
// 0048ff4e  3d00000100           cmp eax, 0x10000
// 0048ff53  0f87a0000000         ja 0x48fff9
// 0048ff59  0f8494000000         je 0x48fff3
// 0048ff5f  8d88b074ffff         lea ecx, [eax - 0x8b50]
// 0048ff65  83f914               cmp ecx, 0x14
// 0048ff68  0f878b000000         ja 0x48fff9
// 0048ff6e  ff248d20074900       jmp dword ptr [ecx*4 + 0x490720]
// 0048ff75  b84852a100           mov eax, 0xa15248
// 0048ff7a  c3                   ret 
// 0048ff7b  b83452a100           mov eax, 0xa15234
// 0048ff80  c3                   ret 
// 0048ff81  b82052a100           mov eax, 0xa15220
// 0048ff86  c3                   ret 
// 0048ff87  b81052a100           mov eax, 0xa15210
// 0048ff8c  c3                   ret 
// 0048ff8d  b80052a100           mov eax, 0xa15200
// 0048ff92  c3                   ret 
// 0048ff93  b8f051a100           mov eax, 0xa151f0
// 0048ff98  c3                   ret 
// 0048ff99  b8e451a100           mov eax, 0xa151e4
// 0048ff9e  c3                   ret 
// 0048ff9f  b8d051a100           mov eax, 0xa151d0
// 0048ffa4  c3                   ret 
// 0048ffa5  b8bc51a100           mov eax, 0xa151bc
// 0048ffaa  c3                   ret 
// 0048ffab  b8a851a100           mov eax, 0xa151a8
// 0048ffb0  c3                   ret 
// 0048ffb1  b89451a100           mov eax, 0xa15194
// 0048ffb6  c3                   ret 
// 0048ffb7  b88051a100           mov eax, 0xa15180
// 0048ffbc  c3                   ret 
// 0048ffbd  b86c51a100           mov eax, 0xa1516c
// 0048ffc2  c3                   ret 
// 0048ffc3  b85851a100           mov eax, 0xa15158
// 0048ffc8  c3                   ret 
// 0048ffc9  b84451a100           mov eax, 0xa15144
// 0048ffce  c3                   ret 
// 0048ffcf  b83051a100           mov eax, 0xa15130
// 0048ffd4  c3                   ret 
// 0048ffd5  b81c51a100           mov eax, 0xa1511c
// 0048ffda  c3                   ret 
// 0048ffdb  b80051a100           mov eax, 0xa15100
// 0048ffe0  c3                   ret 
// 0048ffe1  b8e450a100           mov eax, 0xa150e4
// 0048ffe6  c3                   ret 
// 0048ffe7  b8cc50a100           mov eax, 0xa150cc
// 0048ffec  c3                   ret 
// 0048ffed  b8ac50a100           mov eax, 0xa150ac
// 0048fff2  c3                   ret 
// 0048fff3  b8a050a100           mov eax, 0xa150a0
// 0048fff8  c3                   ret 
// 0048fff9  50                   push eax
// 0048fffa  689850a100           push 0xa15098
// 0048ffff  68683cc000           push 0xc03c68
// 00490004  ff1564a89e00         call dword ptr [0x9ea864]
// 0049000a  83c40c               add esp, 0xc
// 0049000d  b8683cc000           mov eax, 0xc03c68
// 00490012  c3                   ret 
// 00490013  90                   nop 
// 00490014  4e                   dec esi
// 00490015  f348                 dec eax
// 00490017  0054f348             add byte ptr [ebx + esi*8 + 0x48], dl
// 0049001b  0006                 add byte ptr [esi], al
// 0049001d  f348                 dec eax
// 0049001f  002a                 add byte ptr [edx], ch
// 00490021  f348                 dec eax
// 00490023  0030                 add byte ptr [eax], dh
// 00490025  f348                 dec eax
// 00490027  0036                 add byte ptr [esi], dh
// 00490029  f348                 dec eax
// 0049002b  003cf3               add byte ptr [ebx + esi*8], bh
// 0049002e  48                   dec eax
// 0049002f  0042f3               add byte ptr [edx - 0xd], al
// 00490032  48                   dec eax
// 00490033  000cf3               add byte ptr [ebx + esi*8], cl
// 00490036  48                   dec eax
// 00490037  0048f3               add byte ptr [eax - 0xd], cl
// 0049003a  48                   dec eax
// 0049003b  0012                 add byte ptr [edx], dl
// 0049003d  f348                 dec eax
// 0049003f  0018                 add byte ptr [eax], bl
// 00490041  f348                 dec eax
// 00490043  001e                 add byte ptr [esi], bl
// 00490045  f348                 dec eax
// 00490047  0024f3               add byte ptr [ebx + esi*8], ah
// 0049004a  48                   dec eax
// 0049004b  00f9                 add cl, bh
// 0049004d  ff4800               dec dword ptr [eax]
// 00490050  0001                 add byte ptr [ecx], al
// 00490052  0203                 add al, byte ptr [ebx]
// 00490054  0405                 add al, 5
// 00490056  06                   push es
// 00490057  07                   pop es
// 00490058  0809                 or byte ptr [ecx], cl
// 0049005a  0e                   push cs
// 0049005b  0e                   push cs
// 0049005c  0e                   push cs
// 0049005d  0e                   push cs
// 0049005e  0e                   push cs
// 0049005f  0e                   push cs
// 00490060  0a0e                 or cl, byte ptr [esi]
// 00490062  0e                   push cs
// 00490063  0e                   push cs
// 00490064  0e                   push cs
// 00490065  0e                   push cs
// 00490066  0e                   push cs
// 00490067  0e                   push cs
// 00490068  0e                   push cs
// 00490069  0e                   push cs
// 0049006a  0e                   push cs
// 0049006b  0e                   push cs
// 0049006c  0e                   push cs
// 0049006d  0e                   push cs
// 0049006e  0e                   push cs
// 0049006f  0e                   push cs
// 00490070  0b0e                 or ecx, dword ptr [esi]
// 00490072  0e                   push cs
// 00490073  0e                   push cs
// 00490074  0e                   push cs
// 00490075  0e                   push cs
// 00490076  0e                   push cs
// 00490077  0e                   push cs
// 00490078  0e                   push cs
// 00490079  0e                   push cs
// 0049007a  0e                   push cs
// 0049007b  0e                   push cs
// 0049007c  0e                   push cs
// 0049007d  0e                   push cs
// 0049007e  0e                   push cs
// 0049007f  0e                   push cs
// 00490080  0e                   push cs
// 00490081  0e                   push cs
// 00490082  0e                   push cs
// 00490083  0e                   push cs
// 00490084  0e                   push cs
// 00490085  0e                   push cs
// 00490086  0e                   push cs
// 00490087  0e                   push cs
// 00490088  0e                   push cs
// 00490089  0e                   push cs
// 0049008a  0e                   push cs
// 0049008b  0e                   push cs
// 0049008c  0e                   push cs
// 0049008d  0e                   push cs
// 0049008e  0e                   push cs
// 0049008f  0e                   push cs
// 00490090  0c0e                 or al, 0xe
// 00490092  0e                   push cs
// 00490093  0e                   push cs
// 00490094  0e                   push cs
// 00490095  0e                   push cs
// 00490096  0e                   push cs
// 00490097  0e                   push cs
// 00490098  0e                   push cs
// 00490099  0e                   push cs
// 0049009a  0e                   push cs
// 0049009b  0e                   push cs
// 0049009c  0e                   push cs
// 0049009d  0e                   push cs
// 0049009e  0e                   push cs
// 0049009f  0e                   push cs
// 004900a0  0e                   push cs
// 004900a1  0e                   push cs
// 004900a2  0e                   push cs
// 004900a3  0e                   push cs
// 004900a4  0e                   push cs
// 004900a5  0e                   push cs
// 004900a6  0e                   push cs
// 004900a7  0e                   push cs
// 004900a8  0e                   push cs
// 004900a9  0e                   push cs
// 004900aa  0e                   push cs
// 004900ab  0e                   push cs
// 004900ac  0e                   push cs
// 004900ad  0e                   push cs
// 004900ae  0e                   push cs
// 004900af  0e                   push cs
// 004900b0  0e                   push cs
// 004900b1  0e                   push cs
// 004900b2  0e                   push cs
// 004900b3  0e                   push cs
// 004900b4  0e                   push cs
// 004900b5  0e                   push cs
// 004900b6  0e                   push cs
// 004900b7  0e                   push cs
// 004900b8  0e                   push cs
// 004900b9  0e                   push cs
// 004900ba  0e                   push cs
// 004900bb  0e                   push cs
// 004900bc  0e                   push cs
// 004900bd  0e                   push cs
// 004900be  0e                   push cs
// 004900bf  0e                   push cs
// 004900c0  0e                   push cs
// 004900c1  0e                   push cs
// 004900c2  0e                   push cs
// 004900c3  0e                   push cs
// 004900c4  0e                   push cs
// 004900c5  0e                   push cs
// 004900c6  0e                   push cs
// 004900c7  0e                   push cs
// 004900c8  0e                   push cs
// 004900c9  0e                   push cs
// 004900ca  0e                   push cs
// 004900cb  0e                   push cs
// 004900cc  0e                   push cs
// 004900cd  0e                   push cs
// 004900ce  0e                   push cs
// 004900cf  0e                   push cs
// 004900d0  0d8d49007f           or eax, 0x7f00498d
// 004900d5  f348                 dec eax
// 004900d7  0085f348008b         add byte ptr [ebp - 0x74ffb70d], al
// 004900dd  f348                 dec eax
// 004900df  0091f34800bc         add byte ptr [ecx - 0x43ffb70d], dl
// 004900e5  f348                 dec eax
// 004900e7  00c2                 add dl, al
// 004900e9  f348                 dec eax
// 004900eb  00c8                 add al, cl
// 004900ed  f348                 dec eax
// 004900ef  00ce                 add dh, cl
// 004900f1  f348                 dec eax
// 004900f3  00d4                 add ah, dl
// 004900f5  f348                 dec eax
// 004900f7  00da                 add dl, bl
// 004900f9  f348                 dec eax
// 004900fb  00e0                 add al, ah
// 004900fd  f348                 dec eax
// 004900ff  007bf4               add byte ptr [ebx - 0xc], bh
// 00490102  48                   dec eax
// 00490103  0081f4480087         add byte ptr [ecx - 0x78ffb70c], al
// 00490109  f4                   hlt 
// 0049010a  48                   dec eax
// 0049010b  008df4480093         add byte ptr [ebp - 0x6cffb70c], cl
// 00490111  f4                   hlt 
// 00490112  48                   dec eax
// 00490113  0099f448009f         add byte ptr [ecx - 0x60ffb70c], bl
// 00490119  f4                   hlt 
// 0049011a  48                   dec eax
// 0049011b  00a5f44800d0         add byte ptr [ebp - 0x2fffb70c], ah
// 00490121  f4                   hlt 
// 00490122  48                   dec eax
// 00490123  00d6                 add dh, dl
// 00490125  f4                   hlt 
// 00490126  48                   dec eax
// 00490127  00dc                 add ah, bl
// 00490129  f4                   hlt 
// 0049012a  48                   dec eax
// 0049012b  00e2                 add dl, ah
// 0049012d  f4                   hlt 
// 0049012e  48                   dec eax
// 0049012f  00e8                 add al, ch
// 00490131  f4                   hlt 
// 00490132  48                   dec eax
// 00490133  0013                 add byte ptr [ebx], dl
// 00490135  f5                   cmc 
// 00490136  48                   dec eax
// 00490137  0019                 add byte ptr [ecx], bl
// 00490139  f5                   cmc 
// 0049013a  48                   dec eax
// 0049013b  001f                 add byte ptr [edi], bl
// 0049013d  f5                   cmc 
// 0049013e  48                   dec eax
// 0049013f  0025f548009b         add byte ptr [0x9b0048f5], ah
// 00490145  f5                   cmc 
// 00490146  48                   dec eax
// 00490147  00a1f54800a7         add byte ptr [ecx - 0x58ffb70b], ah
// 0049014d  f5                   cmc 
// 0049014e  48                   dec eax
// 0049014f  00adf54800b3         add byte ptr [ebp - 0x4cffb70b], ch
// 00490155  f5                   cmc 
// 00490156  48                   dec eax
// 00490157  00b9f54800bf         add byte ptr [ecx - 0x40ffb70b], bh
// 0049015d  f5                   cmc 
// 0049015e  48                   dec eax
// 0049015f  00c5                 add ch, al
// 00490161  f5                   cmc 
// 00490162  48                   dec eax
// 00490163  00cb                 add bl, cl
// 00490165  f5                   cmc 
// 00490166  48                   dec eax
// 00490167  00d1                 add cl, dl
// 00490169  f5                   cmc 
// 0049016a  48                   dec eax
// 0049016b  00d7                 add bh, dl
// 0049016d  f5                   cmc 
// 0049016e  48                   dec eax
// 0049016f  00dd                 add ch, bl
// 00490171  f5                   cmc 
// 00490172  48                   dec eax
// 00490173  00e3                 add bl, ah
// 00490175  f5                   cmc 
// 00490176  48                   dec eax
// 00490177  00e9                 add cl, ch
// 00490179  f5                   cmc 
// 0049017a  48                   dec eax
// 0049017b  00ef                 add bh, ch
// 0049017d  f5                   cmc 
// 0049017e  48                   dec eax
// 0049017f  0037                 add byte ptr [edi], dh
// 00490181  f6480031             test byte ptr [eax], 0x31
// 00490185  f648002b             test byte ptr [eax], 0x2b
// 00490189  f648003d             test byte ptr [eax], 0x3d
// 0049018d  f6480095             test byte ptr [eax], -0x6b
// 00490191  f5                   cmc 
// 00490192  48                   dec eax
// 00490193  00fb                 add bl, bh
// 00490195  f5                   cmc 
// 00490196  48                   dec eax
// 00490197  0049f6               add byte ptr [ecx - 0xa], cl
// 0049019a  48                   dec eax
// 0049019b  0019                 add byte ptr [ecx], bl
// 0049019d  f6480025             test byte ptr [eax], 0x25
// 004901a1  f648001f             test byte ptr [eax], 0x1f
// 004901a5  f6480013             test byte ptr [eax], 0x13
// 004901a9  f6480043             test byte ptr [eax], 0x43
// 004901ad  f6480007             test byte ptr [eax], 7
// 004901b1  f648000d             test byte ptr [eax], 0xd
// 004901b5  f6480001             test byte ptr [eax], 1
// 004901b9  f648004f             test byte ptr [eax], 0x4f
// 004901bd  f64800f5             test byte ptr [eax], -0xb
// 004901c1  f5                   cmc 
// 004901c2  48                   dec eax
// 004901c3  00f9                 add cl, bh
// 004901c5  ff4800               dec dword ptr [eax]
// 004901c8  0001                 add byte ptr [ecx], al
// 004901ca  0203                 add al, byte ptr [ebx]
// 004901cc  0405                 add al, 5
// 004901ce  06                   push es
// 004901cf  07                   pop es
// 004901d0  0820                 or byte ptr [eax], ah
// 004901d2  2020                 and byte ptr [eax], ah
// 004901d4  2020                 and byte ptr [eax], ah
// 004901d6  2009                 and byte ptr [ecx], cl
// 004901d8  0a0b                 or cl, byte ptr [ebx]
// 004901da  0c20                 or al, 0x20
// 004901dc  2020                 and byte ptr [eax], ah
// 004901de  2020                 and byte ptr [eax], ah
// 004901e0  2020                 and byte ptr [eax], ah
// 004901e2  2020                 and byte ptr [eax], ah
// 004901e4  2020                 and byte ptr [eax], ah
// 004901e6  200d0e20200f         and byte ptr [0xf20200e], cl
// 004901ec  2020                 and byte ptr [eax], ah
// 004901ee  2020                 and byte ptr [eax], ah
// 004901f0  2020                 and byte ptr [eax], ah
// 004901f2  2020                 and byte ptr [eax], ah
// 004901f4  2020                 and byte ptr [eax], ah
// 004901f6  2020                 and byte ptr [eax], ah
// 004901f8  2020                 and byte ptr [eax], ah
// 004901fa  2020                 and byte ptr [eax], ah
// 004901fc  2020                 and byte ptr [eax], ah
// 004901fe  2020                 and byte ptr [eax], ah
// 00490200  2020                 and byte ptr [eax], ah
// 00490202  2020                 and byte ptr [eax], ah
// 00490204  2020                 and byte ptr [eax], ah
// 00490206  2020                 and byte ptr [eax], ah
// 00490208  1011                 adc byte ptr [ecx], dl
// 0049020a  2012                 and byte ptr [edx], dl
// 0049020c  2020                 and byte ptr [eax], ah
// 0049020e  2020                 and byte ptr [eax], ah
// 00490210  2020                 and byte ptr [eax], ah
// 00490212  2020                 and byte ptr [eax], ah
// 00490214  2020                 and byte ptr [eax], ah
// 00490216  2013                 and byte ptr [ebx], dl
// 00490218  2020                 and byte ptr [eax], ah
// 0049021a  2020                 and byte ptr [eax], ah
// 0049021c  2020                 and byte ptr [eax], ah
// 0049021e  1420                 adc al, 0x20
// 00490220  2020                 and byte ptr [eax], ah
// 00490222  2020                 and byte ptr [eax], ah
// 00490224  2020                 and byte ptr [eax], ah
// 00490226  201520202020         and byte ptr [0x20202020], dl
// 0049022c  2020                 and byte ptr [eax], ah
// 0049022e  2020                 and byte ptr [eax], ah
// 00490230  2020                 and byte ptr [eax], ah
// 00490232  2020                 and byte ptr [eax], ah
// 00490234  2020                 and byte ptr [eax], ah
// 00490236  2020                 and byte ptr [eax], ah
// 00490238  16                   push ss
// 00490239  2020                 and byte ptr [eax], ah
// 0049023b  2020                 and byte ptr [eax], ah
// 0049023d  2020                 and byte ptr [eax], ah
// 0049023f  2020                 and byte ptr [eax], ah
// 00490241  2020                 and byte ptr [eax], ah
// 00490243  2020                 and byte ptr [eax], ah
// 00490245  2020                 and byte ptr [eax], ah
// 00490247  2020                 and byte ptr [eax], ah
// 00490249  2020                 and byte ptr [eax], ah
// 0049024b  2020                 and byte ptr [eax], ah
// 0049024d  2020                 and byte ptr [eax], ah
// 0049024f  2020                 and byte ptr [eax], ah
// 00490251  2020                 and byte ptr [eax], ah
// 00490253  2020                 and byte ptr [eax], ah
// 00490255  2020                 and byte ptr [eax], ah
// 00490257  17                   pop ss
// 00490258  2020                 and byte ptr [eax], ah
// 0049025a  2020                 and byte ptr [eax], ah
// 0049025c  2020                 and byte ptr [eax], ah
// 0049025e  2020                 and byte ptr [eax], ah
// 00490260  2020                 and byte ptr [eax], ah
// 00490262  2020                 and byte ptr [eax], ah
// 00490264  2020                 and byte ptr [eax], ah
// 00490266  2020                 and byte ptr [eax], ah
// 00490268  1820                 sbb byte ptr [eax], ah
// 0049026a  2020                 and byte ptr [eax], ah
// 0049026c  2020                 and byte ptr [eax], ah
// 0049026e  2020                 and byte ptr [eax], ah
// 00490270  2020                 and byte ptr [eax], ah
// 00490272  2020                 and byte ptr [eax], ah
// 00490274  2020                 and byte ptr [eax], ah
// 00490276  2020                 and byte ptr [eax], ah
// 00490278  2020                 and byte ptr [eax], ah
// 0049027a  2020                 and byte ptr [eax], ah
// 0049027c  2020                 and byte ptr [eax], ah
// 0049027e  2020                 and byte ptr [eax], ah
// 00490280  2020                 and byte ptr [eax], ah
// 00490282  2020                 and byte ptr [eax], ah
// 00490284  2020                 and byte ptr [eax], ah
// 00490286  2019                 and byte ptr [ecx], bl
// 00490288  2020                 and byte ptr [eax], ah
// 0049028a  2020                 and byte ptr [eax], ah
// 0049028c  2020                 and byte ptr [eax], ah
// 0049028e  2020                 and byte ptr [eax], ah
// 00490290  2020                 and byte ptr [eax], ah
// 00490292  2020                 and byte ptr [eax], ah
// 00490294  2020                 and byte ptr [eax], ah
// 00490296  201a                 and byte ptr [edx], bl
// 00490298  2020                 and byte ptr [eax], ah
// 0049029a  2020                 and byte ptr [eax], ah
// 0049029c  2020                 and byte ptr [eax], ah
// 0049029e  2020                 and byte ptr [eax], ah
// 004902a0  2020                 and byte ptr [eax], ah
// 004902a2  2020                 and byte ptr [eax], ah
// 004902a4  2020                 and byte ptr [eax], ah
// 004902a6  201b                 and byte ptr [ebx], bl
// 004902a8  1c1d                 sbb al, 0x1d
// 004902aa  2020                 and byte ptr [eax], ah
// 004902ac  2020                 and byte ptr [eax], ah
// 004902ae  2020                 and byte ptr [eax], ah
// 004902b0  2020                 and byte ptr [eax], ah
// 004902b2  2020                 and byte ptr [eax], ah
// 004902b4  2020                 and byte ptr [eax], ah
// 004902b6  2020                 and byte ptr [eax], ah
// 004902b8  1e                   push ds
// 004902b9  1f                   pop ds
// 004902ba  8bff                 mov edi, edi
// copied from an identical function in another client (function ?GLenumToString@G3D@@YAPBDI@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glenumtostring.cpp
// roc 2008-06 00483a00  unit: G3D::Win32Window  size: 5268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483a00
//
// 00483a00  8b442404             mov eax, dword ptr [esp + 4]
// 00483a04  3d00010000           cmp eax, 0x100
// 00483a09  7775                 ja 0x483a80
// 00483a0b  746d                 je 0x483a7a
// 00483a0d  3d80000000           cmp eax, 0x80
// 00483a12  0f87010d0000         ja 0x484719
// 00483a18  0fb68870474800       movzx ecx, byte ptr [eax + 0x484770]
// 00483a1f  ff248d34474800       jmp dword ptr [ecx*4 + 0x484734]
// 00483a26  b84c0c8200           mov eax, 0x820c4c
// 00483a2b  c3                   ret 
// 00483a2c  b83c0c8200           mov eax, 0x820c3c
// 00483a31  c3                   ret 
// 00483a32  b8240c8200           mov eax, 0x820c24
// 00483a37  c3                   ret 
// 00483a38  b8100c8200           mov eax, 0x820c10
// 00483a3d  c3                   ret 
// 00483a3e  b8000c8200           mov eax, 0x820c00
// 00483a43  c3                   ret 
// 00483a44  b8f40b8200           mov eax, 0x820bf4
// 00483a49  c3                   ret 
// 00483a4a  b8e40b8200           mov eax, 0x820be4
// 00483a4f  c3                   ret 
// 00483a50  b8d40b8200           mov eax, 0x820bd4
// 00483a55  c3                   ret 
// 00483a56  b8c00b8200           mov eax, 0x820bc0
// 00483a5b  c3                   ret 
// 00483a5c  b8b00b8200           mov eax, 0x820bb0
// 00483a61  c3                   ret 
// 00483a62  b8a40b8200           mov eax, 0x820ba4
// 00483a67  c3                   ret 
// 00483a68  b8980b8200           mov eax, 0x820b98
// 00483a6d  c3                   ret 
// 00483a6e  b8900b8200           mov eax, 0x820b90
// 00483a73  c3                   ret 
// 00483a74  b8880b8200           mov eax, 0x820b88
// 00483a79  c3                   ret 
// 00483a7a  b87c0b8200           mov eax, 0x820b7c
// 00483a7f  c3                   ret 
// 00483a80  3d00020000           cmp eax, 0x200
// 00483a85  7736                 ja 0x483abd
// 00483a87  742e                 je 0x483ab7
// 00483a89  8d88fffeffff         lea ecx, [eax - 0x101]
// 00483a8f  83f903               cmp ecx, 3
// 00483a92  0f87810c0000         ja 0x484719
// 00483a98  ff248df4474800       jmp dword ptr [ecx*4 + 0x4847f4]
// 00483a9f  b8740b8200           mov eax, 0x820b74
// 00483aa4  c3                   ret 
// 00483aa5  b8680b8200           mov eax, 0x820b68
// 00483aaa  c3                   ret 
// 00483aab  b8600b8200           mov eax, 0x820b60
// 00483ab0  c3                   ret 
// 00483ab1  b8580b8200           mov eax, 0x820b58
// 00483ab6  c3                   ret 
// 00483ab7  b84c0b8200           mov eax, 0x820b4c
// 00483abc  c3                   ret 
// 00483abd  3d00030000           cmp eax, 0x300
// 00483ac2  7748                 ja 0x483b0c
// 00483ac4  7440                 je 0x483b06
// 00483ac6  8d88fffdffff         lea ecx, [eax - 0x201]
// 00483acc  83f906               cmp ecx, 6
// 00483acf  0f87440c0000         ja 0x484719
// 00483ad5  ff248d04484800       jmp dword ptr [ecx*4 + 0x484804]
// 00483adc  b8440b8200           mov eax, 0x820b44
// 00483ae1  c3                   ret 
// 00483ae2  b8380b8200           mov eax, 0x820b38
// 00483ae7  c3                   ret 
// 00483ae8  b82c0b8200           mov eax, 0x820b2c
// 00483aed  c3                   ret 
// 00483aee  b8200b8200           mov eax, 0x820b20
// 00483af3  c3                   ret 
// 00483af4  b8140b8200           mov eax, 0x820b14
// 00483af9  c3                   ret 
// 00483afa  b8080b8200           mov eax, 0x820b08
// 00483aff  c3                   ret 
// 00483b00  b8fc0a8200           mov eax, 0x820afc
// 00483b05  c3                   ret 
// 00483b06  b8ec0a8200           mov eax, 0x820aec
// 00483b0b  c3                   ret 
// 00483b0c  3d00160000           cmp eax, 0x1600
// 00483b11  0f8778050000         ja 0x48408f
// 00483b17  0f846c050000         je 0x484089
// 00483b1d  3d600c0000           cmp eax, 0xc60
// 00483b22  0f8759020000         ja 0x483d81
// 00483b28  0f844d020000         je 0x483d7b
// 00483b2e  3d000b0000           cmp eax, 0xb00
// 00483b33  0f874b010000         ja 0x483c84
// 00483b39  0f843f010000         je 0x483c7e
// 00483b3f  3d00050000           cmp eax, 0x500
// 00483b44  0f8787000000         ja 0x483bd1
// 00483b4a  747f                 je 0x483bcb
// 00483b4c  3d00040000           cmp eax, 0x400
// 00483b51  7732                 ja 0x483b85
// 00483b53  742a                 je 0x483b7f
// 00483b55  8bc8                 mov ecx, eax
// 00483b57  81e901030000         sub ecx, 0x301
// 00483b5d  741a                 je 0x483b79
// 00483b5f  83e901               sub ecx, 1
// 00483b62  740f                 je 0x483b73
// 00483b64  83e901               sub ecx, 1
// 00483b67  0f85ac0b0000         jne 0x484719
// 00483b6d  b8d40a8200           mov eax, 0x820ad4
// 00483b72  c3                   ret 
// 00483b73  b8c40a8200           mov eax, 0x820ac4
// 00483b78  c3                   ret 
// 00483b79  b8ac0a8200           mov eax, 0x820aac
// 00483b7e  c3                   ret 
// 00483b7f  b8940a8200           mov eax, 0x820a94
// 00483b84  c3                   ret 
// 00483b85  8d88fffbffff         lea ecx, [eax - 0x401]
// 00483b8b  83f907               cmp ecx, 7
// 00483b8e  0f87850b0000         ja 0x484719
// 00483b94  ff248d20484800       jmp dword ptr [ecx*4 + 0x484820]
// 00483b9b  b8840a8200           mov eax, 0x820a84
// 00483ba0  c3                   ret 
// 00483ba1  b8740a8200           mov eax, 0x820a74
// 00483ba6  c3                   ret 
// 00483ba7  b8640a8200           mov eax, 0x820a64
// 00483bac  c3                   ret 
// 00483bad  b8580a8200           mov eax, 0x820a58
// 00483bb2  c3                   ret 
// 00483bb3  b8500a8200           mov eax, 0x820a50
// 00483bb8  c3                   ret 
// 00483bb9  b8480a8200           mov eax, 0x820a48
// 00483bbe  c3                   ret 
// 00483bbf  b83c0a8200           mov eax, 0x820a3c
// 00483bc4  c3                   ret 
// 00483bc5  b8280a8200           mov eax, 0x820a28
// 00483bca  c3                   ret 
// 00483bcb  b8180a8200           mov eax, 0x820a18
// 00483bd0  c3                   ret 
// 00483bd1  3d00060000           cmp eax, 0x600
// 00483bd6  773c                 ja 0x483c14
// 00483bd8  7434                 je 0x483c0e
// 00483bda  8d88fffaffff         lea ecx, [eax - 0x501]
// 00483be0  83f904               cmp ecx, 4
// 00483be3  0f87300b0000         ja 0x484719
// 00483be9  ff248d40484800       jmp dword ptr [ecx*4 + 0x484840]
// 00483bf0  b8040a8200           mov eax, 0x820a04
// 00483bf5  c3                   ret 
// 00483bf6  b8ec098200           mov eax, 0x8209ec
// 00483bfb  c3                   ret 
// 00483bfc  b8d8098200           mov eax, 0x8209d8
// 00483c01  c3                   ret 
// 00483c02  b8c4098200           mov eax, 0x8209c4
// 00483c07  c3                   ret 
// 00483c08  b8b0098200           mov eax, 0x8209b0
// 00483c0d  c3                   ret 
// 00483c0e  b8a8098200           mov eax, 0x8209a8
// 00483c13  c3                   ret 
// 00483c14  3d00080000           cmp eax, 0x800
// 00483c19  7736                 ja 0x483c51
// 00483c1b  742e                 je 0x483c4b
// 00483c1d  8d88fff9ffff         lea ecx, [eax - 0x601]
// 00483c23  83f903               cmp ecx, 3
// 00483c26  0f87ed0a0000         ja 0x484719
// 00483c2c  ff248d54484800       jmp dword ptr [ecx*4 + 0x484854]
// 00483c33  b8a0098200           mov eax, 0x8209a0
// 00483c38  c3                   ret 
// 00483c39  b894098200           mov eax, 0x820994
// 00483c3e  c3                   ret 
// 00483c3f  b880098200           mov eax, 0x820980
// 00483c44  c3                   ret 
// 00483c45  b86c098200           mov eax, 0x82096c
// 00483c4a  c3                   ret 
// 00483c4b  b85c098200           mov eax, 0x82095c
// 00483c50  c3                   ret 
// 00483c51  8bc8                 mov ecx, eax
// 00483c53  81e901080000         sub ecx, 0x801
// 00483c59  741d                 je 0x483c78
// 00483c5b  81e9ff000000         sub ecx, 0xff
// 00483c61  740f                 je 0x483c72
// 00483c63  83e901               sub ecx, 1
// 00483c66  0f85ad0a0000         jne 0x484719
// 00483c6c  b854098200           mov eax, 0x820954
// 00483c71  c3                   ret 
// 00483c72  b84c098200           mov eax, 0x82094c
// 00483c77  c3                   ret 
// 00483c78  b844098200           mov eax, 0x820944
// 00483c7d  c3                   ret 
// 00483c7e  b830098200           mov eax, 0x820930
// 00483c83  c3                   ret 
// 00483c84  3d110c0000           cmp eax, 0xc11
// 00483c89  0f878a0a0000         ja 0x484719
// 00483c8f  0f84e0000000         je 0x483d75
// 00483c95  8d88fff4ffff         lea ecx, [eax - 0xb01]
// 00483c9b  81f9f1000000         cmp ecx, 0xf1
// 00483ca1  0f87720a0000         ja 0x484719
// 00483ca7  0fb691e8484800       movzx edx, byte ptr [ecx + 0x4848e8]
// 00483cae  ff249564484800       jmp dword ptr [edx*4 + 0x484864]
// 00483cb5  b824098200           mov eax, 0x820924
// 00483cba  c3                   ret 
// 00483cbb  b810098200           mov eax, 0x820910
// 00483cc0  c3                   ret 
// 00483cc1  b8fc088200           mov eax, 0x8208fc
// 00483cc6  c3                   ret 
// 00483cc7  b8e0088200           mov eax, 0x8208e0
// 00483ccc  c3                   ret 
// 00483ccd  b8c8088200           mov eax, 0x8208c8
// 00483cd2  c3                   ret 
// 00483cd3  b8b0088200           mov eax, 0x8208b0
// 00483cd8  c3                   ret 
// 00483cd9  b88c088200           mov eax, 0x82088c
// 00483cde  c3                   ret 
// 00483cdf  b870088200           mov eax, 0x820870
// 00483ce4  c3                   ret 
// 00483ce5  b84c088200           mov eax, 0x82084c
// 00483cea  c3                   ret 
// 00483ceb  b830088200           mov eax, 0x820830
// 00483cf0  c3                   ret 
// 00483cf1  b820088200           mov eax, 0x820820
// 00483cf6  c3                   ret 
// 00483cf7  b810088200           mov eax, 0x820810
// 00483cfc  c3                   ret 
// 00483cfd  b8fc078200           mov eax, 0x8207fc
// 00483d02  c3                   ret 
// 00483d03  b8e0078200           mov eax, 0x8207e0
// 00483d08  c3                   ret 
// 00483d09  b8d0078200           mov eax, 0x8207d0
// 00483d0e  c3                   ret 
// 00483d0f  b8c0078200           mov eax, 0x8207c0
// 00483d14  c3                   ret 
// 00483d15  b8ac078200           mov eax, 0x8207ac
// 00483d1a  c3                   ret 
// 00483d1b  b898078200           mov eax, 0x820798
// 00483d20  c3                   ret 
// 00483d21  b88c078200           mov eax, 0x82078c
// 00483d26  c3                   ret 
// 00483d27  b87c078200           mov eax, 0x82077c
// 00483d2c  c3                   ret 
// 00483d2d  b86c078200           mov eax, 0x82076c
// 00483d32  c3                   ret 
// 00483d33  b85c078200           mov eax, 0x82075c
// 00483d38  c3                   ret 
// 00483d39  b84c078200           mov eax, 0x82074c
// 00483d3e  c3                   ret 
// 00483d3f  b83c078200           mov eax, 0x82073c
// 00483d44  c3                   ret 
// 00483d45  b82c078200           mov eax, 0x82072c
// 00483d4a  c3                   ret 
// 00483d4b  b818078200           mov eax, 0x820718
// 00483d50  c3                   ret 
// 00483d51  b804078200           mov eax, 0x820704
// 00483d56  c3                   ret 
// 00483d57  b8f4068200           mov eax, 0x8206f4
// 00483d5c  c3                   ret 
// 00483d5d  b8e4068200           mov eax, 0x8206e4
// 00483d62  c3                   ret 
// 00483d63  b8d8068200           mov eax, 0x8206d8
// 00483d68  c3                   ret 
// 00483d69  b8d0068200           mov eax, 0x8206d0
// 00483d6e  c3                   ret 
// 00483d6f  b8bc068200           mov eax, 0x8206bc
// 00483d74  c3                   ret 
// 00483d75  b8ac068200           mov eax, 0x8206ac
// 00483d7a  c3                   ret 
// 00483d7b  b898068200           mov eax, 0x820698
// 00483d80  c3                   ret 
// 00483d81  3d800d0000           cmp eax, 0xd80
// 00483d86  0f879e000000         ja 0x483e2a
// 00483d8c  0f8492000000         je 0x483e24
// 00483d92  8d889ff3ffff         lea ecx, [eax - 0xc61]
// 00483d98  81f9d3000000         cmp ecx, 0xd3
// 00483d9e  0f8775090000         ja 0x484719
// 00483da4  0fb6892c4a4800       movzx ecx, byte ptr [ecx + 0x484a2c]
// 00483dab  ff248ddc494800       jmp dword ptr [ecx*4 + 0x4849dc]
// 00483db2  b88c068200           mov eax, 0x82068c
// 00483db7  c3                   ret 
// 00483db8  b880068200           mov eax, 0x820680
// 00483dbd  c3                   ret 
// 00483dbe  b874068200           mov eax, 0x820674
// 00483dc3  c3                   ret 
// 00483dc4  b864068200           mov eax, 0x820664
// 00483dc9  c3                   ret 
// 00483dca  b854068200           mov eax, 0x820654
// 00483dcf  c3                   ret 
// 00483dd0  b844068200           mov eax, 0x820644
// 00483dd5  c3                   ret 
// 00483dd6  b834068200           mov eax, 0x820634
// 00483ddb  c3                   ret 
// 00483ddc  b824068200           mov eax, 0x820624
// 00483de1  c3                   ret 
// 00483de2  b814068200           mov eax, 0x820614
// 00483de7  c3                   ret 
// 00483de8  b804068200           mov eax, 0x820604
// 00483ded  c3                   ret 
// 00483dee  b8f4058200           mov eax, 0x8205f4
// 00483df3  c3                   ret 
// 00483df4  b8e0058200           mov eax, 0x8205e0
// 00483df9  c3                   ret 
// 00483dfa  b8d0058200           mov eax, 0x8205d0
// 00483dff  c3                   ret 
// 00483e00  b8bc058200           mov eax, 0x8205bc
// 00483e05  c3                   ret 
// 00483e06  b8a8058200           mov eax, 0x8205a8
// 00483e0b  c3                   ret 
// 00483e0c  b890058200           mov eax, 0x820590
// 00483e11  c3                   ret 
// 00483e12  b87c058200           mov eax, 0x82057c
// 00483e17  c3                   ret 
// 00483e18  b868058200           mov eax, 0x820568
// 00483e1d  c3                   ret 
// 00483e1e  b854058200           mov eax, 0x820554
// 00483e23  c3                   ret 
// 00483e24  b844058200           mov eax, 0x820544
// 00483e29  c3                   ret 
// 00483e2a  3d00100000           cmp eax, 0x1000
// 00483e2f  0f87a1000000         ja 0x483ed6
// 00483e35  0f8495000000         je 0x483ed0
// 00483e3b  8d8870f2ffff         lea ecx, [eax - 0xd90]
// 00483e41  83f951               cmp ecx, 0x51
// 00483e44  0f87cf080000         ja 0x484719
// 00483e4a  0fb691544b4800       movzx edx, byte ptr [ecx + 0x484b54]
// 00483e51  ff2495004b4800       jmp dword ptr [edx*4 + 0x484b00]
// 00483e58  b834058200           mov eax, 0x820534
// 00483e5d  c3                   ret 
// 00483e5e  b824058200           mov eax, 0x820524
// 00483e63  c3                   ret 
// 00483e64  b814058200           mov eax, 0x820514
// 00483e69  c3                   ret 
// 00483e6a  b8fc048200           mov eax, 0x8204fc
// 00483e6f  c3                   ret 
// 00483e70  b8e4048200           mov eax, 0x8204e4
// 00483e75  c3                   ret 
// 00483e76  b8cc048200           mov eax, 0x8204cc
// 00483e7b  c3                   ret 
// 00483e7c  b8b4048200           mov eax, 0x8204b4
// 00483e81  c3                   ret 
// 00483e82  b8a0048200           mov eax, 0x8204a0
// 00483e87  c3                   ret 
// 00483e88  b88c048200           mov eax, 0x82048c
// 00483e8d  c3                   ret 
// 00483e8e  b87c048200           mov eax, 0x82047c
// 00483e93  c3                   ret 
// 00483e94  b86c048200           mov eax, 0x82046c
// 00483e99  c3                   ret 
// 00483e9a  b85c048200           mov eax, 0x82045c
// 00483e9f  c3                   ret 
// 00483ea0  b844048200           mov eax, 0x820444
// 00483ea5  c3                   ret 
// 00483ea6  b82c048200           mov eax, 0x82042c
// 00483eab  c3                   ret 
// 00483eac  b814048200           mov eax, 0x820414
// 00483eb1  c3                   ret 
// 00483eb2  b8fc038200           mov eax, 0x8203fc
// 00483eb7  c3                   ret 
// 00483eb8  b8e8038200           mov eax, 0x8203e8
// 00483ebd  c3                   ret 
// 00483ebe  b8d4038200           mov eax, 0x8203d4
// 00483ec3  c3                   ret 
// 00483ec4  b8c4038200           mov eax, 0x8203c4
// 00483ec9  c3                   ret 
// 00483eca  b8b4038200           mov eax, 0x8203b4
// 00483ecf  c3                   ret 
// 00483ed0  b8a0038200           mov eax, 0x8203a0
// 00483ed5  c3                   ret 
// 00483ed6  3d00110000           cmp eax, 0x1100
// 00483edb  7736                 ja 0x483f13
// 00483edd  742e                 je 0x483f0d
// 00483edf  8d88ffefffff         lea ecx, [eax - 0x1001]
// 00483ee5  83f904               cmp ecx, 4
// 00483ee8  0f872b080000         ja 0x484719
// 00483eee  ff248da84b4800       jmp dword ptr [ecx*4 + 0x484ba8]
// 00483ef5  b88c038200           mov eax, 0x82038c
// 00483efa  c3                   ret 
// 00483efb  b870038200           mov eax, 0x820370
// 00483f00  c3                   ret 
// 00483f01  b858038200           mov eax, 0x820358
// 00483f06  c3                   ret 
// 00483f07  b844038200           mov eax, 0x820344
// 00483f0c  c3                   ret 
// 00483f0d  b834038200           mov eax, 0x820334
// 00483f12  c3                   ret 
// 00483f13  3d00140000           cmp eax, 0x1400
// 00483f18  0f879a000000         ja 0x483fb8
// 00483f1e  0f848e000000         je 0x483fb2
// 00483f24  3d00120000           cmp eax, 0x1200
// 00483f29  7727                 ja 0x483f52
// 00483f2b  741f                 je 0x483f4c
// 00483f2d  8bc8                 mov ecx, eax
// 00483f2f  81e901110000         sub ecx, 0x1101
// 00483f35  740f                 je 0x483f46
// 00483f37  83e901               sub ecx, 1
// 00483f3a  0f85d9070000         jne 0x484719
// 00483f40  b828038200           mov eax, 0x820328
// 00483f45  c3                   ret 
// 00483f46  b81c038200           mov eax, 0x82031c
// 00483f4b  c3                   ret 
// 00483f4c  b810038200           mov eax, 0x820310
// 00483f51  c3                   ret 
// 00483f52  3d00130000           cmp eax, 0x1300
// 00483f57  7748                 ja 0x483fa1
// 00483f59  7440                 je 0x483f9b
// 00483f5b  8d88ffedffff         lea ecx, [eax - 0x1201]
// 00483f61  83f906               cmp ecx, 6
// 00483f64  0f87af070000         ja 0x484719
// 00483f6a  ff248dbc4b4800       jmp dword ptr [ecx*4 + 0x484bbc]
// 00483f71  b804038200           mov eax, 0x820304
// 00483f76  c3                   ret 
// 00483f77  b8f8028200           mov eax, 0x8202f8
// 00483f7c  c3                   ret 
// 00483f7d  b8ec028200           mov eax, 0x8202ec
// 00483f82  c3                   ret 
// 00483f83  b8d8028200           mov eax, 0x8202d8
// 00483f88  c3                   ret 
// 00483f89  b8c4028200           mov eax, 0x8202c4
// 00483f8e  c3                   ret 
// 00483f8f  b8b4028200           mov eax, 0x8202b4
// 00483f94  c3                   ret 
// 00483f95  b89c028200           mov eax, 0x82029c
// 00483f9a  c3                   ret 
// 00483f9b  b890028200           mov eax, 0x820290
// 00483fa0  c3                   ret 
// 00483fa1  3d01130000           cmp eax, 0x1301
// 00483fa6  0f856d070000         jne 0x484719
// 00483fac  b878028200           mov eax, 0x820278
// 00483fb1  c3                   ret 
// 00483fb2  b870028200           mov eax, 0x820270
// 00483fb7  c3                   ret 
// 00483fb8  3d00150000           cmp eax, 0x1500
// 00483fbd  775a                 ja 0x484019
// 00483fbf  7452                 je 0x484013
// 00483fc1  8d88ffebffff         lea ecx, [eax - 0x1401]
// 00483fc7  83f909               cmp ecx, 9
// 00483fca  0f8749070000         ja 0x484719
// 00483fd0  ff248dd84b4800       jmp dword ptr [ecx*4 + 0x484bd8]
// 00483fd7  b85c028200           mov eax, 0x82025c
// 00483fdc  c3                   ret 
// 00483fdd  b850028200           mov eax, 0x820250
// 00483fe2  c3                   ret 
// 00483fe3  b83c028200           mov eax, 0x82023c
// 00483fe8  c3                   ret 
// 00483fe9  b834028200           mov eax, 0x820234
// 00483fee  c3                   ret 
// 00483fef  b824028200           mov eax, 0x820224
// 00483ff4  c3                   ret 
// 00483ff5  b818028200           mov eax, 0x820218
// 00483ffa  c3                   ret 
// 00483ffb  b80c028200           mov eax, 0x82020c
// 00484000  c3                   ret 
// 00484001  b800028200           mov eax, 0x820200
// 00484006  c3                   ret 
// 00484007  b8f4018200           mov eax, 0x8201f4
// 0048400c  c3                   ret 
// 0048400d  b8e8018200           mov eax, 0x8201e8
// 00484012  c3                   ret 
// 00484013  b8dc018200           mov eax, 0x8201dc
// 00484018  c3                   ret 
// 00484019  8d88ffeaffff         lea ecx, [eax - 0x1501]
// 0048401f  83f90e               cmp ecx, 0xe
// 00484022  0f87f1060000         ja 0x484719
// 00484028  ff248d004c4800       jmp dword ptr [ecx*4 + 0x484c00]
// 0048402f  b8d4018200           mov eax, 0x8201d4
// 00484034  c3                   ret 
// 00484035  b8c4018200           mov eax, 0x8201c4
// 0048403a  c3                   ret 
// 0048403b  b8bc018200           mov eax, 0x8201bc
// 00484040  c3                   ret 
// 00484041  b8ac018200           mov eax, 0x8201ac
// 00484046  c3                   ret 
// 00484047  b8a4018200           mov eax, 0x8201a4
// 0048404c  c3                   ret 
// 0048404d  b89c018200           mov eax, 0x82019c
// 00484052  c3                   ret 
// 00484053  b894018200           mov eax, 0x820194
// 00484058  c3                   ret 
// 00484059  b88c018200           mov eax, 0x82018c
// 0048405e  c3                   ret 
// 0048405f  b880018200           mov eax, 0x820180
// 00484064  c3                   ret 
// 00484065  b874018200           mov eax, 0x820174
// 0048406a  c3                   ret 
// 0048406b  b864018200           mov eax, 0x820164
// 00484070  c3                   ret 
// 00484071  b850018200           mov eax, 0x820150
// 00484076  c3                   ret 
// 00484077  b840018200           mov eax, 0x820140
// 0048407c  c3                   ret 
// 0048407d  b838018200           mov eax, 0x820138
// 00484082  c3                   ret 
// 00484083  b830018200           mov eax, 0x820130
// 00484088  c3                   ret 
// 00484089  b824018200           mov eax, 0x820124
// 0048408e  c3                   ret 
// 0048408f  3d00400000           cmp eax, 0x4000
// 00484094  0f871e040000         ja 0x4844b8
// 0048409a  0f8412040000         je 0x4844b2
// 004840a0  3d001f0000           cmp eax, 0x1f00
// 004840a5  0f87c1010000         ja 0x48426c
// 004840ab  0f84b5010000         je 0x484266
// 004840b1  3d00190000           cmp eax, 0x1900
// 004840b6  0f8798000000         ja 0x484154
// 004840bc  0f848c000000         je 0x48414e
// 004840c2  3d01170000           cmp eax, 0x1701
// 004840c7  7747                 ja 0x484110
// 004840c9  743f                 je 0x48410a
// 004840cb  3d03160000           cmp eax, 0x1603
// 004840d0  7727                 ja 0x4840f9
// 004840d2  741f                 je 0x4840f3
// 004840d4  8bc8                 mov ecx, eax
// 004840d6  81e901160000         sub ecx, 0x1601
// 004840dc  740f                 je 0x4840ed
// 004840de  83e901               sub ecx, 1
// 004840e1  0f8532060000         jne 0x484719
// 004840e7  b80c018200           mov eax, 0x82010c
// 004840ec  c3                   ret 
// 004840ed  b8fc008200           mov eax, 0x8200fc
// 004840f2  c3                   ret 
// 004840f3  b8e8008200           mov eax, 0x8200e8
// 004840f8  c3                   ret 
// 004840f9  3d00170000           cmp eax, 0x1700
// 004840fe  0f8515060000         jne 0x484719
// 00484104  b8d8008200           mov eax, 0x8200d8
// 00484109  c3                   ret 
// 0048410a  b8c8008200           mov eax, 0x8200c8
// 0048410f  c3                   ret 
// 00484110  3d01180000           cmp eax, 0x1801
// 00484115  7726                 ja 0x48413d
// 00484117  741e                 je 0x484137
// 00484119  3d02170000           cmp eax, 0x1702
// 0048411e  7411                 je 0x484131
// 00484120  3d00180000           cmp eax, 0x1800
// 00484125  0f85ee050000         jne 0x484719
// 0048412b  b8bc008200           mov eax, 0x8200bc
// 00484130  c3                   ret 
// 00484131  b8b0008200           mov eax, 0x8200b0
// 00484136  c3                   ret 
// 00484137  b8a4008200           mov eax, 0x8200a4
// 0048413c  c3                   ret 
// 0048413d  3d02180000           cmp eax, 0x1802
// 00484142  0f85d1050000         jne 0x484719
// 00484148  b898008200           mov eax, 0x820098
// 0048414d  c3                   ret 
// 0048414e  b888008200           mov eax, 0x820088
// 00484153  c3                   ret 
// 00484154  3d001a0000           cmp eax, 0x1a00
// 00484159  775a                 ja 0x4841b5
// 0048415b  7452                 je 0x4841af
// 0048415d  8d88ffe6ffff         lea ecx, [eax - 0x1901]
// 00484163  83f909               cmp ecx, 9
// 00484166  0f87ad050000         ja 0x484719
// 0048416c  ff248d3c4c4800       jmp dword ptr [ecx*4 + 0x484c3c]
// 00484173  b874008200           mov eax, 0x820074
// 00484178  c3                   ret 
// 00484179  b860008200           mov eax, 0x820060
// 0048417e  c3                   ret 
// 0048417f  b858008200           mov eax, 0x820058
// 00484184  c3                   ret 
// 00484185  b84c008200           mov eax, 0x82004c
// 0048418a  c3                   ret 
// 0048418b  b844008200           mov eax, 0x820044
// 00484190  c3                   ret 
// 00484191  b838008200           mov eax, 0x820038
// 00484196  c3                   ret 
// 00484197  b830008200           mov eax, 0x820030
// 0048419c  c3                   ret 
// 0048419d  b828008200           mov eax, 0x820028
// 004841a2  c3                   ret 
// 004841a3  b818008200           mov eax, 0x820018
// 004841a8  c3                   ret 
// 004841a9  b804008200           mov eax, 0x820004
// 004841ae  c3                   ret 
// 004841af  b8f8ff8100           mov eax, 0x81fff8
// 004841b4  c3                   ret 
// 004841b5  3d001d0000           cmp eax, 0x1d00
// 004841ba  7760                 ja 0x48421c
// 004841bc  7458                 je 0x484216
// 004841be  3d001c0000           cmp eax, 0x1c00
// 004841c3  7732                 ja 0x4841f7
// 004841c5  742a                 je 0x4841f1
// 004841c7  8bc8                 mov ecx, eax
// 004841c9  81e9001b0000         sub ecx, 0x1b00
// 004841cf  741a                 je 0x4841eb
// 004841d1  83e901               sub ecx, 1
// 004841d4  740f                 je 0x4841e5
// 004841d6  83e901               sub ecx, 1
// 004841d9  0f853a050000         jne 0x484719
// 004841df  b8f0ff8100           mov eax, 0x81fff0
// 004841e4  c3                   ret 
// 004841e5  b8e8ff8100           mov eax, 0x81ffe8
// 004841ea  c3                   ret 
// 004841eb  b8dcff8100           mov eax, 0x81ffdc
// 004841f0  c3                   ret 
// 004841f1  b8d0ff8100           mov eax, 0x81ffd0
// 004841f6  c3                   ret 
// 004841f7  8bc8                 mov ecx, eax
// 004841f9  81e9011c0000         sub ecx, 0x1c01
// 004841ff  740f                 je 0x484210
// 00484201  83e901               sub ecx, 1
// 00484204  0f850f050000         jne 0x484719
// 0048420a  b8c4ff8100           mov eax, 0x81ffc4
// 0048420f  c3                   ret 
// 00484210  b8b8ff8100           mov eax, 0x81ffb8
// 00484215  c3                   ret 
// 00484216  b8b0ff8100           mov eax, 0x81ffb0
// 0048421b  c3                   ret 
// 0048421c  3d001e0000           cmp eax, 0x1e00
// 00484221  7719                 ja 0x48423c
// 00484223  7411                 je 0x484236
// 00484225  3d011d0000           cmp eax, 0x1d01
// 0048422a  0f85e9040000         jne 0x484719
// 00484230  b8a4ff8100           mov eax, 0x81ffa4
// 00484235  c3                   ret 
// 00484236  b89cff8100           mov eax, 0x81ff9c
// 0048423b  c3                   ret 
// 0048423c  8bc8                 mov ecx, eax
// 0048423e  81e9011e0000         sub ecx, 0x1e01
// 00484244  741a                 je 0x484260
// 00484246  83e901               sub ecx, 1
// 00484249  740f                 je 0x48425a
// 0048424b  83e901               sub ecx, 1
// 0048424e  0f85c5040000         jne 0x484719
// 00484254  b894ff8100           mov eax, 0x81ff94
// 00484259  c3                   ret 
// 0048425a  b88cff8100           mov eax, 0x81ff8c
// 0048425f  c3                   ret 
// 00484260  b880ff8100           mov eax, 0x81ff80
// 00484265  c3                   ret 
// 00484266  b874ff8100           mov eax, 0x81ff74
// 0048426b  c3                   ret 
// 0048426c  3d00260000           cmp eax, 0x2600
// 00484271  0f8720010000         ja 0x484397
// 00484277  0f8414010000         je 0x484391
// 0048427d  3d00220000           cmp eax, 0x2200
// 00484282  0f8792000000         ja 0x48431a
// 00484288  0f8486000000         je 0x484314
// 0048428e  3d00200000           cmp eax, 0x2000
// 00484293  7732                 ja 0x4842c7
// 00484295  742a                 je 0x4842c1
// 00484297  8bc8                 mov ecx, eax
// 00484299  81e9011f0000         sub ecx, 0x1f01
// 0048429f  741a                 je 0x4842bb
// 004842a1  83e901               sub ecx, 1
// 004842a4  740f                 je 0x4842b5
// 004842a6  83e901               sub ecx, 1
// 004842a9  0f856a040000         jne 0x484719
// 004842af  b864ff8100           mov eax, 0x81ff64
// 004842b4  c3                   ret 
// 004842b5  b858ff8100           mov eax, 0x81ff58
// 004842ba  c3                   ret 
// 004842bb  b84cff8100           mov eax, 0x81ff4c
// 004842c0  c3                   ret 
// 004842c1  b83cff8100           mov eax, 0x81ff3c
// 004842c6  c3                   ret 
// 004842c7  3d03200000           cmp eax, 0x2003
// 004842cc  7727                 ja 0x4842f5
// 004842ce  741f                 je 0x4842ef
// 004842d0  8bc8                 mov ecx, eax
// 004842d2  81e901200000         sub ecx, 0x2001
// 004842d8  740f                 je 0x4842e9
// 004842da  83e901               sub ecx, 1
// 004842dd  0f8536040000         jne 0x484719
// 004842e3  b834ff8100           mov eax, 0x81ff34
// 004842e8  c3                   ret 
// 004842e9  b82cff8100           mov eax, 0x81ff2c
// 004842ee  c3                   ret 
// 004842ef  b824ff8100           mov eax, 0x81ff24
// 004842f4  c3                   ret 
// 004842f5  8bc8                 mov ecx, eax
// 004842f7  81e900210000         sub ecx, 0x2100
// 004842fd  740f                 je 0x48430e
// 004842ff  83e901               sub ecx, 1
// 00484302  0f8511040000         jne 0x484719
// 00484308  b818ff8100           mov eax, 0x81ff18
// 0048430d  c3                   ret 
// 0048430e  b80cff8100           mov eax, 0x81ff0c
// 00484313  c3                   ret 
// 00484314  b8f8fe8100           mov eax, 0x81fef8
// 00484319  c3                   ret 
// 0048431a  3d02240000           cmp eax, 0x2402
// 0048431f  7746                 ja 0x484367
// 00484321  743e                 je 0x484361
// 00484323  3d00240000           cmp eax, 0x2400
// 00484328  7726                 ja 0x484350
// 0048432a  741e                 je 0x48434a
// 0048432c  3d01220000           cmp eax, 0x2201
// 00484331  7411                 je 0x484344
// 00484333  3d00230000           cmp eax, 0x2300
// 00484338  0f85db030000         jne 0x484719
// 0048433e  b8e8fe8100           mov eax, 0x81fee8
// 00484343  c3                   ret 
// 00484344  b8d0fe8100           mov eax, 0x81fed0
// 00484349  c3                   ret 
// 0048434a  b8c0fe8100           mov eax, 0x81fec0
// 0048434f  c3                   ret 
// 00484350  3d01240000           cmp eax, 0x2401
// 00484355  0f85be030000         jne 0x484719
// 0048435b  b8acfe8100           mov eax, 0x81feac
// 00484360  c3                   ret 
// 00484361  b89cfe8100           mov eax, 0x81fe9c
// 00484366  c3                   ret 
// 00484367  8bc8                 mov ecx, eax
// 00484369  81e900250000         sub ecx, 0x2500
// 0048436f  741a                 je 0x48438b
// 00484371  83e901               sub ecx, 1
// 00484374  740f                 je 0x484385
// 00484376  83e901               sub ecx, 1
// 00484379  0f859a030000         jne 0x484719
// 0048437f  b88cfe8100           mov eax, 0x81fe8c
// 00484384  c3                   ret 
// 00484385  b87cfe8100           mov eax, 0x81fe7c
// 0048438a  c3                   ret 
// 0048438b  b868fe8100           mov eax, 0x81fe68
// 00484390  c3                   ret 
// 00484391  b85cfe8100           mov eax, 0x81fe5c
// 00484396  c3                   ret 
// 00484397  3d00290000           cmp eax, 0x2900
// 0048439c  0f878f000000         ja 0x484431
// 004843a2  0f8483000000         je 0x48442b
// 004843a8  3d00270000           cmp eax, 0x2700
// 004843ad  7719                 ja 0x4843c8
// 004843af  7411                 je 0x4843c2
// 004843b1  3d01260000           cmp eax, 0x2601
// 004843b6  0f855d030000         jne 0x484719
// 004843bc  b850fe8100           mov eax, 0x81fe50
// 004843c1  c3                   ret 
// 004843c2  b834fe8100           mov eax, 0x81fe34
// 004843c7  c3                   ret 
// 004843c8  3d00280000           cmp eax, 0x2800
// 004843cd  7732                 ja 0x484401
// 004843cf  742a                 je 0x4843fb
// 004843d1  8bc8                 mov ecx, eax
// 004843d3  81e901270000         sub ecx, 0x2701
// 004843d9  741a                 je 0x4843f5
// 004843db  83e901               sub ecx, 1
// 004843de  740f                 je 0x4843ef
// 004843e0  83e901               sub ecx, 1
// 004843e3  0f8530030000         jne 0x484719
// 004843e9  b81cfe8100           mov eax, 0x81fe1c
// 004843ee  c3                   ret 
// 004843ef  b800fe8100           mov eax, 0x81fe00
// 004843f4  c3                   ret 
// 004843f5  b8e4fd8100           mov eax, 0x81fde4
// 004843fa  c3                   ret 
// 004843fb  b8ccfd8100           mov eax, 0x81fdcc
// 00484400  c3                   ret 
// 00484401  8bc8                 mov ecx, eax
// 00484403  81e901280000         sub ecx, 0x2801
// 00484409  741a                 je 0x484425
// 0048440b  83e901               sub ecx, 1
// 0048440e  740f                 je 0x48441f
// 00484410  83e901               sub ecx, 1
// 00484413  0f8500030000         jne 0x484719
// 00484419  b8b8fd8100           mov eax, 0x81fdb8
// 0048441e  c3                   ret 
// 0048441f  b8a4fd8100           mov eax, 0x81fda4
// 00484424  c3                   ret 
// 00484425  b88cfd8100           mov eax, 0x81fd8c
// 0048442a  c3                   ret 
// 0048442b  b880fd8100           mov eax, 0x81fd80
// 00484430  c3                   ret 
// 00484431  3d00300000           cmp eax, 0x3000
// 00484436  7746                 ja 0x48447e
// 00484438  743e                 je 0x484478
// 0048443a  3d012a0000           cmp eax, 0x2a01
// 0048443f  7726                 ja 0x484467
// 00484441  741e                 je 0x484461
// 00484443  3d01290000           cmp eax, 0x2901
// 00484448  7411                 je 0x48445b
// 0048444a  3d002a0000           cmp eax, 0x2a00
// 0048444f  0f85c4020000         jne 0x484719
// 00484455  b868fd8100           mov eax, 0x81fd68
// 0048445a  c3                   ret 
// 0048445b  b85cfd8100           mov eax, 0x81fd5c
// 00484460  c3                   ret 
// 00484461  b844fd8100           mov eax, 0x81fd44
// 00484466  c3                   ret 
// 00484467  3d022a0000           cmp eax, 0x2a02
// 0048446c  0f85a7020000         jne 0x484719
// 00484472  b82cfd8100           mov eax, 0x81fd2c
// 00484477  c3                   ret 
// 00484478  b81cfd8100           mov eax, 0x81fd1c
// 0048447d  c3                   ret 
// 0048447e  8d88ffcfffff         lea ecx, [eax - 0x3001]
// 00484484  83f904               cmp ecx, 4
// 00484487  0f878c020000         ja 0x484719
// 0048448d  ff248d644c4800       jmp dword ptr [ecx*4 + 0x484c64]
// 00484494  b80cfd8100           mov eax, 0x81fd0c
// 00484499  c3                   ret 
// 0048449a  b8fcfc8100           mov eax, 0x81fcfc
// 0048449f  c3                   ret 
// 004844a0  b8ecfc8100           mov eax, 0x81fcec
// 004844a5  c3                   ret 
// 004844a6  b8dcfc8100           mov eax, 0x81fcdc
// 004844ab  c3                   ret 
// 004844ac  b8ccfc8100           mov eax, 0x81fccc
// 004844b1  c3                   ret 
// 004844b2  b8c0fc8100           mov eax, 0x81fcc0
// 004844b7  c3                   ret 
// 004844b8  3d00800000           cmp eax, 0x8000
// 004844bd  7748                 ja 0x484507
// 004844bf  7440                 je 0x484501
// 004844c1  8d88ffbfffff         lea ecx, [eax - 0x4001]
// 004844c7  83f906               cmp ecx, 6
// 004844ca  0f8749020000         ja 0x484719
// 004844d0  ff248d784c4800       jmp dword ptr [ecx*4 + 0x484c78]
// 004844d7  b8b4fc8100           mov eax, 0x81fcb4
// 004844dc  c3                   ret 
// 004844dd  b8a8fc8100           mov eax, 0x81fca8
// 004844e2  c3                   ret 
// 004844e3  b89cfc8100           mov eax, 0x81fc9c
// 004844e8  c3                   ret 
// 004844e9  b890fc8100           mov eax, 0x81fc90
// 004844ee  c3                   ret 
// 004844ef  b884fc8100           mov eax, 0x81fc84
// 004844f4  c3                   ret 
// 004844f5  b878fc8100           mov eax, 0x81fc78
// 004844fa  c3                   ret 
// 004844fb  b86cfc8100           mov eax, 0x81fc6c
// 00484500  c3                   ret 
// 00484501  b860fc8100           mov eax, 0x81fc60
// 00484506  c3                   ret 
// 00484507  3df5840000           cmp eax, 0x84f5
// 0048450c  0f872e010000         ja 0x484640
// 00484512  0f8422010000         je 0x48463a
// 00484518  8d88c97fffff         lea ecx, [eax - 0x8037]
// 0048451e  81f9f8000000         cmp ecx, 0xf8
// 00484524  0f87ef010000         ja 0x484719
// 0048452a  0fb689444d4800       movzx ecx, byte ptr [ecx + 0x484d44]
// 00484531  ff248d944c4800       jmp dword ptr [ecx*4 + 0x484c94]
// 00484538  b84cfc8100           mov eax, 0x81fc4c
// 0048453d  c3                   ret 
// 0048453e  b838fc8100           mov eax, 0x81fc38
// 00484543  c3                   ret 
// 00484544  b81cfc8100           mov eax, 0x81fc1c
// 00484549  c3                   ret 
// 0048454a  b804fc8100           mov eax, 0x81fc04
// 0048454f  c3                   ret 
// 00484550  b8f4fb8100           mov eax, 0x81fbf4
// 00484555  c3                   ret 
// 00484556  b8e4fb8100           mov eax, 0x81fbe4
// 0048455b  c3                   ret 
// 0048455c  b8d4fb8100           mov eax, 0x81fbd4
// 00484561  c3                   ret 
// 00484562  b8c4fb8100           mov eax, 0x81fbc4
// 00484567  c3                   ret 
// 00484568  b8acfb8100           mov eax, 0x81fbac
// 0048456d  c3                   ret 
// 0048456e  b898fb8100           mov eax, 0x81fb98
// 00484573  c3                   ret 
// 00484574  b880fb8100           mov eax, 0x81fb80
// 00484579  c3                   ret 
// 0048457a  b868fb8100           mov eax, 0x81fb68
// 0048457f  c3                   ret 
// 00484580  b850fb8100           mov eax, 0x81fb50
// 00484585  c3                   ret 
// 00484586  b838fb8100           mov eax, 0x81fb38
// 0048458b  c3                   ret 
// 0048458c  b820fb8100           mov eax, 0x81fb20
// 00484591  c3                   ret 
// 00484592  b80cfb8100           mov eax, 0x81fb0c
// 00484597  c3                   ret 
// 00484598  b8f8fa8100           mov eax, 0x81faf8
// 0048459d  c3                   ret 
// 0048459e  b8e0fa8100           mov eax, 0x81fae0
// 004845a3  c3                   ret 
// 004845a4  b8ccfa8100           mov eax, 0x81facc
// 004845a9  c3                   ret 
// 004845aa  b8b4fa8100           mov eax, 0x81fab4
// 004845af  c3                   ret 
// 004845b0  b898fa8100           mov eax, 0x81fa98
// 004845b5  c3                   ret 
// 004845b6  b87cfa8100           mov eax, 0x81fa7c
// 004845bb  c3                   ret 
// 004845bc  b860fa8100           mov eax, 0x81fa60
// 004845c1  c3                   ret 
// 004845c2  b844fa8100           mov eax, 0x81fa44
// 004845c7  c3                   ret 
// 004845c8  b824fa8100           mov eax, 0x81fa24
// 004845cd  c3                   ret 
// 004845ce  b804fa8100           mov eax, 0x81fa04
// 004845d3  c3                   ret 
// 004845d4  b8e0f98100           mov eax, 0x81f9e0
// 004845d9  c3                   ret 
// 004845da  b8bcf98100           mov eax, 0x81f9bc
// 004845df  c3                   ret 
// 004845e0  b89cf98100           mov eax, 0x81f99c
// 004845e5  c3                   ret 
// 004845e6  b87cf98100           mov eax, 0x81f97c
// 004845eb  c3                   ret 
// 004845ec  b860f98100           mov eax, 0x81f960
// 004845f1  c3                   ret 
// 004845f2  b844f98100           mov eax, 0x81f944
// 004845f7  c3                   ret 
// 004845f8  b828f98100           mov eax, 0x81f928
// 004845fd  c3                   ret 
// 004845fe  b80cf98100           mov eax, 0x81f90c
// 00484603  c3                   ret 
// 00484604  b8e8f88100           mov eax, 0x81f8e8
// 00484609  c3                   ret 
// 0048460a  b8c8f88100           mov eax, 0x81f8c8
// 0048460f  c3                   ret 
// 00484610  b8b8f88100           mov eax, 0x81f8b8
// 00484615  c3                   ret 
// 00484616  b8a4f88100           mov eax, 0x81f8a4
// 0048461b  c3                   ret 
// 0048461c  b888f88100           mov eax, 0x81f888
// 00484621  c3                   ret 
// 00484622  b878f88100           mov eax, 0x81f878
// 00484627  c3                   ret 
// 00484628  b860f88100           mov eax, 0x81f860
// 0048462d  c3                   ret 
// 0048462e  b848f88100           mov eax, 0x81f848
// 00484633  c3                   ret 
// 00484634  b830f88100           mov eax, 0x81f830
// 00484639  c3                   ret 
// 0048463a  b814f88100           mov eax, 0x81f814
// 0048463f  c3                   ret 
// 00484640  3d488b0000           cmp eax, 0x8b48
// 00484645  7727                 ja 0x48466e
// 00484647  741f                 je 0x484668
// 00484649  8bc8                 mov ecx, eax
// 0048464b  81e907850000         sub ecx, 0x8507
// 00484651  740f                 je 0x484662
// 00484653  83e901               sub ecx, 1
// 00484656  0f85bd000000         jne 0x484719
// 0048465c  b800f88100           mov eax, 0x81f800
// 00484661  c3                   ret 
// 00484662  b8ecf78100           mov eax, 0x81f7ec
// 00484667  c3                   ret 
// 00484668  b8d4f78100           mov eax, 0x81f7d4
// 0048466d  c3                   ret 
// 0048466e  3d00000100           cmp eax, 0x10000
// 00484673  0f87a0000000         ja 0x484719
// 00484679  0f8494000000         je 0x484713
// 0048467f  8d88b074ffff         lea ecx, [eax - 0x8b50]
// 00484685  83f914               cmp ecx, 0x14
// 00484688  0f878b000000         ja 0x484719
// 0048468e  ff248d404e4800       jmp dword ptr [ecx*4 + 0x484e40]
// 00484695  b8c0f78100           mov eax, 0x81f7c0
// 0048469a  c3                   ret 
// 0048469b  b8acf78100           mov eax, 0x81f7ac
// 004846a0  c3                   ret 
// 004846a1  b898f78100           mov eax, 0x81f798
// 004846a6  c3                   ret 
// 004846a7  b888f78100           mov eax, 0x81f788
// 004846ac  c3                   ret 
// 004846ad  b878f78100           mov eax, 0x81f778
// 004846b2  c3                   ret 
// 004846b3  b868f78100           mov eax, 0x81f768
// 004846b8  c3                   ret 
// 004846b9  b85cf78100           mov eax, 0x81f75c
// 004846be  c3                   ret 
// 004846bf  b848f78100           mov eax, 0x81f748
// 004846c4  c3                   ret 
// 004846c5  b834f78100           mov eax, 0x81f734
// 004846ca  c3                   ret 
// 004846cb  b820f78100           mov eax, 0x81f720
// 004846d0  c3                   ret 
// 004846d1  b80cf78100           mov eax, 0x81f70c
// 004846d6  c3                   ret 
// 004846d7  b8f8f68100           mov eax, 0x81f6f8
// 004846dc  c3                   ret 
// 004846dd  b8e4f68100           mov eax, 0x81f6e4
// 004846e2  c3                   ret 
// 004846e3  b8d0f68100           mov eax, 0x81f6d0
// 004846e8  c3                   ret 
// 004846e9  b8bcf68100           mov eax, 0x81f6bc
// 004846ee  c3                   ret 
// 004846ef  b8a8f68100           mov eax, 0x81f6a8
// 004846f4  c3                   ret 
// 004846f5  b894f68100           mov eax, 0x81f694
// 004846fa  c3                   ret 
// 004846fb  b878f68100           mov eax, 0x81f678
// 00484700  c3                   ret 
// 00484701  b85cf68100           mov eax, 0x81f65c
// 00484706  c3                   ret 
// 00484707  b844f68100           mov eax, 0x81f644
// 0048470c  c3                   ret 
// 0048470d  b824f68100           mov eax, 0x81f624
// 00484712  c3                   ret 
// 00484713  b818f68100           mov eax, 0x81f618
// 00484718  c3                   ret 
// 00484719  50                   push eax
// 0048471a  6810f68100           push 0x81f610
// 0048471f  68c8fa9600           push 0x96fac8
// 00484724  ff1530288000         call dword ptr [0x802830]
// 0048472a  83c40c               add esp, 0xc
// 0048472d  b8c8fa9600           mov eax, 0x96fac8
// 00484732  c3                   ret 
// 00484733  90                   nop 
// 00484734  6e                   outsb dx, byte ptr [esi]
// 00484735  3a4800               cmp cl, byte ptr [eax]
// 00484738  743a                 je 0x484774
// 0048473a  48                   dec eax
// 0048473b  0026                 add byte ptr [esi], ah
// 0048473d  3a4800               cmp cl, byte ptr [eax]
// 00484740  4a                   dec edx
// 00484741  3a4800               cmp cl, byte ptr [eax]
// 00484744  50                   push eax
// 00484745  3a4800               cmp cl, byte ptr [eax]
// 00484748  56                   push esi
// 00484749  3a4800               cmp cl, byte ptr [eax]
// 0048474c  5c                   pop esp
// 0048474d  3a4800               cmp cl, byte ptr [eax]
// 00484750  623a                 bound edi, qword ptr [edx]
// 00484752  48                   dec eax
// 00484753  002c3a               add byte ptr [edx + edi], ch
// 00484756  48                   dec eax
// 00484757  00683a               add byte ptr [eax + 0x3a], ch
// 0048475a  48                   dec eax
// 0048475b  0032                 add byte ptr [edx], dh
// 0048475d  3a4800               cmp cl, byte ptr [eax]
// 00484760  383a                 cmp byte ptr [edx], bh
// 00484762  48                   dec eax
// 00484763  003e                 add byte ptr [esi], bh
// 00484765  3a4800               cmp cl, byte ptr [eax]
// 00484768  44                   inc esp
// 00484769  3a4800               cmp cl, byte ptr [eax]
// 0048476c  194748               sbb dword ptr [edi + 0x48], eax
// 0048476f  0000                 add byte ptr [eax], al
// 00484771  0102                 add dword ptr [edx], eax
// 00484773  03040506070809       add eax, dword ptr [eax + 0x9080706]
// 0048477a  0e                   push cs
// 0048477b  0e                   push cs
// 0048477c  0e                   push cs
// 0048477d  0e                   push cs
// 0048477e  0e                   push cs
// 0048477f  0e                   push cs
// 00484780  0a0e                 or cl, byte ptr [esi]
// 00484782  0e                   push cs
// 00484783  0e                   push cs
// 00484784  0e                   push cs
// 00484785  0e                   push cs
// 00484786  0e                   push cs
// 00484787  0e                   push cs
// 00484788  0e                   push cs
// 00484789  0e                   push cs
// 0048478a  0e                   push cs
// 0048478b  0e                   push cs
// 0048478c  0e                   push cs
// 0048478d  0e                   push cs
// 0048478e  0e                   push cs
// 0048478f  0e                   push cs
// 00484790  0b0e                 or ecx, dword ptr [esi]
// 00484792  0e                   push cs
// 00484793  0e                   push cs
// 00484794  0e                   push cs
// 00484795  0e                   push cs
// 00484796  0e                   push cs
// 00484797  0e                   push cs
// 00484798  0e                   push cs
// 00484799  0e                   push cs
// 0048479a  0e                   push cs
// 0048479b  0e                   push cs
// 0048479c  0e                   push cs
// 0048479d  0e                   push cs
// 0048479e  0e                   push cs
// 0048479f  0e                   push cs
// 004847a0  0e                   push cs
// 004847a1  0e                   push cs
// 004847a2  0e                   push cs
// 004847a3  0e                   push cs
// 004847a4  0e                   push cs
// 004847a5  0e                   push cs
// 004847a6  0e                   push cs
// 004847a7  0e                   push cs
// 004847a8  0e                   push cs
// 004847a9  0e                   push cs
// 004847aa  0e                   push cs
// 004847ab  0e                   push cs
// 004847ac  0e                   push cs
// 004847ad  0e                   push cs
// 004847ae  0e                   push cs
// 004847af  0e                   push cs
// 004847b0  0c0e                 or al, 0xe
// 004847b2  0e                   push cs
// 004847b3  0e                   push cs
// 004847b4  0e                   push cs
// 004847b5  0e                   push cs
// 004847b6  0e                   push cs
// 004847b7  0e                   push cs
// 004847b8  0e                   push cs
// 004847b9  0e                   push cs
// 004847ba  0e                   push cs
// 004847bb  0e                   push cs
// 004847bc  0e                   push cs
// 004847bd  0e                   push cs
// 004847be  0e                   push cs
// 004847bf  0e                   push cs
// 004847c0  0e                   push cs
// 004847c1  0e                   push cs
// 004847c2  0e                   push cs
// 004847c3  0e                   push cs
// 004847c4  0e                   push cs
// 004847c5  0e                   push cs
// 004847c6  0e                   push cs
// 004847c7  0e                   push cs
// 004847c8  0e                   push cs
// 004847c9  0e                   push cs
// 004847ca  0e                   push cs
// 004847cb  0e                   push cs
// 004847cc  0e                   push cs
// 004847cd  0e                   push cs
// 004847ce  0e                   push cs
// 004847cf  0e                   push cs
// 004847d0  0e                   push cs
// 004847d1  0e                   push cs
// 004847d2  0e                   push cs
// 004847d3  0e                   push cs
// 004847d4  0e                   push cs
// 004847d5  0e                   push cs
// 004847d6  0e                   push cs
// 004847d7  0e                   push cs
// 004847d8  0e                   push cs
// 004847d9  0e                   push cs
// 004847da  0e                   push cs
// 004847db  0e                   push cs
// 004847dc  0e                   push cs
// 004847dd  0e                   push cs
// 004847de  0e                   push cs
// 004847df  0e                   push cs
// 004847e0  0e                   push cs
// 004847e1  0e                   push cs
// 004847e2  0e                   push cs
// 004847e3  0e                   push cs
// 004847e4  0e                   push cs
// 004847e5  0e                   push cs
// 004847e6  0e                   push cs
// 004847e7  0e                   push cs
// 004847e8  0e                   push cs
// 004847e9  0e                   push cs
// 004847ea  0e                   push cs
// 004847eb  0e                   push cs
// 004847ec  0e                   push cs
// 004847ed  0e                   push cs
// 004847ee  0e                   push cs
// 004847ef  0e                   push cs
// 004847f0  0d8d49009f           or eax, 0x9f00498d
// 004847f5  3a4800               cmp cl, byte ptr [eax]
// 004847f8  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004847f9  3a4800               cmp cl, byte ptr [eax]
// 004847fc  ab                   stosd dword ptr es:[edi], eax
// 004847fd  3a4800               cmp cl, byte ptr [eax]
// 00484800  b13a                 mov cl, 0x3a
// 00484802  48                   dec eax
// 00484803  00dc                 add ah, bl
// 00484805  3a4800               cmp cl, byte ptr [eax]
// 00484808  e23a                 loop 0x484844
// 0048480a  48                   dec eax
// 0048480b  00e8                 add al, ch
// 0048480d  3a4800               cmp cl, byte ptr [eax]
// 00484810  ee                   out dx, al
// 00484811  3a4800               cmp cl, byte ptr [eax]
// 00484814  f4                   hlt 
// 00484815  3a4800               cmp cl, byte ptr [eax]
// 00484818  fa                   cli 
// 00484819  3a4800               cmp cl, byte ptr [eax]
// 0048481c  003b                 add byte ptr [ebx], bh
// 0048481e  48                   dec eax
// 0048481f  009b3b4800a1         add byte ptr [ebx - 0x5effb7c5], bl
// 00484825  3b4800               cmp ecx, dword ptr [eax]
// 00484828  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 00484829  3b4800               cmp ecx, dword ptr [eax]
// 0048482c  ad                   lodsd eax, dword ptr [esi]
// 0048482d  3b4800               cmp ecx, dword ptr [eax]
// 00484830  b33b                 mov bl, 0x3b
// 00484832  48                   dec eax
// 00484833  00b93b4800bf         add byte ptr [ecx - 0x40ffb7c5], bh
// 00484839  3b4800               cmp ecx, dword ptr [eax]
// 0048483c  c53b                 lds edi, ptr [ebx]
// 0048483e  48                   dec eax
// 0048483f  00f0                 add al, dh
// 00484841  3b4800               cmp ecx, dword ptr [eax]
// 00484844  f63b                 idiv byte ptr [ebx]
// 00484846  48                   dec eax
// 00484847  00fc                 add ah, bh
// 00484849  3b4800               cmp ecx, dword ptr [eax]
// 0048484c  023c48               add bh, byte ptr [eax + ecx*2]
// 0048484f  0008                 add byte ptr [eax], cl
// 00484851  3c48                 cmp al, 0x48
// 00484853  0033                 add byte ptr [ebx], dh
// 00484855  3c48                 cmp al, 0x48
// 00484857  0039                 add byte ptr [ecx], bh
// 00484859  3c48                 cmp al, 0x48
// 0048485b  003f                 add byte ptr [edi], bh
// 0048485d  3c48                 cmp al, 0x48
// 0048485f  00453c               add byte ptr [ebp + 0x3c], al
// 00484862  48                   dec eax
// 00484863  00bb3c4800c1         add byte ptr [ebx - 0x3effb7c4], bh
// 00484869  3c48                 cmp al, 0x48
// 0048486b  00c7                 add bh, al
// 0048486d  3c48                 cmp al, 0x48
// 0048486f  00cd                 add ch, cl
// 00484871  3c48                 cmp al, 0x48
// 00484873  00d3                 add bl, dl
// 00484875  3c48                 cmp al, 0x48
// 00484877  00d9                 add cl, bl
// 00484879  3c48                 cmp al, 0x48
// 0048487b  00df                 add bh, bl
// 0048487d  3c48                 cmp al, 0x48
// 0048487f  00e5                 add ch, ah
// 00484881  3c48                 cmp al, 0x48
// 00484883  00eb                 add bl, ch
// 00484885  3c48                 cmp al, 0x48
// 00484887  00f1                 add cl, dh
// 00484889  3c48                 cmp al, 0x48
// 0048488b  00f7                 add bh, dh
// 0048488d  3c48                 cmp al, 0x48
// 0048488f  00fd                 add ch, bh
// 00484891  3c48                 cmp al, 0x48
// 00484893  0003                 add byte ptr [ebx], al
// 00484895  3d4800093d           cmp eax, 0x3d090048
// 0048489a  48                   dec eax
// 0048489b  000f                 add byte ptr [edi], cl
// 0048489d  3d4800573d           cmp eax, 0x3d570048
// 004848a2  48                   dec eax
// 004848a3  00513d               add byte ptr [ecx + 0x3d], dl
// 004848a6  48                   dec eax
// 004848a7  004b3d               add byte ptr [ebx + 0x3d], cl
// 004848aa  48                   dec eax
// 004848ab  005d3d               add byte ptr [ebp + 0x3d], bl
// 004848ae  48                   dec eax
// 004848af  00b53c48001b         add byte ptr [ebp + 0x1b00483c], dh
// 004848b5  3d4800693d           cmp eax, 0x3d690048
// 004848ba  48                   dec eax
// 004848bb  0039                 add byte ptr [ecx], bh
// 004848bd  3d4800453d           cmp eax, 0x3d450048
// 004848c2  48                   dec eax
// 004848c3  003f                 add byte ptr [edi], bh
// 004848c5  3d4800333d           cmp eax, 0x3d330048
// 004848ca  48                   dec eax
// 004848cb  00633d               add byte ptr [ebx + 0x3d], ah
// 004848ce  48                   dec eax
// 004848cf  0027                 add byte ptr [edi], ah
// 004848d1  3d48002d3d           cmp eax, 0x3d2d0048
// 004848d6  48                   dec eax
// 004848d7  0021                 add byte ptr [ecx], ah
// 004848d9  3d48006f3d           cmp eax, 0x3d6f0048
// 004848de  48                   dec eax
// 004848df  00153d480019         add byte ptr [0x1900483d], dl
// 004848e5  47                   inc edi
// 004848e6  48                   dec eax
// 004848e7  0000                 add byte ptr [eax], al
// 004848e9  0102                 add dword ptr [edx], eax
// 004848eb  03040506070820       add eax, dword ptr [eax + 0x20080706]
// 004848f2  2020                 and byte ptr [eax], ah
// 004848f4  2020                 and byte ptr [eax], ah
// 004848f6  2009                 and byte ptr [ecx], cl
// 004848f8  0a0b                 or cl, byte ptr [ebx]
// 004848fa  0c20                 or al, 0x20
// 004848fc  2020                 and byte ptr [eax], ah
// 004848fe  2020                 and byte ptr [eax], ah
// 00484900  2020                 and byte ptr [eax], ah
// 00484902  2020                 and byte ptr [eax], ah
// 00484904  2020                 and byte ptr [eax], ah
// 00484906  200d0e20200f         and byte ptr [0xf20200e], cl
// 0048490c  2020                 and byte ptr [eax], ah
// 0048490e  2020                 and byte ptr [eax], ah
// 00484910  2020                 and byte ptr [eax], ah
// 00484912  2020                 and byte ptr [eax], ah
// 00484914  2020                 and byte ptr [eax], ah
// 00484916  2020                 and byte ptr [eax], ah
// 00484918  2020                 and byte ptr [eax], ah
// 0048491a  2020                 and byte ptr [eax], ah
// 0048491c  2020                 and byte ptr [eax], ah
// 0048491e  2020                 and byte ptr [eax], ah
// 00484920  2020                 and byte ptr [eax], ah
// 00484922  2020                 and byte ptr [eax], ah
// 00484924  2020                 and byte ptr [eax], ah
// 00484926  2020                 and byte ptr [eax], ah
// 00484928  1011                 adc byte ptr [ecx], dl
// 0048492a  2012                 and byte ptr [edx], dl
// 0048492c  2020                 and byte ptr [eax], ah
// 0048492e  2020                 and byte ptr [eax], ah
// 00484930  2020                 and byte ptr [eax], ah
// 00484932  2020                 and byte ptr [eax], ah
// 00484934  2020                 and byte ptr [eax], ah
// 00484936  2013                 and byte ptr [ebx], dl
// 00484938  2020                 and byte ptr [eax], ah
// 0048493a  2020                 and byte ptr [eax], ah
// 0048493c  2020                 and byte ptr [eax], ah
// 0048493e  1420                 adc al, 0x20
// 00484940  2020                 and byte ptr [eax], ah
// 00484942  2020                 and byte ptr [eax], ah
// 00484944  2020                 and byte ptr [eax], ah
// 00484946  201520202020         and byte ptr [0x20202020], dl
// 0048494c  2020                 and byte ptr [eax], ah
// 0048494e  2020                 and byte ptr [eax], ah
// 00484950  2020                 and byte ptr [eax], ah
// 00484952  2020                 and byte ptr [eax], ah
// 00484954  2020                 and byte ptr [eax], ah
// 00484956  2020                 and byte ptr [eax], ah
// 00484958  16                   push ss
// 00484959  2020                 and byte ptr [eax], ah
// 0048495b  2020                 and byte ptr [eax], ah
// 0048495d  2020                 and byte ptr [eax], ah
// 0048495f  2020                 and byte ptr [eax], ah
// 00484961  2020                 and byte ptr [eax], ah
// 00484963  2020                 and byte ptr [eax], ah
// 00484965  2020                 and byte ptr [eax], ah
// 00484967  2020                 and byte ptr [eax], ah
// 00484969  2020                 and byte ptr [eax], ah
// 0048496b  2020                 and byte ptr [eax], ah
// 0048496d  2020                 and byte ptr [eax], ah
// 0048496f  2020                 and byte ptr [eax], ah
// 00484971  2020                 and byte ptr [eax], ah
// 00484973  2020                 and byte ptr [eax], ah
// 00484975  2020                 and byte ptr [eax], ah
// 00484977  17                   pop ss
// 00484978  2020                 and byte ptr [eax], ah
// 0048497a  2020                 and byte ptr [eax], ah
// 0048497c  2020                 and byte ptr [eax], ah
// 0048497e  2020                 and byte ptr [eax], ah
// 00484980  2020                 and byte ptr [eax], ah
// 00484982  2020                 and byte ptr [eax], ah
// 00484984  2020                 and byte ptr [eax], ah
// 00484986  2020                 and byte ptr [eax], ah
// 00484988  1820                 sbb byte ptr [eax], ah
// 0048498a  2020                 and byte ptr [eax], ah
// 0048498c  2020                 and byte ptr [eax], ah
// 0048498e  2020                 and byte ptr [eax], ah
// 00484990  2020                 and byte ptr [eax], ah
// 00484992  2020                 and byte ptr [eax], ah
// 00484994  2020                 and byte ptr [eax], ah
// 00484996  2020                 and byte ptr [eax], ah
// 00484998  2020                 and byte ptr [eax], ah
// 0048499a  2020                 and byte ptr [eax], ah
// 0048499c  2020                 and byte ptr [eax], ah
// 0048499e  2020                 and byte ptr [eax], ah
// 004849a0  2020                 and byte ptr [eax], ah
// 004849a2  2020                 and byte ptr [eax], ah
// 004849a4  2020                 and byte ptr [eax], ah
// 004849a6  2019                 and byte ptr [ecx], bl
// 004849a8  2020                 and byte ptr [eax], ah
// 004849aa  2020                 and byte ptr [eax], ah
// 004849ac  2020                 and byte ptr [eax], ah
// 004849ae  2020                 and byte ptr [eax], ah
// 004849b0  2020                 and byte ptr [eax], ah
// 004849b2  2020                 and byte ptr [eax], ah
// 004849b4  2020                 and byte ptr [eax], ah
// 004849b6  201a                 and byte ptr [edx], bl
// 004849b8  2020                 and byte ptr [eax], ah
// 004849ba  2020                 and byte ptr [eax], ah
// 004849bc  2020                 and byte ptr [eax], ah
// 004849be  2020                 and byte ptr [eax], ah
// 004849c0  2020                 and byte ptr [eax], ah
// 004849c2  2020                 and byte ptr [eax], ah
// 004849c4  2020                 and byte ptr [eax], ah
// 004849c6  201b                 and byte ptr [ebx], bl
// 004849c8  1c1d                 sbb al, 0x1d
// 004849ca  2020                 and byte ptr [eax], ah
// 004849cc  2020                 and byte ptr [eax], ah
// 004849ce  2020                 and byte ptr [eax], ah
// 004849d0  2020                 and byte ptr [eax], ah
// 004849d2  2020                 and byte ptr [eax], ah
// 004849d4  2020                 and byte ptr [eax], ah
// 004849d6  2020                 and byte ptr [eax], ah
// 004849d8  1e                   push ds
// 004849d9  1f                   pop ds
// 004849da  8bff                 mov edi, edi
// 004849dc  1e                   push ds
// 004849dd  3e48                 dec eax
// 004849df  0018                 add byte ptr [eax], bl
// 004849e1  3e48                 dec eax
// 004849e3  0012                 add byte ptr [edx], dl
// 004849e5  3e48                 dec eax
// 004849e7  00b23d4800b8         add byte ptr [edx - 0x47ffb7c3], dh
// 004849ed  3d4800be3d           cmp eax, 0x3dbe0048
// 004849f2  48                   dec eax
// 004849f3  00c4                 add ah, al
// 004849f5  3d4800ca3d           cmp eax, 0x3dca0048
// 004849fa  48                   dec eax
// 004849fb  00d0                 add al, dl
// 004849fd  3d4800d63d           cmp eax, 0x3dd60048
// 00484a02  48                   dec eax
// 00484a03  00dc                 add ah, bl
// 00484a05  3d4800e23d           cmp eax, 0x3de20048
// 00484a0a  48                   dec eax
// 00484a0b  00e8                 add al, ch
// 00484a0d  3d4800ee3d           cmp eax, 0x3dee0048
// 00484a12  48                   dec eax
// 00484a13  00f4                 add ah, dh
// 00484a15  3d4800fa3d           cmp eax, 0x3dfa0048
// 00484a1a  48                   dec eax
// 00484a1b  0000                 add byte ptr [eax], al
// 00484a1d  3e48                 dec eax
// 00484a1f  0006                 add byte ptr [esi], al
// 00484a21  3e48                 dec eax
// 00484a23  000c3e               add byte ptr [esi + edi], cl
// 00484a26  48                   dec eax
// 00484a27  0019                 add byte ptr [ecx], bl
// 00484a29  47                   inc edi
// 00484a2a  48                   dec eax
// 00484a2b  0000                 add byte ptr [eax], al
// 00484a2d  0102                 add dword ptr [edx], eax
// 00484a2f  1313                 adc edx, dword ptr [ebx]
// 00484a31  1313                 adc edx, dword ptr [ebx]
// 00484a33  1313                 adc edx, dword ptr [ebx]
// 00484a35  1313                 adc edx, dword ptr [ebx]
// 00484a37  1313                 adc edx, dword ptr [ebx]
// 00484a39  1313                 adc edx, dword ptr [ebx]
// 00484a3b  1313                 adc edx, dword ptr [ebx]
// 00484a3d  1313                 adc edx, dword ptr [ebx]
// 00484a3f  1313                 adc edx, dword ptr [ebx]
// 00484a41  1313                 adc edx, dword ptr [ebx]
// 00484a43  1313                 adc edx, dword ptr [ebx]
// 00484a45  1313                 adc edx, dword ptr [ebx]
// 00484a47  1313                 adc edx, dword ptr [ebx]
// 00484a49  1313                 adc edx, dword ptr [ebx]
// 00484a4b  1313                 adc edx, dword ptr [ebx]
// 00484a4d  1313                 adc edx, dword ptr [ebx]
// 00484a4f  1313                 adc edx, dword ptr [ebx]
// 00484a51  1313                 adc edx, dword ptr [ebx]
// 00484a53  1313                 adc edx, dword ptr [ebx]
// 00484a55  1313                 adc edx, dword ptr [ebx]
// 00484a57  1313                 adc edx, dword ptr [ebx]
// 00484a59  1313                 adc edx, dword ptr [ebx]
// 00484a5b  1313                 adc edx, dword ptr [ebx]
// 00484a5d  1313                 adc edx, dword ptr [ebx]
// 00484a5f  1313                 adc edx, dword ptr [ebx]
// 00484a61  1313                 adc edx, dword ptr [ebx]
// 00484a63  1313                 adc edx, dword ptr [ebx]
// 00484a65  1313                 adc edx, dword ptr [ebx]
// 00484a67  1313                 adc edx, dword ptr [ebx]
// 00484a69  1313                 adc edx, dword ptr [ebx]
// 00484a6b  1313                 adc edx, dword ptr [ebx]
// 00484a6d  1313                 adc edx, dword ptr [ebx]
// 00484a6f  1313                 adc edx, dword ptr [ebx]
// 00484a71  1313                 adc edx, dword ptr [ebx]
// 00484a73  1313                 adc edx, dword ptr [ebx]
// 00484a75  1313                 adc edx, dword ptr [ebx]
// 00484a77  1313                 adc edx, dword ptr [ebx]
// 00484a79  1313                 adc edx, dword ptr [ebx]
// 00484a7b  1313                 adc edx, dword ptr [ebx]
// 00484a7d  1313                 adc edx, dword ptr [ebx]
// 00484a7f  1313                 adc edx, dword ptr [ebx]
// 00484a81  1313                 adc edx, dword ptr [ebx]
// 00484a83  1313                 adc edx, dword ptr [ebx]
// 00484a85  1313                 adc edx, dword ptr [ebx]
// 00484a87  1313                 adc edx, dword ptr [ebx]
// 00484a89  1313                 adc edx, dword ptr [ebx]
// 00484a8b  1313                 adc edx, dword ptr [ebx]
// 00484a8d  1313                 adc edx, dword ptr [ebx]
// 00484a8f  1313                 adc edx, dword ptr [ebx]
// 00484a91  1313                 adc edx, dword ptr [ebx]
// 00484a93  1313                 adc edx, dword ptr [ebx]
// 00484a95  1313                 adc edx, dword ptr [ebx]
// 00484a97  1313                 adc edx, dword ptr [ebx]
// 00484a99  1313                 adc edx, dword ptr [ebx]
// 00484a9b  1313                 adc edx, dword ptr [ebx]
// 00484a9d  1313                 adc edx, dword ptr [ebx]
// 00484a9f  1313                 adc edx, dword ptr [ebx]
// 00484aa1  1313                 adc edx, dword ptr [ebx]
// 00484aa3  1313                 adc edx, dword ptr [ebx]
// 00484aa5  1313                 adc edx, dword ptr [ebx]
// 00484aa7  1313                 adc edx, dword ptr [ebx]
// 00484aa9  1313                 adc edx, dword ptr [ebx]
// 00484aab  1313                 adc edx, dword ptr [ebx]
// 00484aad  1313                 adc edx, dword ptr [ebx]
// 00484aaf  1313                 adc edx, dword ptr [ebx]
// 00484ab1  1313                 adc edx, dword ptr [ebx]
// 00484ab3  1313                 adc edx, dword ptr [ebx]
// 00484ab5  1313                 adc edx, dword ptr [ebx]
// 00484ab7  1313                 adc edx, dword ptr [ebx]
// 00484ab9  1313                 adc edx, dword ptr [ebx]
// 00484abb  1313                 adc edx, dword ptr [ebx]
// 00484abd  1313                 adc edx, dword ptr [ebx]
// 00484abf  1313                 adc edx, dword ptr [ebx]
// 00484ac1  1313                 adc edx, dword ptr [ebx]
// 00484ac3  1313                 adc edx, dword ptr [ebx]
// 00484ac5  1313                 adc edx, dword ptr [ebx]
// 00484ac7  1313                 adc edx, dword ptr [ebx]
// 00484ac9  1313                 adc edx, dword ptr [ebx]
// 00484acb  1313                 adc edx, dword ptr [ebx]
// 00484acd  1313                 adc edx, dword ptr [ebx]
// 00484acf  1313                 adc edx, dword ptr [ebx]
// 00484ad1  1313                 adc edx, dword ptr [ebx]
// 00484ad3  1313                 adc edx, dword ptr [ebx]
// 00484ad5  1313                 adc edx, dword ptr [ebx]
// 00484ad7  1313                 adc edx, dword ptr [ebx]
// 00484ad9  1313                 adc edx, dword ptr [ebx]
// 00484adb  1313                 adc edx, dword ptr [ebx]
// 00484add  1313                 adc edx, dword ptr [ebx]
// 00484adf  1303                 adc eax, dword ptr [ebx]
// 00484ae1  0405                 add al, 5
// 00484ae3  06                   push es
// 00484ae4  07                   pop es
// 00484ae5  0809                 or byte ptr [ecx], cl
// 00484ae7  0a0b                 or cl, byte ptr [ebx]
// 00484ae9  0c0d                 or al, 0xd
// 00484aeb  1313                 adc edx, dword ptr [ebx]
// 00484aed  1313                 adc edx, dword ptr [ebx]
// 00484aef  1313                 adc edx, dword ptr [ebx]
// 00484af1  1313                 adc edx, dword ptr [ebx]
// 00484af3  1313                 adc edx, dword ptr [ebx]
// 00484af5  1313                 adc edx, dword ptr [ebx]
// 00484af7  1313                 adc edx, dword ptr [ebx]
// 00484af9  1313                 adc edx, dword ptr [ebx]
// 00484afb  0e                   push cs
// 00484afc  0f1011               movups xmm2, xmmword ptr [ecx]
// 00484aff  12583e               adc bl, byte ptr [eax + 0x3e]
// 00484b02  48                   dec eax
// 00484b03  005e3e               add byte ptr [esi + 0x3e], bl
// 00484b06  48                   dec eax
// 00484b07  00643e48             add byte ptr [esi + edi + 0x48], ah
// 00484b0b  006a3e               add byte ptr [edx + 0x3e], ch
// 00484b0e  48                   dec eax
// 00484b0f  00703e               add byte ptr [eax + 0x3e], dh
// 00484b12  48                   dec eax
// 00484b13  00763e               add byte ptr [esi + 0x3e], dh
// 00484b16  48                   dec eax
// 00484b17  007c3e48             add byte ptr [esi + edi + 0x48], bh
// 00484b1b  00823e480088         add byte ptr [edx - 0x77ffb7c2], al
// 00484b21  3e48                 dec eax
// 00484b23  008e3e480094         add byte ptr [esi - 0x6bffb7c2], cl
// 00484b29  3e48                 dec eax
// 00484b2b  009a3e4800a0         add byte ptr [edx - 0x5fffb7c2], bl
// 00484b31  3e48                 dec eax
// 00484b33  00a63e4800ac         add byte ptr [esi - 0x53ffb7c2], ah
// 00484b39  3e48                 dec eax
// 00484b3b  00b23e4800b8         add byte ptr [edx - 0x47ffb7c2], dh
// 00484b41  3e48                 dec eax
// 00484b43  00be3e4800c4         add byte ptr [esi - 0x3bffb7c2], bh
// 00484b49  3e48                 dec eax
// 00484b4b  00ca                 add dl, cl
// 00484b4d  3e48                 dec eax
// 00484b4f  0019                 add byte ptr [ecx], bl
// 00484b51  47                   inc edi
// 00484b52  48                   dec eax
// 00484b53  0000                 add byte ptr [eax], al
// 00484b55  0102                 add dword ptr [edx], eax
// 00484b57  03040506070814       add eax, dword ptr [eax + 0x14080706]
// 00484b5e  1414                 adc al, 0x14
// 00484b60  1414                 adc al, 0x14
// 00484b62  1414                 adc al, 0x14
// 00484b64  1414                 adc al, 0x14
// 00484b66  1414                 adc al, 0x14
// 00484b68  1414                 adc al, 0x14
// 00484b6a  1414                 adc al, 0x14
// 00484b6c  1414                 adc al, 0x14
// 00484b6e  1414                 adc al, 0x14
// 00484b70  1414                 adc al, 0x14
// 00484b72  1414                 adc al, 0x14
// 00484b74  090a                 or dword ptr [edx], ecx
// 00484b76  0b0c0d0e0f1011       or ecx, dword ptr [ecx + 0x11100f0e]
// 00484b7d  1414                 adc al, 0x14
// 00484b7f  1414                 adc al, 0x14
// 00484b81  1414                 adc al, 0x14
// 00484b83  1414                 adc al, 0x14
// 00484b85  1414                 adc al, 0x14
// 00484b87  1414                 adc al, 0x14
// 00484b89  1414                 adc al, 0x14
// 00484b8b  1414                 adc al, 0x14
// 00484b8d  1414                 adc al, 0x14
// 00484b8f  1414                 adc al, 0x14
// 00484b91  1414                 adc al, 0x14
// 00484b93  1414                 adc al, 0x14
// 00484b95  1414                 adc al, 0x14
// 00484b97  1414                 adc al, 0x14
// 00484b99  1414                 adc al, 0x14
// 00484b9b  1414                 adc al, 0x14
// 00484b9d  1414                 adc al, 0x14
// 00484b9f  1414                 adc al, 0x14
// 00484ba1  1414                 adc al, 0x14
// 00484ba3  1412                 adc al, 0x12
// 00484ba5  138bfff53e48         adc ecx, dword ptr [ebx + 0x483ef5ff]
// 00484bab  0019                 add byte ptr [ecx], bl
// 00484bad  47                   inc edi
// 00484bae  48                   dec eax
// 00484baf  00fb                 add bl, bh
// 00484bb1  3e48                 dec eax
// 00484bb3  0001                 add byte ptr [ecx], al
// 00484bb5  3f                   aas 
// 00484bb6  48                   dec eax
// 00484bb7  0007                 add byte ptr [edi], al
// 00484bb9  3f                   aas 
// 00484bba  48                   dec eax
// 00484bbb  00713f               add byte ptr [ecx + 0x3f], dh
// 00484bbe  48                   dec eax
// 00484bbf  00773f               add byte ptr [edi + 0x3f], dh
// 00484bc2  48                   dec eax
// 00484bc3  007d3f               add byte ptr [ebp + 0x3f], bh
// 00484bc6  48                   dec eax
// 00484bc7  00833f480089         add byte ptr [ebx - 0x76ffb7c1], al
// 00484bcd  3f                   aas 
// 00484bce  48                   dec eax
// 00484bcf  008f3f480095         add byte ptr [edi - 0x6affb7c1], cl
// 00484bd5  3f                   aas 
// 00484bd6  48                   dec eax
// 00484bd7  00d7                 add bh, dl
// 00484bd9  3f                   aas 
// 00484bda  48                   dec eax
// 00484bdb  00dd                 add ch, bl
// 00484bdd  3f                   aas 
// 00484bde  48                   dec eax
// 00484bdf  00e3                 add bl, ah
// 00484be1  3f                   aas 
// 00484be2  48                   dec eax
// 00484be3  00e9                 add cl, ch
// 00484be5  3f                   aas 
// 00484be6  48                   dec eax
// 00484be7  00ef                 add bh, ch
// 00484be9  3f                   aas 
// 00484bea  48                   dec eax
// 00484beb  00f5                 add ch, dh
// 00484bed  3f                   aas 
// 00484bee  48                   dec eax
// 00484bef  00fb                 add bl, bh
// 00484bf1  3f                   aas 
// 00484bf2  48                   dec eax
// 00484bf3  0001                 add byte ptr [ecx], al
// 00484bf5  40                   inc eax
// 00484bf6  48                   dec eax
// 00484bf7  0007                 add byte ptr [edi], al
// 00484bf9  40                   inc eax
// 00484bfa  48                   dec eax
// 00484bfb  000d4048002f         add byte ptr [0x2f004840], cl
// 00484c01  40                   inc eax
// 00484c02  48                   dec eax
// 00484c03  00354048003b         add byte ptr [0x3b004840], dh
// 00484c09  40                   inc eax
// 00484c0a  48                   dec eax
// 00484c0b  004140               add byte ptr [ecx + 0x40], al
// 00484c0e  48                   dec eax
// 00484c0f  004740               add byte ptr [edi + 0x40], al
// 00484c12  48                   dec eax
// 00484c13  004d40               add byte ptr [ebp + 0x40], cl
// 00484c16  48                   dec eax
// 00484c17  005340               add byte ptr [ebx + 0x40], dl
// 00484c1a  48                   dec eax
// 00484c1b  005940               add byte ptr [ecx + 0x40], bl
// 00484c1e  48                   dec eax
// 00484c1f  005f40               add byte ptr [edi + 0x40], bl
// 00484c22  48                   dec eax
// 00484c23  006540               add byte ptr [ebp + 0x40], ah
// 00484c26  48                   dec eax
// 00484c27  006b40               add byte ptr [ebx + 0x40], ch
// 00484c2a  48                   dec eax
// 00484c2b  007140               add byte ptr [ecx + 0x40], dh
// 00484c2e  48                   dec eax
// 00484c2f  007740               add byte ptr [edi + 0x40], dh
// 00484c32  48                   dec eax
// 00484c33  007d40               add byte ptr [ebp + 0x40], bh
// 00484c36  48                   dec eax
// 00484c37  008340480073         add byte ptr [ebx + 0x73004840], al
// 00484c3d  41                   inc ecx
// 00484c3e  48                   dec eax
// 00484c3f  007941               add byte ptr [ecx + 0x41], bh
// 00484c42  48                   dec eax
// 00484c43  007f41               add byte ptr [edi + 0x41], bh
// 00484c46  48                   dec eax
// 00484c47  00854148008b         add byte ptr [ebp - 0x74ffb7bf], al
// 00484c4d  41                   inc ecx
// 00484c4e  48                   dec eax
// 00484c4f  009141480097         add byte ptr [ecx - 0x68ffb7bf], dl
// 00484c55  41                   inc ecx
// 00484c56  48                   dec eax
// 00484c57  009d414800a3         add byte ptr [ebp - 0x5cffb7bf], bl
// 00484c5d  41                   inc ecx
// 00484c5e  48                   dec eax
// 00484c5f  00a941480094         add byte ptr [ecx - 0x6bffb7bf], ch
// 00484c65  44                   inc esp
// 00484c66  48                   dec eax
// 00484c67  009a444800a0         add byte ptr [edx - 0x5fffb7bc], bl
// 00484c6d  44                   inc esp
// 00484c6e  48                   dec eax
// 00484c6f  00a6444800ac         add byte ptr [esi - 0x53ffb7bc], ah
// 00484c75  44                   inc esp
// 00484c76  48                   dec eax
// 00484c77  00d7                 add bh, dl
// 00484c79  44                   inc esp
// 00484c7a  48                   dec eax
// 00484c7b  00dd                 add ch, bl
// 00484c7d  44                   inc esp
// 00484c7e  48                   dec eax
// 00484c7f  00e3                 add bl, ah
// 00484c81  44                   inc esp
// 00484c82  48                   dec eax
// 00484c83  00e9                 add cl, ch
// 00484c85  44                   inc esp
// 00484c86  48                   dec eax
// 00484c87  00ef                 add bh, ch
// 00484c89  44                   inc esp
// 00484c8a  48                   dec eax
// 00484c8b  00f5                 add ch, dh
// 00484c8d  44                   inc esp
// 00484c8e  48                   dec eax
// 00484c8f  00fb                 add bl, bh
// 00484c91  44                   inc esp
// 00484c92  48                   dec eax
// 00484c93  004a45               add byte ptr [edx + 0x45], cl
// 00484c96  48                   dec eax
// 00484c97  00444548             add byte ptr [ebp + eax*2 + 0x48], al
// 00484c9b  0028                 add byte ptr [eax], ch
// 00484c9d  46                   inc esi
// 00484c9e  48                   dec eax
// 00484c9f  002e                 add byte ptr [esi], ch
// 00484ca1  46                   inc esi
// 00484ca2  48                   dec eax
// 00484ca3  003446               add byte ptr [esi + eax*2], dh
// 00484ca6  48                   dec eax
// 00484ca7  0022                 add byte ptr [edx], ah
// 00484ca9  46                   inc esi
// 00484caa  48                   dec eax
// 00484cab  0038                 add byte ptr [eax], bh
// 00484cad  45                   inc ebp
// 00484cae  48                   dec eax
// 00484caf  005045               add byte ptr [eax + 0x45], dl
// 00484cb2  48                   dec eax
// 00484cb3  005645               add byte ptr [esi + 0x45], dl
// 00484cb6  48                   dec eax
// 00484cb7  005c4548             add byte ptr [ebp + eax*2 + 0x48], bl
// 00484cbb  006245               add byte ptr [edx + 0x45], ah
// 00484cbe  48                   dec eax
// 00484cbf  006845               add byte ptr [eax + 0x45], ch
// 00484cc2  48                   dec eax
// 00484cc3  006e45               add byte ptr [esi + 0x45], ch
// 00484cc6  48                   dec eax
// 00484cc7  00744548             add byte ptr [ebp + eax*2 + 0x48], dh
// 00484ccb  007a45               add byte ptr [edx + 0x45], bh
// 00484cce  48                   dec eax
// 00484ccf  0080454800b0         add byte ptr [eax - 0x4fffb7bb], al
// 00484cd5  45                   inc ebp
// 00484cd6  48                   dec eax
// 00484cd7  00864548008c         add byte ptr [esi - 0x73ffb7bb], al
// 00484cdd  45                   inc ebp
// 00484cde  48                   dec eax
// 00484cdf  00b645480092         add byte ptr [esi - 0x6dffb7bb], dh
// 00484ce5  45                   inc ebp
// 00484ce6  48                   dec eax
// 00484ce7  00984548009e         add byte ptr [eax - 0x61ffb7bb], bl
// 00484ced  45                   inc ebp
// 00484cee  48                   dec eax
// 00484cef  00bc454800a445       add byte ptr [ebp + eax*2 + 0x45a40048], bh
// 00484cf6  48                   dec eax
// 00484cf7  00aa454800c2         add byte ptr [edx - 0x3dffb7bb], ch
// 00484cfd  45                   inc ebp
// 00484cfe  48                   dec eax
// 00484cff  00c8                 add al, cl
// 00484d01  45                   inc ebp
// 00484d02  48                   dec eax
// 00484d03  00ce                 add dh, cl
// 00484d05  45                   inc ebp
// 00484d06  48                   dec eax
// 00484d07  00d4                 add ah, dl
// 00484d09  45                   inc ebp
// 00484d0a  48                   dec eax
// 00484d0b  00da                 add dl, bl
// 00484d0d  45                   inc ebp
// 00484d0e  48                   dec eax
// 00484d0f  00e0                 add al, ah
// 00484d11  45                   inc ebp
// 00484d12  48                   dec eax
// 00484d13  00e6                 add dh, ah
// 00484d15  45                   inc ebp
// 00484d16  48                   dec eax
// 00484d17  00ec                 add ah, ch
// 00484d19  45                   inc ebp
// 00484d1a  48                   dec eax
// 00484d1b  00f2                 add dl, dh
// 00484d1d  45                   inc ebp
// 00484d1e  48                   dec eax
// 00484d1f  00f8                 add al, bh
// 00484d21  45                   inc ebp
// 00484d22  48                   dec eax
// 00484d23  00fe                 add dh, bh
// 00484d25  45                   inc ebp
// 00484d26  48                   dec eax
// 00484d27  000446               add byte ptr [esi + eax*2], al
// 00484d2a  48                   dec eax
// 00484d2b  000a                 add byte ptr [edx], cl
// 00484d2d  46                   inc esi
// 00484d2e  48                   dec eax
// 00484d2f  0010                 add byte ptr [eax], dl
// 00484d31  46                   inc esi
// 00484d32  48                   dec eax
// 00484d33  0016                 add byte ptr [esi], dl
// 00484d35  46                   inc esi
// 00484d36  48                   dec eax
// 00484d37  001c46               add byte ptr [esi + eax*2], bl
// 00484d3a  48                   dec eax
// 00484d3b  003e                 add byte ptr [esi], bh
// 00484d3d  45                   inc ebp
// 00484d3e  48                   dec eax
// 00484d3f  0019                 add byte ptr [ecx], bl
// 00484d41  47                   inc edi
// 00484d42  48                   dec eax
// 00484d43  0000                 add byte ptr [eax], al
// 00484d45  012b                 add dword ptr [ebx], ebp
// 00484d47  2b2b                 sub ebp, dword ptr [ebx]
// 00484d49  2b2b                 sub ebp, dword ptr [ebx]
// 00484d4b  2b2b                 sub ebp, dword ptr [ebx]
// 00484d4d  2b2b                 sub ebp, dword ptr [ebx]
// 00484d4f  2b2b                 sub ebp, dword ptr [ebx]
// 00484d51  2b2b                 sub ebp, dword ptr [ebx]
// 00484d53  2b2b                 sub ebp, dword ptr [ebx]
// 00484d55  2b2b                 sub ebp, dword ptr [ebx]
// 00484d57  2b2b                 sub ebp, dword ptr [ebx]
// 00484d59  2b2b                 sub ebp, dword ptr [ebx]
// 00484d5b  2b2b                 sub ebp, dword ptr [ebx]
// 00484d5d  2b2b                 sub ebp, dword ptr [ebx]
// 00484d5f  2b2b                 sub ebp, dword ptr [ebx]
// 00484d61  2b2b                 sub ebp, dword ptr [ebx]
// 00484d63  2b2b                 sub ebp, dword ptr [ebx]
// 00484d65  2b2b                 sub ebp, dword ptr [ebx]
// 00484d67  2b2b                 sub ebp, dword ptr [ebx]
// 00484d69  2b2b                 sub ebp, dword ptr [ebx]
// 00484d6b  2b2b                 sub ebp, dword ptr [ebx]
// 00484d6d  2b2b                 sub ebp, dword ptr [ebx]
// 00484d6f  2b2b                 sub ebp, dword ptr [ebx]
// 00484d71  2b2b                 sub ebp, dword ptr [ebx]
// 00484d73  2b2b                 sub ebp, dword ptr [ebx]
// 00484d75  0203                 add al, byte ptr [ebx]
// 00484d77  042b                 add al, 0x2b
// 00484d79  2b2b                 sub ebp, dword ptr [ebx]
// 00484d7b  2b052b2b062b         sub eax, dword ptr [0x2b062b2b]
// 00484d81  07                   pop es
// 00484d82  0809                 or byte ptr [ecx], cl
// 00484d84  0a0b                 or cl, byte ptr [ebx]
// 00484d86  0c0d                 or al, 0xd
// 00484d88  0e                   push cs
// 00484d89  0f1011               movups xmm2, xmmword ptr [ecx]
// 00484d8c  1213                 adc dl, byte ptr [ebx]
// 00484d8e  1415                 adc al, 0x15
// 00484d90  16                   push ss
// 00484d91  17                   pop ss
// 00484d92  1819                 sbb byte ptr [ecx], bl
// 00484d94  1a1b                 sbb bl, byte ptr [ebx]
// 00484d96  1c1d                 sbb al, 0x1d
// 00484d98  1e                   push ds
// 00484d99  1f                   pop ds
// 00484d9a  2021                 and byte ptr [ecx], ah
// 00484d9c  2223                 and ah, byte ptr [ebx]
// 00484d9e  2425                 and al, 0x25
// 00484da0  262b2b               sub ebp, dword ptr es:[ebx]
// 00484da3  2b2b                 sub ebp, dword ptr [ebx]
// 00484da5  2b2b                 sub ebp, dword ptr [ebx]
// 00484da7  2b2b                 sub ebp, dword ptr [ebx]
// 00484da9  2b2b                 sub ebp, dword ptr [ebx]
// 00484dab  2b2b                 sub ebp, dword ptr [ebx]
// 00484dad  2b2b                 sub ebp, dword ptr [ebx]
// 00484daf  2b2b                 sub ebp, dword ptr [ebx]
// 00484db1  2b2b                 sub ebp, dword ptr [ebx]
// 00484db3  2b2b                 sub ebp, dword ptr [ebx]
// 00484db5  2b2b                 sub ebp, dword ptr [ebx]
// 00484db7  2b2b                 sub ebp, dword ptr [ebx]
// 00484db9  2b2b                 sub ebp, dword ptr [ebx]
// 00484dbb  2b2b                 sub ebp, dword ptr [ebx]
// 00484dbd  2b2b                 sub ebp, dword ptr [ebx]
// 00484dbf  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc1  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc3  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc5  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc7  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc9  2b2b                 sub ebp, dword ptr [ebx]
// 00484dcb  2b2b                 sub ebp, dword ptr [ebx]
// 00484dcd  2b2b                 sub ebp, dword ptr [ebx]
// 00484dcf  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd1  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd3  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd5  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd7  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd9  2b2b                 sub ebp, dword ptr [ebx]
// 00484ddb  2b2b                 sub ebp, dword ptr [ebx]
// 00484ddd  2b2b                 sub ebp, dword ptr [ebx]
// 00484ddf  2b2b                 sub ebp, dword ptr [ebx]
// 00484de1  2b2b                 sub ebp, dword ptr [ebx]
// 00484de3  2b2b                 sub ebp, dword ptr [ebx]
// 00484de5  2b2b                 sub ebp, dword ptr [ebx]
// 00484de7  2b2b                 sub ebp, dword ptr [ebx]
// 00484de9  2b2b                 sub ebp, dword ptr [ebx]
// 00484deb  2b2b                 sub ebp, dword ptr [ebx]
// 00484ded  2b2b                 sub ebp, dword ptr [ebx]
// 00484def  2b2b                 sub ebp, dword ptr [ebx]
// 00484df1  2b2b                 sub ebp, dword ptr [ebx]
// 00484df3  2b2b                 sub ebp, dword ptr [ebx]
// 00484df5  2b2b                 sub ebp, dword ptr [ebx]
// 00484df7  27                   daa 
// 00484df8  2829                 sub byte ptr [ecx], ch
// 00484dfa  2b2b                 sub ebp, dword ptr [ebx]
// 00484dfc  2b2b                 sub ebp, dword ptr [ebx]
// 00484dfe  2b2b                 sub ebp, dword ptr [ebx]
// 00484e00  2b2b                 sub ebp, dword ptr [ebx]
// 00484e02  2b2b                 sub ebp, dword ptr [ebx]
// 00484e04  2b2b                 sub ebp, dword ptr [ebx]
// 00484e06  2b2b                 sub ebp, dword ptr [ebx]
// 00484e08  2b2b                 sub ebp, dword ptr [ebx]
// 00484e0a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e0c  2b2b                 sub ebp, dword ptr [ebx]
// 00484e0e  2b2b                 sub ebp, dword ptr [ebx]
// 00484e10  2b2b                 sub ebp, dword ptr [ebx]
// 00484e12  2b2b                 sub ebp, dword ptr [ebx]
// 00484e14  2b2b                 sub ebp, dword ptr [ebx]
// 00484e16  2b2b                 sub ebp, dword ptr [ebx]
// 00484e18  2b2b                 sub ebp, dword ptr [ebx]
// 00484e1a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e1c  2b2b                 sub ebp, dword ptr [ebx]
// 00484e1e  2b2b                 sub ebp, dword ptr [ebx]
// 00484e20  2b2b                 sub ebp, dword ptr [ebx]
// 00484e22  2b2b                 sub ebp, dword ptr [ebx]
// 00484e24  2b2b                 sub ebp, dword ptr [ebx]
// 00484e26  2b2b                 sub ebp, dword ptr [ebx]
// 00484e28  2b2b                 sub ebp, dword ptr [ebx]
// 00484e2a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e2c  2b2b                 sub ebp, dword ptr [ebx]
// 00484e2e  2b2b                 sub ebp, dword ptr [ebx]
// 00484e30  2b2b                 sub ebp, dword ptr [ebx]
// 00484e32  2b2b                 sub ebp, dword ptr [ebx]
// 00484e34  2b2b                 sub ebp, dword ptr [ebx]
// 00484e36  2b2b                 sub ebp, dword ptr [ebx]
// 00484e38  2b2b                 sub ebp, dword ptr [ebx]
// 00484e3a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e3c  2a8d49009546         sub cl, byte ptr [ebp + 0x46950049]
// 00484e42  48                   dec eax
// 00484e43  009b464800a1         add byte ptr [ebx - 0x5effb7ba], bl
// 00484e49  46                   inc esi
// 00484e4a  48                   dec eax
// 00484e4b  00a7464800ad         add byte ptr [edi - 0x52ffb7ba], ah
// 00484e51  46                   inc esi
// 00484e52  48                   dec eax
// 00484e53  00b3464800b9         add byte ptr [ebx - 0x46ffb7ba], dh
// 00484e59  46                   inc esi
// 00484e5a  48                   dec eax
// 00484e5b  00bf464800c5         add byte ptr [edi - 0x3affb7ba], bh
// 00484e61  46                   inc esi
// 00484e62  48                   dec eax
// 00484e63  00cb                 add bl, cl
// 00484e65  46                   inc esi
// 00484e66  48                   dec eax
// 00484e67  00d1                 add cl, dl
// 00484e69  46                   inc esi
// 00484e6a  48                   dec eax
// 00484e6b  00d7                 add bh, dl
// 00484e6d  46                   inc esi
// 00484e6e  48                   dec eax
// 00484e6f  00dd                 add ch, bl
// 00484e71  46                   inc esi
// 00484e72  48                   dec eax
// 00484e73  00e3                 add bl, ah
// 00484e75  46                   inc esi
// 00484e76  48                   dec eax
// 00484e77  00e9                 add cl, ch
// 00484e79  46                   inc esi
// 00484e7a  48                   dec eax
// 00484e7b  00ef                 add bh, ch
// 00484e7d  46                   inc esi
// 00484e7e  48                   dec eax
// 00484e7f  00f5                 add ch, dh
// 00484e81  46                   inc esi
// 00484e82  48                   dec eax
// 00484e83  00fb                 add bl, bh
// 00484e85  46                   inc esi
// 00484e86  48                   dec eax
// 00484e87  0001                 add byte ptr [ecx], al
// 00484e89  47                   inc edi
// 00484e8a  48                   dec eax
// 00484e8b  0007                 add byte ptr [edi], al
// 00484e8d  47                   inc edi
// 00484e8e  48                   dec eax

void func_00483a00()
{
}