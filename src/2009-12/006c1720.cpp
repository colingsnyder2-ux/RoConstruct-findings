// roc 2009-12 006c1720  unit: RBX::VInstance::?$NonFactoryProduct  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c1720
//
// 006c1720  53                   push ebx
// 006c1721  55                   push ebp
// 006c1722  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 006c1728  56                   push esi
// 006c1729  57                   push edi
// 006c172a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c172e  8bf1                 mov esi, ecx
// 006c1730  c70700000000         mov dword ptr [edi], 0
// 006c1736  85f6                 test esi, esi
// 006c1738  740e                 je 0x6c1748
// 006c173a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c173e  39460c               cmp dword ptr [esi + 0xc], eax
// 006c1741  7705                 ja 0x6c1748
// 006c1743  3b4610               cmp eax, dword ptr [esi + 0x10]
// 006c1746  7606                 jbe 0x6c174e
// 006c1748  ffd5                 call ebp
// 006c174a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c174e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006c1752  8b0e                 mov ecx, dword ptr [esi]
// 006c1754  890f                 mov dword ptr [edi], ecx
// 006c1756  894704               mov dword ptr [edi + 4], eax
// 006c1759  395e0c               cmp dword ptr [esi + 0xc], ebx
// 006c175c  7705                 ja 0x6c1763
// 006c175e  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 006c1761  7606                 jbe 0x6c1769
// 006c1763  ffd5                 call ebp
// 006c1765  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006c1769  8b07                 mov eax, dword ptr [edi]
// 006c176b  8b0e                 mov ecx, dword ptr [esi]
// 006c176d  85c0                 test eax, eax
// 006c176f  7404                 je 0x6c1775
// 006c1771  3bc1                 cmp eax, ecx
// 006c1773  7402                 je 0x6c1777
// 006c1775  ffd5                 call ebp
// 006c1777  8b4704               mov eax, dword ptr [edi + 4]
// 006c177a  3bc3                 cmp eax, ebx
// 006c177c  7426                 je 0x6c17a4
// 006c177e  8b5610               mov edx, dword ptr [esi + 0x10]
// 006c1781  50                   push eax
// 006c1782  52                   push edx
// 006c1783  53                   push ebx
// 006c1784  e827e3ffff           call 0x6bfab0
// 006c1789  8b5610               mov edx, dword ptr [esi + 0x10]
// 006c178c  8bd8                 mov ebx, eax
// 006c178e  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c1792  50                   push eax
// 006c1793  8d4e08               lea ecx, [esi + 8]
// 006c1796  51                   push ecx
// 006c1797  52                   push edx
// 006c1798  53                   push ebx
// 006c1799  e8c2ebffff           call 0x6c0360
// 006c179e  83c41c               add esp, 0x1c
// 006c17a1  895e10               mov dword ptr [esi + 0x10], ebx
// 006c17a4  8bc7                 mov eax, edi
// 006c17a6  5f                   pop edi
// 006c17a7  5e                   pop esi
// 006c17a8  5d                   pop ebp
// 006c17a9  5b                   pop ebx
// 006c17aa  c21400               ret 0x14
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$vector@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@V?$_Vector_const_iterator@UIDREFItem@MergeBinder@RBX@@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
