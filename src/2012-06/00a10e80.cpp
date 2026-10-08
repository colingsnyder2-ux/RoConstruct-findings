// roc 2012-06 00a10e80  unit: XTPPaintThemes::CXTPOfficeTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a10e80
//
// 00a10e80  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a10e85  56                   push esi
// 00a10e86  57                   push edi
// 00a10e87  8bf1                 mov esi, ecx
// 00a10e89  0f85b5000000         jne 0xa10f44
// 00a10e8f  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00a10e96  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a10e9a  7542                 jne 0xa10ede
// 00a10e9c  8bcf                 mov ecx, edi
// 00a10e9e  e86d6bf8ff           call 0x997a10
// 00a10ea3  85c0                 test eax, eax
// 00a10ea5  7537                 jne 0xa10ede
// 00a10ea7  6a28                 push 0x28
// 00a10ea9  8bce                 mov ecx, esi
// 00a10eab  e8e069f7ff           call 0x987890
// 00a10eb0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a10eb4  50                   push eax
// 00a10eb5  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a10eb9  50                   push eax
// 00a10eba  51                   push ecx
// 00a10ebb  8bcf                 mov ecx, edi
// 00a10ebd  e86e6bf8ff           call 0x997a30
// 00a10ec2  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a10ec6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a10eca  50                   push eax
// 00a10ecb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a10ecf  52                   push edx
// 00a10ed0  50                   push eax
// 00a10ed1  51                   push ecx
// 00a10ed2  8bcf                 mov ecx, edi
// 00a10ed4  e837e2f8ff           call 0x99f110
// 00a10ed9  5f                   pop edi
// 00a10eda  5e                   pop esi
// 00a10edb  c23000               ret 0x30
// 00a10ede  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00a10ee5  742e                 je 0xa10f15
// 00a10ee7  8bcf                 mov ecx, edi
// 00a10ee9  e84285f8ff           call 0x999430
// 00a10eee  85c0                 test eax, eax
// 00a10ef0  7523                 jne 0xa10f15
// 00a10ef2  8b4640               mov eax, dword ptr [esi + 0x40]
// 00a10ef5  83f8ff               cmp eax, -1
// 00a10ef8  7505                 jne 0xa10eff
// 00a10efa  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00a10efd  eb02                 jmp 0xa10f01
// 00a10eff  8bc8                 mov ecx, eax
// 00a10f01  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a10f04  83f8ff               cmp eax, -1
// 00a10f07  7503                 jne 0xa10f0c
// 00a10f09  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a10f0c  51                   push ecx
// 00a10f0d  50                   push eax
// 00a10f0e  8bcf                 mov ecx, edi
// 00a10f10  e8abbbf8ff           call 0x99cac0
// 00a10f15  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a10f19  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a10f1d  52                   push edx
// 00a10f1e  50                   push eax
// 00a10f1f  6a01                 push 1
// 00a10f21  8bcf                 mov ecx, edi
// 00a10f23  e838d7f8ff           call 0x99e660
// 00a10f28  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a10f2c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a10f30  50                   push eax
// 00a10f31  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a10f35  51                   push ecx
// 00a10f36  52                   push edx
// 00a10f37  50                   push eax
// 00a10f38  8bcf                 mov ecx, edi
// 00a10f3a  e861e1f8ff           call 0x99f0a0
// 00a10f3f  5f                   pop edi
// 00a10f40  5e                   pop esi
// 00a10f41  c23000               ret 0x30
// 00a10f44  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a10f48  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a10f4c  83f902               cmp ecx, 2
// 00a10f4f  0f85b4000000         jne 0xa11009
// 00a10f55  85c0                 test eax, eax
// 00a10f57  0f85ac000000         jne 0xa11009
// 00a10f5d  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a10f61  8bcf                 mov ecx, edi
// 00a10f63  e8a86af8ff           call 0x997a10
// 00a10f68  85c0                 test eax, eax
// 00a10f6a  7537                 jne 0xa10fa3
// 00a10f6c  6a28                 push 0x28
// 00a10f6e  8bce                 mov ecx, esi
// 00a10f70  e81b69f7ff           call 0x987890
// 00a10f75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a10f79  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a10f7d  50                   push eax
// 00a10f7e  51                   push ecx
// 00a10f7f  52                   push edx
// 00a10f80  8bcf                 mov ecx, edi
// 00a10f82  e8a96af8ff           call 0x997a30
// 00a10f87  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a10f8b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a10f8f  50                   push eax
// 00a10f90  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a10f94  50                   push eax
// 00a10f95  51                   push ecx
// 00a10f96  52                   push edx
// 00a10f97  8bcf                 mov ecx, edi
// 00a10f99  e872e1f8ff           call 0x99f110
// 00a10f9e  5f                   pop edi
// 00a10f9f  5e                   pop esi
// 00a10fa0  c23000               ret 0x30
// 00a10fa3  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00a10faa  742e                 je 0xa10fda
// 00a10fac  8bcf                 mov ecx, edi
// 00a10fae  e87d84f8ff           call 0x999430
// 00a10fb3  85c0                 test eax, eax
// 00a10fb5  7523                 jne 0xa10fda
// 00a10fb7  8b4640               mov eax, dword ptr [esi + 0x40]
// 00a10fba  83f8ff               cmp eax, -1
// 00a10fbd  7505                 jne 0xa10fc4
// 00a10fbf  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00a10fc2  eb02                 jmp 0xa10fc6
// 00a10fc4  8bc8                 mov ecx, eax
// 00a10fc6  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a10fc9  83f8ff               cmp eax, -1
// 00a10fcc  7503                 jne 0xa10fd1
// 00a10fce  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a10fd1  51                   push ecx
// 00a10fd2  50                   push eax
// 00a10fd3  8bcf                 mov ecx, edi
// 00a10fd5  e8e6baf8ff           call 0x99cac0
// 00a10fda  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a10fde  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a10fe2  50                   push eax
// 00a10fe3  51                   push ecx
// 00a10fe4  6a01                 push 1
// 00a10fe6  8bcf                 mov ecx, edi
// 00a10fe8  e873d6f8ff           call 0x99e660
// 00a10fed  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a10ff1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a10ff5  50                   push eax
// 00a10ff6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a10ffa  52                   push edx
// 00a10ffb  50                   push eax
// 00a10ffc  51                   push ecx
// 00a10ffd  8bcf                 mov ecx, edi
// 00a10fff  e89ce0f8ff           call 0x99f0a0
// 00a11004  5f                   pop edi
// 00a11005  5e                   pop esi
// 00a11006  c23000               ret 0x30
// 00a11009  837c243400           cmp dword ptr [esp + 0x34], 0
// 00a1100e  0f8547010000         jne 0xa1115b
// 00a11014  85c9                 test ecx, ecx
// 00a11016  0f8543010000         jne 0xa1115f
// 00a1101c  394c2424             cmp dword ptr [esp + 0x24], ecx
// 00a11020  7544                 jne 0xa11066
// 00a11022  85c0                 test eax, eax
// 00a11024  7549                 jne 0xa1106f
// 00a11026  398648010000         cmp dword ptr [esi + 0x148], eax
// 00a1102c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a11030  8bce                 mov ecx, esi
// 00a11032  7407                 je 0xa1103b
// 00a11034  e8d7d5f8ff           call 0x99e610
// 00a11039  eb05                 jmp 0xa11040
// 00a1103b  e8f069f8ff           call 0x997a30
// 00a11040  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a11044  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a11048  52                   push edx
// 00a11049  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a1104d  51                   push ecx
// 00a1104e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a11052  50                   push eax
// 00a11053  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a11057  52                   push edx
// 00a11058  50                   push eax
// 00a11059  51                   push ecx
// 00a1105a  8bce                 mov ecx, esi
// 00a1105c  e83fe0f8ff           call 0x99f0a0
// 00a11061  5f                   pop edi
// 00a11062  5e                   pop esi
// 00a11063  c23000               ret 0x30
// 00a11066  85c0                 test eax, eax
// 00a11068  740e                 je 0xa11078
// 00a1106a  e9bb000000           jmp 0xa1112a
// 00a1106f  83f801               cmp eax, 1
// 00a11072  0f85a5000000         jne 0xa1111d
// 00a11078  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00a1107f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a11083  746b                 je 0xa110f0
// 00a11085  8bce                 mov ecx, esi
// 00a11087  e8b4d5f8ff           call 0x99e640
// 00a1108c  8bc8                 mov ecx, eax
// 00a1108e  e88d80f8ff           call 0x999120
// 00a11093  85c0                 test eax, eax
// 00a11095  7559                 jne 0xa110f0
// 00a11097  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a1109b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a1109f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a110a3  53                   push ebx
// 00a110a4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a110a8  55                   push ebp
// 00a110a9  52                   push edx
// 00a110aa  50                   push eax
// 00a110ab  8bce                 mov ecx, esi
// 00a110ad  47                   inc edi
// 00a110ae  43                   inc ebx
// 00a110af  e88cd5f8ff           call 0x99e640
// 00a110b4  50                   push eax
// 00a110b5  53                   push ebx
// 00a110b6  57                   push edi
// 00a110b7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a110bb  57                   push edi
// 00a110bc  8bce                 mov ecx, esi
// 00a110be  e8dddff8ff           call 0x99f0a0
// 00a110c3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a110c7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a110cb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a110cf  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a110d3  51                   push ecx
// 00a110d4  52                   push edx
// 00a110d5  8bce                 mov ecx, esi
// 00a110d7  4b                   dec ebx
// 00a110d8  4d                   dec ebp
// 00a110d9  e8f282f8ff           call 0x9993d0
// 00a110de  50                   push eax
// 00a110df  55                   push ebp
// 00a110e0  53                   push ebx
// 00a110e1  57                   push edi
// 00a110e2  8bce                 mov ecx, esi
// 00a110e4  e8b7dff8ff           call 0x99f0a0
// 00a110e9  5d                   pop ebp
// 00a110ea  5b                   pop ebx
// 00a110eb  5f                   pop edi
// 00a110ec  5e                   pop esi
// 00a110ed  c23000               ret 0x30
// 00a110f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a110f4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a110f8  50                   push eax
// 00a110f9  51                   push ecx
// 00a110fa  8bce                 mov ecx, esi
// 00a110fc  e8cf82f8ff           call 0x9993d0
// 00a11101  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a11105  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a11109  50                   push eax
// 00a1110a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a1110e  52                   push edx
// 00a1110f  50                   push eax
// 00a11110  51                   push ecx
// 00a11111  8bce                 mov ecx, esi
// 00a11113  e888dff8ff           call 0x99f0a0
// 00a11118  5f                   pop edi
// 00a11119  5e                   pop esi
// 00a1111a  c23000               ret 0x30
// 00a1111d  50                   push eax
// 00a1111e  e8cd33f7ff           call 0x9844f0
// 00a11123  83c404               add esp, 4
// 00a11126  85c0                 test eax, eax
// 00a11128  746e                 je 0xa11198
// 00a1112a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a1112e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a11132  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a11136  52                   push edx
// 00a11137  50                   push eax
// 00a11138  8bce                 mov ecx, esi
// 00a1113a  e8d182f8ff           call 0x999410
// 00a1113f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a11143  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a11147  50                   push eax
// 00a11148  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a1114c  51                   push ecx
// 00a1114d  52                   push edx
// 00a1114e  50                   push eax
// 00a1114f  8bce                 mov ecx, esi
// 00a11151  e84adff8ff           call 0x99f0a0
// 00a11156  5f                   pop edi
// 00a11157  5e                   pop esi
// 00a11158  c23000               ret 0x30
// 00a1115b  85c9                 test ecx, ecx
// 00a1115d  740d                 je 0xa1116c
// 00a1115f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a11163  8bce                 mov ecx, esi
// 00a11165  e88682f8ff           call 0x9993f0
// 00a1116a  eb0b                 jmp 0xa11177
// 00a1116c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a11170  8bce                 mov ecx, esi
// 00a11172  e8b968f8ff           call 0x997a30
// 00a11177  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a1117b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a1117f  51                   push ecx
// 00a11180  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a11184  52                   push edx
// 00a11185  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a11189  50                   push eax
// 00a1118a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a1118e  50                   push eax
// 00a1118f  51                   push ecx
// 00a11190  52                   push edx
// 00a11191  8bce                 mov ecx, esi
// 00a11193  e808dff8ff           call 0x99f0a0
// 00a11198  5f                   pop edi
// 00a11199  5e                   pop esi
// 00a1119a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawImage@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
