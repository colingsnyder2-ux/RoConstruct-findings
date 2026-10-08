// roc 2007-03 00524910  unit: seg_00520000  size: 702 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524910
//
// 00524910  83ec60               sub esp, 0x60
// 00524913  8b442464             mov eax, dword ptr [esp + 0x64]
// 00524917  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0052491a  56                   push esi
// 0052491b  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00524921  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00524924  894c2448             mov dword ptr [esp + 0x48], ecx
// 00524928  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 0052492e  8b4074               mov eax, dword ptr [eax + 0x74]
// 00524931  57                   push edi
// 00524932  8b38                 mov edi, dword ptr [eax]
// 00524934  897c245c             mov dword ptr [esp + 0x5c], edi
// 00524938  8b7804               mov edi, dword ptr [eax + 4]
// 0052493b  8b4008               mov eax, dword ptr [eax + 8]
// 0052493e  897c2460             mov dword ptr [esp + 0x60], edi
// 00524942  89442464             mov dword ptr [esp + 0x64], eax
// 00524946  8b442478             mov eax, dword ptr [esp + 0x78]
// 0052494a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052494e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00524951  33ff                 xor edi, edi
// 00524953  3bc7                 cmp eax, edi
// 00524955  89742440             mov dword ptr [esp + 0x40], esi
// 00524959  89542438             mov dword ptr [esp + 0x38], edx
// 0052495d  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00524961  0f8e61020000         jle 0x524bc8
// 00524967  53                   push ebx
// 00524968  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0052496c  55                   push ebp
// 0052496d  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00524971  2beb                 sub ebp, ebx
// 00524973  895c2428             mov dword ptr [esp + 0x28], ebx
// 00524977  896c2450             mov dword ptr [esp + 0x50], ebp
// 0052497b  8944244c             mov dword ptr [esp + 0x4c], eax
// 0052497f  eb04                 jmp 0x524985
// 00524981  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00524985  807e2400             cmp byte ptr [esi + 0x24], 0
// 00524989  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0052498d  8b042b               mov eax, dword ptr [ebx + ebp]
// 00524990  8b1b                 mov ebx, dword ptr [ebx]
// 00524992  89442410             mov dword ptr [esp + 0x10], eax
// 00524996  895c2414             mov dword ptr [esp + 0x14], ebx
// 0052499a  7439                 je 0x5249d5
// 0052499c  03c2                 add eax, edx
// 0052499e  8d4450fd             lea eax, [eax + edx*2 - 3]
// 005249a2  89442410             mov dword ptr [esp + 0x10], eax
// 005249a6  8d4413ff             lea eax, [ebx + edx - 1]
// 005249aa  89442414             mov dword ptr [esp + 0x14], eax
// 005249ae  8b4620               mov eax, dword ptr [esi + 0x20]
// 005249b1  8d545203             lea edx, [edx + edx*2 + 3]
// 005249b5  8d1c50               lea ebx, [eax + edx*2]
// 005249b8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005249bc  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005249c4  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 005249cf  c6462400             mov byte ptr [esi + 0x24], 0
// 005249d3  eb1a                 jmp 0x5249ef
// 005249d5  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 005249d8  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005249e0  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 005249eb  c6462401             mov byte ptr [esi + 0x24], 1
// 005249ef  8b542440             mov edx, dword ptr [esp + 0x40]
// 005249f3  33f6                 xor esi, esi
// 005249f5  33ed                 xor ebp, ebp
// 005249f7  85d2                 test edx, edx
// 005249f9  897c2434             mov dword ptr [esp + 0x34], edi
// 005249fd  897c2430             mov dword ptr [esp + 0x30], edi
// 00524a01  897c242c             mov dword ptr [esp + 0x2c], edi
// 00524a05  89742424             mov dword ptr [esp + 0x24], esi
// 00524a09  89742420             mov dword ptr [esp + 0x20], esi
// 00524a0d  8974241c             mov dword ptr [esp + 0x1c], esi
// 00524a11  8954243c             mov dword ptr [esp + 0x3c], edx
// 00524a15  0f867b010000         jbe 0x524b96
// 00524a1b  eb07                 jmp 0x524a24
// 00524a1d  8d4900               lea ecx, [ecx]
// 00524a20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00524a24  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00524a2b  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 00524a2f  8d543208             lea edx, [edx + esi + 8]
// 00524a33  0fb630               movzx esi, byte ptr [eax]
// 00524a36  c1fa04               sar edx, 4
// 00524a39  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00524a3c  03d6                 add edx, esi
// 00524a3e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00524a42  0fb63432             movzx esi, byte ptr [edx + esi]
// 00524a46  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00524a4d  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 00524a52  8d543a08             lea edx, [edx + edi + 8]
// 00524a56  0fb67801             movzx edi, byte ptr [eax + 1]
// 00524a5a  0fb64002             movzx eax, byte ptr [eax + 2]
// 00524a5e  c1fa04               sar edx, 4
// 00524a61  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00524a64  03d7                 add edx, edi
// 00524a66  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00524a6a  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 00524a6e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00524a75  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 00524a7a  8d542a08             lea edx, [edx + ebp + 8]
// 00524a7e  c1fa04               sar edx, 4
// 00524a81  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00524a84  8b542418             mov edx, dword ptr [esp + 0x18]
// 00524a88  03c8                 add ecx, eax
// 00524a8a  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 00524a8e  8bcf                 mov ecx, edi
// 00524a90  c1f902               sar ecx, 2
// 00524a93  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00524a97  8bd5                 mov edx, ebp
// 00524a99  c1fa03               sar edx, 3
// 00524a9c  c1e105               shl ecx, 5
// 00524a9f  03ca                 add ecx, edx
// 00524aa1  89542458             mov dword ptr [esp + 0x58], edx
// 00524aa5  8b542454             mov edx, dword ptr [esp + 0x54]
// 00524aa9  8bc6                 mov eax, esi
// 00524aab  c1f803               sar eax, 3
// 00524aae  8b1482               mov edx, dword ptr [edx + eax*4]
// 00524ab1  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00524ab6  8d0c4a               lea ecx, [edx + ecx*2]
// 00524ab9  894c2460             mov dword ptr [esp + 0x60], ecx
// 00524abd  751b                 jne 0x524ada
// 00524abf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00524ac3  8b542474             mov edx, dword ptr [esp + 0x74]
// 00524ac7  51                   push ecx
// 00524ac8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00524acc  50                   push eax
// 00524acd  52                   push edx
// 00524ace  e82dfcffff           call 0x524700
// 00524ad3  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00524ad7  83c40c               add esp, 0xc
// 00524ada  0fb701               movzx eax, word ptr [ecx]
// 00524add  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00524ae1  8b542464             mov edx, dword ptr [esp + 0x64]
// 00524ae5  83e801               sub eax, 1
// 00524ae8  8801                 mov byte ptr [ecx], al
// 00524aea  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00524aee  8b542468             mov edx, dword ptr [esp + 0x68]
// 00524af2  2bf1                 sub esi, ecx
// 00524af4  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00524af8  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00524afc  0fb60410             movzx eax, byte ptr [eax + edx]
// 00524b00  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00524b04  2bf9                 sub edi, ecx
// 00524b06  2be8                 sub ebp, eax
// 00524b08  8bce                 mov ecx, esi
// 00524b0a  8d0436               lea eax, [esi + esi]
// 00524b0d  03f0                 add esi, eax
// 00524b0f  03d6                 add edx, esi
// 00524b11  668913               mov word ptr [ebx], dx
// 00524b14  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00524b18  03f0                 add esi, eax
// 00524b1a  03d6                 add edx, esi
// 00524b1c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00524b20  8b542420             mov edx, dword ptr [esp + 0x20]
// 00524b24  03f0                 add esi, eax
// 00524b26  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00524b2a  8bcf                 mov ecx, edi
// 00524b2c  8d043f               lea eax, [edi + edi]
// 00524b2f  03f8                 add edi, eax
// 00524b31  03d7                 add edx, edi
// 00524b33  66895302             mov word ptr [ebx + 2], dx
// 00524b37  8b542430             mov edx, dword ptr [esp + 0x30]
// 00524b3b  03f8                 add edi, eax
// 00524b3d  03d7                 add edx, edi
// 00524b3f  03f8                 add edi, eax
// 00524b41  8d442d00             lea eax, [ebp + ebp]
// 00524b45  89542420             mov dword ptr [esp + 0x20], edx
// 00524b49  8b542424             mov edx, dword ptr [esp + 0x24]
// 00524b4d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00524b51  8bcd                 mov ecx, ebp
// 00524b53  03e8                 add ebp, eax
// 00524b55  03d5                 add edx, ebp
// 00524b57  66895304             mov word ptr [ebx + 4], dx
// 00524b5b  8b542434             mov edx, dword ptr [esp + 0x34]
// 00524b5f  03e8                 add ebp, eax
// 00524b61  03d5                 add edx, ebp
// 00524b63  894c2434             mov dword ptr [esp + 0x34], ecx
// 00524b67  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00524b6b  014c2414             add dword ptr [esp + 0x14], ecx
// 00524b6f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00524b73  03e8                 add ebp, eax
// 00524b75  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00524b7c  01442410             add dword ptr [esp + 0x10], eax
// 00524b80  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00524b85  89542424             mov dword ptr [esp + 0x24], edx
// 00524b89  8d1c43               lea ebx, [ebx + eax*2]
// 00524b8c  0f858efeffff         jne 0x524a20
// 00524b92  8b542440             mov edx, dword ptr [esp + 0x40]
// 00524b96  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00524b9b  8344242804           add dword ptr [esp + 0x28], 4
// 00524ba0  8b742448             mov esi, dword ptr [esp + 0x48]
// 00524ba4  668903               mov word ptr [ebx], ax
// 00524ba7  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00524bac  66894302             mov word ptr [ebx + 2], ax
// 00524bb0  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00524bb5  33ff                 xor edi, edi
// 00524bb7  836c244c01           sub dword ptr [esp + 0x4c], 1
// 00524bbc  66894304             mov word ptr [ebx + 4], ax
// 00524bc0  0f85bbfdffff         jne 0x524981
// 00524bc6  5d                   pop ebp
// 00524bc7  5b                   pop ebx
// 00524bc8  5f                   pop edi
// 00524bc9  5e                   pop esi
// 00524bca  83c460               add esp, 0x60
// 00524bcd  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jquant2.c
