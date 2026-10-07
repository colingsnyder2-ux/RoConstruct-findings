// roc 2012-06 0066baa0  unit: seg_00660000  size: 1290 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066baa0
//
// 0066baa0  81ec38010000         sub esp, 0x138
// 0066baa6  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 0066baad  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0066bab3  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 0066baba  53                   push ebx
// 0066babb  8b5950               mov ebx, dword ptr [ecx + 0x50]
// 0066babe  55                   push ebp
// 0066babf  56                   push esi
// 0066bac0  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 0066bac7  83ea80               sub edx, -0x80
// 0066baca  57                   push edi
// 0066bacb  8954243c             mov dword ptr [esp + 0x3c], edx
// 0066bacf  89742424             mov dword ptr [esp + 0x24], esi
// 0066bad3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066bad7  8d442448             lea eax, [esp + 0x48]
// 0066badb  c744243408000000     mov dword ptr [esp + 0x34], 8
// 0066bae3  0fb74e10             movzx ecx, word ptr [esi + 0x10]
// 0066bae7  894c2428             mov dword ptr [esp + 0x28], ecx
// 0066baeb  6685c9               test cx, cx
// 0066baee  7556                 jne 0x66bb46
// 0066baf0  66394e20             cmp word ptr [esi + 0x20], cx
// 0066baf4  7550                 jne 0x66bb46
// 0066baf6  66394e30             cmp word ptr [esi + 0x30], cx
// 0066bafa  754a                 jne 0x66bb46
// 0066bafc  66394e40             cmp word ptr [esi + 0x40], cx
// 0066bb00  7544                 jne 0x66bb46
// 0066bb02  66394e50             cmp word ptr [esi + 0x50], cx
// 0066bb06  753e                 jne 0x66bb46
// 0066bb08  66394e60             cmp word ptr [esi + 0x60], cx
// 0066bb0c  7538                 jne 0x66bb46
// 0066bb0e  66394e70             cmp word ptr [esi + 0x70], cx
// 0066bb12  7532                 jne 0x66bb46
// 0066bb14  0fbf0e               movsx ecx, word ptr [esi]
// 0066bb17  0faf0b               imul ecx, dword ptr [ebx]
// 0066bb1a  03c9                 add ecx, ecx
// 0066bb1c  03c9                 add ecx, ecx
// 0066bb1e  8908                 mov dword ptr [eax], ecx
// 0066bb20  894820               mov dword ptr [eax + 0x20], ecx
// 0066bb23  894840               mov dword ptr [eax + 0x40], ecx
// 0066bb26  894860               mov dword ptr [eax + 0x60], ecx
// 0066bb29  898880000000         mov dword ptr [eax + 0x80], ecx
// 0066bb2f  8988a0000000         mov dword ptr [eax + 0xa0], ecx
// 0066bb35  8988c0000000         mov dword ptr [eax + 0xc0], ecx
// 0066bb3b  8988e0000000         mov dword ptr [eax + 0xe0], ecx
// 0066bb41  e9bc010000           jmp 0x66bd02
// 0066bb46  0fbf4e20             movsx ecx, word ptr [esi + 0x20]
// 0066bb4a  0faf4b40             imul ecx, dword ptr [ebx + 0x40]
// 0066bb4e  0fbf5660             movsx edx, word ptr [esi + 0x60]
// 0066bb52  0faf93c0000000       imul edx, dword ptr [ebx + 0xc0]
// 0066bb59  8d3c0a               lea edi, [edx + ecx]
// 0066bb5c  69d2213b0000         imul edx, edx, 0x3b21
// 0066bb62  69c97e180000         imul ecx, ecx, 0x187e
// 0066bb68  69ff51110000         imul edi, edi, 0x1151
// 0066bb6e  03cf                 add ecx, edi
// 0066bb70  8bef                 mov ebp, edi
// 0066bb72  0fbf7e40             movsx edi, word ptr [esi + 0x40]
// 0066bb76  0fafbb80000000       imul edi, dword ptr [ebx + 0x80]
// 0066bb7d  2bea                 sub ebp, edx
// 0066bb7f  0fbf16               movsx edx, word ptr [esi]
// 0066bb82  0faf13               imul edx, dword ptr [ebx]
// 0066bb85  897c2418             mov dword ptr [esp + 0x18], edi
// 0066bb89  03fa                 add edi, edx
// 0066bb8b  2b542418             sub edx, dword ptr [esp + 0x18]
// 0066bb8f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0066bb93  c1e70d               shl edi, 0xd
// 0066bb96  03cf                 add ecx, edi
// 0066bb98  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0066bb9c  c1e20d               shl edx, 0xd
// 0066bb9f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0066bba3  8d0c2a               lea ecx, [edx + ebp]
// 0066bba6  2bd5                 sub edx, ebp
// 0066bba8  897c2440             mov dword ptr [esp + 0x40], edi
// 0066bbac  0fbf7c2428           movsx edi, word ptr [esp + 0x28]
// 0066bbb1  0faf7b20             imul edi, dword ptr [ebx + 0x20]
// 0066bbb5  894c2414             mov dword ptr [esp + 0x14], ecx
// 0066bbb9  0fbf4e70             movsx ecx, word ptr [esi + 0x70]
// 0066bbbd  0faf8be0000000       imul ecx, dword ptr [ebx + 0xe0]
// 0066bbc4  89542438             mov dword ptr [esp + 0x38], edx
// 0066bbc8  0fbf5650             movsx edx, word ptr [esi + 0x50]
// 0066bbcc  0faf93a0000000       imul edx, dword ptr [ebx + 0xa0]
// 0066bbd3  0fbf7630             movsx esi, word ptr [esi + 0x30]
// 0066bbd7  0faf7360             imul esi, dword ptr [ebx + 0x60]
// 0066bbdb  8d1c39               lea ebx, [ecx + edi]
// 0066bbde  895c2420             mov dword ptr [esp + 0x20], ebx
// 0066bbe2  8d1c32               lea ebx, [edx + esi]
// 0066bbe5  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066bbe9  8d2c3a               lea ebp, [edx + edi]
// 0066bbec  69ff0b300000         imul edi, edi, 0x300b
// 0066bbf2  69d2b3410000         imul edx, edx, 0x41b3
// 0066bbf8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0066bbfc  8d1c31               lea ebx, [ecx + esi]
// 0066bbff  69c98e090000         imul ecx, ecx, 0x98e
// 0066bc05  69f654620000         imul esi, esi, 0x6254
// 0066bc0b  03eb                 add ebp, ebx
// 0066bc0d  69dbc53e0000         imul ebx, ebx, 0x3ec5
// 0066bc13  69eda1250000         imul ebp, ebp, 0x25a1
// 0066bc19  896c2430             mov dword ptr [esp + 0x30], ebp
// 0066bc1d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0066bc21  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0066bc27  896c2420             mov dword ptr [esp + 0x20], ebp
// 0066bc2b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066bc2f  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0066bc35  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066bc39  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0066bc3d  2beb                 sub ebp, ebx
// 0066bc3f  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0066bc43  69db7c0c0000         imul ebx, ebx, 0xc7c
// 0066bc49  896c2418             mov dword ptr [esp + 0x18], ebp
// 0066bc4d  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0066bc51  03742418             add esi, dword ptr [esp + 0x18]
// 0066bc55  2beb                 sub ebp, ebx
// 0066bc57  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066bc5b  03742410             add esi, dword ptr [esp + 0x10]
// 0066bc5f  03fd                 add edi, ebp
// 0066bc61  03cb                 add ecx, ebx
// 0066bc63  034c2418             add ecx, dword ptr [esp + 0x18]
// 0066bc67  03fb                 add edi, ebx
// 0066bc69  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0066bc6d  03d5                 add edx, ebp
// 0066bc6f  03542410             add edx, dword ptr [esp + 0x10]
// 0066bc73  8dac3b00040000       lea ebp, [ebx + edi + 0x400]
// 0066bc7a  2bdf                 sub ebx, edi
// 0066bc7c  c1fd0b               sar ebp, 0xb
// 0066bc7f  81c300040000         add ebx, 0x400
// 0066bc85  8928                 mov dword ptr [eax], ebp
// 0066bc87  c1fb0b               sar ebx, 0xb
// 0066bc8a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066bc8e  8998e0000000         mov dword ptr [eax + 0xe0], ebx
// 0066bc94  8d9c3700040000       lea ebx, [edi + esi + 0x400]
// 0066bc9b  2bfe                 sub edi, esi
// 0066bc9d  8b742438             mov esi, dword ptr [esp + 0x38]
// 0066bca1  81c700040000         add edi, 0x400
// 0066bca7  c1ff0b               sar edi, 0xb
// 0066bcaa  89b8c0000000         mov dword ptr [eax + 0xc0], edi
// 0066bcb0  8dbc1600040000       lea edi, [esi + edx + 0x400]
// 0066bcb7  2bf2                 sub esi, edx
// 0066bcb9  8b542440             mov edx, dword ptr [esp + 0x40]
// 0066bcbd  81c600040000         add esi, 0x400
// 0066bcc3  c1fe0b               sar esi, 0xb
// 0066bcc6  89b0a0000000         mov dword ptr [eax + 0xa0], esi
// 0066bccc  8db40a00040000       lea esi, [edx + ecx + 0x400]
// 0066bcd3  2bd1                 sub edx, ecx
// 0066bcd5  c1fb0b               sar ebx, 0xb
// 0066bcd8  c1fe0b               sar esi, 0xb
// 0066bcdb  81c200040000         add edx, 0x400
// 0066bce1  c1ff0b               sar edi, 0xb
// 0066bce4  c1fa0b               sar edx, 0xb
// 0066bce7  895820               mov dword ptr [eax + 0x20], ebx
// 0066bcea  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066bcee  897060               mov dword ptr [eax + 0x60], esi
// 0066bcf1  8b742424             mov esi, dword ptr [esp + 0x24]
// 0066bcf5  899080000000         mov dword ptr [eax + 0x80], edx
// 0066bcfb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0066bcff  897840               mov dword ptr [eax + 0x40], edi
// 0066bd02  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0066bd06  49                   dec ecx
// 0066bd07  83c602               add esi, 2
// 0066bd0a  83c304               add ebx, 4
// 0066bd0d  83c004               add eax, 4
// 0066bd10  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066bd14  89742424             mov dword ptr [esp + 0x24], esi
// 0066bd18  894c2434             mov dword ptr [esp + 0x34], ecx
// 0066bd1c  85c9                 test ecx, ecx
// 0066bd1e  0f8fbffdffff         jg 0x66bae3
// 0066bd24  33ff                 xor edi, edi
// 0066bd26  8d4c2448             lea ecx, [esp + 0x48]
// 0066bd2a  897c2434             mov dword ptr [esp + 0x34], edi
// 0066bd2e  8bff                 mov edi, edi
// 0066bd30  8b842458010000       mov eax, dword ptr [esp + 0x158]
// 0066bd37  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0066bd3a  8b7104               mov esi, dword ptr [ecx + 4]
// 0066bd3d  0384245c010000       add eax, dword ptr [esp + 0x15c]
// 0066bd44  85f6                 test esi, esi
// 0066bd46  7548                 jne 0x66bd90
// 0066bd48  397108               cmp dword ptr [ecx + 8], esi
// 0066bd4b  7543                 jne 0x66bd90
// 0066bd4d  39710c               cmp dword ptr [ecx + 0xc], esi
// 0066bd50  753e                 jne 0x66bd90
// 0066bd52  397110               cmp dword ptr [ecx + 0x10], esi
// 0066bd55  7539                 jne 0x66bd90
// 0066bd57  397114               cmp dword ptr [ecx + 0x14], esi
// 0066bd5a  7534                 jne 0x66bd90
// 0066bd5c  397118               cmp dword ptr [ecx + 0x18], esi
// 0066bd5f  752f                 jne 0x66bd90
// 0066bd61  39711c               cmp dword ptr [ecx + 0x1c], esi
// 0066bd64  752a                 jne 0x66bd90
// 0066bd66  8b31                 mov esi, dword ptr [ecx]
// 0066bd68  83c610               add esi, 0x10
// 0066bd6b  c1fe05               sar esi, 5
// 0066bd6e  81e6ff030000         and esi, 0x3ff
// 0066bd74  8a1c16               mov bl, byte ptr [esi + edx]
// 0066bd77  8818                 mov byte ptr [eax], bl
// 0066bd79  885801               mov byte ptr [eax + 1], bl
// 0066bd7c  885802               mov byte ptr [eax + 2], bl
// 0066bd7f  885803               mov byte ptr [eax + 3], bl
// 0066bd82  885805               mov byte ptr [eax + 5], bl
// 0066bd85  885806               mov byte ptr [eax + 6], bl
// 0066bd88  885807               mov byte ptr [eax + 7], bl
// 0066bd8b  e9fb010000           jmp 0x66bf8b
// 0066bd90  8b5108               mov edx, dword ptr [ecx + 8]
// 0066bd93  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0066bd96  8d3c16               lea edi, [esi + edx]
// 0066bd99  69d27e180000         imul edx, edx, 0x187e
// 0066bd9f  69f6213b0000         imul esi, esi, 0x3b21
// 0066bda5  69ff51110000         imul edi, edi, 0x1151
// 0066bdab  03d7                 add edx, edi
// 0066bdad  8bea                 mov ebp, edx
// 0066bdaf  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0066bdb2  8bdf                 mov ebx, edi
// 0066bdb4  2bde                 sub ebx, esi
// 0066bdb6  8b31                 mov esi, dword ptr [ecx]
// 0066bdb8  8d3c16               lea edi, [esi + edx]
// 0066bdbb  2bf2                 sub esi, edx
// 0066bdbd  c1e60d               shl esi, 0xd
// 0066bdc0  c1e70d               shl edi, 0xd
// 0066bdc3  8bd6                 mov edx, esi
// 0066bdc5  8d342f               lea esi, [edi + ebp]
// 0066bdc8  2bfd                 sub edi, ebp
// 0066bdca  8d2c1a               lea ebp, [edx + ebx]
// 0066bdcd  2bd3                 sub edx, ebx
// 0066bdcf  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0066bdd2  89542438             mov dword ptr [esp + 0x38], edx
// 0066bdd6  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0066bdd9  895c2428             mov dword ptr [esp + 0x28], ebx
// 0066bddd  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0066bde0  89542424             mov dword ptr [esp + 0x24], edx
// 0066bde4  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066bde8  8b5904               mov ebx, dword ptr [ecx + 4]
// 0066bdeb  03d3                 add edx, ebx
// 0066bded  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0066bdf1  89542420             mov dword ptr [esp + 0x20], edx
// 0066bdf5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066bdf9  03da                 add ebx, edx
// 0066bdfb  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066bdff  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0066be03  03da                 add ebx, edx
// 0066be05  8b542428             mov edx, dword ptr [esp + 0x28]
// 0066be09  895c2418             mov dword ptr [esp + 0x18], ebx
// 0066be0d  8b5904               mov ebx, dword ptr [ecx + 4]
// 0066be10  03da                 add ebx, edx
// 0066be12  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066be16  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0066be1a  03da                 add ebx, edx
// 0066be1c  69d2c53e0000         imul edx, edx, 0x3ec5
// 0066be22  69dba1250000         imul ebx, ebx, 0x25a1
// 0066be28  895c2430             mov dword ptr [esp + 0x30], ebx
// 0066be2c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066be30  69db33e3ffff         imul ebx, ebx, 0xffffe333
// 0066be36  895c2420             mov dword ptr [esp + 0x20], ebx
// 0066be3a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066be3e  69dbfdadffff         imul ebx, ebx, 0xffffadfd
// 0066be44  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066be48  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0066be4c  2bda                 sub ebx, edx
// 0066be4e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0066be52  69d27c0c0000         imul edx, edx, 0xc7c
// 0066be58  895c2418             mov dword ptr [esp + 0x18], ebx
// 0066be5c  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0066be60  2bda                 sub ebx, edx
// 0066be62  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066be66  69d28e090000         imul edx, edx, 0x98e
// 0066be6c  03542420             add edx, dword ptr [esp + 0x20]
// 0066be70  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0066be74  03542418             add edx, dword ptr [esp + 0x18]
// 0066be78  89542424             mov dword ptr [esp + 0x24], edx
// 0066be7c  8b542428             mov edx, dword ptr [esp + 0x28]
// 0066be80  69d2b3410000         imul edx, edx, 0x41b3
// 0066be86  03d3                 add edx, ebx
// 0066be88  03542410             add edx, dword ptr [esp + 0x10]
// 0066be8c  89542428             mov dword ptr [esp + 0x28], edx
// 0066be90  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066be94  69d254620000         imul edx, edx, 0x6254
// 0066be9a  03542418             add edx, dword ptr [esp + 0x18]
// 0066be9e  03542410             add edx, dword ptr [esp + 0x10]
// 0066bea2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0066bea6  8b5104               mov edx, dword ptr [ecx + 4]
// 0066bea9  69d20b300000         imul edx, edx, 0x300b
// 0066beaf  03d3                 add edx, ebx
// 0066beb1  03542420             add edx, dword ptr [esp + 0x20]
// 0066beb5  89542414             mov dword ptr [esp + 0x14], edx
// 0066beb9  8d9c1600000200       lea ebx, [esi + edx + 0x20000]
// 0066bec0  2b742414             sub esi, dword ptr [esp + 0x14]
// 0066bec4  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0066bec8  c1fb12               sar ebx, 0x12
// 0066becb  81e3ff030000         and ebx, 0x3ff
// 0066bed1  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0066bed5  8818                 mov byte ptr [eax], bl
// 0066bed7  81c600000200         add esi, 0x20000
// 0066bedd  c1fe12               sar esi, 0x12
// 0066bee0  81e6ff030000         and esi, 0x3ff
// 0066bee6  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0066beea  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066beee  885807               mov byte ptr [eax + 7], bl
// 0066bef1  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0066bef8  c1fb12               sar ebx, 0x12
// 0066befb  81e3ff030000         and ebx, 0x3ff
// 0066bf01  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0066bf05  2bee                 sub ebp, esi
// 0066bf07  8b742438             mov esi, dword ptr [esp + 0x38]
// 0066bf0b  885801               mov byte ptr [eax + 1], bl
// 0066bf0e  81c500000200         add ebp, 0x20000
// 0066bf14  c1fd12               sar ebp, 0x12
// 0066bf17  81e5ff030000         and ebp, 0x3ff
// 0066bf1d  0fb61c2a             movzx ebx, byte ptr [edx + ebp]
// 0066bf21  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0066bf25  885806               mov byte ptr [eax + 6], bl
// 0066bf28  8d9c2e00000200       lea ebx, [esi + ebp + 0x20000]
// 0066bf2f  c1fb12               sar ebx, 0x12
// 0066bf32  81e3ff030000         and ebx, 0x3ff
// 0066bf38  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0066bf3c  2bf5                 sub esi, ebp
// 0066bf3e  81c600000200         add esi, 0x20000
// 0066bf44  885802               mov byte ptr [eax + 2], bl
// 0066bf47  c1fe12               sar esi, 0x12
// 0066bf4a  81e6ff030000         and esi, 0x3ff
// 0066bf50  0fb61c16             movzx ebx, byte ptr [esi + edx]
// 0066bf54  8b742424             mov esi, dword ptr [esp + 0x24]
// 0066bf58  885805               mov byte ptr [eax + 5], bl
// 0066bf5b  8d9c3700000200       lea ebx, [edi + esi + 0x20000]
// 0066bf62  c1fb12               sar ebx, 0x12
// 0066bf65  2bfe                 sub edi, esi
// 0066bf67  81e3ff030000         and ebx, 0x3ff
// 0066bf6d  0fb61c13             movzx ebx, byte ptr [ebx + edx]
// 0066bf71  81c700000200         add edi, 0x20000
// 0066bf77  c1ff12               sar edi, 0x12
// 0066bf7a  81e7ff030000         and edi, 0x3ff
// 0066bf80  885803               mov byte ptr [eax + 3], bl
// 0066bf83  0fb61c17             movzx ebx, byte ptr [edi + edx]
// 0066bf87  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0066bf8b  47                   inc edi
// 0066bf8c  83c120               add ecx, 0x20
// 0066bf8f  83ff08               cmp edi, 8
// 0066bf92  885804               mov byte ptr [eax + 4], bl
// 0066bf95  897c2434             mov dword ptr [esp + 0x34], edi
// 0066bf99  0f8c91fdffff         jl 0x66bd30
// 0066bf9f  5f                   pop edi
// 0066bfa0  5e                   pop esi
// 0066bfa1  5d                   pop ebp
// 0066bfa2  5b                   pop ebx
// 0066bfa3  81c438010000         add esp, 0x138
// 0066bfa9  c3                   ret 
// library jpeg-6b/jidctint.c (function _jpeg_idct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctint.c
