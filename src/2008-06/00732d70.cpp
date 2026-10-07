// roc 2008-06 00732d70  unit: XTPPaintThemes::CXTPDefaultTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732d70
//
// 00732d70  837c242400           cmp dword ptr [esp + 0x24], 0
// 00732d75  53                   push ebx
// 00732d76  55                   push ebp
// 00732d77  56                   push esi
// 00732d78  57                   push edi
// 00732d79  8bf1                 mov esi, ecx
// 00732d7b  0f85e9000000         jne 0x732e6a
// 00732d81  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00732d88  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00732d8c  7574                 jne 0x732e02
// 00732d8e  8bcf                 mov ecx, edi
// 00732d90  e8bb6cf8ff           call 0x6b9a50
// 00732d95  85c0                 test eax, eax
// 00732d97  7569                 jne 0x732e02
// 00732d99  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00732d9d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00732da1  6a14                 push 0x14
// 00732da3  8bce                 mov ecx, esi
// 00732da5  43                   inc ebx
// 00732da6  45                   inc ebp
// 00732da7  e8c4b2f7ff           call 0x6ae070
// 00732dac  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00732db0  50                   push eax
// 00732db1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00732db5  50                   push eax
// 00732db6  51                   push ecx
// 00732db7  8bcf                 mov ecx, edi
// 00732db9  e8b26cf8ff           call 0x6b9a70
// 00732dbe  50                   push eax
// 00732dbf  55                   push ebp
// 00732dc0  53                   push ebx
// 00732dc1  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00732dc5  53                   push ebx
// 00732dc6  8bcf                 mov ecx, edi
// 00732dc8  e823ebf8ff           call 0x6c18f0
// 00732dcd  6a10                 push 0x10
// 00732dcf  8bce                 mov ecx, esi
// 00732dd1  e89ab2f7ff           call 0x6ae070
// 00732dd6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00732dda  50                   push eax
// 00732ddb  8b442424             mov eax, dword ptr [esp + 0x24]
// 00732ddf  52                   push edx
// 00732de0  50                   push eax
// 00732de1  8bcf                 mov ecx, edi
// 00732de3  e8886cf8ff           call 0x6b9a70
// 00732de8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00732dec  8b542424             mov edx, dword ptr [esp + 0x24]
// 00732df0  50                   push eax
// 00732df1  51                   push ecx
// 00732df2  52                   push edx
// 00732df3  53                   push ebx
// 00732df4  8bcf                 mov ecx, edi
// 00732df6  e8f5eaf8ff           call 0x6c18f0
// 00732dfb  5f                   pop edi
// 00732dfc  5e                   pop esi
// 00732dfd  5d                   pop ebp
// 00732dfe  5b                   pop ebx
// 00732dff  c23000               ret 0x30
// 00732e02  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00732e09  742e                 je 0x732e39
// 00732e0b  8bcf                 mov ecx, edi
// 00732e0d  e8be87f8ff           call 0x6bb5d0
// 00732e12  85c0                 test eax, eax
// 00732e14  7523                 jne 0x732e39
// 00732e16  8b4640               mov eax, dword ptr [esi + 0x40]
// 00732e19  83f8ff               cmp eax, -1
// 00732e1c  7505                 jne 0x732e23
// 00732e1e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00732e21  eb02                 jmp 0x732e25
// 00732e23  8bc8                 mov ecx, eax
// 00732e25  8b4634               mov eax, dword ptr [esi + 0x34]
// 00732e28  83f8ff               cmp eax, -1
// 00732e2b  7503                 jne 0x732e30
// 00732e2d  8b4630               mov eax, dword ptr [esi + 0x30]
// 00732e30  51                   push ecx
// 00732e31  50                   push eax
// 00732e32  8bcf                 mov ecx, edi
// 00732e34  e817c1f8ff           call 0x6bef50
// 00732e39  8b442424             mov eax, dword ptr [esp + 0x24]
// 00732e3d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00732e41  50                   push eax
// 00732e42  51                   push ecx
// 00732e43  6a01                 push 1
// 00732e45  8bcf                 mov ecx, edi
// 00732e47  e824ddf8ff           call 0x6c0b70
// 00732e4c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00732e50  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00732e54  50                   push eax
// 00732e55  8b442424             mov eax, dword ptr [esp + 0x24]
// 00732e59  52                   push edx
// 00732e5a  50                   push eax
// 00732e5b  51                   push ecx
// 00732e5c  8bcf                 mov ecx, edi
// 00732e5e  e81deaf8ff           call 0x6c1880
// 00732e63  5f                   pop edi
// 00732e64  5e                   pop esi
// 00732e65  5d                   pop ebp
// 00732e66  5b                   pop ebx
// 00732e67  c23000               ret 0x30
// 00732e6a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00732e6e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00732e72  83f902               cmp ecx, 2
// 00732e75  0f85b8000000         jne 0x732f33
// 00732e7b  85c0                 test eax, eax
// 00732e7d  0f85b0000000         jne 0x732f33
// 00732e83  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00732e87  8bcf                 mov ecx, edi
// 00732e89  e8c26bf8ff           call 0x6b9a50
// 00732e8e  85c0                 test eax, eax
// 00732e90  7539                 jne 0x732ecb
// 00732e92  6a10                 push 0x10
// 00732e94  8bce                 mov ecx, esi
// 00732e96  e8d5b1f7ff           call 0x6ae070
// 00732e9b  8b542424             mov edx, dword ptr [esp + 0x24]
// 00732e9f  50                   push eax
// 00732ea0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00732ea4  52                   push edx
// 00732ea5  50                   push eax
// 00732ea6  8bcf                 mov ecx, edi
// 00732ea8  e8e386f8ff           call 0x6bb590
// 00732ead  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00732eb1  8b542424             mov edx, dword ptr [esp + 0x24]
// 00732eb5  50                   push eax
// 00732eb6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00732eba  51                   push ecx
// 00732ebb  52                   push edx
// 00732ebc  50                   push eax
// 00732ebd  8bcf                 mov ecx, edi
// 00732ebf  e82ceaf8ff           call 0x6c18f0
// 00732ec4  5f                   pop edi
// 00732ec5  5e                   pop esi
// 00732ec6  5d                   pop ebp
// 00732ec7  5b                   pop ebx
// 00732ec8  c23000               ret 0x30
// 00732ecb  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00732ed2  742e                 je 0x732f02
// 00732ed4  8bcf                 mov ecx, edi
// 00732ed6  e8f586f8ff           call 0x6bb5d0
// 00732edb  85c0                 test eax, eax
// 00732edd  7523                 jne 0x732f02
// 00732edf  8b4640               mov eax, dword ptr [esi + 0x40]
// 00732ee2  83f8ff               cmp eax, -1
// 00732ee5  7505                 jne 0x732eec
// 00732ee7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00732eea  eb02                 jmp 0x732eee
// 00732eec  8bc8                 mov ecx, eax
// 00732eee  8b4634               mov eax, dword ptr [esi + 0x34]
// 00732ef1  83f8ff               cmp eax, -1
// 00732ef4  7503                 jne 0x732ef9
// 00732ef6  8b4630               mov eax, dword ptr [esi + 0x30]
// 00732ef9  51                   push ecx
// 00732efa  50                   push eax
// 00732efb  8bcf                 mov ecx, edi
// 00732efd  e84ec0f8ff           call 0x6bef50
// 00732f02  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00732f06  8b542420             mov edx, dword ptr [esp + 0x20]
// 00732f0a  51                   push ecx
// 00732f0b  52                   push edx
// 00732f0c  6a01                 push 1
// 00732f0e  8bcf                 mov ecx, edi
// 00732f10  e85bdcf8ff           call 0x6c0b70
// 00732f15  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00732f19  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00732f1d  50                   push eax
// 00732f1e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00732f22  50                   push eax
// 00732f23  51                   push ecx
// 00732f24  8bcf                 mov ecx, edi
// 00732f26  52                   push edx
// 00732f27  e854e9f8ff           call 0x6c1880
// 00732f2c  5f                   pop edi
// 00732f2d  5e                   pop esi
// 00732f2e  5d                   pop ebp
// 00732f2f  5b                   pop ebx
// 00732f30  c23000               ret 0x30
// 00732f33  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00732f38  0f850b010000         jne 0x733049
// 00732f3e  85c9                 test ecx, ecx
// 00732f40  0f8507010000         jne 0x73304d
// 00732f46  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 00732f4a  7520                 jne 0x732f6c
// 00732f4c  85c0                 test eax, eax
// 00732f4e  7525                 jne 0x732f75
// 00732f50  398648010000         cmp dword ptr [esi + 0x148], eax
// 00732f56  8b742428             mov esi, dword ptr [esp + 0x28]
// 00732f5a  8bce                 mov ecx, esi
// 00732f5c  0f84fe000000         je 0x733060
// 00732f62  e8b9dbf8ff           call 0x6c0b20
// 00732f67  e9f9000000           jmp 0x733065
// 00732f6c  85c0                 test eax, eax
// 00732f6e  740e                 je 0x732f7e
// 00732f70  e99f000000           jmp 0x733014
// 00732f75  83f801               cmp eax, 1
// 00732f78  0f8589000000         jne 0x733007
// 00732f7e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00732f85  8b742428             mov esi, dword ptr [esp + 0x28]
// 00732f89  7469                 je 0x732ff4
// 00732f8b  8bce                 mov ecx, esi
// 00732f8d  e8bedbf8ff           call 0x6c0b50
// 00732f92  8bc8                 mov ecx, eax
// 00732f94  e82783f8ff           call 0x6bb2c0
// 00732f99  85c0                 test eax, eax
// 00732f9b  7557                 jne 0x732ff4
// 00732f9d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00732fa1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00732fa5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00732fa9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00732fad  50                   push eax
// 00732fae  51                   push ecx
// 00732faf  8bce                 mov ecx, esi
// 00732fb1  47                   inc edi
// 00732fb2  43                   inc ebx
// 00732fb3  e898dbf8ff           call 0x6c0b50
// 00732fb8  50                   push eax
// 00732fb9  53                   push ebx
// 00732fba  57                   push edi
// 00732fbb  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00732fbf  57                   push edi
// 00732fc0  8bce                 mov ecx, esi
// 00732fc2  e8b9e8f8ff           call 0x6c1880
// 00732fc7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00732fcb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00732fcf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00732fd3  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00732fd7  52                   push edx
// 00732fd8  50                   push eax
// 00732fd9  8bce                 mov ecx, esi
// 00732fdb  4b                   dec ebx
// 00732fdc  4d                   dec ebp
// 00732fdd  e88e85f8ff           call 0x6bb570
// 00732fe2  50                   push eax
// 00732fe3  55                   push ebp
// 00732fe4  53                   push ebx
// 00732fe5  57                   push edi
// 00732fe6  8bce                 mov ecx, esi
// 00732fe8  e893e8f8ff           call 0x6c1880
// 00732fed  5f                   pop edi
// 00732fee  5e                   pop esi
// 00732fef  5d                   pop ebp
// 00732ff0  5b                   pop ebx
// 00732ff1  c23000               ret 0x30
// 00732ff4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00732ff8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00732ffc  51                   push ecx
// 00732ffd  52                   push edx
// 00732ffe  8bce                 mov ecx, esi
// 00733000  e86b85f8ff           call 0x6bb570
// 00733005  eb68                 jmp 0x73306f
// 00733007  50                   push eax
// 00733008  e8537df7ff           call 0x6aad60
// 0073300d  83c404               add esp, 4
// 00733010  85c0                 test eax, eax
// 00733012  7472                 je 0x733086
// 00733014  8b442424             mov eax, dword ptr [esp + 0x24]
// 00733018  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073301c  8b742418             mov esi, dword ptr [esp + 0x18]
// 00733020  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00733024  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00733028  50                   push eax
// 00733029  51                   push ecx
// 0073302a  8bcb                 mov ecx, ebx
// 0073302c  46                   inc esi
// 0073302d  47                   inc edi
// 0073302e  e87d85f8ff           call 0x6bb5b0
// 00733033  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00733037  50                   push eax
// 00733038  57                   push edi
// 00733039  56                   push esi
// 0073303a  8bcb                 mov ecx, ebx
// 0073303c  52                   push edx
// 0073303d  e83ee8f8ff           call 0x6c1880
// 00733042  5f                   pop edi
// 00733043  5e                   pop esi
// 00733044  5d                   pop ebp
// 00733045  5b                   pop ebx
// 00733046  c23000               ret 0x30
// 00733049  85c9                 test ecx, ecx
// 0073304b  740d                 je 0x73305a
// 0073304d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00733051  8bce                 mov ecx, esi
// 00733053  e83885f8ff           call 0x6bb590
// 00733058  eb0b                 jmp 0x733065
// 0073305a  8b742428             mov esi, dword ptr [esp + 0x28]
// 0073305e  8bce                 mov ecx, esi
// 00733060  e80b6af8ff           call 0x6b9a70
// 00733065  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00733069  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073306d  51                   push ecx
// 0073306e  52                   push edx
// 0073306f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00733073  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00733077  50                   push eax
// 00733078  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073307c  50                   push eax
// 0073307d  51                   push ecx
// 0073307e  8bce                 mov ecx, esi
// 00733080  52                   push edx
// 00733081  e8fae7f8ff           call 0x6c1880
// 00733086  5f                   pop edi
// 00733087  5e                   pop esi
// 00733088  5d                   pop ebp
// 00733089  5b                   pop ebx
// 0073308a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawImage@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
