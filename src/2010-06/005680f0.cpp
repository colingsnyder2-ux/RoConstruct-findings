// from server: 100% by auto
// roc 2010-06 005680f0  unit: seg_00560000  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005680f0
//
// 005680f0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005680f4  53                   push ebx
// 005680f5  55                   push ebp
// 005680f6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005680fa  8a4508               mov al, byte ptr [ebp + 8]
// 005680fd  8bda                 mov ebx, edx
// 005680ff  56                   push esi
// 00568100  8b7500               mov esi, dword ptr [ebp]
// 00568103  c1eb08               shr ebx, 8
// 00568106  57                   push edi
// 00568107  885c2414             mov byte ptr [esp + 0x14], bl
// 0056810b  84c0                 test al, al
// 0056810d  0f8511010000         jne 0x568224
// 00568113  8a4509               mov al, byte ptr [ebp + 9]
// 00568116  3c08                 cmp al, 8
// 00568118  7568                 jne 0x568182
// 0056811a  f644242080           test byte ptr [esp + 0x20], 0x80
// 0056811f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568123  8d3c06               lea edi, [esi + eax]
// 00568126  8d0437               lea eax, [edi + esi]
// 00568129  742d                 je 0x568158
// 0056812b  83fe01               cmp esi, 1
// 0056812e  7612                 jbe 0x568142
// 00568130  8d4eff               lea ecx, [esi - 1]
// 00568133  48                   dec eax
// 00568134  8810                 mov byte ptr [eax], dl
// 00568136  8a5fff               mov bl, byte ptr [edi - 1]
// 00568139  4f                   dec edi
// 0056813a  48                   dec eax
// 0056813b  83e901               sub ecx, 1
// 0056813e  8818                 mov byte ptr [eax], bl
// 00568140  75f1                 jne 0x568133
// 00568142  5f                   pop edi
// 00568143  8850ff               mov byte ptr [eax - 1], dl
// 00568146  8d0c36               lea ecx, [esi + esi]
// 00568149  5e                   pop esi
// 0056814a  c6450a02             mov byte ptr [ebp + 0xa], 2
// 0056814e  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 00568152  894d04               mov dword ptr [ebp + 4], ecx
// 00568155  5d                   pop ebp
// 00568156  5b                   pop ebx
// 00568157  c3                   ret 
// 00568158  85f6                 test esi, esi
// 0056815a  7613                 jbe 0x56816f
// 0056815c  8bce                 mov ecx, esi
// 0056815e  8bff                 mov edi, edi
// 00568160  8a5fff               mov bl, byte ptr [edi - 1]
// 00568163  4f                   dec edi
// 00568164  48                   dec eax
// 00568165  8818                 mov byte ptr [eax], bl
// 00568167  48                   dec eax
// 00568168  83e901               sub ecx, 1
// 0056816b  8810                 mov byte ptr [eax], dl
// 0056816d  75f1                 jne 0x568160
// 0056816f  5f                   pop edi
// 00568170  8d0c36               lea ecx, [esi + esi]
// 00568173  5e                   pop esi
// 00568174  c6450a02             mov byte ptr [ebp + 0xa], 2
// 00568178  c6450b10             mov byte ptr [ebp + 0xb], 0x10
// 0056817c  894d04               mov dword ptr [ebp + 4], ecx
// 0056817f  5d                   pop ebp
// 00568180  5b                   pop ebx
// 00568181  c3                   ret 
// 00568182  3c10                 cmp al, 0x10
// 00568184  0f8500020000         jne 0x56838a
// 0056818a  f644242080           test byte ptr [esp + 0x20], 0x80
// 0056818f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00568193  8d3c70               lea edi, [eax + esi*2]
// 00568196  8d0477               lea eax, [edi + esi*2]
// 00568199  7448                 je 0x5681e3
// 0056819b  83fe01               cmp esi, 1
// 0056819e  7625                 jbe 0x5681c5
// 005681a0  8d4eff               lea ecx, [esi - 1]
// 005681a3  894c2414             mov dword ptr [esp + 0x14], ecx
// 005681a7  8858ff               mov byte ptr [eax - 1], bl
// 005681aa  48                   dec eax
// 005681ab  48                   dec eax
// 005681ac  8810                 mov byte ptr [eax], dl
// 005681ae  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005681b2  4f                   dec edi
// 005681b3  48                   dec eax
// 005681b4  8808                 mov byte ptr [eax], cl
// 005681b6  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005681ba  4f                   dec edi
// 005681bb  48                   dec eax
// 005681bc  836c241401           sub dword ptr [esp + 0x14], 1
// 005681c1  8808                 mov byte ptr [eax], cl
// 005681c3  75e2                 jne 0x5681a7
// 005681c5  8858ff               mov byte ptr [eax - 1], bl
// 005681c8  48                   dec eax
// 005681c9  8850ff               mov byte ptr [eax - 1], dl
// 005681cc  5f                   pop edi
// 005681cd  8d14b500000000       lea edx, [esi*4]
// 005681d4  5e                   pop esi
// 005681d5  c6450a02             mov byte ptr [ebp + 0xa], 2
// 005681d9  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 005681dd  895504               mov dword ptr [ebp + 4], edx
// 005681e0  5d                   pop ebp
// 005681e1  5b                   pop ebx
// 005681e2  c3                   ret 
// 005681e3  85f6                 test esi, esi
// 005681e5  7626                 jbe 0x56820d
// 005681e7  89742414             mov dword ptr [esp + 0x14], esi
// 005681eb  eb03                 jmp 0x5681f0
// 005681ed  8d4900               lea ecx, [ecx]
// 005681f0  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005681f4  4f                   dec edi
// 005681f5  48                   dec eax
// 005681f6  8808                 mov byte ptr [eax], cl
// 005681f8  0fb64fff             movzx ecx, byte ptr [edi - 1]
// 005681fc  4f                   dec edi
// 005681fd  48                   dec eax
// 005681fe  8808                 mov byte ptr [eax], cl
// 00568200  48                   dec eax
// 00568201  8818                 mov byte ptr [eax], bl
// 00568203  48                   dec eax
// 00568204  836c241401           sub dword ptr [esp + 0x14], 1
// 00568209  8810                 mov byte ptr [eax], dl
// 0056820b  75e3                 jne 0x5681f0
// 0056820d  5f                   pop edi
// 0056820e  8d14b500000000       lea edx, [esi*4]
// 00568215  5e                   pop esi
// 00568216  c6450a02             mov byte ptr [ebp + 0xa], 2
// 0056821a  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 0056821e  895504               mov dword ptr [ebp + 4], edx
// 00568221  5d                   pop ebp
// 00568222  5b                   pop ebx
// 00568223  c3                   ret 
// 00568224  3c02                 cmp al, 2
// 00568226  0f855e010000         jne 0x56838a
// 0056822c  8a4509               mov al, byte ptr [ebp + 9]
// 0056822f  3c08                 cmp al, 8
// 00568231  0f8581000000         jne 0x5682b8
// 00568237  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056823b  8d3c70               lea edi, [eax + esi*2]
// 0056823e  03fe                 add edi, esi
// 00568240  f644242080           test byte ptr [esp + 0x20], 0x80
// 00568245  8d0437               lea eax, [edi + esi]
// 00568248  742e                 je 0x568278
// 0056824a  83fe01               cmp esi, 1
// 0056824d  7624                 jbe 0x568273
// 0056824f  8d4eff               lea ecx, [esi - 1]
// 00568252  8850ff               mov byte ptr [eax - 1], dl
// 00568255  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00568259  48                   dec eax
// 0056825a  4f                   dec edi
// 0056825b  48                   dec eax
// 0056825c  8818                 mov byte ptr [eax], bl
// 0056825e  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00568262  4f                   dec edi
// 00568263  48                   dec eax
// 00568264  8818                 mov byte ptr [eax], bl
// 00568266  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0056826a  4f                   dec edi
// 0056826b  48                   dec eax
// 0056826c  83e901               sub ecx, 1
// 0056826f  8818                 mov byte ptr [eax], bl
// 00568271  75df                 jne 0x568252
// 00568273  8850ff               mov byte ptr [eax - 1], dl
// 00568276  eb29                 jmp 0x5682a1
// 00568278  85f6                 test esi, esi
// 0056827a  7625                 jbe 0x5682a1
// 0056827c  8bce                 mov ecx, esi
// 0056827e  8bff                 mov edi, edi
// 00568280  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00568284  4f                   dec edi
// 00568285  8858ff               mov byte ptr [eax - 1], bl
// 00568288  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 0056828c  48                   dec eax
// 0056828d  4f                   dec edi
// 0056828e  48                   dec eax
// 0056828f  8818                 mov byte ptr [eax], bl
// 00568291  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00568295  4f                   dec edi
// 00568296  48                   dec eax
// 00568297  8818                 mov byte ptr [eax], bl
// 00568299  48                   dec eax
// 0056829a  83e901               sub ecx, 1
// 0056829d  8810                 mov byte ptr [eax], dl
// 0056829f  75df                 jne 0x568280
// 005682a1  5f                   pop edi
// 005682a2  8d0cb500000000       lea ecx, [esi*4]
// 005682a9  5e                   pop esi
// 005682aa  c6450a04             mov byte ptr [ebp + 0xa], 4
// 005682ae  c6450b20             mov byte ptr [ebp + 0xb], 0x20
// 005682b2  894d04               mov dword ptr [ebp + 4], ecx
// 005682b5  5d                   pop ebp
// 005682b6  5b                   pop ebx
// 005682b7  c3                   ret 
// 005682b8  3c10                 cmp al, 0x10
// 005682ba  0f85ca000000         jne 0x56838a
// 005682c0  f644242080           test byte ptr [esp + 0x20], 0x80
// 005682c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005682c9  8d0476               lea eax, [esi + esi*2]
// 005682cc  8d0c41               lea ecx, [ecx + eax*2]
// 005682cf  8d0471               lea eax, [ecx + esi*2]
// 005682d2  7459                 je 0x56832d
// 005682d4  83fe01               cmp esi, 1
// 005682d7  764c                 jbe 0x568325
// 005682d9  8d7eff               lea edi, [esi - 1]
// 005682dc  8d642400             lea esp, [esp]
// 005682e0  8858ff               mov byte ptr [eax - 1], bl
// 005682e3  48                   dec eax
// 005682e4  8850ff               mov byte ptr [eax - 1], dl
// 005682e7  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005682eb  48                   dec eax
// 005682ec  8858ff               mov byte ptr [eax - 1], bl
// 005682ef  49                   dec ecx
// 005682f0  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005682f4  48                   dec eax
// 005682f5  8858ff               mov byte ptr [eax - 1], bl
// 005682f8  49                   dec ecx
// 005682f9  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 005682fd  48                   dec eax
// 005682fe  49                   dec ecx
// 005682ff  8858ff               mov byte ptr [eax - 1], bl
// 00568302  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568306  48                   dec eax
// 00568307  49                   dec ecx
// 00568308  8858ff               mov byte ptr [eax - 1], bl
// 0056830b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0056830f  48                   dec eax
// 00568310  49                   dec ecx
// 00568311  48                   dec eax
// 00568312  8818                 mov byte ptr [eax], bl
// 00568314  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568318  49                   dec ecx
// 00568319  48                   dec eax
// 0056831a  83ef01               sub edi, 1
// 0056831d  8818                 mov byte ptr [eax], bl
// 0056831f  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 00568323  75bb                 jne 0x5682e0
// 00568325  48                   dec eax
// 00568326  8818                 mov byte ptr [eax], bl
// 00568328  8850ff               mov byte ptr [eax - 1], dl
// 0056832b  eb4b                 jmp 0x568378
// 0056832d  85f6                 test esi, esi
// 0056832f  7647                 jbe 0x568378
// 00568331  8bfe                 mov edi, esi
// 00568333  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568337  8858ff               mov byte ptr [eax - 1], bl
// 0056833a  49                   dec ecx
// 0056833b  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0056833f  48                   dec eax
// 00568340  8858ff               mov byte ptr [eax - 1], bl
// 00568343  49                   dec ecx
// 00568344  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568348  48                   dec eax
// 00568349  8858ff               mov byte ptr [eax - 1], bl
// 0056834c  49                   dec ecx
// 0056834d  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568351  48                   dec eax
// 00568352  8858ff               mov byte ptr [eax - 1], bl
// 00568355  49                   dec ecx
// 00568356  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0056835a  48                   dec eax
// 0056835b  49                   dec ecx
// 0056835c  8858ff               mov byte ptr [eax - 1], bl
// 0056835f  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 00568363  48                   dec eax
// 00568364  49                   dec ecx
// 00568365  48                   dec eax
// 00568366  8818                 mov byte ptr [eax], bl
// 00568368  0fb65c2414           movzx ebx, byte ptr [esp + 0x14]
// 0056836d  48                   dec eax
// 0056836e  8818                 mov byte ptr [eax], bl
// 00568370  48                   dec eax
// 00568371  83ef01               sub edi, 1
// 00568374  8810                 mov byte ptr [eax], dl
// 00568376  75bb                 jne 0x568333
// 00568378  8d14f500000000       lea edx, [esi*8]
// 0056837f  c6450b40             mov byte ptr [ebp + 0xb], 0x40
// 00568383  c6450a04             mov byte ptr [ebp + 0xa], 4
// 00568387  895504               mov dword ptr [ebp + 4], edx
// 0056838a  5f                   pop edi
// 0056838b  5e                   pop esi
// 0056838c  5d                   pop ebp
// 0056838d  5b                   pop ebx
// 0056838e  c3                   ret 
// library libpng-1.2.7/pngrtran.c (function _png_do_read_filler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngrtran.c
