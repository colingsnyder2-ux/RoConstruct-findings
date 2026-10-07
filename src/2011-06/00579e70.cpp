// roc 2011-06 00579e70  unit: seg_00570000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00579e70
//
// 00579e70  83ec60               sub esp, 0x60
// 00579e73  8b442464             mov eax, dword ptr [esp + 0x64]
// 00579e77  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00579e7a  56                   push esi
// 00579e7b  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00579e81  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00579e84  894c2448             mov dword ptr [esp + 0x48], ecx
// 00579e88  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 00579e8e  8b4074               mov eax, dword ptr [eax + 0x74]
// 00579e91  57                   push edi
// 00579e92  8b38                 mov edi, dword ptr [eax]
// 00579e94  897c245c             mov dword ptr [esp + 0x5c], edi
// 00579e98  8b7804               mov edi, dword ptr [eax + 4]
// 00579e9b  8b4008               mov eax, dword ptr [eax + 8]
// 00579e9e  897c2460             mov dword ptr [esp + 0x60], edi
// 00579ea2  89442464             mov dword ptr [esp + 0x64], eax
// 00579ea6  8b442478             mov eax, dword ptr [esp + 0x78]
// 00579eaa  894c2410             mov dword ptr [esp + 0x10], ecx
// 00579eae  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00579eb1  33ff                 xor edi, edi
// 00579eb3  3bc7                 cmp eax, edi
// 00579eb5  89742440             mov dword ptr [esp + 0x40], esi
// 00579eb9  89542438             mov dword ptr [esp + 0x38], edx
// 00579ebd  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00579ec1  0f8e5f020000         jle 0x57a126
// 00579ec7  53                   push ebx
// 00579ec8  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00579ecc  55                   push ebp
// 00579ecd  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00579ed1  2beb                 sub ebp, ebx
// 00579ed3  895c2428             mov dword ptr [esp + 0x28], ebx
// 00579ed7  896c2450             mov dword ptr [esp + 0x50], ebp
// 00579edb  8944244c             mov dword ptr [esp + 0x4c], eax
// 00579edf  eb04                 jmp 0x579ee5
// 00579ee1  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00579ee5  807e2400             cmp byte ptr [esi + 0x24], 0
// 00579ee9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00579eed  8b042b               mov eax, dword ptr [ebx + ebp]
// 00579ef0  8b1b                 mov ebx, dword ptr [ebx]
// 00579ef2  89442410             mov dword ptr [esp + 0x10], eax
// 00579ef6  895c2414             mov dword ptr [esp + 0x14], ebx
// 00579efa  7439                 je 0x579f35
// 00579efc  03c2                 add eax, edx
// 00579efe  8d4450fd             lea eax, [eax + edx*2 - 3]
// 00579f02  89442410             mov dword ptr [esp + 0x10], eax
// 00579f06  8d4413ff             lea eax, [ebx + edx - 1]
// 00579f0a  89442414             mov dword ptr [esp + 0x14], eax
// 00579f0e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00579f11  8d545203             lea edx, [edx + edx*2 + 3]
// 00579f15  8d1c50               lea ebx, [eax + edx*2]
// 00579f18  8b442410             mov eax, dword ptr [esp + 0x10]
// 00579f1c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00579f24  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 00579f2f  c6462400             mov byte ptr [esi + 0x24], 0
// 00579f33  eb1a                 jmp 0x579f4f
// 00579f35  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00579f38  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00579f40  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 00579f4b  c6462401             mov byte ptr [esi + 0x24], 1
// 00579f4f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00579f53  33f6                 xor esi, esi
// 00579f55  33ed                 xor ebp, ebp
// 00579f57  897c2434             mov dword ptr [esp + 0x34], edi
// 00579f5b  897c2430             mov dword ptr [esp + 0x30], edi
// 00579f5f  897c242c             mov dword ptr [esp + 0x2c], edi
// 00579f63  89742424             mov dword ptr [esp + 0x24], esi
// 00579f67  89742420             mov dword ptr [esp + 0x20], esi
// 00579f6b  8974241c             mov dword ptr [esp + 0x1c], esi
// 00579f6f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00579f73  85d2                 test edx, edx
// 00579f75  0f8679010000         jbe 0x57a0f4
// 00579f7b  eb07                 jmp 0x579f84
// 00579f7d  8d4900               lea ecx, [ecx]
// 00579f80  8b442410             mov eax, dword ptr [esp + 0x10]
// 00579f84  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00579f8b  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 00579f8f  8d543208             lea edx, [edx + esi + 8]
// 00579f93  0fb630               movzx esi, byte ptr [eax]
// 00579f96  c1fa04               sar edx, 4
// 00579f99  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00579f9c  03d6                 add edx, esi
// 00579f9e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00579fa2  0fb63432             movzx esi, byte ptr [edx + esi]
// 00579fa6  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00579fad  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 00579fb2  8d543a08             lea edx, [edx + edi + 8]
// 00579fb6  0fb67801             movzx edi, byte ptr [eax + 1]
// 00579fba  0fb64002             movzx eax, byte ptr [eax + 2]
// 00579fbe  c1fa04               sar edx, 4
// 00579fc1  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00579fc4  03d7                 add edx, edi
// 00579fc6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00579fca  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 00579fce  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00579fd5  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 00579fda  8d542a08             lea edx, [edx + ebp + 8]
// 00579fde  c1fa04               sar edx, 4
// 00579fe1  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00579fe4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579fe8  03c8                 add ecx, eax
// 00579fea  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 00579fee  8bcf                 mov ecx, edi
// 00579ff0  c1f902               sar ecx, 2
// 00579ff3  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00579ff7  8bd5                 mov edx, ebp
// 00579ff9  c1fa03               sar edx, 3
// 00579ffc  c1e105               shl ecx, 5
// 00579fff  03ca                 add ecx, edx
// 0057a001  89542458             mov dword ptr [esp + 0x58], edx
// 0057a005  8b542454             mov edx, dword ptr [esp + 0x54]
// 0057a009  8bc6                 mov eax, esi
// 0057a00b  c1f803               sar eax, 3
// 0057a00e  8b1482               mov edx, dword ptr [edx + eax*4]
// 0057a011  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 0057a016  8d0c4a               lea ecx, [edx + ecx*2]
// 0057a019  894c2460             mov dword ptr [esp + 0x60], ecx
// 0057a01d  751b                 jne 0x57a03a
// 0057a01f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0057a023  8b542474             mov edx, dword ptr [esp + 0x74]
// 0057a027  51                   push ecx
// 0057a028  50                   push eax
// 0057a029  8b442464             mov eax, dword ptr [esp + 0x64]
// 0057a02d  52                   push edx
// 0057a02e  e85dfcffff           call 0x579c90
// 0057a033  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0057a037  83c40c               add esp, 0xc
// 0057a03a  0fb701               movzx eax, word ptr [ecx]
// 0057a03d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057a041  8b542464             mov edx, dword ptr [esp + 0x64]
// 0057a045  48                   dec eax
// 0057a046  8801                 mov byte ptr [ecx], al
// 0057a048  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 0057a04c  8b542468             mov edx, dword ptr [esp + 0x68]
// 0057a050  2bf1                 sub esi, ecx
// 0057a052  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 0057a056  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0057a05a  0fb60410             movzx eax, byte ptr [eax + edx]
// 0057a05e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057a062  2bf9                 sub edi, ecx
// 0057a064  2be8                 sub ebp, eax
// 0057a066  8bce                 mov ecx, esi
// 0057a068  8d0436               lea eax, [esi + esi]
// 0057a06b  03f0                 add esi, eax
// 0057a06d  03d6                 add edx, esi
// 0057a06f  668913               mov word ptr [ebx], dx
// 0057a072  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057a076  03f0                 add esi, eax
// 0057a078  03d6                 add edx, esi
// 0057a07a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057a07e  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a082  03f0                 add esi, eax
// 0057a084  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057a088  8bcf                 mov ecx, edi
// 0057a08a  8d043f               lea eax, [edi + edi]
// 0057a08d  03f8                 add edi, eax
// 0057a08f  03d7                 add edx, edi
// 0057a091  66895302             mov word ptr [ebx + 2], dx
// 0057a095  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057a099  03f8                 add edi, eax
// 0057a09b  03d7                 add edx, edi
// 0057a09d  03f8                 add edi, eax
// 0057a09f  8d442d00             lea eax, [ebp + ebp]
// 0057a0a3  89542420             mov dword ptr [esp + 0x20], edx
// 0057a0a7  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057a0ab  894c2430             mov dword ptr [esp + 0x30], ecx
// 0057a0af  8bcd                 mov ecx, ebp
// 0057a0b1  03e8                 add ebp, eax
// 0057a0b3  03d5                 add edx, ebp
// 0057a0b5  66895304             mov word ptr [ebx + 4], dx
// 0057a0b9  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057a0bd  03e8                 add ebp, eax
// 0057a0bf  03d5                 add edx, ebp
// 0057a0c1  894c2434             mov dword ptr [esp + 0x34], ecx
// 0057a0c5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057a0c9  014c2414             add dword ptr [esp + 0x14], ecx
// 0057a0cd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0057a0d1  03e8                 add ebp, eax
// 0057a0d3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0057a0da  01442410             add dword ptr [esp + 0x10], eax
// 0057a0de  836c243c01           sub dword ptr [esp + 0x3c], 1
// 0057a0e3  89542424             mov dword ptr [esp + 0x24], edx
// 0057a0e7  8d1c43               lea ebx, [ebx + eax*2]
// 0057a0ea  0f8590feffff         jne 0x579f80
// 0057a0f0  8b542440             mov edx, dword ptr [esp + 0x40]
// 0057a0f4  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0057a0f9  8344242804           add dword ptr [esp + 0x28], 4
// 0057a0fe  8b742448             mov esi, dword ptr [esp + 0x48]
// 0057a102  668903               mov word ptr [ebx], ax
// 0057a105  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 0057a10a  66894302             mov word ptr [ebx + 2], ax
// 0057a10e  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 0057a113  33ff                 xor edi, edi
// 0057a115  836c244c01           sub dword ptr [esp + 0x4c], 1
// 0057a11a  66894304             mov word ptr [ebx + 4], ax
// 0057a11e  0f85bdfdffff         jne 0x579ee1
// 0057a124  5d                   pop ebp
// 0057a125  5b                   pop ebx
// 0057a126  5f                   pop edi
// 0057a127  5e                   pop esi
// 0057a128  83c460               add esp, 0x60
// 0057a12b  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
