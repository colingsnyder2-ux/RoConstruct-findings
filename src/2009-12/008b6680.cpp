// roc 2009-12 008b6680  unit: CXTPDockingPanePaintManager  size: 1349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6680
//
// 008b6680  83ec28               sub esp, 0x28
// 008b6683  53                   push ebx
// 008b6684  55                   push ebp
// 008b6685  56                   push esi
// 008b6686  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008b668a  8b16                 mov edx, dword ptr [esi]
// 008b668c  8b4608               mov eax, dword ptr [esi + 8]
// 008b668f  8b5e04               mov ebx, dword ptr [esi + 4]
// 008b6692  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b6696  03c2                 add eax, edx
// 008b6698  89542414             mov dword ptr [esp + 0x14], edx
// 008b669c  99                   cdq 
// 008b669d  2bc2                 sub eax, edx
// 008b669f  d1f8                 sar eax, 1
// 008b66a1  8944240c             mov dword ptr [esp + 0xc], eax
// 008b66a5  57                   push edi
// 008b66a6  8bf9                 mov edi, ecx
// 008b66a8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008b66ab  8d040b               lea eax, [ebx + ecx]
// 008b66ae  99                   cdq 
// 008b66af  2bc2                 sub eax, edx
// 008b66b1  d1f8                 sar eax, 1
// 008b66b3  89442414             mov dword ptr [esp + 0x14], eax
// 008b66b7  8b4770               mov eax, dword ptr [edi + 0x70]
// 008b66ba  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008b66be  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008b66c2  894c2424             mov dword ptr [esp + 0x24], ecx
// 008b66c6  83f805               cmp eax, 5
// 008b66c9  756b                 jne 0x8b6736
// 008b66cb  8dafbc010000         lea ebp, [edi + 0x1bc]
// 008b66d1  8bcd                 mov ecx, ebp
// 008b66d3  e8e854fbff           call 0x86bbc0
// 008b66d8  85c0                 test eax, eax
// 008b66da  0f8445030000         je 0x8b6a25
// 008b66e0  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b66e4  7423                 je 0x8b6709
// 008b66e6  85db                 test ebx, ebx
// 008b66e8  7504                 jne 0x8b66ee
// 008b66ea  33c0                 xor eax, eax
// 008b66ec  eb03                 jmp 0x8b66f1
// 008b66ee  8b4304               mov eax, dword ptr [ebx + 4]
// 008b66f1  6a00                 push 0
// 008b66f3  8d4c241c             lea ecx, [esp + 0x1c]
// 008b66f7  51                   push ecx
// 008b66f8  6a03                 push 3
// 008b66fa  6a01                 push 1
// 008b66fc  50                   push eax
// 008b66fd  8bcd                 mov ecx, ebp
// 008b66ff  e83c51fbff           call 0x86b840
// 008b6704  e995040000           jmp 0x8b6b9e
// 008b6709  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 008b670d  0f848b040000         je 0x8b6b9e
// 008b6713  85db                 test ebx, ebx
// 008b6715  7504                 jne 0x8b671b
// 008b6717  33c0                 xor eax, eax
// 008b6719  eb03                 jmp 0x8b671e
// 008b671b  8b4304               mov eax, dword ptr [ebx + 4]
// 008b671e  6a00                 push 0
// 008b6720  8d54241c             lea edx, [esp + 0x1c]
// 008b6724  52                   push edx
// 008b6725  6a02                 push 2
// 008b6727  6a01                 push 1
// 008b6729  50                   push eax
// 008b672a  8bcd                 mov ecx, ebp
// 008b672c  e80f51fbff           call 0x86b840
// 008b6731  e968040000           jmp 0x8b6b9e
// 008b6736  83f806               cmp eax, 6
// 008b6739  0f85a9000000         jne 0x8b67e8
// 008b673f  8dafe0010000         lea ebp, [edi + 0x1e0]
// 008b6745  8bcd                 mov ecx, ebp
// 008b6747  e87454fbff           call 0x86bbc0
// 008b674c  85c0                 test eax, eax
// 008b674e  0f84d1020000         je 0x8b6a25
// 008b6754  817e14f1240000       cmp dword ptr [esi + 0x14], 0x24f1
// 008b675b  0f85c4020000         jne 0x8b6a25
// 008b6761  8b4610               mov eax, dword ptr [esi + 0x10]
// 008b6764  8b5018               mov edx, dword ptr [eax + 0x18]
// 008b6767  b901000000           mov ecx, 1
// 008b676c  3bd1                 cmp edx, ecx
// 008b676e  7511                 jne 0x8b6781
// 008b6770  85c0                 test eax, eax
// 008b6772  7405                 je 0x8b6779
// 008b6774  8d48ac               lea ecx, [eax - 0x54]
// 008b6777  eb02                 jmp 0x8b677b
// 008b6779  33c9                 xor ecx, ecx
// 008b677b  8b8994010000         mov ecx, dword ptr [ecx + 0x194]
// 008b6781  83fa03               cmp edx, 3
// 008b6784  7513                 jne 0x8b6799
// 008b6786  85c0                 test eax, eax
// 008b6788  7407                 je 0x8b6791
// 008b678a  0508ffffff           add eax, 0xffffff08
// 008b678f  eb02                 jmp 0x8b6793
// 008b6791  33c0                 xor eax, eax
// 008b6793  8b88f0000000         mov ecx, dword ptr [eax + 0xf0]
// 008b6799  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b679d  7407                 je 0x8b67a6
// 008b679f  b903000000           mov ecx, 3
// 008b67a4  eb1d                 jmp 0x8b67c3
// 008b67a6  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 008b67aa  7407                 je 0x8b67b3
// 008b67ac  b902000000           mov ecx, 2
// 008b67b1  eb10                 jmp 0x8b67c3
// 008b67b3  33c0                 xor eax, eax
// 008b67b5  85c9                 test ecx, ecx
// 008b67b7  0f94c0               sete al
// 008b67ba  8d048501000000       lea eax, [eax*4 + 1]
// 008b67c1  8bc8                 mov ecx, eax
// 008b67c3  8bc3                 mov eax, ebx
// 008b67c5  85c0                 test eax, eax
// 008b67c7  7403                 je 0x8b67cc
// 008b67c9  8b4004               mov eax, dword ptr [eax + 4]
// 008b67cc  6a00                 push 0
// 008b67ce  8d54241c             lea edx, [esp + 0x1c]
// 008b67d2  52                   push edx
// 008b67d3  51                   push ecx
// 008b67d4  6a13                 push 0x13
// 008b67d6  50                   push eax
// 008b67d7  8bcd                 mov ecx, ebp
// 008b67d9  e86250fbff           call 0x86b840
// 008b67de  5f                   pop edi
// 008b67df  5e                   pop esi
// 008b67e0  5d                   pop ebp
// 008b67e1  5b                   pop ebx
// 008b67e2  83c428               add esp, 0x28
// 008b67e5  c20c00               ret 0xc
// 008b67e8  83f803               cmp eax, 3
// 008b67eb  0f8554010000         jne 0x8b6945
// 008b67f1  8d8fc8010000         lea ecx, [edi + 0x1c8]
// 008b67f7  e8c453fbff           call 0x86bbc0
// 008b67fc  85c0                 test eax, eax
// 008b67fe  0f8421020000         je 0x8b6a25
// 008b6804  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 008b6807  81fdf1240000         cmp ebp, 0x24f1
// 008b680d  740c                 je 0x8b681b
// 008b680f  81fdf0240000         cmp ebp, 0x24f0
// 008b6815  0f8533010000         jne 0x8b694e
// 008b681b  8b4610               mov eax, dword ptr [esi + 0x10]
// 008b681e  8b5018               mov edx, dword ptr [eax + 0x18]
// 008b6821  b901000000           mov ecx, 1
// 008b6826  3bd1                 cmp edx, ecx
// 008b6828  7511                 jne 0x8b683b
// 008b682a  85c0                 test eax, eax
// 008b682c  7405                 je 0x8b6833
// 008b682e  8d48ac               lea ecx, [eax - 0x54]
// 008b6831  eb02                 jmp 0x8b6835
// 008b6833  33c9                 xor ecx, ecx
// 008b6835  8b8994010000         mov ecx, dword ptr [ecx + 0x194]
// 008b683b  83fa03               cmp edx, 3
// 008b683e  7513                 jne 0x8b6853
// 008b6840  85c0                 test eax, eax
// 008b6842  7407                 je 0x8b684b
// 008b6844  0508ffffff           add eax, 0xffffff08
// 008b6849  eb02                 jmp 0x8b684d
// 008b684b  33c0                 xor eax, eax
// 008b684d  8b88f0000000         mov ecx, dword ptr [eax + 0xf0]
// 008b6853  837f2400             cmp dword ptr [edi + 0x24], 0
// 008b6857  740b                 je 0x8b6864
// 008b6859  85c9                 test ecx, ecx
// 008b685b  7407                 je 0x8b6864
// 008b685d  b801000000           mov eax, 1
// 008b6862  eb02                 jmp 0x8b6866
// 008b6864  33c0                 xor eax, eax
// 008b6866  81fdf1240000         cmp ebp, 0x24f1
// 008b686c  7564                 jne 0x8b68d2
// 008b686e  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b6872  7407                 je 0x8b687b
// 008b6874  b903000000           mov ecx, 3
// 008b6879  eb11                 jmp 0x8b688c
// 008b687b  85c0                 test eax, eax
// 008b687d  7508                 jne 0x8b6887
// 008b687f  8d4801               lea ecx, [eax + 1]
// 008b6882  39461c               cmp dword ptr [esi + 0x1c], eax
// 008b6885  7405                 je 0x8b688c
// 008b6887  b902000000           mov ecx, 2
// 008b688c  8b06                 mov eax, dword ptr [esi]
// 008b688e  8b5604               mov edx, dword ptr [esi + 4]
// 008b6891  89442428             mov dword ptr [esp + 0x28], eax
// 008b6895  8b4608               mov eax, dword ptr [esi + 8]
// 008b6898  8954242c             mov dword ptr [esp + 0x2c], edx
// 008b689c  8b560c               mov edx, dword ptr [esi + 0xc]
// 008b689f  89442430             mov dword ptr [esp + 0x30], eax
// 008b68a3  89542434             mov dword ptr [esp + 0x34], edx
// 008b68a7  85db                 test ebx, ebx
// 008b68a9  7504                 jne 0x8b68af
// 008b68ab  33c0                 xor eax, eax
// 008b68ad  eb03                 jmp 0x8b68b2
// 008b68af  8b4304               mov eax, dword ptr [ebx + 4]
// 008b68b2  6a00                 push 0
// 008b68b4  8d54242c             lea edx, [esp + 0x2c]
// 008b68b8  52                   push edx
// 008b68b9  51                   push ecx
// 008b68ba  6a02                 push 2
// 008b68bc  50                   push eax
// 008b68bd  8d8fc8010000         lea ecx, [edi + 0x1c8]
// 008b68c3  e8784ffbff           call 0x86b840
// 008b68c8  85c0                 test eax, eax
// 008b68ca  0f8deb020000         jge 0x8b6bbb
// 008b68d0  eb7c                 jmp 0x8b694e
// 008b68d2  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b68d6  7407                 je 0x8b68df
// 008b68d8  b903000000           mov ecx, 3
// 008b68dd  eb09                 jmp 0x8b68e8
// 008b68df  33c9                 xor ecx, ecx
// 008b68e1  394e1c               cmp dword ptr [esi + 0x1c], ecx
// 008b68e4  0f95c1               setne cl
// 008b68e7  41                   inc ecx
// 008b68e8  8b06                 mov eax, dword ptr [esi]
// 008b68ea  8b5604               mov edx, dword ptr [esi + 4]
// 008b68ed  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 008b68f0  89442428             mov dword ptr [esp + 0x28], eax
// 008b68f4  8b4608               mov eax, dword ptr [esi + 8]
// 008b68f7  8954242c             mov dword ptr [esp + 0x2c], edx
// 008b68fb  8b560c               mov edx, dword ptr [esi + 0xc]
// 008b68fe  89442430             mov dword ptr [esp + 0x30], eax
// 008b6902  89542434             mov dword ptr [esp + 0x34], edx
// 008b6906  85db                 test ebx, ebx
// 008b6908  7504                 jne 0x8b690e
// 008b690a  33c0                 xor eax, eax
// 008b690c  eb03                 jmp 0x8b6911
// 008b690e  8b4304               mov eax, dword ptr [ebx + 4]
// 008b6911  6a00                 push 0
// 008b6913  8d54242c             lea edx, [esp + 0x2c]
// 008b6917  52                   push edx
// 008b6918  8bd5                 mov edx, ebp
// 008b691a  80e202               and dl, 2
// 008b691d  0fb6d2               movzx edx, dl
// 008b6920  f7da                 neg edx
// 008b6922  1bd2                 sbb edx, edx
// 008b6924  83e2fd               and edx, 0xfffffffd
// 008b6927  83c203               add edx, 3
// 008b692a  03d1                 add edx, ecx
// 008b692c  52                   push edx
// 008b692d  6a03                 push 3
// 008b692f  50                   push eax
// 008b6930  8d8fc8010000         lea ecx, [edi + 0x1c8]
// 008b6936  e8054ffbff           call 0x86b840
// 008b693b  85c0                 test eax, eax
// 008b693d  0f8d78020000         jge 0x8b6bbb
// 008b6943  eb09                 jmp 0x8b694e
// 008b6945  83f804               cmp eax, 4
// 008b6948  0f858d000000         jne 0x8b69db
// 008b694e  8d8fd4010000         lea ecx, [edi + 0x1d4]
// 008b6954  e86752fbff           call 0x86bbc0
// 008b6959  85c0                 test eax, eax
// 008b695b  0f84c4000000         je 0x8b6a25
// 008b6961  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b6965  7407                 je 0x8b696e
// 008b6967  bd03000000           mov ebp, 3
// 008b696c  eb14                 jmp 0x8b6982
// 008b696e  33c0                 xor eax, eax
// 008b6970  39461c               cmp dword ptr [esi + 0x1c], eax
// 008b6973  0f95c0               setne al
// 008b6976  40                   inc eax
// 008b6977  8be8                 mov ebp, eax
// 008b6979  83fd01               cmp ebp, 1
// 008b697c  0f841c020000         je 0x8b6b9e
// 008b6982  8b0e                 mov ecx, dword ptr [esi]
// 008b6984  8b5604               mov edx, dword ptr [esi + 4]
// 008b6987  8b4608               mov eax, dword ptr [esi + 8]
// 008b698a  894c2428             mov dword ptr [esp + 0x28], ecx
// 008b698e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008b6991  8954242c             mov dword ptr [esp + 0x2c], edx
// 008b6995  89442430             mov dword ptr [esp + 0x30], eax
// 008b6999  894c2434             mov dword ptr [esp + 0x34], ecx
// 008b699d  85db                 test ebx, ebx
// 008b699f  7504                 jne 0x8b69a5
// 008b69a1  33c0                 xor eax, eax
// 008b69a3  eb03                 jmp 0x8b69a8
// 008b69a5  8b4304               mov eax, dword ptr [ebx + 4]
// 008b69a8  6a00                 push 0
// 008b69aa  8d54242c             lea edx, [esp + 0x2c]
// 008b69ae  52                   push edx
// 008b69af  55                   push ebp
// 008b69b0  6a01                 push 1
// 008b69b2  50                   push eax
// 008b69b3  8d8fd4010000         lea ecx, [edi + 0x1d4]
// 008b69b9  e8824efbff           call 0x86b840
// 008b69be  8d442444             lea eax, [esp + 0x44]
// 008b69c2  50                   push eax
// 008b69c3  68db0e0000           push 0xedb
// 008b69c8  55                   push ebp
// 008b69c9  6a01                 push 1
// 008b69cb  8d8fd4010000         lea ecx, [edi + 0x1d4]
// 008b69d1  e8da4ffbff           call 0x86b9b0
// 008b69d6  e9c3010000           jmp 0x8b6b9e
// 008b69db  85c0                 test eax, eax
// 008b69dd  7541                 jne 0x8b6a20
// 008b69df  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008b69e2  8b4304               mov eax, dword ptr [ebx + 4]
// 008b69e5  f7d9                 neg ecx
// 008b69e7  1bc9                 sbb ecx, ecx
// 008b69e9  81e100020000         and ecx, 0x200
// 008b69ef  81c910200000         or ecx, 0x2010
// 008b69f5  51                   push ecx
// 008b69f6  6a04                 push 4
// 008b69f8  8d542420             lea edx, [esp + 0x20]
// 008b69fc  52                   push edx
// 008b69fd  50                   push eax
// 008b69fe  ff1568ca9800         call dword ptr [0x98ca68]
// 008b6a04  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b6a08  0f8490010000         je 0x8b6b9e
// 008b6a0e  b801000000           mov eax, 1
// 008b6a13  01442410             add dword ptr [esp + 0x10], eax
// 008b6a17  01442414             add dword ptr [esp + 0x14], eax
// 008b6a1b  e97e010000           jmp 0x8b6b9e
// 008b6a20  83f801               cmp eax, 1
// 008b6a23  7563                 jne 0x8b6a88
// 008b6a25  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b6a29  7430                 je 0x8b6a5b
// 008b6a2b  6a14                 push 0x14
// 008b6a2d  8bcf                 mov ecx, edi
// 008b6a2f  e8cceeffff           call 0x8b5900
// 008b6a34  50                   push eax
// 008b6a35  6a12                 push 0x12
// 008b6a37  e8c4eeffff           call 0x8b5900
// 008b6a3c  50                   push eax
// 008b6a3d  8d4c2420             lea ecx, [esp + 0x20]
// 008b6a41  51                   push ecx
// 008b6a42  8bcb                 mov ecx, ebx
// 008b6a44  e8afdbf3ff           call 0x7f45f8
// 008b6a49  b801000000           mov eax, 1
// 008b6a4e  01442410             add dword ptr [esp + 0x10], eax
// 008b6a52  01442414             add dword ptr [esp + 0x14], eax
// 008b6a56  e943010000           jmp 0x8b6b9e
// 008b6a5b  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 008b6a5f  0f8439010000         je 0x8b6b9e
// 008b6a65  6a12                 push 0x12
// 008b6a67  8bcf                 mov ecx, edi
// 008b6a69  e892eeffff           call 0x8b5900
// 008b6a6e  50                   push eax
// 008b6a6f  6a14                 push 0x14
// 008b6a71  e88aeeffff           call 0x8b5900
// 008b6a76  50                   push eax
// 008b6a77  8d542420             lea edx, [esp + 0x20]
// 008b6a7b  52                   push edx
// 008b6a7c  8bcb                 mov ecx, ebx
// 008b6a7e  e875dbf3ff           call 0x7f45f8
// 008b6a83  e916010000           jmp 0x8b6b9e
// 008b6a88  83f802               cmp eax, 2
// 008b6a8b  0f850d010000         jne 0x8b6b9e
// 008b6a91  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 008b6a95  747c                 je 0x8b6b13
// 008b6a97  83bfec01000000       cmp dword ptr [edi + 0x1ec], 0
// 008b6a9e  7536                 jne 0x8b6ad6
// 008b6aa0  8b0e                 mov ecx, dword ptr [esi]
// 008b6aa2  8b5604               mov edx, dword ptr [esi + 4]
// 008b6aa5  6a20                 push 0x20
// 008b6aa7  6a1f                 push 0x1f
// 008b6aa9  83ec10               sub esp, 0x10
// 008b6aac  8bc4                 mov eax, esp
// 008b6aae  8908                 mov dword ptr [eax], ecx
// 008b6ab0  8b4e08               mov ecx, dword ptr [esi + 8]
// 008b6ab3  895004               mov dword ptr [eax + 4], edx
// 008b6ab6  8b560c               mov edx, dword ptr [esi + 0xc]
// 008b6ab9  894808               mov dword ptr [eax + 8], ecx
// 008b6abc  53                   push ebx
// 008b6abd  8bcf                 mov ecx, edi
// 008b6abf  89500c               mov dword ptr [eax + 0xc], edx
// 008b6ac2  e859fbffff           call 0x8b6620
// 008b6ac7  6a2d                 push 0x2d
// 008b6ac9  8bcf                 mov ecx, edi
// 008b6acb  e830eeffff           call 0x8b5900
// 008b6ad0  89442444             mov dword ptr [esp + 0x44], eax
// 008b6ad4  eb3d                 jmp 0x8b6b13
// 008b6ad6  6a00                 push 0
// 008b6ad8  68ffd49700           push 0x97d4ff
// 008b6add  68fff2c800           push 0xc8f2ff
// 008b6ae2  8d442424             lea eax, [esp + 0x24]
// 008b6ae6  50                   push eax
// 008b6ae7  53                   push ebx
// 008b6ae8  e8b367f9ff           call 0x84d2a0
// 008b6aed  8bc8                 mov ecx, eax
// 008b6aef  e8dc67f9ff           call 0x84d2d0
// 008b6af4  6a20                 push 0x20
// 008b6af6  8bcf                 mov ecx, edi
// 008b6af8  e803eeffff           call 0x8b5900
// 008b6afd  50                   push eax
// 008b6afe  50                   push eax
// 008b6aff  8d4c2420             lea ecx, [esp + 0x20]
// 008b6b03  51                   push ecx
// 008b6b04  8bcb                 mov ecx, ebx
// 008b6b06  e8eddaf3ff           call 0x7f45f8
// 008b6b0b  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008b6b13  837e1800             cmp dword ptr [esi + 0x18], 0
// 008b6b17  0f8481000000         je 0x8b6b9e
// 008b6b1d  83bfec01000000       cmp dword ptr [edi + 0x1ec], 0
// 008b6b24  753b                 jne 0x8b6b61
// 008b6b26  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b6b2a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b6b2e  6a20                 push 0x20
// 008b6b30  6a21                 push 0x21
// 008b6b32  83ec10               sub esp, 0x10
// 008b6b35  8bc4                 mov eax, esp
// 008b6b37  8910                 mov dword ptr [eax], edx
// 008b6b39  8b542438             mov edx, dword ptr [esp + 0x38]
// 008b6b3d  894804               mov dword ptr [eax + 4], ecx
// 008b6b40  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008b6b44  895008               mov dword ptr [eax + 8], edx
// 008b6b47  89480c               mov dword ptr [eax + 0xc], ecx
// 008b6b4a  53                   push ebx
// 008b6b4b  8bcf                 mov ecx, edi
// 008b6b4d  e8cefaffff           call 0x8b6620
// 008b6b52  6a2f                 push 0x2f
// 008b6b54  8bcf                 mov ecx, edi
// 008b6b56  e8a5edffff           call 0x8b5900
// 008b6b5b  89442444             mov dword ptr [esp + 0x44], eax
// 008b6b5f  eb3d                 jmp 0x8b6b9e
// 008b6b61  6a00                 push 0
// 008b6b63  68ffcf8b00           push 0x8bcfff
// 008b6b68  68fe8e4b00           push 0x4b8efe
// 008b6b6d  8d542424             lea edx, [esp + 0x24]
// 008b6b71  52                   push edx
// 008b6b72  53                   push ebx
// 008b6b73  e82867f9ff           call 0x84d2a0
// 008b6b78  8bc8                 mov ecx, eax
// 008b6b7a  e85167f9ff           call 0x84d2d0
// 008b6b7f  6a20                 push 0x20
// 008b6b81  8bcf                 mov ecx, edi
// 008b6b83  e878edffff           call 0x8b5900
// 008b6b88  50                   push eax
// 008b6b89  50                   push eax
// 008b6b8a  8d442420             lea eax, [esp + 0x20]
// 008b6b8e  50                   push eax
// 008b6b8f  8bcb                 mov ecx, ebx
// 008b6b91  e862daf3ff           call 0x7f45f8
// 008b6b96  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008b6b9e  8b442444             mov eax, dword ptr [esp + 0x44]
// 008b6ba2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b6ba6  8b17                 mov edx, dword ptr [edi]
// 008b6ba8  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 008b6bae  50                   push eax
// 008b6baf  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b6bb3  51                   push ecx
// 008b6bb4  50                   push eax
// 008b6bb5  56                   push esi
// 008b6bb6  53                   push ebx
// 008b6bb7  8bcf                 mov ecx, edi
// 008b6bb9  ffd2                 call edx
// 008b6bbb  5f                   pop edi
// 008b6bbc  5e                   pop esi
// 008b6bbd  5d                   pop ebp
// 008b6bbe  5b                   pop ebx
// 008b6bbf  83c428               add esp, 0x28
// 008b6bc2  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawCaptionButton@CXTPDockingPanePaintManager@@UAEXPAVCDC@@PAVCXTPDockingPaneCaptionButton@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp