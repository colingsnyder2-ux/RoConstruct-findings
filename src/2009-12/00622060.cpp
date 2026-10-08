// roc 2009-12 00622060  unit: seg_00620000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622060
//
// 00622060  83ec60               sub esp, 0x60
// 00622063  8b442464             mov eax, dword ptr [esp + 0x64]
// 00622067  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0062206a  56                   push esi
// 0062206b  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00622071  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00622074  894c2448             mov dword ptr [esp + 0x48], ecx
// 00622078  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 0062207e  8b4074               mov eax, dword ptr [eax + 0x74]
// 00622081  57                   push edi
// 00622082  8b38                 mov edi, dword ptr [eax]
// 00622084  897c245c             mov dword ptr [esp + 0x5c], edi
// 00622088  8b7804               mov edi, dword ptr [eax + 4]
// 0062208b  8b4008               mov eax, dword ptr [eax + 8]
// 0062208e  897c2460             mov dword ptr [esp + 0x60], edi
// 00622092  89442464             mov dword ptr [esp + 0x64], eax
// 00622096  8b442478             mov eax, dword ptr [esp + 0x78]
// 0062209a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0062209e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006220a1  33ff                 xor edi, edi
// 006220a3  3bc7                 cmp eax, edi
// 006220a5  89742440             mov dword ptr [esp + 0x40], esi
// 006220a9  89542438             mov dword ptr [esp + 0x38], edx
// 006220ad  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006220b1  0f8e5f020000         jle 0x622316
// 006220b7  53                   push ebx
// 006220b8  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 006220bc  55                   push ebp
// 006220bd  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 006220c1  2beb                 sub ebp, ebx
// 006220c3  895c2428             mov dword ptr [esp + 0x28], ebx
// 006220c7  896c2450             mov dword ptr [esp + 0x50], ebp
// 006220cb  8944244c             mov dword ptr [esp + 0x4c], eax
// 006220cf  eb04                 jmp 0x6220d5
// 006220d1  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 006220d5  807e2400             cmp byte ptr [esi + 0x24], 0
// 006220d9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006220dd  8b042b               mov eax, dword ptr [ebx + ebp]
// 006220e0  8b1b                 mov ebx, dword ptr [ebx]
// 006220e2  89442410             mov dword ptr [esp + 0x10], eax
// 006220e6  895c2414             mov dword ptr [esp + 0x14], ebx
// 006220ea  7439                 je 0x622125
// 006220ec  03c2                 add eax, edx
// 006220ee  8d4450fd             lea eax, [eax + edx*2 - 3]
// 006220f2  89442410             mov dword ptr [esp + 0x10], eax
// 006220f6  8d4413ff             lea eax, [ebx + edx - 1]
// 006220fa  89442414             mov dword ptr [esp + 0x14], eax
// 006220fe  8b4620               mov eax, dword ptr [esi + 0x20]
// 00622101  8d545203             lea edx, [edx + edx*2 + 3]
// 00622105  8d1c50               lea ebx, [eax + edx*2]
// 00622108  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062210c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00622114  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 0062211f  c6462400             mov byte ptr [esi + 0x24], 0
// 00622123  eb1a                 jmp 0x62213f
// 00622125  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00622128  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00622130  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 0062213b  c6462401             mov byte ptr [esi + 0x24], 1
// 0062213f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00622143  33f6                 xor esi, esi
// 00622145  33ed                 xor ebp, ebp
// 00622147  897c2434             mov dword ptr [esp + 0x34], edi
// 0062214b  897c2430             mov dword ptr [esp + 0x30], edi
// 0062214f  897c242c             mov dword ptr [esp + 0x2c], edi
// 00622153  89742424             mov dword ptr [esp + 0x24], esi
// 00622157  89742420             mov dword ptr [esp + 0x20], esi
// 0062215b  8974241c             mov dword ptr [esp + 0x1c], esi
// 0062215f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00622163  85d2                 test edx, edx
// 00622165  0f8679010000         jbe 0x6222e4
// 0062216b  eb07                 jmp 0x622174
// 0062216d  8d4900               lea ecx, [ecx]
// 00622170  8b442410             mov eax, dword ptr [esp + 0x10]
// 00622174  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0062217b  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 0062217f  8d543208             lea edx, [edx + esi + 8]
// 00622183  0fb630               movzx esi, byte ptr [eax]
// 00622186  c1fa04               sar edx, 4
// 00622189  8b1491               mov edx, dword ptr [ecx + edx*4]
// 0062218c  03d6                 add edx, esi
// 0062218e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00622192  0fb63432             movzx esi, byte ptr [edx + esi]
// 00622196  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0062219d  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 006221a2  8d543a08             lea edx, [edx + edi + 8]
// 006221a6  0fb67801             movzx edi, byte ptr [eax + 1]
// 006221aa  0fb64002             movzx eax, byte ptr [eax + 2]
// 006221ae  c1fa04               sar edx, 4
// 006221b1  8b1491               mov edx, dword ptr [ecx + edx*4]
// 006221b4  03d7                 add edx, edi
// 006221b6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006221ba  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 006221be  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 006221c5  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 006221ca  8d542a08             lea edx, [edx + ebp + 8]
// 006221ce  c1fa04               sar edx, 4
// 006221d1  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 006221d4  8b542418             mov edx, dword ptr [esp + 0x18]
// 006221d8  03c8                 add ecx, eax
// 006221da  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 006221de  8bcf                 mov ecx, edi
// 006221e0  c1f902               sar ecx, 2
// 006221e3  894c245c             mov dword ptr [esp + 0x5c], ecx
// 006221e7  8bd5                 mov edx, ebp
// 006221e9  c1fa03               sar edx, 3
// 006221ec  c1e105               shl ecx, 5
// 006221ef  03ca                 add ecx, edx
// 006221f1  89542458             mov dword ptr [esp + 0x58], edx
// 006221f5  8b542454             mov edx, dword ptr [esp + 0x54]
// 006221f9  8bc6                 mov eax, esi
// 006221fb  c1f803               sar eax, 3
// 006221fe  8b1482               mov edx, dword ptr [edx + eax*4]
// 00622201  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00622206  8d0c4a               lea ecx, [edx + ecx*2]
// 00622209  894c2460             mov dword ptr [esp + 0x60], ecx
// 0062220d  751b                 jne 0x62222a
// 0062220f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00622213  8b542474             mov edx, dword ptr [esp + 0x74]
// 00622217  51                   push ecx
// 00622218  50                   push eax
// 00622219  8b442464             mov eax, dword ptr [esp + 0x64]
// 0062221d  52                   push edx
// 0062221e  e85dfcffff           call 0x621e80
// 00622223  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00622227  83c40c               add esp, 0xc
// 0062222a  0fb701               movzx eax, word ptr [ecx]
// 0062222d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00622231  8b542464             mov edx, dword ptr [esp + 0x64]
// 00622235  48                   dec eax
// 00622236  8801                 mov byte ptr [ecx], al
// 00622238  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 0062223c  8b542468             mov edx, dword ptr [esp + 0x68]
// 00622240  2bf1                 sub esi, ecx
// 00622242  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00622246  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0062224a  0fb60410             movzx eax, byte ptr [eax + edx]
// 0062224e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00622252  2bf9                 sub edi, ecx
// 00622254  2be8                 sub ebp, eax
// 00622256  8bce                 mov ecx, esi
// 00622258  8d0436               lea eax, [esi + esi]
// 0062225b  03f0                 add esi, eax
// 0062225d  03d6                 add edx, esi
// 0062225f  668913               mov word ptr [ebx], dx
// 00622262  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00622266  03f0                 add esi, eax
// 00622268  03d6                 add edx, esi
// 0062226a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0062226e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00622272  03f0                 add esi, eax
// 00622274  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00622278  8bcf                 mov ecx, edi
// 0062227a  8d043f               lea eax, [edi + edi]
// 0062227d  03f8                 add edi, eax
// 0062227f  03d7                 add edx, edi
// 00622281  66895302             mov word ptr [ebx + 2], dx
// 00622285  8b542430             mov edx, dword ptr [esp + 0x30]
// 00622289  03f8                 add edi, eax
// 0062228b  03d7                 add edx, edi
// 0062228d  03f8                 add edi, eax
// 0062228f  8d442d00             lea eax, [ebp + ebp]
// 00622293  89542420             mov dword ptr [esp + 0x20], edx
// 00622297  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062229b  894c2430             mov dword ptr [esp + 0x30], ecx
// 0062229f  8bcd                 mov ecx, ebp
// 006222a1  03e8                 add ebp, eax
// 006222a3  03d5                 add edx, ebp
// 006222a5  66895304             mov word ptr [ebx + 4], dx
// 006222a9  8b542434             mov edx, dword ptr [esp + 0x34]
// 006222ad  03e8                 add ebp, eax
// 006222af  03d5                 add edx, ebp
// 006222b1  894c2434             mov dword ptr [esp + 0x34], ecx
// 006222b5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006222b9  014c2414             add dword ptr [esp + 0x14], ecx
// 006222bd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006222c1  03e8                 add ebp, eax
// 006222c3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 006222ca  01442410             add dword ptr [esp + 0x10], eax
// 006222ce  836c243c01           sub dword ptr [esp + 0x3c], 1
// 006222d3  89542424             mov dword ptr [esp + 0x24], edx
// 006222d7  8d1c43               lea ebx, [ebx + eax*2]
// 006222da  0f8590feffff         jne 0x622170
// 006222e0  8b542440             mov edx, dword ptr [esp + 0x40]
// 006222e4  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 006222e9  8344242804           add dword ptr [esp + 0x28], 4
// 006222ee  8b742448             mov esi, dword ptr [esp + 0x48]
// 006222f2  668903               mov word ptr [ebx], ax
// 006222f5  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 006222fa  66894302             mov word ptr [ebx + 2], ax
// 006222fe  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00622303  33ff                 xor edi, edi
// 00622305  836c244c01           sub dword ptr [esp + 0x4c], 1
// 0062230a  66894304             mov word ptr [ebx + 4], ax
// 0062230e  0f85bdfdffff         jne 0x6220d1
// 00622314  5d                   pop ebp
// 00622315  5b                   pop ebx
// 00622316  5f                   pop edi
// 00622317  5e                   pop esi
// 00622318  83c460               add esp, 0x60
// 0062231b  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
