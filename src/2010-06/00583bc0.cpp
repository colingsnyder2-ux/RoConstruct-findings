// from server: 100% by auto
// roc 2010-06 00583bc0  unit: seg_00580000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583bc0
//
// 00583bc0  83ec60               sub esp, 0x60
// 00583bc3  8b442464             mov eax, dword ptr [esp + 0x64]
// 00583bc7  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00583bca  56                   push esi
// 00583bcb  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00583bd1  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00583bd4  894c2448             mov dword ptr [esp + 0x48], ecx
// 00583bd8  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 00583bde  8b4074               mov eax, dword ptr [eax + 0x74]
// 00583be1  57                   push edi
// 00583be2  8b38                 mov edi, dword ptr [eax]
// 00583be4  897c245c             mov dword ptr [esp + 0x5c], edi
// 00583be8  8b7804               mov edi, dword ptr [eax + 4]
// 00583beb  8b4008               mov eax, dword ptr [eax + 8]
// 00583bee  897c2460             mov dword ptr [esp + 0x60], edi
// 00583bf2  89442464             mov dword ptr [esp + 0x64], eax
// 00583bf6  8b442478             mov eax, dword ptr [esp + 0x78]
// 00583bfa  894c2410             mov dword ptr [esp + 0x10], ecx
// 00583bfe  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00583c01  33ff                 xor edi, edi
// 00583c03  3bc7                 cmp eax, edi
// 00583c05  89742440             mov dword ptr [esp + 0x40], esi
// 00583c09  89542438             mov dword ptr [esp + 0x38], edx
// 00583c0d  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00583c11  0f8e5f020000         jle 0x583e76
// 00583c17  53                   push ebx
// 00583c18  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00583c1c  55                   push ebp
// 00583c1d  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00583c21  2beb                 sub ebp, ebx
// 00583c23  895c2428             mov dword ptr [esp + 0x28], ebx
// 00583c27  896c2450             mov dword ptr [esp + 0x50], ebp
// 00583c2b  8944244c             mov dword ptr [esp + 0x4c], eax
// 00583c2f  eb04                 jmp 0x583c35
// 00583c31  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00583c35  807e2400             cmp byte ptr [esi + 0x24], 0
// 00583c39  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00583c3d  8b042b               mov eax, dword ptr [ebx + ebp]
// 00583c40  8b1b                 mov ebx, dword ptr [ebx]
// 00583c42  89442410             mov dword ptr [esp + 0x10], eax
// 00583c46  895c2414             mov dword ptr [esp + 0x14], ebx
// 00583c4a  7439                 je 0x583c85
// 00583c4c  03c2                 add eax, edx
// 00583c4e  8d4450fd             lea eax, [eax + edx*2 - 3]
// 00583c52  89442410             mov dword ptr [esp + 0x10], eax
// 00583c56  8d4413ff             lea eax, [ebx + edx - 1]
// 00583c5a  89442414             mov dword ptr [esp + 0x14], eax
// 00583c5e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00583c61  8d545203             lea edx, [edx + edx*2 + 3]
// 00583c65  8d1c50               lea ebx, [eax + edx*2]
// 00583c68  8b442410             mov eax, dword ptr [esp + 0x10]
// 00583c6c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00583c74  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 00583c7f  c6462400             mov byte ptr [esi + 0x24], 0
// 00583c83  eb1a                 jmp 0x583c9f
// 00583c85  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00583c88  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00583c90  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 00583c9b  c6462401             mov byte ptr [esi + 0x24], 1
// 00583c9f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00583ca3  33f6                 xor esi, esi
// 00583ca5  33ed                 xor ebp, ebp
// 00583ca7  897c2434             mov dword ptr [esp + 0x34], edi
// 00583cab  897c2430             mov dword ptr [esp + 0x30], edi
// 00583caf  897c242c             mov dword ptr [esp + 0x2c], edi
// 00583cb3  89742424             mov dword ptr [esp + 0x24], esi
// 00583cb7  89742420             mov dword ptr [esp + 0x20], esi
// 00583cbb  8974241c             mov dword ptr [esp + 0x1c], esi
// 00583cbf  8954243c             mov dword ptr [esp + 0x3c], edx
// 00583cc3  85d2                 test edx, edx
// 00583cc5  0f8679010000         jbe 0x583e44
// 00583ccb  eb07                 jmp 0x583cd4
// 00583ccd  8d4900               lea ecx, [ecx]
// 00583cd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00583cd4  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00583cdb  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 00583cdf  8d543208             lea edx, [edx + esi + 8]
// 00583ce3  0fb630               movzx esi, byte ptr [eax]
// 00583ce6  c1fa04               sar edx, 4
// 00583ce9  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00583cec  03d6                 add edx, esi
// 00583cee  8b742418             mov esi, dword ptr [esp + 0x18]
// 00583cf2  0fb63432             movzx esi, byte ptr [edx + esi]
// 00583cf6  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00583cfd  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 00583d02  8d543a08             lea edx, [edx + edi + 8]
// 00583d06  0fb67801             movzx edi, byte ptr [eax + 1]
// 00583d0a  0fb64002             movzx eax, byte ptr [eax + 2]
// 00583d0e  c1fa04               sar edx, 4
// 00583d11  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00583d14  03d7                 add edx, edi
// 00583d16  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00583d1a  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 00583d1e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00583d25  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 00583d2a  8d542a08             lea edx, [edx + ebp + 8]
// 00583d2e  c1fa04               sar edx, 4
// 00583d31  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00583d34  8b542418             mov edx, dword ptr [esp + 0x18]
// 00583d38  03c8                 add ecx, eax
// 00583d3a  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 00583d3e  8bcf                 mov ecx, edi
// 00583d40  c1f902               sar ecx, 2
// 00583d43  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00583d47  8bd5                 mov edx, ebp
// 00583d49  c1fa03               sar edx, 3
// 00583d4c  c1e105               shl ecx, 5
// 00583d4f  03ca                 add ecx, edx
// 00583d51  89542458             mov dword ptr [esp + 0x58], edx
// 00583d55  8b542454             mov edx, dword ptr [esp + 0x54]
// 00583d59  8bc6                 mov eax, esi
// 00583d5b  c1f803               sar eax, 3
// 00583d5e  8b1482               mov edx, dword ptr [edx + eax*4]
// 00583d61  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00583d66  8d0c4a               lea ecx, [edx + ecx*2]
// 00583d69  894c2460             mov dword ptr [esp + 0x60], ecx
// 00583d6d  751b                 jne 0x583d8a
// 00583d6f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00583d73  8b542474             mov edx, dword ptr [esp + 0x74]
// 00583d77  51                   push ecx
// 00583d78  50                   push eax
// 00583d79  8b442464             mov eax, dword ptr [esp + 0x64]
// 00583d7d  52                   push edx
// 00583d7e  e85dfcffff           call 0x5839e0
// 00583d83  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00583d87  83c40c               add esp, 0xc
// 00583d8a  0fb701               movzx eax, word ptr [ecx]
// 00583d8d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00583d91  8b542464             mov edx, dword ptr [esp + 0x64]
// 00583d95  48                   dec eax
// 00583d96  8801                 mov byte ptr [ecx], al
// 00583d98  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00583d9c  8b542468             mov edx, dword ptr [esp + 0x68]
// 00583da0  2bf1                 sub esi, ecx
// 00583da2  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00583da6  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00583daa  0fb60410             movzx eax, byte ptr [eax + edx]
// 00583dae  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00583db2  2bf9                 sub edi, ecx
// 00583db4  2be8                 sub ebp, eax
// 00583db6  8bce                 mov ecx, esi
// 00583db8  8d0436               lea eax, [esi + esi]
// 00583dbb  03f0                 add esi, eax
// 00583dbd  03d6                 add edx, esi
// 00583dbf  668913               mov word ptr [ebx], dx
// 00583dc2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00583dc6  03f0                 add esi, eax
// 00583dc8  03d6                 add edx, esi
// 00583dca  8954241c             mov dword ptr [esp + 0x1c], edx
// 00583dce  8b542420             mov edx, dword ptr [esp + 0x20]
// 00583dd2  03f0                 add esi, eax
// 00583dd4  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00583dd8  8bcf                 mov ecx, edi
// 00583dda  8d043f               lea eax, [edi + edi]
// 00583ddd  03f8                 add edi, eax
// 00583ddf  03d7                 add edx, edi
// 00583de1  66895302             mov word ptr [ebx + 2], dx
// 00583de5  8b542430             mov edx, dword ptr [esp + 0x30]
// 00583de9  03f8                 add edi, eax
// 00583deb  03d7                 add edx, edi
// 00583ded  03f8                 add edi, eax
// 00583def  8d442d00             lea eax, [ebp + ebp]
// 00583df3  89542420             mov dword ptr [esp + 0x20], edx
// 00583df7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00583dfb  894c2430             mov dword ptr [esp + 0x30], ecx
// 00583dff  8bcd                 mov ecx, ebp
// 00583e01  03e8                 add ebp, eax
// 00583e03  03d5                 add edx, ebp
// 00583e05  66895304             mov word ptr [ebx + 4], dx
// 00583e09  8b542434             mov edx, dword ptr [esp + 0x34]
// 00583e0d  03e8                 add ebp, eax
// 00583e0f  03d5                 add edx, ebp
// 00583e11  894c2434             mov dword ptr [esp + 0x34], ecx
// 00583e15  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00583e19  014c2414             add dword ptr [esp + 0x14], ecx
// 00583e1d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00583e21  03e8                 add ebp, eax
// 00583e23  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00583e2a  01442410             add dword ptr [esp + 0x10], eax
// 00583e2e  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00583e33  89542424             mov dword ptr [esp + 0x24], edx
// 00583e37  8d1c43               lea ebx, [ebx + eax*2]
// 00583e3a  0f8590feffff         jne 0x583cd0
// 00583e40  8b542440             mov edx, dword ptr [esp + 0x40]
// 00583e44  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00583e49  8344242804           add dword ptr [esp + 0x28], 4
// 00583e4e  8b742448             mov esi, dword ptr [esp + 0x48]
// 00583e52  668903               mov word ptr [ebx], ax
// 00583e55  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00583e5a  66894302             mov word ptr [ebx + 2], ax
// 00583e5e  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00583e63  33ff                 xor edi, edi
// 00583e65  836c244c01           sub dword ptr [esp + 0x4c], 1
// 00583e6a  66894304             mov word ptr [ebx + 4], ax
// 00583e6e  0f85bdfdffff         jne 0x583c31
// 00583e74  5d                   pop ebp
// 00583e75  5b                   pop ebx
// 00583e76  5f                   pop edi
// 00583e77  5e                   pop esi
// 00583e78  83c460               add esp, 0x60
// 00583e7b  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
