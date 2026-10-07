// roc 2007-08 0051b7d0  unit: seg_00510000  size: 1019 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051b7d0
//
// 0051b7d0  8b542404             mov edx, dword ptr [esp + 4]
// 0051b7d4  8a4208               mov al, byte ptr [edx + 8]
// 0051b7d7  83ec08               sub esp, 8
// 0051b7da  84c0                 test al, al
// 0051b7dc  53                   push ebx
// 0051b7dd  55                   push ebp
// 0051b7de  56                   push esi
// 0051b7df  8b32                 mov esi, dword ptr [edx]
// 0051b7e1  57                   push edi
// 0051b7e2  0f8556020000         jne 0x51ba3e
// 0051b7e8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051b7ec  85c9                 test ecx, ecx
// 0051b7ee  7406                 je 0x51b7f6
// 0051b7f0  0fb77908             movzx edi, word ptr [ecx + 8]
// 0051b7f4  eb0c                 jmp 0x51b802
// 0051b7f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0051b7fe  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051b802  8a4209               mov al, byte ptr [edx + 9]
// 0051b805  3c08                 cmp al, 8
// 0051b807  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0051b80b  0f8367010000         jae 0x51b978
// 0051b811  0fb6c0               movzx eax, al
// 0051b814  83e801               sub eax, 1
// 0051b817  0f84e7000000         je 0x51b904
// 0051b81d  83e801               sub eax, 1
// 0051b820  7475                 je 0x51b897
// 0051b822  83e802               sub eax, 2
// 0051b825  0f853e010000         jne 0x51b969
// 0051b82b  8bc7                 mov eax, edi
// 0051b82d  8d56ff               lea edx, [esi - 1]
// 0051b830  83e201               and edx, 1
// 0051b833  c1e004               shl eax, 4
// 0051b836  03c7                 add eax, edi
// 0051b838  03d2                 add edx, edx
// 0051b83a  03d2                 add edx, edx
// 0051b83c  0fb7c8               movzx ecx, ax
// 0051b83f  8d7eff               lea edi, [esi - 1]
// 0051b842  8bc2                 mov eax, edx
// 0051b844  d1ef                 shr edi, 1
// 0051b846  ba04000000           mov edx, 4
// 0051b84b  03fb                 add edi, ebx
// 0051b84d  2bd0                 sub edx, eax
// 0051b84f  85f6                 test esi, esi
// 0051b851  894c2410             mov dword ptr [esp + 0x10], ecx
// 0051b855  8d6c1eff             lea ebp, [esi + ebx - 1]
// 0051b859  0f8602010000         jbe 0x51b961
// 0051b85f  89742414             mov dword ptr [esp + 0x14], esi
// 0051b863  0fb607               movzx eax, byte ptr [edi]
// 0051b866  8aca                 mov cl, dl
// 0051b868  d3e8                 shr eax, cl
// 0051b86a  83e00f               and eax, 0xf
// 0051b86d  8ac8                 mov cl, al
// 0051b86f  c0e104               shl cl, 4
// 0051b872  0ac8                 or cl, al
// 0051b874  83fa04               cmp edx, 4
// 0051b877  884d00               mov byte ptr [ebp], cl
// 0051b87a  7507                 jne 0x51b883
// 0051b87c  33d2                 xor edx, edx
// 0051b87e  83ef01               sub edi, 1
// 0051b881  eb05                 jmp 0x51b888
// 0051b883  ba04000000           mov edx, 4
// 0051b888  83ed01               sub ebp, 1
// 0051b88b  836c241401           sub dword ptr [esp + 0x14], 1
// 0051b890  75d1                 jne 0x51b863
// 0051b892  e9ca000000           jmp 0x51b961
// 0051b897  6bff55               imul edi, edi, 0x55
// 0051b89a  0fb7d7               movzx edx, di
// 0051b89d  89542410             mov dword ptr [esp + 0x10], edx
// 0051b8a1  8d46ff               lea eax, [esi - 1]
// 0051b8a4  83e003               and eax, 3
// 0051b8a7  8d7eff               lea edi, [esi - 1]
// 0051b8aa  ba03000000           mov edx, 3
// 0051b8af  c1ef02               shr edi, 2
// 0051b8b2  2bd0                 sub edx, eax
// 0051b8b4  03fb                 add edi, ebx
// 0051b8b6  03d2                 add edx, edx
// 0051b8b8  85f6                 test esi, esi
// 0051b8ba  8d6c1eff             lea ebp, [esi + ebx - 1]
// 0051b8be  0f869d000000         jbe 0x51b961
// 0051b8c4  89742414             mov dword ptr [esp + 0x14], esi
// 0051b8c8  0fb607               movzx eax, byte ptr [edi]
// 0051b8cb  8aca                 mov cl, dl
// 0051b8cd  d3e8                 shr eax, cl
// 0051b8cf  83e003               and eax, 3
// 0051b8d2  8ac8                 mov cl, al
// 0051b8d4  02c9                 add cl, cl
// 0051b8d6  02c9                 add cl, cl
// 0051b8d8  0ac8                 or cl, al
// 0051b8da  02c9                 add cl, cl
// 0051b8dc  02c9                 add cl, cl
// 0051b8de  0ac8                 or cl, al
// 0051b8e0  02c9                 add cl, cl
// 0051b8e2  02c9                 add cl, cl
// 0051b8e4  0ac8                 or cl, al
// 0051b8e6  83fa06               cmp edx, 6
// 0051b8e9  884d00               mov byte ptr [ebp], cl
// 0051b8ec  7507                 jne 0x51b8f5
// 0051b8ee  33d2                 xor edx, edx
// 0051b8f0  83ef01               sub edi, 1
// 0051b8f3  eb03                 jmp 0x51b8f8
// 0051b8f5  83c202               add edx, 2
// 0051b8f8  83ed01               sub ebp, 1
// 0051b8fb  836c241401           sub dword ptr [esp + 0x14], 1
// 0051b900  75c6                 jne 0x51b8c8
// 0051b902  eb5d                 jmp 0x51b961
// 0051b904  69ffff000000         imul edi, edi, 0xff
// 0051b90a  0fb7c7               movzx eax, di
// 0051b90d  89442410             mov dword ptr [esp + 0x10], eax
// 0051b911  8d7eff               lea edi, [esi - 1]
// 0051b914  8d4eff               lea ecx, [esi - 1]
// 0051b917  c1ef03               shr edi, 3
// 0051b91a  83e107               and ecx, 7
// 0051b91d  b807000000           mov eax, 7
// 0051b922  03fb                 add edi, ebx
// 0051b924  2bc1                 sub eax, ecx
// 0051b926  85f6                 test esi, esi
// 0051b928  8d6c1eff             lea ebp, [esi + ebx - 1]
// 0051b92c  7637                 jbe 0x51b965
// 0051b92e  89742414             mov dword ptr [esp + 0x14], esi
// 0051b932  8a17                 mov dl, byte ptr [edi]
// 0051b934  8ac8                 mov cl, al
// 0051b936  d2ea                 shr dl, cl
// 0051b938  80e201               and dl, 1
// 0051b93b  f6da                 neg dl
// 0051b93d  1ad2                 sbb dl, dl
// 0051b93f  81e2ff000000         and edx, 0xff
// 0051b945  83f807               cmp eax, 7
// 0051b948  885500               mov byte ptr [ebp], dl
// 0051b94b  7507                 jne 0x51b954
// 0051b94d  33c0                 xor eax, eax
// 0051b94f  83ef01               sub edi, 1
// 0051b952  eb03                 jmp 0x51b957
// 0051b954  83c001               add eax, 1
// 0051b957  83ed01               sub ebp, 1
// 0051b95a  836c241401           sub dword ptr [esp + 0x14], 1
// 0051b95f  75d1                 jne 0x51b932
// 0051b961  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051b965  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051b969  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051b96d  c6420908             mov byte ptr [edx + 9], 8
// 0051b971  c6420b08             mov byte ptr [edx + 0xb], 8
// 0051b975  897204               mov dword ptr [edx + 4], esi
// 0051b978  85c9                 test ecx, ecx
// 0051b97a  0f8443020000         je 0x51bbc3
// 0051b980  8a4209               mov al, byte ptr [edx + 9]
// 0051b983  3c08                 cmp al, 8
// 0051b985  754c                 jne 0x51b9d3
// 0051b987  85f6                 test esi, esi
// 0051b989  8d4c1eff             lea ecx, [esi + ebx - 1]
// 0051b98d  8d4473ff             lea eax, [ebx + esi*2 - 1]
// 0051b991  0f8697000000         jbe 0x51ba2e
// 0051b997  8bee                 mov ebp, esi
// 0051b999  8da42400000000       lea esp, [esp]
// 0051b9a0  660fb619             movzx bx, byte ptr [ecx]
// 0051b9a4  663bdf               cmp bx, di
// 0051b9a7  7505                 jne 0x51b9ae
// 0051b9a9  c60000               mov byte ptr [eax], 0
// 0051b9ac  eb03                 jmp 0x51b9b1
// 0051b9ae  c600ff               mov byte ptr [eax], 0xff
// 0051b9b1  8a19                 mov bl, byte ptr [ecx]
// 0051b9b3  83e801               sub eax, 1
// 0051b9b6  8818                 mov byte ptr [eax], bl
// 0051b9b8  83e801               sub eax, 1
// 0051b9bb  83e901               sub ecx, 1
// 0051b9be  83ed01               sub ebp, 1
// 0051b9c1  75dd                 jne 0x51b9a0
// 0051b9c3  8a4209               mov al, byte ptr [edx + 9]
// 0051b9c6  c6420804             mov byte ptr [edx + 8], 4
// 0051b9ca  c6420a02             mov byte ptr [edx + 0xa], 2
// 0051b9ce  e9c7010000           jmp 0x51bb9a
// 0051b9d3  3c10                 cmp al, 0x10
// 0051b9d5  7557                 jne 0x51ba2e
// 0051b9d7  85f6                 test esi, esi
// 0051b9d9  8b4204               mov eax, dword ptr [edx + 4]
// 0051b9dc  8d4c18ff             lea ecx, [eax + ebx - 1]
// 0051b9e0  8d4443ff             lea eax, [ebx + eax*2 - 1]
// 0051b9e4  7648                 jbe 0x51ba2e
// 0051b9e6  0fb7ef               movzx ebp, di
// 0051b9e9  8bfe                 mov edi, esi
// 0051b9eb  eb03                 jmp 0x51b9f0
// 0051b9ed  8d4900               lea ecx, [ecx]
// 0051b9f0  33db                 xor ebx, ebx
// 0051b9f2  8a79ff               mov bh, byte ptr [ecx - 1]
// 0051b9f5  8a19                 mov bl, byte ptr [ecx]
// 0051b9f7  3bdd                 cmp ebx, ebp
// 0051b9f9  750b                 jne 0x51ba06
// 0051b9fb  c60000               mov byte ptr [eax], 0
// 0051b9fe  83e801               sub eax, 1
// 0051ba01  c60000               mov byte ptr [eax], 0
// 0051ba04  eb09                 jmp 0x51ba0f
// 0051ba06  c600ff               mov byte ptr [eax], 0xff
// 0051ba09  83e801               sub eax, 1
// 0051ba0c  c600ff               mov byte ptr [eax], 0xff
// 0051ba0f  0fb619               movzx ebx, byte ptr [ecx]
// 0051ba12  83e801               sub eax, 1
// 0051ba15  8818                 mov byte ptr [eax], bl
// 0051ba17  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0051ba1b  83c1ff               add ecx, -1
// 0051ba1e  83e801               sub eax, 1
// 0051ba21  8818                 mov byte ptr [eax], bl
// 0051ba23  83e801               sub eax, 1
// 0051ba26  83e901               sub ecx, 1
// 0051ba29  83ef01               sub edi, 1
// 0051ba2c  75c2                 jne 0x51b9f0
// 0051ba2e  8a4209               mov al, byte ptr [edx + 9]
// 0051ba31  c6420804             mov byte ptr [edx + 8], 4
// 0051ba35  c6420a02             mov byte ptr [edx + 0xa], 2
// 0051ba39  e95c010000           jmp 0x51bb9a
// 0051ba3e  3c02                 cmp al, 2
// 0051ba40  0f857d010000         jne 0x51bbc3
// 0051ba46  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0051ba4a  85ed                 test ebp, ebp
// 0051ba4c  0f8471010000         je 0x51bbc3
// 0051ba52  8a4209               mov al, byte ptr [edx + 9]
// 0051ba55  3c08                 cmp al, 8
// 0051ba57  7571                 jne 0x51baca
// 0051ba59  85f6                 test esi, esi
// 0051ba5b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051ba5f  8b4a04               mov ecx, dword ptr [edx + 4]
// 0051ba62  8d4c01ff             lea ecx, [ecx + eax - 1]
// 0051ba66  8d44b0ff             lea eax, [eax + esi*4 - 1]
// 0051ba6a  0f861d010000         jbe 0x51bb8d
// 0051ba70  8bfe                 mov edi, esi
// 0051ba72  660fb659fe           movzx bx, byte ptr [ecx - 2]
// 0051ba77  663b5d02             cmp bx, word ptr [ebp + 2]
// 0051ba7b  751a                 jne 0x51ba97
// 0051ba7d  660fb659ff           movzx bx, byte ptr [ecx - 1]
// 0051ba82  663b5d04             cmp bx, word ptr [ebp + 4]
// 0051ba86  750f                 jne 0x51ba97
// 0051ba88  660fb619             movzx bx, byte ptr [ecx]
// 0051ba8c  663b5d06             cmp bx, word ptr [ebp + 6]
// 0051ba90  7505                 jne 0x51ba97
// 0051ba92  c60000               mov byte ptr [eax], 0
// 0051ba95  eb03                 jmp 0x51ba9a
// 0051ba97  c600ff               mov byte ptr [eax], 0xff
// 0051ba9a  0fb619               movzx ebx, byte ptr [ecx]
// 0051ba9d  83e801               sub eax, 1
// 0051baa0  8818                 mov byte ptr [eax], bl
// 0051baa2  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0051baa6  83e901               sub ecx, 1
// 0051baa9  83e801               sub eax, 1
// 0051baac  8818                 mov byte ptr [eax], bl
// 0051baae  0fb659ff             movzx ebx, byte ptr [ecx - 1]
// 0051bab2  83e901               sub ecx, 1
// 0051bab5  83e801               sub eax, 1
// 0051bab8  8818                 mov byte ptr [eax], bl
// 0051baba  83e801               sub eax, 1
// 0051babd  83e901               sub ecx, 1
// 0051bac0  83ef01               sub edi, 1
// 0051bac3  75ad                 jne 0x51ba72
// 0051bac5  e9c3000000           jmp 0x51bb8d
// 0051baca  3c10                 cmp al, 0x10
// 0051bacc  0f85bb000000         jne 0x51bb8d
// 0051bad2  85f6                 test esi, esi
// 0051bad4  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051bad8  8b4a04               mov ecx, dword ptr [edx + 4]
// 0051badb  8d4c01ff             lea ecx, [ecx + eax - 1]
// 0051badf  8d44f0ff             lea eax, [eax + esi*8 - 1]
// 0051bae3  0f86a4000000         jbe 0x51bb8d
// 0051bae9  8bfe                 mov edi, esi
// 0051baeb  eb03                 jmp 0x51baf0
// 0051baed  8d4900               lea ecx, [ecx]
// 0051baf0  0fb75d02             movzx ebx, word ptr [ebp + 2]
// 0051baf4  33d2                 xor edx, edx
// 0051baf6  8a71fb               mov dh, byte ptr [ecx - 5]
// 0051baf9  8a51fc               mov dl, byte ptr [ecx - 4]
// 0051bafc  3bd3                 cmp edx, ebx
// 0051bafe  752a                 jne 0x51bb2a
// 0051bb00  0fb75d04             movzx ebx, word ptr [ebp + 4]
// 0051bb04  33d2                 xor edx, edx
// 0051bb06  8a71fd               mov dh, byte ptr [ecx - 3]
// 0051bb09  8a51fe               mov dl, byte ptr [ecx - 2]
// 0051bb0c  3bd3                 cmp edx, ebx
// 0051bb0e  751a                 jne 0x51bb2a
// 0051bb10  0fb75d06             movzx ebx, word ptr [ebp + 6]
// 0051bb14  33d2                 xor edx, edx
// 0051bb16  8a71ff               mov dh, byte ptr [ecx - 1]
// 0051bb19  8a11                 mov dl, byte ptr [ecx]
// 0051bb1b  3bd3                 cmp edx, ebx
// 0051bb1d  750b                 jne 0x51bb2a
// 0051bb1f  c60000               mov byte ptr [eax], 0
// 0051bb22  83e801               sub eax, 1
// 0051bb25  c60000               mov byte ptr [eax], 0
// 0051bb28  eb09                 jmp 0x51bb33
// 0051bb2a  c600ff               mov byte ptr [eax], 0xff
// 0051bb2d  83e801               sub eax, 1
// 0051bb30  c600ff               mov byte ptr [eax], 0xff
// 0051bb33  0fb611               movzx edx, byte ptr [ecx]
// 0051bb36  8850ff               mov byte ptr [eax - 1], dl
// 0051bb39  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0051bb3d  83e801               sub eax, 1
// 0051bb40  83e901               sub ecx, 1
// 0051bb43  8850ff               mov byte ptr [eax - 1], dl
// 0051bb46  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0051bb4a  83e801               sub eax, 1
// 0051bb4d  83e901               sub ecx, 1
// 0051bb50  8850ff               mov byte ptr [eax - 1], dl
// 0051bb53  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0051bb57  83e801               sub eax, 1
// 0051bb5a  83e901               sub ecx, 1
// 0051bb5d  83e801               sub eax, 1
// 0051bb60  8810                 mov byte ptr [eax], dl
// 0051bb62  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0051bb66  83e901               sub ecx, 1
// 0051bb69  83e801               sub eax, 1
// 0051bb6c  8810                 mov byte ptr [eax], dl
// 0051bb6e  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 0051bb72  83e901               sub ecx, 1
// 0051bb75  83e801               sub eax, 1
// 0051bb78  8810                 mov byte ptr [eax], dl
// 0051bb7a  83e801               sub eax, 1
// 0051bb7d  83e901               sub ecx, 1
// 0051bb80  83ef01               sub edi, 1
// 0051bb83  0f8567ffffff         jne 0x51baf0
// 0051bb89  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051bb8d  8a4209               mov al, byte ptr [edx + 9]
// 0051bb90  c6420806             mov byte ptr [edx + 8], 6
// 0051bb94  c6420a04             mov byte ptr [edx + 0xa], 4
// 0051bb98  02c0                 add al, al
// 0051bb9a  02c0                 add al, al
// 0051bb9c  88420b               mov byte ptr [edx + 0xb], al
// 0051bb9f  3c08                 cmp al, 8
// 0051bba1  0fb6c0               movzx eax, al
// 0051bba4  7211                 jb 0x51bbb7
// 0051bba6  c1e803               shr eax, 3
// 0051bba9  0fafc6               imul eax, esi
// 0051bbac  5f                   pop edi
// 0051bbad  5e                   pop esi
// 0051bbae  5d                   pop ebp
// 0051bbaf  894204               mov dword ptr [edx + 4], eax
// 0051bbb2  5b                   pop ebx
// 0051bbb3  83c408               add esp, 8
// 0051bbb6  c3                   ret 
// 0051bbb7  0fafc6               imul eax, esi
// 0051bbba  83c007               add eax, 7
// 0051bbbd  c1e803               shr eax, 3
// 0051bbc0  894204               mov dword ptr [edx + 4], eax
// 0051bbc3  5f                   pop edi
// 0051bbc4  5e                   pop esi
// 0051bbc5  5d                   pop ebp
// 0051bbc6  5b                   pop ebx
// 0051bbc7  83c408               add esp, 8
// 0051bbca  c3                   ret 
// library libpng-1.2.6/pngrtran.c (function _png_do_expand)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
