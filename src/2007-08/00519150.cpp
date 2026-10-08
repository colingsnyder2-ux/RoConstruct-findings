// from server: 100% by auto
// roc 2007-08 00519150  unit: seg_00510000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00519150
//
// 00519150  8b542404             mov edx, dword ptr [esp + 4]
// 00519154  83ec10               sub esp, 0x10
// 00519157  53                   push ebx
// 00519158  8a5a08               mov bl, byte ptr [edx + 8]
// 0051915b  80fb03               cmp bl, 3
// 0051915e  0f8496010000         je 0x5192fa
// 00519164  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00519168  55                   push ebp
// 00519169  8b2a                 mov ebp, dword ptr [edx]
// 0051916b  56                   push esi
// 0051916c  33f6                 xor esi, esi
// 0051916e  f6c302               test bl, 2
// 00519171  57                   push edi
// 00519172  89742424             mov dword ptr [esp + 0x24], esi
// 00519176  7430                 je 0x5191a8
// 00519178  0fb64209             movzx eax, byte ptr [edx + 9]
// 0051917c  0fb631               movzx esi, byte ptr [ecx]
// 0051917f  8bf8                 mov edi, eax
// 00519181  2bfe                 sub edi, esi
// 00519183  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00519187  897c2410             mov dword ptr [esp + 0x10], edi
// 0051918b  8bf8                 mov edi, eax
// 0051918d  2bfe                 sub edi, esi
// 0051918f  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00519193  2bc6                 sub eax, esi
// 00519195  8b742424             mov esi, dword ptr [esp + 0x24]
// 00519199  897c2414             mov dword ptr [esp + 0x14], edi
// 0051919d  89442418             mov dword ptr [esp + 0x18], eax
// 005191a1  bf03000000           mov edi, 3
// 005191a6  eb13                 jmp 0x5191bb
// 005191a8  0fb64103             movzx eax, byte ptr [ecx + 3]
// 005191ac  0fb67a09             movzx edi, byte ptr [edx + 9]
// 005191b0  2bf8                 sub edi, eax
// 005191b2  897c2410             mov dword ptr [esp + 0x10], edi
// 005191b6  bf01000000           mov edi, 1
// 005191bb  f6c304               test bl, 4
// 005191be  7411                 je 0x5191d1
// 005191c0  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 005191c4  0fb64209             movzx eax, byte ptr [edx + 9]
// 005191c8  2bc1                 sub eax, ecx
// 005191ca  8944bc10             mov dword ptr [esp + edi*4 + 0x10], eax
// 005191ce  83c701               add edi, 1
// 005191d1  33c9                 xor ecx, ecx
// 005191d3  33c0                 xor eax, eax
// 005191d5  3bf9                 cmp edi, ecx
// 005191d7  0f8e1a010000         jle 0x5192f7
// 005191dd  8d4900               lea ecx, [ecx]
// 005191e0  394c8410             cmp dword ptr [esp + eax*4 + 0x10], ecx
// 005191e4  7f06                 jg 0x5191ec
// 005191e6  894c8410             mov dword ptr [esp + eax*4 + 0x10], ecx
// 005191ea  eb05                 jmp 0x5191f1
// 005191ec  be01000000           mov esi, 1
// 005191f1  83c001               add eax, 1
// 005191f4  3bc7                 cmp eax, edi
// 005191f6  7ce8                 jl 0x5191e0
// 005191f8  663bf1               cmp si, cx
// 005191fb  0f84f6000000         je 0x5192f7
// 00519201  0fb64209             movzx eax, byte ptr [edx + 9]
// 00519205  83c0fe               add eax, -2
// 00519208  83f80e               cmp eax, 0xe
// 0051920b  0f87e6000000         ja 0x5192f7
// 00519211  0fb68014935100       movzx eax, byte ptr [eax + 0x519314]
// 00519218  ff248500935100       jmp dword ptr [eax*4 + 0x519300]
// 0051921f  8b5204               mov edx, dword ptr [edx + 4]
// 00519222  3bd1                 cmp edx, ecx
// 00519224  8b442428             mov eax, dword ptr [esp + 0x28]
// 00519228  0f86c9000000         jbe 0x5192f7
// 0051922e  8bff                 mov edi, edi
// 00519230  8a08                 mov cl, byte ptr [eax]
// 00519232  d0e9                 shr cl, 1
// 00519234  80e155               and cl, 0x55
// 00519237  8808                 mov byte ptr [eax], cl
// 00519239  83c001               add eax, 1
// 0051923c  83ea01               sub edx, 1
// 0051923f  75ef                 jne 0x519230
// 00519241  5f                   pop edi
// 00519242  5e                   pop esi
// 00519243  5d                   pop ebp
// 00519244  5b                   pop ebx
// 00519245  83c410               add esp, 0x10
// 00519248  c3                   ret 
// 00519249  8b7a04               mov edi, dword ptr [edx + 4]
// 0051924c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00519250  8b742428             mov esi, dword ptr [esp + 0x28]
// 00519254  8bca                 mov ecx, edx
// 00519256  b8f0000000           mov eax, 0xf0
// 0051925b  d3f8                 sar eax, cl
// 0051925d  bb0f000000           mov ebx, 0xf
// 00519262  d3fb                 sar ebx, cl
// 00519264  24f0                 and al, 0xf0
// 00519266  0ac3                 or al, bl
// 00519268  85ff                 test edi, edi
// 0051926a  0f8687000000         jbe 0x5192f7
// 00519270  8a1e                 mov bl, byte ptr [esi]
// 00519272  8aca                 mov cl, dl
// 00519274  d2eb                 shr bl, cl
// 00519276  83c601               add esi, 1
// 00519279  22d8                 and bl, al
// 0051927b  83ef01               sub edi, 1
// 0051927e  885eff               mov byte ptr [esi - 1], bl
// 00519281  75ed                 jne 0x519270
// 00519283  5f                   pop edi
// 00519284  5e                   pop esi
// 00519285  5d                   pop ebp
// 00519286  5b                   pop ebx
// 00519287  83c410               add esp, 0x10
// 0051928a  c3                   ret 
// 0051928b  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051928f  0fafef               imul ebp, edi
// 00519292  33db                 xor ebx, ebx
// 00519294  85ed                 test ebp, ebp
// 00519296  765f                 jbe 0x5192f7
// 00519298  8bc3                 mov eax, ebx
// 0051929a  33d2                 xor edx, edx
// 0051929c  f7f7                 div edi
// 0051929e  83c301               add ebx, 1
// 005192a1  83c601               add esi, 1
// 005192a4  8a4c9410             mov cl, byte ptr [esp + edx*4 + 0x10]
// 005192a8  d26eff               shr byte ptr [esi - 1], cl
// 005192ab  3bdd                 cmp ebx, ebp
// 005192ad  72e9                 jb 0x519298
// 005192af  5f                   pop edi
// 005192b0  5e                   pop esi
// 005192b1  5d                   pop ebp
// 005192b2  5b                   pop ebx
// 005192b3  83c410               add esp, 0x10
// 005192b6  c3                   ret 
// 005192b7  8b742428             mov esi, dword ptr [esp + 0x28]
// 005192bb  0fafef               imul ebp, edi
// 005192be  33db                 xor ebx, ebx
// 005192c0  85ed                 test ebp, ebp
// 005192c2  7633                 jbe 0x5192f7
// 005192c4  8bc3                 mov eax, ebx
// 005192c6  33d2                 xor edx, edx
// 005192c8  f7f7                 div edi
// 005192ca  660fb606             movzx ax, byte ptr [esi]
// 005192ce  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 005192d2  66c1e008             shl ax, 8
// 005192d6  6603c1               add ax, cx
// 005192d9  83c601               add esi, 1
// 005192dc  83c301               add ebx, 1
// 005192df  83c601               add esi, 1
// 005192e2  0fb74c9410           movzx ecx, word ptr [esp + edx*4 + 0x10]
// 005192e7  66d3e8               shr ax, cl
// 005192ea  3bdd                 cmp ebx, ebp
// 005192ec  0fb7c0               movzx eax, ax
// 005192ef  8866fe               mov byte ptr [esi - 2], ah
// 005192f2  8846ff               mov byte ptr [esi - 1], al
// 005192f5  72cd                 jb 0x5192c4
// 005192f7  5f                   pop edi
// 005192f8  5e                   pop esi
// 005192f9  5d                   pop ebp
// 005192fa  5b                   pop ebx
// 005192fb  83c410               add esp, 0x10
// 005192fe  c3                   ret 
// 005192ff  90                   nop 
// 00519300  1f                   pop ds
// 00519301  92                   xchg edx, eax
// 00519302  51                   push ecx
// 00519303  004992               add byte ptr [ecx - 0x6e], cl
// 00519306  51                   push ecx
// 00519307  008b925100b7         add byte ptr [ebx - 0x48ffae6e], cl
// 0051930d  92                   xchg edx, eax
// 0051930e  51                   push ecx
// 0051930f  00f7                 add bh, dh
// 00519311  92                   xchg edx, eax
// 00519312  51                   push ecx
// 00519313  0000                 add byte ptr [eax], al
// 00519315  0401                 add al, 1
// 00519317  0404                 add al, 4
// 00519319  0402                 add al, 2
// 0051931b  0404                 add al, 4
// 0051931d  0404                 add al, 4
// 0051931f  0404                 add al, 4
// 00519321  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_do_unshift)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
