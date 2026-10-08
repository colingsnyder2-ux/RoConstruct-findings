// from server: 100% by auto
// roc 2008-06 00535d50  unit: seg_00530000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535d50
//
// 00535d50  83ec60               sub esp, 0x60
// 00535d53  8b442464             mov eax, dword ptr [esp + 0x64]
// 00535d57  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00535d5a  56                   push esi
// 00535d5b  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00535d61  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00535d64  894c2448             mov dword ptr [esp + 0x48], ecx
// 00535d68  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 00535d6e  8b4074               mov eax, dword ptr [eax + 0x74]
// 00535d71  57                   push edi
// 00535d72  8b38                 mov edi, dword ptr [eax]
// 00535d74  897c245c             mov dword ptr [esp + 0x5c], edi
// 00535d78  8b7804               mov edi, dword ptr [eax + 4]
// 00535d7b  8b4008               mov eax, dword ptr [eax + 8]
// 00535d7e  897c2460             mov dword ptr [esp + 0x60], edi
// 00535d82  89442464             mov dword ptr [esp + 0x64], eax
// 00535d86  8b442478             mov eax, dword ptr [esp + 0x78]
// 00535d8a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00535d8e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00535d91  33ff                 xor edi, edi
// 00535d93  3bc7                 cmp eax, edi
// 00535d95  89742440             mov dword ptr [esp + 0x40], esi
// 00535d99  89542438             mov dword ptr [esp + 0x38], edx
// 00535d9d  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00535da1  0f8e5f020000         jle 0x536006
// 00535da7  53                   push ebx
// 00535da8  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00535dac  55                   push ebp
// 00535dad  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00535db1  2beb                 sub ebp, ebx
// 00535db3  895c2428             mov dword ptr [esp + 0x28], ebx
// 00535db7  896c2450             mov dword ptr [esp + 0x50], ebp
// 00535dbb  8944244c             mov dword ptr [esp + 0x4c], eax
// 00535dbf  eb04                 jmp 0x535dc5
// 00535dc1  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00535dc5  807e2400             cmp byte ptr [esi + 0x24], 0
// 00535dc9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00535dcd  8b042b               mov eax, dword ptr [ebx + ebp]
// 00535dd0  8b1b                 mov ebx, dword ptr [ebx]
// 00535dd2  89442410             mov dword ptr [esp + 0x10], eax
// 00535dd6  895c2414             mov dword ptr [esp + 0x14], ebx
// 00535dda  7439                 je 0x535e15
// 00535ddc  03c2                 add eax, edx
// 00535dde  8d4450fd             lea eax, [eax + edx*2 - 3]
// 00535de2  89442410             mov dword ptr [esp + 0x10], eax
// 00535de6  8d4413ff             lea eax, [ebx + edx - 1]
// 00535dea  89442414             mov dword ptr [esp + 0x14], eax
// 00535dee  8b4620               mov eax, dword ptr [esi + 0x20]
// 00535df1  8d545203             lea edx, [edx + edx*2 + 3]
// 00535df5  8d1c50               lea ebx, [eax + edx*2]
// 00535df8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00535dfc  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00535e04  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 00535e0f  c6462400             mov byte ptr [esi + 0x24], 0
// 00535e13  eb1a                 jmp 0x535e2f
// 00535e15  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00535e18  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00535e20  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 00535e2b  c6462401             mov byte ptr [esi + 0x24], 1
// 00535e2f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00535e33  33f6                 xor esi, esi
// 00535e35  33ed                 xor ebp, ebp
// 00535e37  897c2434             mov dword ptr [esp + 0x34], edi
// 00535e3b  897c2430             mov dword ptr [esp + 0x30], edi
// 00535e3f  897c242c             mov dword ptr [esp + 0x2c], edi
// 00535e43  89742424             mov dword ptr [esp + 0x24], esi
// 00535e47  89742420             mov dword ptr [esp + 0x20], esi
// 00535e4b  8974241c             mov dword ptr [esp + 0x1c], esi
// 00535e4f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00535e53  85d2                 test edx, edx
// 00535e55  0f8679010000         jbe 0x535fd4
// 00535e5b  eb07                 jmp 0x535e64
// 00535e5d  8d4900               lea ecx, [ecx]
// 00535e60  8b442410             mov eax, dword ptr [esp + 0x10]
// 00535e64  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00535e6b  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 00535e6f  8d543208             lea edx, [edx + esi + 8]
// 00535e73  0fb630               movzx esi, byte ptr [eax]
// 00535e76  c1fa04               sar edx, 4
// 00535e79  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00535e7c  03d6                 add edx, esi
// 00535e7e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00535e82  0fb63432             movzx esi, byte ptr [edx + esi]
// 00535e86  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00535e8d  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 00535e92  8d543a08             lea edx, [edx + edi + 8]
// 00535e96  0fb67801             movzx edi, byte ptr [eax + 1]
// 00535e9a  0fb64002             movzx eax, byte ptr [eax + 2]
// 00535e9e  c1fa04               sar edx, 4
// 00535ea1  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00535ea4  03d7                 add edx, edi
// 00535ea6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00535eaa  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 00535eae  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00535eb5  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 00535eba  8d542a08             lea edx, [edx + ebp + 8]
// 00535ebe  c1fa04               sar edx, 4
// 00535ec1  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00535ec4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00535ec8  03c8                 add ecx, eax
// 00535eca  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 00535ece  8bcf                 mov ecx, edi
// 00535ed0  c1f902               sar ecx, 2
// 00535ed3  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00535ed7  8bd5                 mov edx, ebp
// 00535ed9  c1fa03               sar edx, 3
// 00535edc  c1e105               shl ecx, 5
// 00535edf  03ca                 add ecx, edx
// 00535ee1  89542458             mov dword ptr [esp + 0x58], edx
// 00535ee5  8b542454             mov edx, dword ptr [esp + 0x54]
// 00535ee9  8bc6                 mov eax, esi
// 00535eeb  c1f803               sar eax, 3
// 00535eee  8b1482               mov edx, dword ptr [edx + eax*4]
// 00535ef1  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00535ef6  8d0c4a               lea ecx, [edx + ecx*2]
// 00535ef9  894c2460             mov dword ptr [esp + 0x60], ecx
// 00535efd  751b                 jne 0x535f1a
// 00535eff  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00535f03  8b542474             mov edx, dword ptr [esp + 0x74]
// 00535f07  51                   push ecx
// 00535f08  50                   push eax
// 00535f09  8b442464             mov eax, dword ptr [esp + 0x64]
// 00535f0d  52                   push edx
// 00535f0e  e85dfcffff           call 0x535b70
// 00535f13  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00535f17  83c40c               add esp, 0xc
// 00535f1a  0fb701               movzx eax, word ptr [ecx]
// 00535f1d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00535f21  8b542464             mov edx, dword ptr [esp + 0x64]
// 00535f25  48                   dec eax
// 00535f26  8801                 mov byte ptr [ecx], al
// 00535f28  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00535f2c  8b542468             mov edx, dword ptr [esp + 0x68]
// 00535f30  2bf1                 sub esi, ecx
// 00535f32  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00535f36  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00535f3a  0fb60410             movzx eax, byte ptr [eax + edx]
// 00535f3e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00535f42  2bf9                 sub edi, ecx
// 00535f44  2be8                 sub ebp, eax
// 00535f46  8bce                 mov ecx, esi
// 00535f48  8d0436               lea eax, [esi + esi]
// 00535f4b  03f0                 add esi, eax
// 00535f4d  03d6                 add edx, esi
// 00535f4f  668913               mov word ptr [ebx], dx
// 00535f52  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00535f56  03f0                 add esi, eax
// 00535f58  03d6                 add edx, esi
// 00535f5a  8954241c             mov dword ptr [esp + 0x1c], edx
// 00535f5e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00535f62  03f0                 add esi, eax
// 00535f64  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00535f68  8bcf                 mov ecx, edi
// 00535f6a  8d043f               lea eax, [edi + edi]
// 00535f6d  03f8                 add edi, eax
// 00535f6f  03d7                 add edx, edi
// 00535f71  66895302             mov word ptr [ebx + 2], dx
// 00535f75  8b542430             mov edx, dword ptr [esp + 0x30]
// 00535f79  03f8                 add edi, eax
// 00535f7b  03d7                 add edx, edi
// 00535f7d  03f8                 add edi, eax
// 00535f7f  8d442d00             lea eax, [ebp + ebp]
// 00535f83  89542420             mov dword ptr [esp + 0x20], edx
// 00535f87  8b542424             mov edx, dword ptr [esp + 0x24]
// 00535f8b  894c2430             mov dword ptr [esp + 0x30], ecx
// 00535f8f  8bcd                 mov ecx, ebp
// 00535f91  03e8                 add ebp, eax
// 00535f93  03d5                 add edx, ebp
// 00535f95  66895304             mov word ptr [ebx + 4], dx
// 00535f99  8b542434             mov edx, dword ptr [esp + 0x34]
// 00535f9d  03e8                 add ebp, eax
// 00535f9f  03d5                 add edx, ebp
// 00535fa1  894c2434             mov dword ptr [esp + 0x34], ecx
// 00535fa5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00535fa9  014c2414             add dword ptr [esp + 0x14], ecx
// 00535fad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00535fb1  03e8                 add ebp, eax
// 00535fb3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00535fba  01442410             add dword ptr [esp + 0x10], eax
// 00535fbe  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00535fc3  89542424             mov dword ptr [esp + 0x24], edx
// 00535fc7  8d1c43               lea ebx, [ebx + eax*2]
// 00535fca  0f8590feffff         jne 0x535e60
// 00535fd0  8b542440             mov edx, dword ptr [esp + 0x40]
// 00535fd4  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00535fd9  8344242804           add dword ptr [esp + 0x28], 4
// 00535fde  8b742448             mov esi, dword ptr [esp + 0x48]
// 00535fe2  668903               mov word ptr [ebx], ax
// 00535fe5  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00535fea  66894302             mov word ptr [ebx + 2], ax
// 00535fee  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00535ff3  33ff                 xor edi, edi
// 00535ff5  836c244c01           sub dword ptr [esp + 0x4c], 1
// 00535ffa  66894304             mov word ptr [ebx + 4], ax
// 00535ffe  0f85bdfdffff         jne 0x535dc1
// 00536004  5d                   pop ebp
// 00536005  5b                   pop ebx
// 00536006  5f                   pop edi
// 00536007  5e                   pop esi
// 00536008  83c460               add esp, 0x60
// 0053600b  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
