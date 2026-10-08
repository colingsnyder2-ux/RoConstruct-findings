// roc 2011-06 00898880  unit: XTPPaintThemes::CXTPOfficeTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00898880
//
// 00898880  837c242400           cmp dword ptr [esp + 0x24], 0
// 00898885  56                   push esi
// 00898886  57                   push edi
// 00898887  8bf1                 mov esi, ecx
// 00898889  0f85b5000000         jne 0x898944
// 0089888f  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00898896  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0089889a  7542                 jne 0x8988de
// 0089889c  8bcf                 mov ecx, edi
// 0089889e  e86d6ef8ff           call 0x81f710
// 008988a3  85c0                 test eax, eax
// 008988a5  7537                 jne 0x8988de
// 008988a7  6a28                 push 0x28
// 008988a9  8bce                 mov ecx, esi
// 008988ab  e8006df7ff           call 0x80f5b0
// 008988b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008988b4  50                   push eax
// 008988b5  8b442420             mov eax, dword ptr [esp + 0x20]
// 008988b9  50                   push eax
// 008988ba  51                   push ecx
// 008988bb  8bcf                 mov ecx, edi
// 008988bd  e85e6ef8ff           call 0x81f720
// 008988c2  8b542420             mov edx, dword ptr [esp + 0x20]
// 008988c6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008988ca  50                   push eax
// 008988cb  8b442420             mov eax, dword ptr [esp + 0x20]
// 008988cf  52                   push edx
// 008988d0  50                   push eax
// 008988d1  51                   push ecx
// 008988d2  8bcf                 mov ecx, edi
// 008988d4  e807e2f8ff           call 0x826ae0
// 008988d9  5f                   pop edi
// 008988da  5e                   pop esi
// 008988db  c23000               ret 0x30
// 008988de  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 008988e5  742e                 je 0x898915
// 008988e7  8bcf                 mov ecx, edi
// 008988e9  e8f284f8ff           call 0x820de0
// 008988ee  85c0                 test eax, eax
// 008988f0  7523                 jne 0x898915
// 008988f2  8b4640               mov eax, dword ptr [esi + 0x40]
// 008988f5  83f8ff               cmp eax, -1
// 008988f8  7505                 jne 0x8988ff
// 008988fa  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008988fd  eb02                 jmp 0x898901
// 008988ff  8bc8                 mov ecx, eax
// 00898901  8b4634               mov eax, dword ptr [esi + 0x34]
// 00898904  83f8ff               cmp eax, -1
// 00898907  7503                 jne 0x89890c
// 00898909  8b4630               mov eax, dword ptr [esi + 0x30]
// 0089890c  51                   push ecx
// 0089890d  50                   push eax
// 0089890e  8bcf                 mov ecx, edi
// 00898910  e83bbcf8ff           call 0x824550
// 00898915  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00898919  8b442418             mov eax, dword ptr [esp + 0x18]
// 0089891d  52                   push edx
// 0089891e  50                   push eax
// 0089891f  6a01                 push 1
// 00898921  8bcf                 mov ecx, edi
// 00898923  e808d7f8ff           call 0x826030
// 00898928  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089892c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00898930  50                   push eax
// 00898931  8b442418             mov eax, dword ptr [esp + 0x18]
// 00898935  51                   push ecx
// 00898936  52                   push edx
// 00898937  50                   push eax
// 00898938  8bcf                 mov ecx, edi
// 0089893a  e831e1f8ff           call 0x826a70
// 0089893f  5f                   pop edi
// 00898940  5e                   pop esi
// 00898941  c23000               ret 0x30
// 00898944  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00898948  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089894c  83f902               cmp ecx, 2
// 0089894f  0f85b4000000         jne 0x898a09
// 00898955  85c0                 test eax, eax
// 00898957  0f85ac000000         jne 0x898a09
// 0089895d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00898961  8bcf                 mov ecx, edi
// 00898963  e8a86df8ff           call 0x81f710
// 00898968  85c0                 test eax, eax
// 0089896a  7537                 jne 0x8989a3
// 0089896c  6a28                 push 0x28
// 0089896e  8bce                 mov ecx, esi
// 00898970  e83b6cf7ff           call 0x80f5b0
// 00898975  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00898979  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089897d  50                   push eax
// 0089897e  51                   push ecx
// 0089897f  52                   push edx
// 00898980  8bcf                 mov ecx, edi
// 00898982  e8996df8ff           call 0x81f720
// 00898987  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089898b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089898f  50                   push eax
// 00898990  8b442424             mov eax, dword ptr [esp + 0x24]
// 00898994  50                   push eax
// 00898995  51                   push ecx
// 00898996  52                   push edx
// 00898997  8bcf                 mov ecx, edi
// 00898999  e842e1f8ff           call 0x826ae0
// 0089899e  5f                   pop edi
// 0089899f  5e                   pop esi
// 008989a0  c23000               ret 0x30
// 008989a3  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 008989aa  742e                 je 0x8989da
// 008989ac  8bcf                 mov ecx, edi
// 008989ae  e82d84f8ff           call 0x820de0
// 008989b3  85c0                 test eax, eax
// 008989b5  7523                 jne 0x8989da
// 008989b7  8b4640               mov eax, dword ptr [esi + 0x40]
// 008989ba  83f8ff               cmp eax, -1
// 008989bd  7505                 jne 0x8989c4
// 008989bf  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008989c2  eb02                 jmp 0x8989c6
// 008989c4  8bc8                 mov ecx, eax
// 008989c6  8b4634               mov eax, dword ptr [esi + 0x34]
// 008989c9  83f8ff               cmp eax, -1
// 008989cc  7503                 jne 0x8989d1
// 008989ce  8b4630               mov eax, dword ptr [esi + 0x30]
// 008989d1  51                   push ecx
// 008989d2  50                   push eax
// 008989d3  8bcf                 mov ecx, edi
// 008989d5  e876bbf8ff           call 0x824550
// 008989da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008989de  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008989e2  50                   push eax
// 008989e3  51                   push ecx
// 008989e4  6a01                 push 1
// 008989e6  8bcf                 mov ecx, edi
// 008989e8  e843d6f8ff           call 0x826030
// 008989ed  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008989f1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008989f5  50                   push eax
// 008989f6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008989fa  52                   push edx
// 008989fb  50                   push eax
// 008989fc  51                   push ecx
// 008989fd  8bcf                 mov ecx, edi
// 008989ff  e86ce0f8ff           call 0x826a70
// 00898a04  5f                   pop edi
// 00898a05  5e                   pop esi
// 00898a06  c23000               ret 0x30
// 00898a09  837c243400           cmp dword ptr [esp + 0x34], 0
// 00898a0e  0f8547010000         jne 0x898b5b
// 00898a14  85c9                 test ecx, ecx
// 00898a16  0f8543010000         jne 0x898b5f
// 00898a1c  394c2424             cmp dword ptr [esp + 0x24], ecx
// 00898a20  7544                 jne 0x898a66
// 00898a22  85c0                 test eax, eax
// 00898a24  7549                 jne 0x898a6f
// 00898a26  398648010000         cmp dword ptr [esi + 0x148], eax
// 00898a2c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00898a30  8bce                 mov ecx, esi
// 00898a32  7407                 je 0x898a3b
// 00898a34  e8a7d5f8ff           call 0x825fe0
// 00898a39  eb05                 jmp 0x898a40
// 00898a3b  e8e06cf8ff           call 0x81f720
// 00898a40  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00898a44  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00898a48  52                   push edx
// 00898a49  8b542418             mov edx, dword ptr [esp + 0x18]
// 00898a4d  51                   push ecx
// 00898a4e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00898a52  50                   push eax
// 00898a53  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00898a57  52                   push edx
// 00898a58  50                   push eax
// 00898a59  51                   push ecx
// 00898a5a  8bce                 mov ecx, esi
// 00898a5c  e80fe0f8ff           call 0x826a70
// 00898a61  5f                   pop edi
// 00898a62  5e                   pop esi
// 00898a63  c23000               ret 0x30
// 00898a66  85c0                 test eax, eax
// 00898a68  740e                 je 0x898a78
// 00898a6a  e9bb000000           jmp 0x898b2a
// 00898a6f  83f801               cmp eax, 1
// 00898a72  0f85a5000000         jne 0x898b1d
// 00898a78  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00898a7f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00898a83  746b                 je 0x898af0
// 00898a85  8bce                 mov ecx, esi
// 00898a87  e884d5f8ff           call 0x826010
// 00898a8c  8bc8                 mov ecx, eax
// 00898a8e  e83d80f8ff           call 0x820ad0
// 00898a93  85c0                 test eax, eax
// 00898a95  7559                 jne 0x898af0
// 00898a97  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00898a9b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00898a9f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00898aa3  53                   push ebx
// 00898aa4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00898aa8  55                   push ebp
// 00898aa9  52                   push edx
// 00898aaa  50                   push eax
// 00898aab  8bce                 mov ecx, esi
// 00898aad  47                   inc edi
// 00898aae  43                   inc ebx
// 00898aaf  e85cd5f8ff           call 0x826010
// 00898ab4  50                   push eax
// 00898ab5  53                   push ebx
// 00898ab6  57                   push edi
// 00898ab7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00898abb  57                   push edi
// 00898abc  8bce                 mov ecx, esi
// 00898abe  e8addff8ff           call 0x826a70
// 00898ac3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00898ac7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00898acb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00898acf  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00898ad3  51                   push ecx
// 00898ad4  52                   push edx
// 00898ad5  8bce                 mov ecx, esi
// 00898ad7  4b                   dec ebx
// 00898ad8  4d                   dec ebp
// 00898ad9  e8a282f8ff           call 0x820d80
// 00898ade  50                   push eax
// 00898adf  55                   push ebp
// 00898ae0  53                   push ebx
// 00898ae1  57                   push edi
// 00898ae2  8bce                 mov ecx, esi
// 00898ae4  e887dff8ff           call 0x826a70
// 00898ae9  5d                   pop ebp
// 00898aea  5b                   pop ebx
// 00898aeb  5f                   pop edi
// 00898aec  5e                   pop esi
// 00898aed  c23000               ret 0x30
// 00898af0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00898af4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00898af8  50                   push eax
// 00898af9  51                   push ecx
// 00898afa  8bce                 mov ecx, esi
// 00898afc  e87f82f8ff           call 0x820d80
// 00898b01  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00898b05  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00898b09  50                   push eax
// 00898b0a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00898b0e  52                   push edx
// 00898b0f  50                   push eax
// 00898b10  51                   push ecx
// 00898b11  8bce                 mov ecx, esi
// 00898b13  e858dff8ff           call 0x826a70
// 00898b18  5f                   pop edi
// 00898b19  5e                   pop esi
// 00898b1a  c23000               ret 0x30
// 00898b1d  50                   push eax
// 00898b1e  e83d37f7ff           call 0x80c260
// 00898b23  83c404               add esp, 4
// 00898b26  85c0                 test eax, eax
// 00898b28  746e                 je 0x898b98
// 00898b2a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00898b2e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00898b32  8b742420             mov esi, dword ptr [esp + 0x20]
// 00898b36  52                   push edx
// 00898b37  50                   push eax
// 00898b38  8bce                 mov ecx, esi
// 00898b3a  e88182f8ff           call 0x820dc0
// 00898b3f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00898b43  8b542418             mov edx, dword ptr [esp + 0x18]
// 00898b47  50                   push eax
// 00898b48  8b442418             mov eax, dword ptr [esp + 0x18]
// 00898b4c  51                   push ecx
// 00898b4d  52                   push edx
// 00898b4e  50                   push eax
// 00898b4f  8bce                 mov ecx, esi
// 00898b51  e81adff8ff           call 0x826a70
// 00898b56  5f                   pop edi
// 00898b57  5e                   pop esi
// 00898b58  c23000               ret 0x30
// 00898b5b  85c9                 test ecx, ecx
// 00898b5d  740d                 je 0x898b6c
// 00898b5f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00898b63  8bce                 mov ecx, esi
// 00898b65  e83682f8ff           call 0x820da0
// 00898b6a  eb0b                 jmp 0x898b77
// 00898b6c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00898b70  8bce                 mov ecx, esi
// 00898b72  e8a96bf8ff           call 0x81f720
// 00898b77  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00898b7b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00898b7f  51                   push ecx
// 00898b80  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00898b84  52                   push edx
// 00898b85  8b542414             mov edx, dword ptr [esp + 0x14]
// 00898b89  50                   push eax
// 00898b8a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00898b8e  50                   push eax
// 00898b8f  51                   push ecx
// 00898b90  52                   push edx
// 00898b91  8bce                 mov ecx, esi
// 00898b93  e8d8def8ff           call 0x826a70
// 00898b98  5f                   pop edi
// 00898b99  5e                   pop esi
// 00898b9a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawImage@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
