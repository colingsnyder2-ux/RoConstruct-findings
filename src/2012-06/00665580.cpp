// roc 2012-06 00665580  unit: seg_00660000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665580
//
// 00665580  83ec60               sub esp, 0x60
// 00665583  8b442464             mov eax, dword ptr [esp + 0x64]
// 00665587  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0066558a  56                   push esi
// 0066558b  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00665591  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00665594  894c2448             mov dword ptr [esp + 0x48], ecx
// 00665598  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 0066559e  8b4074               mov eax, dword ptr [eax + 0x74]
// 006655a1  57                   push edi
// 006655a2  8b38                 mov edi, dword ptr [eax]
// 006655a4  897c245c             mov dword ptr [esp + 0x5c], edi
// 006655a8  8b7804               mov edi, dword ptr [eax + 4]
// 006655ab  8b4008               mov eax, dword ptr [eax + 8]
// 006655ae  897c2460             mov dword ptr [esp + 0x60], edi
// 006655b2  89442464             mov dword ptr [esp + 0x64], eax
// 006655b6  8b442478             mov eax, dword ptr [esp + 0x78]
// 006655ba  894c2410             mov dword ptr [esp + 0x10], ecx
// 006655be  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006655c1  33ff                 xor edi, edi
// 006655c3  3bc7                 cmp eax, edi
// 006655c5  89742440             mov dword ptr [esp + 0x40], esi
// 006655c9  89542438             mov dword ptr [esp + 0x38], edx
// 006655cd  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006655d1  0f8e5f020000         jle 0x665836
// 006655d7  53                   push ebx
// 006655d8  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 006655dc  55                   push ebp
// 006655dd  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 006655e1  2beb                 sub ebp, ebx
// 006655e3  895c2428             mov dword ptr [esp + 0x28], ebx
// 006655e7  896c2450             mov dword ptr [esp + 0x50], ebp
// 006655eb  8944244c             mov dword ptr [esp + 0x4c], eax
// 006655ef  eb04                 jmp 0x6655f5
// 006655f1  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 006655f5  807e2400             cmp byte ptr [esi + 0x24], 0
// 006655f9  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006655fd  8b042b               mov eax, dword ptr [ebx + ebp]
// 00665600  8b1b                 mov ebx, dword ptr [ebx]
// 00665602  89442410             mov dword ptr [esp + 0x10], eax
// 00665606  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066560a  7439                 je 0x665645
// 0066560c  03c2                 add eax, edx
// 0066560e  8d4450fd             lea eax, [eax + edx*2 - 3]
// 00665612  89442410             mov dword ptr [esp + 0x10], eax
// 00665616  8d4413ff             lea eax, [ebx + edx - 1]
// 0066561a  89442414             mov dword ptr [esp + 0x14], eax
// 0066561e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00665621  8d545203             lea edx, [edx + edx*2 + 3]
// 00665625  8d1c50               lea ebx, [eax + edx*2]
// 00665628  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066562c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00665634  c7842480000000fdffffff mov dword ptr [esp + 0x80], 0xfffffffd
// 0066563f  c6462400             mov byte ptr [esi + 0x24], 0
// 00665643  eb1a                 jmp 0x66565f
// 00665645  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00665648  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00665650  c784248000000003000000 mov dword ptr [esp + 0x80], 3
// 0066565b  c6462401             mov byte ptr [esi + 0x24], 1
// 0066565f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00665663  33f6                 xor esi, esi
// 00665665  33ed                 xor ebp, ebp
// 00665667  897c2434             mov dword ptr [esp + 0x34], edi
// 0066566b  897c2430             mov dword ptr [esp + 0x30], edi
// 0066566f  897c242c             mov dword ptr [esp + 0x2c], edi
// 00665673  89742424             mov dword ptr [esp + 0x24], esi
// 00665677  89742420             mov dword ptr [esp + 0x20], esi
// 0066567b  8974241c             mov dword ptr [esp + 0x1c], esi
// 0066567f  8954243c             mov dword ptr [esp + 0x3c], edx
// 00665683  85d2                 test edx, edx
// 00665685  0f8679010000         jbe 0x665804
// 0066568b  eb07                 jmp 0x665694
// 0066568d  8d4900               lea ecx, [ecx]
// 00665690  8b442410             mov eax, dword ptr [esp + 0x10]
// 00665694  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0066569b  0fbf1453             movsx edx, word ptr [ebx + edx*2]
// 0066569f  8d543208             lea edx, [edx + esi + 8]
// 006656a3  0fb630               movzx esi, byte ptr [eax]
// 006656a6  c1fa04               sar edx, 4
// 006656a9  8b1491               mov edx, dword ptr [ecx + edx*4]
// 006656ac  03d6                 add edx, esi
// 006656ae  8b742418             mov esi, dword ptr [esp + 0x18]
// 006656b2  0fb63432             movzx esi, byte ptr [edx + esi]
// 006656b6  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 006656bd  0fbf545302           movsx edx, word ptr [ebx + edx*2 + 2]
// 006656c2  8d543a08             lea edx, [edx + edi + 8]
// 006656c6  0fb67801             movzx edi, byte ptr [eax + 1]
// 006656ca  0fb64002             movzx eax, byte ptr [eax + 2]
// 006656ce  c1fa04               sar edx, 4
// 006656d1  8b1491               mov edx, dword ptr [ecx + edx*4]
// 006656d4  03d7                 add edx, edi
// 006656d6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006656da  0fb63c3a             movzx edi, byte ptr [edx + edi]
// 006656de  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 006656e5  0fbf545304           movsx edx, word ptr [ebx + edx*2 + 4]
// 006656ea  8d542a08             lea edx, [edx + ebp + 8]
// 006656ee  c1fa04               sar edx, 4
// 006656f1  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 006656f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 006656f8  03c8                 add ecx, eax
// 006656fa  0fb62c11             movzx ebp, byte ptr [ecx + edx]
// 006656fe  8bcf                 mov ecx, edi
// 00665700  c1f902               sar ecx, 2
// 00665703  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00665707  8bd5                 mov edx, ebp
// 00665709  c1fa03               sar edx, 3
// 0066570c  c1e105               shl ecx, 5
// 0066570f  03ca                 add ecx, edx
// 00665711  89542458             mov dword ptr [esp + 0x58], edx
// 00665715  8b542454             mov edx, dword ptr [esp + 0x54]
// 00665719  8bc6                 mov eax, esi
// 0066571b  c1f803               sar eax, 3
// 0066571e  8b1482               mov edx, dword ptr [edx + eax*4]
// 00665721  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 00665726  8d0c4a               lea ecx, [edx + ecx*2]
// 00665729  894c2460             mov dword ptr [esp + 0x60], ecx
// 0066572d  751b                 jne 0x66574a
// 0066572f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00665733  8b542474             mov edx, dword ptr [esp + 0x74]
// 00665737  51                   push ecx
// 00665738  50                   push eax
// 00665739  8b442464             mov eax, dword ptr [esp + 0x64]
// 0066573d  52                   push edx
// 0066573e  e85dfcffff           call 0x6653a0
// 00665743  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00665747  83c40c               add esp, 0xc
// 0066574a  0fb701               movzx eax, word ptr [ecx]
// 0066574d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00665751  8b542464             mov edx, dword ptr [esp + 0x64]
// 00665755  48                   dec eax
// 00665756  8801                 mov byte ptr [ecx], al
// 00665758  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 0066575c  8b542468             mov edx, dword ptr [esp + 0x68]
// 00665760  2bf1                 sub esi, ecx
// 00665762  0fb60c10             movzx ecx, byte ptr [eax + edx]
// 00665766  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0066576a  0fb60410             movzx eax, byte ptr [eax + edx]
// 0066576e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00665772  2bf9                 sub edi, ecx
// 00665774  2be8                 sub ebp, eax
// 00665776  8bce                 mov ecx, esi
// 00665778  8d0436               lea eax, [esi + esi]
// 0066577b  03f0                 add esi, eax
// 0066577d  03d6                 add edx, esi
// 0066577f  668913               mov word ptr [ebx], dx
// 00665782  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00665786  03f0                 add esi, eax
// 00665788  03d6                 add edx, esi
// 0066578a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0066578e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00665792  03f0                 add esi, eax
// 00665794  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00665798  8bcf                 mov ecx, edi
// 0066579a  8d043f               lea eax, [edi + edi]
// 0066579d  03f8                 add edi, eax
// 0066579f  03d7                 add edx, edi
// 006657a1  66895302             mov word ptr [ebx + 2], dx
// 006657a5  8b542430             mov edx, dword ptr [esp + 0x30]
// 006657a9  03f8                 add edi, eax
// 006657ab  03d7                 add edx, edi
// 006657ad  03f8                 add edi, eax
// 006657af  8d442d00             lea eax, [ebp + ebp]
// 006657b3  89542420             mov dword ptr [esp + 0x20], edx
// 006657b7  8b542424             mov edx, dword ptr [esp + 0x24]
// 006657bb  894c2430             mov dword ptr [esp + 0x30], ecx
// 006657bf  8bcd                 mov ecx, ebp
// 006657c1  03e8                 add ebp, eax
// 006657c3  03d5                 add edx, ebp
// 006657c5  66895304             mov word ptr [ebx + 4], dx
// 006657c9  8b542434             mov edx, dword ptr [esp + 0x34]
// 006657cd  03e8                 add ebp, eax
// 006657cf  03d5                 add edx, ebp
// 006657d1  894c2434             mov dword ptr [esp + 0x34], ecx
// 006657d5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006657d9  014c2414             add dword ptr [esp + 0x14], ecx
// 006657dd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006657e1  03e8                 add ebp, eax
// 006657e3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 006657ea  01442410             add dword ptr [esp + 0x10], eax
// 006657ee  836c243c01           sub dword ptr [esp + 0x3c], 1
// 006657f3  89542424             mov dword ptr [esp + 0x24], edx
// 006657f7  8d1c43               lea ebx, [ebx + eax*2]
// 006657fa  0f8590feffff         jne 0x665690
// 00665800  8b542440             mov edx, dword ptr [esp + 0x40]
// 00665804  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 00665809  8344242804           add dword ptr [esp + 0x28], 4
// 0066580e  8b742448             mov esi, dword ptr [esp + 0x48]
// 00665812  668903               mov word ptr [ebx], ax
// 00665815  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 0066581a  66894302             mov word ptr [ebx + 2], ax
// 0066581e  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00665823  33ff                 xor edi, edi
// 00665825  836c244c01           sub dword ptr [esp + 0x4c], 1
// 0066582a  66894304             mov word ptr [ebx + 4], ax
// 0066582e  0f85bdfdffff         jne 0x6655f1
// 00665834  5d                   pop ebp
// 00665835  5b                   pop ebx
// 00665836  5f                   pop edi
// 00665837  5e                   pop esi
// 00665838  83c460               add esp, 0x60
// 0066583b  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_fs_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
