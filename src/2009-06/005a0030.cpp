// from server: 100% by auto
// roc 2009-06 005a0030  unit: seg_005a0000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a0030
//
// 005a0030  83ec60               sub esp, 0x60
// 005a0033  8b442464             mov eax, dword ptr [esp + 0x64]
// 005a0037  8b505c               mov edx, dword ptr [eax + 0x5c]
// 005a003a  56                   push esi
// 005a003b  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 005a0041  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005a0044  894c2448             mov dword ptr [esp + 0x48], ecx
// 005a0048  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 005a004e  8b4074               mov eax, dword ptr [eax + 0x74]
// 005a0051  57                   push edi
// 005a0052  8b38                 mov edi, dword ptr [eax]
// 005a0054  897c245c             mov dword ptr [esp + 0x5c], edi
// 005a0058  8b7804               mov edi, dword ptr [eax + 4]
// 005a005b  8b4008               mov eax, dword ptr [eax + 8]
// 005a005e  897c2460             mov dword ptr [esp + 0x60], edi
// 005a0062  89442464             mov dword ptr [esp + 0x64], eax
// 005a0066  8b442478             mov eax, dword ptr [esp + 0x78]
// 005a006a  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a006e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 005a0071  33ff                 xor edi, edi
// 005a0073  3bc7                 cmp eax, edi
// 005a0075  89742440             mov dword ptr [esp + 0x40], esi
// 005a0079  89542438             mov dword ptr [esp + 0x38], edx
// 005a007d  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005a0081  0f8e5f020000         jle 0x5a02e6
// 005a0087  53                   push ebx
// 005a0088  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 005a008c  55                   push ebp
// 005a008d  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 005a0091  2beb                 sub ebp, ebx
// 005a0093  895c2428             mov dword ptr [esp + 0x28], ebx
// 005a0097  896c2450             mov dword ptr [esp + 0x50], ebp
// 005a009b  8944244c             mov dword ptr [esp + 0x4c], eax
// 005a009f  eb04                 jmp 0x5a00a5
// 005a00a1  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 005a00a5  807e2400             cmp byte ptr [esi + 0x24], 0
// 005a00a9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005a00ad  8b042b               mov eax, dword ptr [ebx + ebp]
// 005a00b0  8b1b                 mov ebx, dword ptr [ebx]
// 005a00b2  89442410             mov dword ptr [esp + 0x10], eax
// 005a00b6  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a00ba  7439                 je 0x5a00f5
// 005a00bc  03c2                 add eax, edx
// 005a00be  8d4450fd             lea eax, [eax + edx*2 - 3]
// 005a00c2  89442410             mov dword ptr [esp + 0x10], eax
// 005a00c6  8d4413ff             lea eax, [ebx + edx - 1]
// 005a00ca  89442414             mov dword ptr [esp + 0x14], eax
// 005a00ce  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a00d1  8d545203             lea edx, [edx + edx*2 + 3]
// 005a00d5  8d1c50               lea ebx, [eax + edx*2]
// 005a00d8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a00dc  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005a00e4  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 005a00ef  c6462400             mov byte ptr [esi + 0x24], 0
// 005a00f3  eb1a                 jmp 0x5a010f
// 005a00f5  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 005a00f8  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005a0100  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 005a010b  c6462401             mov byte ptr [esi + 0x24], 1
// 005a010f  8b542440             mov edx, dword ptr [esp + 0x40]
// 005a0113  33f6                 xor esi, esi
// 005a0115  33ed                 xor ebp, ebp
// 005a0117  897c2434             mov dword ptr [esp + 0x34], edi
// 005a011b  897c2430             mov dword ptr [esp + 0x30], edi
// 005a011f  897c242c             mov dword ptr [esp + 0x2c], edi
// 005a0123  89742424             mov dword ptr [esp + 0x24], esi
// 005a0127  89742420             mov dword ptr [esp + 0x20], esi
// 005a012b  8974241c             mov dword ptr [esp + 0x1c], esi
// 005a012f  8954243c             mov dword ptr [esp + 0x3c], edx
// 005a0133  85d2                 test edx, edx
// 005a0135  0f8679010000         jbe 0x5a02b4
// 005a013b  eb07                 jmp 0x5a0144
// 005a013d  8d4900               lea ecx, [ecx]
// 005a0140  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a0144  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 005a014b  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 005a014f  8d543208             lea edx, [edx + esi + 8]
// 005a0153  0fb630               movzx esi, byte ptr [eax]
// 005a0156  c1fa04               sar edx, 4
// 005a0159  8b1491               mov edx, dword ptr [ecx + edx*4]
// 005a015c  03d6                 add edx, esi
// 005a015e  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a0162  0fb63432             movzx esi, byte ptr [edx + esi]
// 005a0166  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 005a016d  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 005a0172  8d543a08             lea edx, [edx + edi + 8]
// 005a0176  0fb67801             movzx edi, byte ptr [eax + 1]
// 005a017a  0fb64002             movzx eax, byte ptr [eax + 2]
// 005a017e  c1fa04               sar edx, 4
// 005a0181  8b1491               mov edx, dword ptr [ecx + edx*4]
// 005a0184  03d7                 add edx, edi
// 005a0186  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005a018a  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 005a018e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 005a0195  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 005a019a  8d542a08             lea edx, [edx + ebp + 8]
// 005a019e  c1fa04               sar edx, 4
// 005a01a1  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 005a01a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a01a8  03c8                 add ecx, eax
// 005a01aa  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 005a01ae  8bcf                 mov ecx, edi
// 005a01b0  c1f902               sar ecx, 2
// 005a01b3  894c245c             mov dword ptr [esp + 0x5c], ecx
// 005a01b7  8bd5                 mov edx, ebp
// 005a01b9  c1fa03               sar edx, 3
// 005a01bc  c1e105               shl ecx, 5
// 005a01bf  03ca                 add ecx, edx
// 005a01c1  89542458             mov dword ptr [esp + 0x58], edx
// 005a01c5  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a01c9  8bc6                 mov eax, esi
// 005a01cb  c1f803               sar eax, 3
// 005a01ce  8b1482               mov edx, dword ptr [edx + eax*4]
// 005a01d1  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 005a01d6  8d0c4a               lea ecx, [edx + ecx*2]
// 005a01d9  894c2460             mov dword ptr [esp + 0x60], ecx
// 005a01dd  751b                 jne 0x5a01fa
// 005a01df  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005a01e3  8b542474             mov edx, dword ptr [esp + 0x74]
// 005a01e7  51                   push ecx
// 005a01e8  50                   push eax
// 005a01e9  8b442464             mov eax, dword ptr [esp + 0x64]
// 005a01ed  52                   push edx
// 005a01ee  e85dfcffff           call 0x59fe50
// 005a01f3  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005a01f7  83c40c               add esp, 0xc
// 005a01fa  0fb701               movzx eax, word ptr [ecx]
// 005a01fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a0201  8b542464             mov edx, dword ptr [esp + 0x64]
// 005a0205  48                   dec eax
// 005a0206  8801                 mov byte ptr [ecx], al
// 005a0208  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 005a020c  8b542468             mov edx, dword ptr [esp + 0x68]
// 005a0210  2bf1                 sub esi, ecx
// 005a0212  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 005a0216  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 005a021a  0fb60410             movzx eax, byte ptr [eax + edx]
// 005a021e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a0222  2bf9                 sub edi, ecx
// 005a0224  2be8                 sub ebp, eax
// 005a0226  8bce                 mov ecx, esi
// 005a0228  8d0436               lea eax, [esi + esi]
// 005a022b  03f0                 add esi, eax
// 005a022d  03d6                 add edx, esi
// 005a022f  668913               mov word ptr [ebx], dx
// 005a0232  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a0236  03f0                 add esi, eax
// 005a0238  03d6                 add edx, esi
// 005a023a  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a023e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a0242  03f0                 add esi, eax
// 005a0244  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005a0248  8bcf                 mov ecx, edi
// 005a024a  8d043f               lea eax, [edi + edi]
// 005a024d  03f8                 add edi, eax
// 005a024f  03d7                 add edx, edi
// 005a0251  66895302             mov word ptr [ebx + 2], dx
// 005a0255  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a0259  03f8                 add edi, eax
// 005a025b  03d7                 add edx, edi
// 005a025d  03f8                 add edi, eax
// 005a025f  8d442d00             lea eax, [ebp + ebp]
// 005a0263  89542420             mov dword ptr [esp + 0x20], edx
// 005a0267  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a026b  894c2430             mov dword ptr [esp + 0x30], ecx
// 005a026f  8bcd                 mov ecx, ebp
// 005a0271  03e8                 add ebp, eax
// 005a0273  03d5                 add edx, ebp
// 005a0275  66895304             mov word ptr [ebx + 4], dx
// 005a0279  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a027d  03e8                 add ebp, eax
// 005a027f  03d5                 add edx, ebp
// 005a0281  894c2434             mov dword ptr [esp + 0x34], ecx
// 005a0285  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005a0289  014c2414             add dword ptr [esp + 0x14], ecx
// 005a028d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005a0291  03e8                 add ebp, eax
// 005a0293  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 005a029a  01442410             add dword ptr [esp + 0x10], eax
// 005a029e  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005a02a3  89542424             mov dword ptr [esp + 0x24], edx
// 005a02a7  8d1c43               lea ebx, [ebx + eax*2]
// 005a02aa  0f8590feffff         jne 0x5a0140
// 005a02b0  8b542440             mov edx, dword ptr [esp + 0x40]
// 005a02b4  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 005a02b9  8344242804           add dword ptr [esp + 0x28], 4
// 005a02be  8b742448             mov esi, dword ptr [esp + 0x48]
// 005a02c2  668903               mov word ptr [ebx], ax
// 005a02c5  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 005a02ca  66894302             mov word ptr [ebx + 2], ax
// 005a02ce  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 005a02d3  33ff                 xor edi, edi
// 005a02d5  836c244c01           sub dword ptr [esp + 0x4c], 1
// 005a02da  66894304             mov word ptr [ebx + 4], ax
// 005a02de  0f85bdfdffff         jne 0x5a00a1
// 005a02e4  5d                   pop ebp
// 005a02e5  5b                   pop ebx
// 005a02e6  5f                   pop edi
// 005a02e7  5e                   pop esi
// 005a02e8  83c460               add esp, 0x60
// 005a02eb  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
