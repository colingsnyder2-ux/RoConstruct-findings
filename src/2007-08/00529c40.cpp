// from server: 100% by auto
// roc 2007-08 00529c40  unit: seg_00520000  size: 702 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529c40
//
// 00529c40  83ec60               sub esp, 0x60
// 00529c43  8b442464             mov eax, dword ptr [esp + 0x64]
// 00529c47  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00529c4a  56                   push esi
// 00529c4b  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00529c51  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00529c54  894c2448             mov dword ptr [esp + 0x48], ecx
// 00529c58  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 00529c5e  8b4074               mov eax, dword ptr [eax + 0x74]
// 00529c61  57                   push edi
// 00529c62  8b38                 mov edi, dword ptr [eax]
// 00529c64  897c245c             mov dword ptr [esp + 0x5c], edi
// 00529c68  8b7804               mov edi, dword ptr [eax + 4]
// 00529c6b  8b4008               mov eax, dword ptr [eax + 8]
// 00529c6e  897c2460             mov dword ptr [esp + 0x60], edi
// 00529c72  89442464             mov dword ptr [esp + 0x64], eax
// 00529c76  8b442478             mov eax, dword ptr [esp + 0x78]
// 00529c7a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00529c7e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00529c81  33ff                 xor edi, edi
// 00529c83  3bc7                 cmp eax, edi
// 00529c85  89742440             mov dword ptr [esp + 0x40], esi
// 00529c89  89542438             mov dword ptr [esp + 0x38], edx
// 00529c8d  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00529c91  0f8e61020000         jle 0x529ef8
// 00529c97  53                   push ebx
// 00529c98  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00529c9c  55                   push ebp
// 00529c9d  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 00529ca1  2beb                 sub ebp, ebx
// 00529ca3  895c2428             mov dword ptr [esp + 0x28], ebx
// 00529ca7  896c2450             mov dword ptr [esp + 0x50], ebp
// 00529cab  8944244c             mov dword ptr [esp + 0x4c], eax
// 00529caf  eb04                 jmp 0x529cb5
// 00529cb1  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00529cb5  807e2400             cmp byte ptr [esi + 0x24], 0
// 00529cb9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00529cbd  8b042b               mov eax, dword ptr [ebx + ebp]
// 00529cc0  8b1b                 mov ebx, dword ptr [ebx]
// 00529cc2  89442410             mov dword ptr [esp + 0x10], eax
// 00529cc6  895c2414             mov dword ptr [esp + 0x14], ebx
// 00529cca  7439                 je 0x529d05
// 00529ccc  03c2                 add eax, edx
// 00529cce  8d4450fd             lea eax, [eax + edx*2 - 3]
// 00529cd2  89442410             mov dword ptr [esp + 0x10], eax
// 00529cd6  8d4413ff             lea eax, [ebx + edx - 1]
// 00529cda  89442414             mov dword ptr [esp + 0x14], eax
// 00529cde  8b4620               mov eax, dword ptr [esi + 0x20]
// 00529ce1  8d545203             lea edx, [edx + edx*2 + 3]
// 00529ce5  8d1c50               lea ebx, [eax + edx*2]
// 00529ce8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529cec  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00529cf4  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 00529cff  c6462400             mov byte ptr [esi + 0x24], 0
// 00529d03  eb1a                 jmp 0x529d1f
// 00529d05  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00529d08  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00529d10  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 00529d1b  c6462401             mov byte ptr [esi + 0x24], 1
// 00529d1f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00529d23  33f6                 xor esi, esi
// 00529d25  33ed                 xor ebp, ebp
// 00529d27  85d2                 test edx, edx
// 00529d29  897c2434             mov dword ptr [esp + 0x34], edi
// 00529d2d  897c2430             mov dword ptr [esp + 0x30], edi
// 00529d31  897c242c             mov dword ptr [esp + 0x2c], edi
// 00529d35  89742424             mov dword ptr [esp + 0x24], esi
// 00529d39  89742420             mov dword ptr [esp + 0x20], esi
// 00529d3d  8974241c             mov dword ptr [esp + 0x1c], esi
// 00529d41  8954243c             mov dword ptr [esp + 0x3c], edx
// 00529d45  0f867b010000         jbe 0x529ec6
// 00529d4b  eb07                 jmp 0x529d54
// 00529d4d  8d4900               lea ecx, [ecx]
// 00529d50  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529d54  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00529d5b  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 00529d5f  8d543208             lea edx, [edx + esi + 8]
// 00529d63  0fb630               movzx esi, byte ptr [eax]
// 00529d66  c1fa04               sar edx, 4
// 00529d69  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00529d6c  03d6                 add edx, esi
// 00529d6e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00529d72  0fb63432             movzx esi, byte ptr [edx + esi]
// 00529d76  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00529d7d  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 00529d82  8d543a08             lea edx, [edx + edi + 8]
// 00529d86  0fb67801             movzx edi, byte ptr [eax + 1]
// 00529d8a  0fb64002             movzx eax, byte ptr [eax + 2]
// 00529d8e  c1fa04               sar edx, 4
// 00529d91  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00529d94  03d7                 add edx, edi
// 00529d96  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00529d9a  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 00529d9e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00529da5  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 00529daa  8d542a08             lea edx, [edx + ebp + 8]
// 00529dae  c1fa04               sar edx, 4
// 00529db1  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00529db4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00529db8  03c8                 add ecx, eax
// 00529dba  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 00529dbe  8bcf                 mov ecx, edi
// 00529dc0  c1f902               sar ecx, 2
// 00529dc3  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00529dc7  8bd5                 mov edx, ebp
// 00529dc9  c1fa03               sar edx, 3
// 00529dcc  c1e105               shl ecx, 5
// 00529dcf  03ca                 add ecx, edx
// 00529dd1  89542458             mov dword ptr [esp + 0x58], edx
// 00529dd5  8b542454             mov edx, dword ptr [esp + 0x54]
// 00529dd9  8bc6                 mov eax, esi
// 00529ddb  c1f803               sar eax, 3
// 00529dde  8b1482               mov edx, dword ptr [edx + eax*4]
// 00529de1  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00529de6  8d0c4a               lea ecx, [edx + ecx*2]
// 00529de9  894c2460             mov dword ptr [esp + 0x60], ecx
// 00529ded  751b                 jne 0x529e0a
// 00529def  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00529df3  8b542474             mov edx, dword ptr [esp + 0x74]
// 00529df7  51                   push ecx
// 00529df8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00529dfc  50                   push eax
// 00529dfd  52                   push edx
// 00529dfe  e82dfcffff           call 0x529a30
// 00529e03  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00529e07  83c40c               add esp, 0xc
// 00529e0a  0fb701               movzx eax, word ptr [ecx]
// 00529e0d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00529e11  8b542464             mov edx, dword ptr [esp + 0x64]
// 00529e15  83e801               sub eax, 1
// 00529e18  8801                 mov byte ptr [ecx], al
// 00529e1a  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00529e1e  8b542468             mov edx, dword ptr [esp + 0x68]
// 00529e22  2bf1                 sub esi, ecx
// 00529e24  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00529e28  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00529e2c  0fb60410             movzx eax, byte ptr [eax + edx]
// 00529e30  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00529e34  2bf9                 sub edi, ecx
// 00529e36  2be8                 sub ebp, eax
// 00529e38  8bce                 mov ecx, esi
// 00529e3a  8d0436               lea eax, [esi + esi]
// 00529e3d  03f0                 add esi, eax
// 00529e3f  03d6                 add edx, esi
// 00529e41  668913               mov word ptr [ebx], dx
// 00529e44  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00529e48  03f0                 add esi, eax
// 00529e4a  03d6                 add edx, esi
// 00529e4c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00529e50  8b542420             mov edx, dword ptr [esp + 0x20]
// 00529e54  03f0                 add esi, eax
// 00529e56  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00529e5a  8bcf                 mov ecx, edi
// 00529e5c  8d043f               lea eax, [edi + edi]
// 00529e5f  03f8                 add edi, eax
// 00529e61  03d7                 add edx, edi
// 00529e63  66895302             mov word ptr [ebx + 2], dx
// 00529e67  8b542430             mov edx, dword ptr [esp + 0x30]
// 00529e6b  03f8                 add edi, eax
// 00529e6d  03d7                 add edx, edi
// 00529e6f  03f8                 add edi, eax
// 00529e71  8d442d00             lea eax, [ebp + ebp]
// 00529e75  89542420             mov dword ptr [esp + 0x20], edx
// 00529e79  8b542424             mov edx, dword ptr [esp + 0x24]
// 00529e7d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00529e81  8bcd                 mov ecx, ebp
// 00529e83  03e8                 add ebp, eax
// 00529e85  03d5                 add edx, ebp
// 00529e87  66895304             mov word ptr [ebx + 4], dx
// 00529e8b  8b542434             mov edx, dword ptr [esp + 0x34]
// 00529e8f  03e8                 add ebp, eax
// 00529e91  03d5                 add edx, ebp
// 00529e93  894c2434             mov dword ptr [esp + 0x34], ecx
// 00529e97  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00529e9b  014c2414             add dword ptr [esp + 0x14], ecx
// 00529e9f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00529ea3  03e8                 add ebp, eax
// 00529ea5  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00529eac  01442410             add dword ptr [esp + 0x10], eax
// 00529eb0  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00529eb5  89542424             mov dword ptr [esp + 0x24], edx
// 00529eb9  8d1c43               lea ebx, [ebx + eax*2]
// 00529ebc  0f858efeffff         jne 0x529d50
// 00529ec2  8b542440             mov edx, dword ptr [esp + 0x40]
// 00529ec6  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00529ecb  8344242804           add dword ptr [esp + 0x28], 4
// 00529ed0  8b742448             mov esi, dword ptr [esp + 0x48]
// 00529ed4  668903               mov word ptr [ebx], ax
// 00529ed7  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00529edc  66894302             mov word ptr [ebx + 2], ax
// 00529ee0  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00529ee5  33ff                 xor edi, edi
// 00529ee7  836c244c01           sub dword ptr [esp + 0x4c], 1
// 00529eec  66894304             mov word ptr [ebx + 4], ax
// 00529ef0  0f85bbfdffff         jne 0x529cb1
// 00529ef6  5d                   pop ebp
// 00529ef7  5b                   pop ebx
// 00529ef8  5f                   pop edi
// 00529ef9  5e                   pop esi
// 00529efa  83c460               add esp, 0x60
// 00529efd  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jquant2.c
