// roc 2011-06 00574370  unit: seg_00570000  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574370
//
// 00574370  8b442404             mov eax, dword ptr [esp + 4]
// 00574374  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057437a  ba02000000           mov edx, 2
// 0057437f  d3e2                 shl edx, cl
// 00574381  53                   push ebx
// 00574382  56                   push esi
// 00574383  57                   push edi
// 00574384  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057438b  83f90d               cmp ecx, 0xd
// 0057438e  be01000000           mov esi, 1
// 00574393  7e4a                 jle 0x5743df
// 00574395  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057439c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057439f  8b4808               mov ecx, dword ptr [eax + 8]
// 005743a2  881c11               mov byte ptr [ecx + edx], bl
// 005743a5  017014               add dword ptr [eax + 0x14], esi
// 005743a8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 005743af  8b4814               mov ecx, dword ptr [eax + 0x14]
// 005743b2  8b5008               mov edx, dword ptr [eax + 8]
// 005743b5  881c11               mov byte ptr [ecx + edx], bl
// 005743b8  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 005743be  017014               add dword ptr [eax + 0x14], esi
// 005743c1  b110                 mov cl, 0x10
// 005743c3  2aca                 sub cl, dl
// 005743c5  bf02000000           mov edi, 2
// 005743ca  66d3ef               shr di, cl
// 005743cd  83c2f3               add edx, -0xd
// 005743d0  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 005743d6  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 005743dd  eb09                 jmp 0x5743e8
// 005743df  83c103               add ecx, 3
// 005743e2  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 005743e8  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 005743ee  33d2                 xor edx, edx
// 005743f0  d3e2                 shl edx, cl
// 005743f2  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005743f9  83f909               cmp ecx, 9
// 005743fc  7e47                 jle 0x574445
// 005743fe  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00574405  8b5014               mov edx, dword ptr [eax + 0x14]
// 00574408  8b4808               mov ecx, dword ptr [eax + 8]
// 0057440b  881c11               mov byte ptr [ecx + edx], bl
// 0057440e  017014               add dword ptr [eax + 0x14], esi
// 00574411  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00574418  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057441b  8b5008               mov edx, dword ptr [eax + 8]
// 0057441e  881c11               mov byte ptr [ecx + edx], bl
// 00574421  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00574427  017014               add dword ptr [eax + 0x14], esi
// 0057442a  b110                 mov cl, 0x10
// 0057442c  2aca                 sub cl, dl
// 0057442e  33ff                 xor edi, edi
// 00574430  66d3ef               shr di, cl
// 00574433  83c2f7               add edx, -9
// 00574436  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057443c  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00574443  eb09                 jmp 0x57444e
// 00574445  83c107               add ecx, 7
// 00574448  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057444e  e84df9ffff           call 0x573da0
// 00574453  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00574459  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 0057445f  2bd1                 sub edx, ecx
// 00574461  83c20b               add edx, 0xb
// 00574464  83fa09               cmp edx, 9
// 00574467  0f8de2000000         jge 0x57454f
// 0057446d  ba02000000           mov edx, 2
// 00574472  d3e2                 shl edx, cl
// 00574474  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057447b  83f90d               cmp ecx, 0xd
// 0057447e  7e4a                 jle 0x5744ca
// 00574480  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00574487  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057448a  8b4808               mov ecx, dword ptr [eax + 8]
// 0057448d  881c11               mov byte ptr [ecx + edx], bl
// 00574490  017014               add dword ptr [eax + 0x14], esi
// 00574493  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057449a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057449d  8b5008               mov edx, dword ptr [eax + 8]
// 005744a0  881c11               mov byte ptr [ecx + edx], bl
// 005744a3  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 005744a9  017014               add dword ptr [eax + 0x14], esi
// 005744ac  b110                 mov cl, 0x10
// 005744ae  2aca                 sub cl, dl
// 005744b0  bf02000000           mov edi, 2
// 005744b5  66d3ef               shr di, cl
// 005744b8  83c2f3               add edx, -0xd
// 005744bb  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 005744c1  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 005744c8  eb09                 jmp 0x5744d3
// 005744ca  83c103               add ecx, 3
// 005744cd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 005744d3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 005744d9  33d2                 xor edx, edx
// 005744db  d3e2                 shl edx, cl
// 005744dd  660990b8160000       or word ptr [eax + 0x16b8], dx
// 005744e4  83f909               cmp ecx, 9
// 005744e7  7e58                 jle 0x574541
// 005744e9  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 005744f0  8b5014               mov edx, dword ptr [eax + 0x14]
// 005744f3  8b4808               mov ecx, dword ptr [eax + 8]
// 005744f6  881c11               mov byte ptr [ecx + edx], bl
// 005744f9  017014               add dword ptr [eax + 0x14], esi
// 005744fc  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00574503  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00574506  8b5008               mov edx, dword ptr [eax + 8]
// 00574509  881c11               mov byte ptr [ecx + edx], bl
// 0057450c  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00574512  017014               add dword ptr [eax + 0x14], esi
// 00574515  b110                 mov cl, 0x10
// 00574517  2aca                 sub cl, dl
// 00574519  33f6                 xor esi, esi
// 0057451b  66d3ee               shr si, cl
// 0057451e  83c2f7               add edx, -9
// 00574521  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00574527  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057452e  e86df8ffff           call 0x573da0
// 00574533  5f                   pop edi
// 00574534  5e                   pop esi
// 00574535  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0057453f  5b                   pop ebx
// 00574540  c3                   ret 
// 00574541  83c107               add ecx, 7
// 00574544  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057454a  e851f8ffff           call 0x573da0
// 0057454f  5f                   pop edi
// 00574550  5e                   pop esi
// 00574551  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0057455b  5b                   pop ebx
// 0057455c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
