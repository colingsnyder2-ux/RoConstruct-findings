// from server: 100% by auto
// roc 2007-08 00516060  unit: seg_00510000  size: 3999 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00516060
//
// 00516060  51                   push ecx
// 00516061  53                   push ebx
// 00516062  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00516066  8a832c010000         mov al, byte ptr [ebx + 0x12c]
// 0051606c  3c08                 cmp al, 8
// 0051606e  55                   push ebp
// 0051606f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00516073  56                   push esi
// 00516074  57                   push edi
// 00516075  7367                 jae 0x5160de
// 00516077  0fb6f8               movzx edi, al
// 0051607a  be08000000           mov esi, 8
// 0051607f  2bf7                 sub esi, edi
// 00516081  56                   push esi
// 00516082  8d442f20             lea eax, [edi + ebp + 0x20]
// 00516086  50                   push eax
// 00516087  53                   push ebx
// 00516088  e803770000           call 0x51d790
// 0051608d  56                   push esi
// 0051608e  83c520               add ebp, 0x20
// 00516091  57                   push edi
// 00516092  55                   push ebp
// 00516093  c6832c01000008       mov byte ptr [ebx + 0x12c], 8
// 0051609a  e871ecffff           call 0x514d10
// 0051609f  83c418               add esp, 0x18
// 005160a2  85c0                 test eax, eax
// 005160a4  742c                 je 0x5160d2
// 005160a6  83ff04               cmp edi, 4
// 005160a9  7319                 jae 0x5160c4
// 005160ab  83c6fc               add esi, -4
// 005160ae  56                   push esi
// 005160af  57                   push edi
// 005160b0  55                   push ebp
// 005160b1  e85aecffff           call 0x514d10
// 005160b6  83c40c               add esp, 0xc
// 005160b9  85c0                 test eax, eax
// 005160bb  7407                 je 0x5160c4
// 005160bd  68702c7a00           push 0x7a2c70
// 005160c2  eb05                 jmp 0x5160c9
// 005160c4  68482c7a00           push 0x7a2c48
// 005160c9  53                   push ebx
// 005160ca  e811880000           call 0x51e8e0
// 005160cf  83c408               add esp, 8
// 005160d2  83ff03               cmp edi, 3
// 005160d5  7307                 jae 0x5160de
// 005160d7  814b6800100000       or dword ptr [ebx + 0x68], 0x1000
// 005160de  8dbb1c010000         lea edi, [ebx + 0x11c]
// 005160e4  6a04                 push 4
// 005160e6  8d4c2414             lea ecx, [esp + 0x14]
// 005160ea  51                   push ecx
// 005160eb  53                   push ebx
// 005160ec  e89f760000           call 0x51d790
// 005160f1  8d54241c             lea edx, [esp + 0x1c]
// 005160f5  52                   push edx
// 005160f6  53                   push ebx
// 005160f7  e824b60000           call 0x521720
// 005160fc  53                   push ebx
// 005160fd  8be8                 mov ebp, eax
// 005160ff  e8bcedffff           call 0x514ec0
// 00516104  6a04                 push 4
// 00516106  57                   push edi
// 00516107  53                   push ebx
// 00516108  e893a50000           call 0x5206a0
// 0051610d  83c424               add esp, 0x24
// 00516110  b804000000           mov eax, 4
// 00516115  b97c157a00           mov ecx, 0x7a157c
// 0051611a  8bd7                 mov edx, edi
// 0051611c  8d642400             lea esp, [esp]
// 00516120  8b32                 mov esi, dword ptr [edx]
// 00516122  3b31                 cmp esi, dword ptr [ecx]
// 00516124  7512                 jne 0x516138
// 00516126  83e804               sub eax, 4
// 00516129  83c104               add ecx, 4
// 0051612c  83c204               add edx, 4
// 0051612f  83f804               cmp eax, 4
// 00516132  73ec                 jae 0x516120
// 00516134  85c0                 test eax, eax
// 00516136  745d                 je 0x516195
// 00516138  0fb619               movzx ebx, byte ptr [ecx]
// 0051613b  0fb632               movzx esi, byte ptr [edx]
// 0051613e  2bf3                 sub esi, ebx
// 00516140  7545                 jne 0x516187
// 00516142  83e801               sub eax, 1
// 00516145  83c101               add ecx, 1
// 00516148  83c201               add edx, 1
// 0051614b  85c0                 test eax, eax
// 0051614d  7446                 je 0x516195
// 0051614f  0fb619               movzx ebx, byte ptr [ecx]
// 00516152  0fb632               movzx esi, byte ptr [edx]
// 00516155  2bf3                 sub esi, ebx
// 00516157  752e                 jne 0x516187
// 00516159  83e801               sub eax, 1
// 0051615c  83c101               add ecx, 1
// 0051615f  83c201               add edx, 1
// 00516162  85c0                 test eax, eax
// 00516164  742f                 je 0x516195
// 00516166  0fb619               movzx ebx, byte ptr [ecx]
// 00516169  0fb632               movzx esi, byte ptr [edx]
// 0051616c  2bf3                 sub esi, ebx
// 0051616e  7517                 jne 0x516187
// 00516170  83e801               sub eax, 1
// 00516173  83c101               add ecx, 1
// 00516176  83c201               add edx, 1
// 00516179  85c0                 test eax, eax
// 0051617b  7418                 je 0x516195
// 0051617d  0fb601               movzx eax, byte ptr [ecx]
// 00516180  0fb632               movzx esi, byte ptr [edx]
// 00516183  2bf0                 sub esi, eax
// 00516185  740e                 je 0x516195
// 00516187  85f6                 test esi, esi
// 00516189  b801000000           mov eax, 1
// 0051618e  7f07                 jg 0x516197
// 00516190  83c8ff               or eax, 0xffffffff
// 00516193  eb02                 jmp 0x516197
// 00516195  33c0                 xor eax, eax
// 00516197  85c0                 test eax, eax
// 00516199  7518                 jne 0x5161b3
// 0051619b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051619f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005161a3  55                   push ebp
// 005161a4  51                   push ecx
// 005161a5  53                   push ebx
// 005161a6  e865b60000           call 0x521810
// 005161ab  83c40c               add esp, 0xc
// 005161ae  e931ffffff           jmp 0x5160e4
// 005161b3  b804000000           mov eax, 4
// 005161b8  b98c157a00           mov ecx, 0x7a158c
// 005161bd  8bd7                 mov edx, edi
// 005161bf  90                   nop 
// 005161c0  8b32                 mov esi, dword ptr [edx]
// 005161c2  3b31                 cmp esi, dword ptr [ecx]
// 005161c4  7512                 jne 0x5161d8
// 005161c6  83e804               sub eax, 4
// 005161c9  83c104               add ecx, 4
// 005161cc  83c204               add edx, 4
// 005161cf  83f804               cmp eax, 4
// 005161d2  73ec                 jae 0x5161c0
// 005161d4  85c0                 test eax, eax
// 005161d6  745d                 je 0x516235
// 005161d8  0fb632               movzx esi, byte ptr [edx]
// 005161db  0fb619               movzx ebx, byte ptr [ecx]
// 005161de  2bf3                 sub esi, ebx
// 005161e0  7545                 jne 0x516227
// 005161e2  83e801               sub eax, 1
// 005161e5  83c101               add ecx, 1
// 005161e8  83c201               add edx, 1
// 005161eb  85c0                 test eax, eax
// 005161ed  7446                 je 0x516235
// 005161ef  0fb632               movzx esi, byte ptr [edx]
// 005161f2  0fb619               movzx ebx, byte ptr [ecx]
// 005161f5  2bf3                 sub esi, ebx
// 005161f7  752e                 jne 0x516227
// 005161f9  83e801               sub eax, 1
// 005161fc  83c101               add ecx, 1
// 005161ff  83c201               add edx, 1
// 00516202  85c0                 test eax, eax
// 00516204  742f                 je 0x516235
// 00516206  0fb632               movzx esi, byte ptr [edx]
// 00516209  0fb619               movzx ebx, byte ptr [ecx]
// 0051620c  2bf3                 sub esi, ebx
// 0051620e  7517                 jne 0x516227
// 00516210  83e801               sub eax, 1
// 00516213  83c101               add ecx, 1
// 00516216  83c201               add edx, 1
// 00516219  85c0                 test eax, eax
// 0051621b  7418                 je 0x516235
// 0051621d  0fb632               movzx esi, byte ptr [edx]
// 00516220  0fb611               movzx edx, byte ptr [ecx]
// 00516223  2bf2                 sub esi, edx
// 00516225  740e                 je 0x516235
// 00516227  85f6                 test esi, esi
// 00516229  b801000000           mov eax, 1
// 0051622e  7f07                 jg 0x516237
// 00516230  83c8ff               or eax, 0xffffffff
// 00516233  eb02                 jmp 0x516237
// 00516235  33c0                 xor eax, eax
// 00516237  85c0                 test eax, eax
// 00516239  7518                 jne 0x516253
// 0051623b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051623f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516243  55                   push ebp
// 00516244  50                   push eax
// 00516245  53                   push ebx
// 00516246  e8d5b80000           call 0x521b20
// 0051624b  83c40c               add esp, 0xc
// 0051624e  e991feffff           jmp 0x5160e4
// 00516253  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00516257  57                   push edi
// 00516258  51                   push ecx
// 00516259  e822f1ffff           call 0x515380
// 0051625e  83c408               add esp, 8
// 00516261  85c0                 test eax, eax
// 00516263  8bd7                 mov edx, edi
// 00516265  b804000000           mov eax, 4
// 0051626a  0f84d1010000         je 0x516441
// 00516270  b984157a00           mov ecx, 0x7a1584
// 00516275  8b32                 mov esi, dword ptr [edx]
// 00516277  3b31                 cmp esi, dword ptr [ecx]
// 00516279  7512                 jne 0x51628d
// 0051627b  83e804               sub eax, 4
// 0051627e  83c104               add ecx, 4
// 00516281  83c204               add edx, 4
// 00516284  83f804               cmp eax, 4
// 00516287  73ec                 jae 0x516275
// 00516289  85c0                 test eax, eax
// 0051628b  745d                 je 0x5162ea
// 0051628d  0fb619               movzx ebx, byte ptr [ecx]
// 00516290  0fb632               movzx esi, byte ptr [edx]
// 00516293  2bf3                 sub esi, ebx
// 00516295  7545                 jne 0x5162dc
// 00516297  83e801               sub eax, 1
// 0051629a  83c101               add ecx, 1
// 0051629d  83c201               add edx, 1
// 005162a0  85c0                 test eax, eax
// 005162a2  7446                 je 0x5162ea
// 005162a4  0fb619               movzx ebx, byte ptr [ecx]
// 005162a7  0fb632               movzx esi, byte ptr [edx]
// 005162aa  2bf3                 sub esi, ebx
// 005162ac  752e                 jne 0x5162dc
// 005162ae  83e801               sub eax, 1
// 005162b1  83c101               add ecx, 1
// 005162b4  83c201               add edx, 1
// 005162b7  85c0                 test eax, eax
// 005162b9  742f                 je 0x5162ea
// 005162bb  0fb619               movzx ebx, byte ptr [ecx]
// 005162be  0fb632               movzx esi, byte ptr [edx]
// 005162c1  2bf3                 sub esi, ebx
// 005162c3  7517                 jne 0x5162dc
// 005162c5  83e801               sub eax, 1
// 005162c8  83c101               add ecx, 1
// 005162cb  83c201               add edx, 1
// 005162ce  85c0                 test eax, eax
// 005162d0  7418                 je 0x5162ea
// 005162d2  0fb601               movzx eax, byte ptr [ecx]
// 005162d5  0fb632               movzx esi, byte ptr [edx]
// 005162d8  2bf0                 sub esi, eax
// 005162da  740e                 je 0x5162ea
// 005162dc  85f6                 test esi, esi
// 005162de  b801000000           mov eax, 1
// 005162e3  7f07                 jg 0x5162ec
// 005162e5  83c8ff               or eax, 0xffffffff
// 005162e8  eb02                 jmp 0x5162ec
// 005162ea  33c0                 xor eax, eax
// 005162ec  85c0                 test eax, eax
// 005162ee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005162f2  7504                 jne 0x5162f8
// 005162f4  834b6804             or dword ptr [ebx + 0x68], 4
// 005162f8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005162fc  55                   push ebp
// 005162fd  51                   push ecx
// 005162fe  53                   push ebx
// 005162ff  e83cd60000           call 0x523940
// 00516304  83c40c               add esp, 0xc
// 00516307  b804000000           mov eax, 4
// 0051630c  b994157a00           mov ecx, 0x7a1594
// 00516311  8bd7                 mov edx, edi
// 00516313  8b32                 mov esi, dword ptr [edx]
// 00516315  3b31                 cmp esi, dword ptr [ecx]
// 00516317  7512                 jne 0x51632b
// 00516319  83e804               sub eax, 4
// 0051631c  83c104               add ecx, 4
// 0051631f  83c204               add edx, 4
// 00516322  83f804               cmp eax, 4
// 00516325  73ec                 jae 0x516313
// 00516327  85c0                 test eax, eax
// 00516329  745d                 je 0x516388
// 0051632b  0fb632               movzx esi, byte ptr [edx]
// 0051632e  0fb629               movzx ebp, byte ptr [ecx]
// 00516331  2bf5                 sub esi, ebp
// 00516333  7545                 jne 0x51637a
// 00516335  83e801               sub eax, 1
// 00516338  83c101               add ecx, 1
// 0051633b  83c201               add edx, 1
// 0051633e  85c0                 test eax, eax
// 00516340  7446                 je 0x516388
// 00516342  0fb632               movzx esi, byte ptr [edx]
// 00516345  0fb629               movzx ebp, byte ptr [ecx]
// 00516348  2bf5                 sub esi, ebp
// 0051634a  752e                 jne 0x51637a
// 0051634c  83e801               sub eax, 1
// 0051634f  83c101               add ecx, 1
// 00516352  83c201               add edx, 1
// 00516355  85c0                 test eax, eax
// 00516357  742f                 je 0x516388
// 00516359  0fb632               movzx esi, byte ptr [edx]
// 0051635c  0fb629               movzx ebp, byte ptr [ecx]
// 0051635f  2bf5                 sub esi, ebp
// 00516361  7517                 jne 0x51637a
// 00516363  83e801               sub eax, 1
// 00516366  83c101               add ecx, 1
// 00516369  83c201               add edx, 1
// 0051636c  85c0                 test eax, eax
// 0051636e  7418                 je 0x516388
// 00516370  0fb632               movzx esi, byte ptr [edx]
// 00516373  0fb611               movzx edx, byte ptr [ecx]
// 00516376  2bf2                 sub esi, edx
// 00516378  740e                 je 0x516388
// 0051637a  85f6                 test esi, esi
// 0051637c  b801000000           mov eax, 1
// 00516381  7f07                 jg 0x51638a
// 00516383  83c8ff               or eax, 0xffffffff
// 00516386  eb02                 jmp 0x51638a
// 00516388  33c0                 xor eax, eax
// 0051638a  85c0                 test eax, eax
// 0051638c  7509                 jne 0x516397
// 0051638e  834b6802             or dword ptr [ebx + 0x68], 2
// 00516392  e94dfdffff           jmp 0x5160e4
// 00516397  b804000000           mov eax, 4
// 0051639c  b984157a00           mov ecx, 0x7a1584
// 005163a1  8bd7                 mov edx, edi
// 005163a3  8b32                 mov esi, dword ptr [edx]
// 005163a5  3b31                 cmp esi, dword ptr [ecx]
// 005163a7  7512                 jne 0x5163bb
// 005163a9  83e804               sub eax, 4
// 005163ac  83c104               add ecx, 4
// 005163af  83c204               add edx, 4
// 005163b2  83f804               cmp eax, 4
// 005163b5  73ec                 jae 0x5163a3
// 005163b7  85c0                 test eax, eax
// 005163b9  745d                 je 0x516418
// 005163bb  0fb629               movzx ebp, byte ptr [ecx]
// 005163be  0fb632               movzx esi, byte ptr [edx]
// 005163c1  2bf5                 sub esi, ebp
// 005163c3  7545                 jne 0x51640a
// 005163c5  83e801               sub eax, 1
// 005163c8  83c101               add ecx, 1
// 005163cb  83c201               add edx, 1
// 005163ce  85c0                 test eax, eax
// 005163d0  7446                 je 0x516418
// 005163d2  0fb629               movzx ebp, byte ptr [ecx]
// 005163d5  0fb632               movzx esi, byte ptr [edx]
// 005163d8  2bf5                 sub esi, ebp
// 005163da  752e                 jne 0x51640a
// 005163dc  83e801               sub eax, 1
// 005163df  83c101               add ecx, 1
// 005163e2  83c201               add edx, 1
// 005163e5  85c0                 test eax, eax
// 005163e7  742f                 je 0x516418
// 005163e9  0fb629               movzx ebp, byte ptr [ecx]
// 005163ec  0fb632               movzx esi, byte ptr [edx]
// 005163ef  2bf5                 sub esi, ebp
// 005163f1  7517                 jne 0x51640a
// 005163f3  83e801               sub eax, 1
// 005163f6  83c101               add ecx, 1
// 005163f9  83c201               add edx, 1
// 005163fc  85c0                 test eax, eax
// 005163fe  7418                 je 0x516418
// 00516400  0fb601               movzx eax, byte ptr [ecx]
// 00516403  0fb632               movzx esi, byte ptr [edx]
// 00516406  2bf0                 sub esi, eax
// 00516408  740e                 je 0x516418
// 0051640a  85f6                 test esi, esi
// 0051640c  b801000000           mov eax, 1
// 00516411  7f07                 jg 0x51641a
// 00516413  83c8ff               or eax, 0xffffffff
// 00516416  eb02                 jmp 0x51641a
// 00516418  33c0                 xor eax, eax
// 0051641a  85c0                 test eax, eax
// 0051641c  0f85c2fcffff         jne 0x5160e4
// 00516422  8b4368               mov eax, dword ptr [ebx + 0x68]
// 00516425  a801                 test al, 1
// 00516427  0f85700b0000         jne 0x516f9d
// 0051642d  682c2c7a00           push 0x7a2c2c
// 00516432  53                   push ebx
// 00516433  e8a8840000           call 0x51e8e0
// 00516438  83c408               add esp, 8
// 0051643b  5f                   pop edi
// 0051643c  5e                   pop esi
// 0051643d  5d                   pop ebp
// 0051643e  5b                   pop ebx
// 0051643f  59                   pop ecx
// 00516440  c3                   ret 
// 00516441  b994157a00           mov ecx, 0x7a1594
// 00516446  8b32                 mov esi, dword ptr [edx]
// 00516448  3b31                 cmp esi, dword ptr [ecx]
// 0051644a  7512                 jne 0x51645e
// 0051644c  83e804               sub eax, 4
// 0051644f  83c104               add ecx, 4
// 00516452  83c204               add edx, 4
// 00516455  83f804               cmp eax, 4
// 00516458  73ec                 jae 0x516446
// 0051645a  85c0                 test eax, eax
// 0051645c  745d                 je 0x5164bb
// 0051645e  0fb632               movzx esi, byte ptr [edx]
// 00516461  0fb619               movzx ebx, byte ptr [ecx]
// 00516464  2bf3                 sub esi, ebx
// 00516466  7545                 jne 0x5164ad
// 00516468  83e801               sub eax, 1
// 0051646b  83c101               add ecx, 1
// 0051646e  83c201               add edx, 1
// 00516471  85c0                 test eax, eax
// 00516473  7446                 je 0x5164bb
// 00516475  0fb632               movzx esi, byte ptr [edx]
// 00516478  0fb619               movzx ebx, byte ptr [ecx]
// 0051647b  2bf3                 sub esi, ebx
// 0051647d  752e                 jne 0x5164ad
// 0051647f  83e801               sub eax, 1
// 00516482  83c101               add ecx, 1
// 00516485  83c201               add edx, 1
// 00516488  85c0                 test eax, eax
// 0051648a  742f                 je 0x5164bb
// 0051648c  0fb632               movzx esi, byte ptr [edx]
// 0051648f  0fb619               movzx ebx, byte ptr [ecx]
// 00516492  2bf3                 sub esi, ebx
// 00516494  7517                 jne 0x5164ad
// 00516496  83e801               sub eax, 1
// 00516499  83c101               add ecx, 1
// 0051649c  83c201               add edx, 1
// 0051649f  85c0                 test eax, eax
// 005164a1  7418                 je 0x5164bb
// 005164a3  0fb632               movzx esi, byte ptr [edx]
// 005164a6  0fb609               movzx ecx, byte ptr [ecx]
// 005164a9  2bf1                 sub esi, ecx
// 005164ab  740e                 je 0x5164bb
// 005164ad  85f6                 test esi, esi
// 005164af  b801000000           mov eax, 1
// 005164b4  7f07                 jg 0x5164bd
// 005164b6  83c8ff               or eax, 0xffffffff
// 005164b9  eb02                 jmp 0x5164bd
// 005164bb  33c0                 xor eax, eax
// 005164bd  85c0                 test eax, eax
// 005164bf  7518                 jne 0x5164d9
// 005164c1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005164c5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005164c9  55                   push ebp
// 005164ca  52                   push edx
// 005164cb  53                   push ebx
// 005164cc  e8bfb40000           call 0x521990
// 005164d1  83c40c               add esp, 0xc
// 005164d4  e90bfcffff           jmp 0x5160e4
// 005164d9  b804000000           mov eax, 4
// 005164de  b984157a00           mov ecx, 0x7a1584
// 005164e3  8bd7                 mov edx, edi
// 005164e5  8b32                 mov esi, dword ptr [edx]
// 005164e7  3b31                 cmp esi, dword ptr [ecx]
// 005164e9  7512                 jne 0x5164fd
// 005164eb  83e804               sub eax, 4
// 005164ee  83c104               add ecx, 4
// 005164f1  83c204               add edx, 4
// 005164f4  83f804               cmp eax, 4
// 005164f7  73ec                 jae 0x5164e5
// 005164f9  85c0                 test eax, eax
// 005164fb  745d                 je 0x51655a
// 005164fd  0fb619               movzx ebx, byte ptr [ecx]
// 00516500  0fb632               movzx esi, byte ptr [edx]
// 00516503  2bf3                 sub esi, ebx
// 00516505  7545                 jne 0x51654c
// 00516507  83e801               sub eax, 1
// 0051650a  83c101               add ecx, 1
// 0051650d  83c201               add edx, 1
// 00516510  85c0                 test eax, eax
// 00516512  7446                 je 0x51655a
// 00516514  0fb619               movzx ebx, byte ptr [ecx]
// 00516517  0fb632               movzx esi, byte ptr [edx]
// 0051651a  2bf3                 sub esi, ebx
// 0051651c  752e                 jne 0x51654c
// 0051651e  83e801               sub eax, 1
// 00516521  83c101               add ecx, 1
// 00516524  83c201               add edx, 1
// 00516527  85c0                 test eax, eax
// 00516529  742f                 je 0x51655a
// 0051652b  0fb619               movzx ebx, byte ptr [ecx]
// 0051652e  0fb632               movzx esi, byte ptr [edx]
// 00516531  2bf3                 sub esi, ebx
// 00516533  7517                 jne 0x51654c
// 00516535  83e801               sub eax, 1
// 00516538  83c101               add ecx, 1
// 0051653b  83c201               add edx, 1
// 0051653e  85c0                 test eax, eax
// 00516540  7418                 je 0x51655a
// 00516542  0fb601               movzx eax, byte ptr [ecx]
// 00516545  0fb632               movzx esi, byte ptr [edx]
// 00516548  2bf0                 sub esi, eax
// 0051654a  740e                 je 0x51655a
// 0051654c  85f6                 test esi, esi
// 0051654e  b801000000           mov eax, 1
// 00516553  7f07                 jg 0x51655c
// 00516555  83c8ff               or eax, 0xffffffff
// 00516558  eb02                 jmp 0x51655c
// 0051655a  33c0                 xor eax, eax
// 0051655c  85c0                 test eax, eax
// 0051655e  0f845e0a0000         je 0x516fc2
// 00516564  b804000000           mov eax, 4
// 00516569  b99c157a00           mov ecx, 0x7a159c
// 0051656e  8bd7                 mov edx, edi
// 00516570  8b32                 mov esi, dword ptr [edx]
// 00516572  3b31                 cmp esi, dword ptr [ecx]
// 00516574  7512                 jne 0x516588
// 00516576  83e804               sub eax, 4
// 00516579  83c104               add ecx, 4
// 0051657c  83c204               add edx, 4
// 0051657f  83f804               cmp eax, 4
// 00516582  73ec                 jae 0x516570
// 00516584  85c0                 test eax, eax
// 00516586  745d                 je 0x5165e5
// 00516588  0fb632               movzx esi, byte ptr [edx]
// 0051658b  0fb619               movzx ebx, byte ptr [ecx]
// 0051658e  2bf3                 sub esi, ebx
// 00516590  7545                 jne 0x5165d7
// 00516592  83e801               sub eax, 1
// 00516595  83c101               add ecx, 1
// 00516598  83c201               add edx, 1
// 0051659b  85c0                 test eax, eax
// 0051659d  7446                 je 0x5165e5
// 0051659f  0fb632               movzx esi, byte ptr [edx]
// 005165a2  0fb619               movzx ebx, byte ptr [ecx]
// 005165a5  2bf3                 sub esi, ebx
// 005165a7  752e                 jne 0x5165d7
// 005165a9  83e801               sub eax, 1
// 005165ac  83c101               add ecx, 1
// 005165af  83c201               add edx, 1
// 005165b2  85c0                 test eax, eax
// 005165b4  742f                 je 0x5165e5
// 005165b6  0fb632               movzx esi, byte ptr [edx]
// 005165b9  0fb619               movzx ebx, byte ptr [ecx]
// 005165bc  2bf3                 sub esi, ebx
// 005165be  7517                 jne 0x5165d7
// 005165c0  83e801               sub eax, 1
// 005165c3  83c101               add ecx, 1
// 005165c6  83c201               add edx, 1
// 005165c9  85c0                 test eax, eax
// 005165cb  7418                 je 0x5165e5
// 005165cd  0fb632               movzx esi, byte ptr [edx]
// 005165d0  0fb609               movzx ecx, byte ptr [ecx]
// 005165d3  2bf1                 sub esi, ecx
// 005165d5  740e                 je 0x5165e5
// 005165d7  85f6                 test esi, esi
// 005165d9  b801000000           mov eax, 1
// 005165de  7f07                 jg 0x5165e7
// 005165e0  83c8ff               or eax, 0xffffffff
// 005165e3  eb02                 jmp 0x5165e7
// 005165e5  33c0                 xor eax, eax
// 005165e7  85c0                 test eax, eax
// 005165e9  7518                 jne 0x516603
// 005165eb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005165ef  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005165f3  55                   push ebp
// 005165f4  52                   push edx
// 005165f5  53                   push ebx
// 005165f6  e855c50000           call 0x522b50
// 005165fb  83c40c               add esp, 0xc
// 005165fe  e9e1faffff           jmp 0x5160e4
// 00516603  b804000000           mov eax, 4
// 00516608  b9a4157a00           mov ecx, 0x7a15a4
// 0051660d  8bd7                 mov edx, edi
// 0051660f  90                   nop 
// 00516610  8b32                 mov esi, dword ptr [edx]
// 00516612  3b31                 cmp esi, dword ptr [ecx]
// 00516614  7512                 jne 0x516628
// 00516616  83e804               sub eax, 4
// 00516619  83c104               add ecx, 4
// 0051661c  83c204               add edx, 4
// 0051661f  83f804               cmp eax, 4
// 00516622  73ec                 jae 0x516610
// 00516624  85c0                 test eax, eax
// 00516626  745d                 je 0x516685
// 00516628  0fb619               movzx ebx, byte ptr [ecx]
// 0051662b  0fb632               movzx esi, byte ptr [edx]
// 0051662e  2bf3                 sub esi, ebx
// 00516630  7545                 jne 0x516677
// 00516632  83e801               sub eax, 1
// 00516635  83c101               add ecx, 1
// 00516638  83c201               add edx, 1
// 0051663b  85c0                 test eax, eax
// 0051663d  7446                 je 0x516685
// 0051663f  0fb619               movzx ebx, byte ptr [ecx]
// 00516642  0fb632               movzx esi, byte ptr [edx]
// 00516645  2bf3                 sub esi, ebx
// 00516647  752e                 jne 0x516677
// 00516649  83e801               sub eax, 1
// 0051664c  83c101               add ecx, 1
// 0051664f  83c201               add edx, 1
// 00516652  85c0                 test eax, eax
// 00516654  742f                 je 0x516685
// 00516656  0fb619               movzx ebx, byte ptr [ecx]
// 00516659  0fb632               movzx esi, byte ptr [edx]
// 0051665c  2bf3                 sub esi, ebx
// 0051665e  7517                 jne 0x516677
// 00516660  83e801               sub eax, 1
// 00516663  83c101               add ecx, 1
// 00516666  83c201               add edx, 1
// 00516669  85c0                 test eax, eax
// 0051666b  7418                 je 0x516685
// 0051666d  0fb601               movzx eax, byte ptr [ecx]
// 00516670  0fb632               movzx esi, byte ptr [edx]
// 00516673  2bf0                 sub esi, eax
// 00516675  740e                 je 0x516685
// 00516677  85f6                 test esi, esi
// 00516679  b801000000           mov eax, 1
// 0051667e  7f07                 jg 0x516687
// 00516680  83c8ff               or eax, 0xffffffff
// 00516683  eb02                 jmp 0x516687
// 00516685  33c0                 xor eax, eax
// 00516687  85c0                 test eax, eax
// 00516689  7518                 jne 0x5166a3
// 0051668b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051668f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516693  55                   push ebp
// 00516694  51                   push ecx
// 00516695  53                   push ebx
// 00516696  e8b5b70000           call 0x521e50
// 0051669b  83c40c               add esp, 0xc
// 0051669e  e941faffff           jmp 0x5160e4
// 005166a3  b804000000           mov eax, 4
// 005166a8  b9ac157a00           mov ecx, 0x7a15ac
// 005166ad  8bd7                 mov edx, edi
// 005166af  90                   nop 
// 005166b0  8b32                 mov esi, dword ptr [edx]
// 005166b2  3b31                 cmp esi, dword ptr [ecx]
// 005166b4  7512                 jne 0x5166c8
// 005166b6  83e804               sub eax, 4
// 005166b9  83c104               add ecx, 4
// 005166bc  83c204               add edx, 4
// 005166bf  83f804               cmp eax, 4
// 005166c2  73ec                 jae 0x5166b0
// 005166c4  85c0                 test eax, eax
// 005166c6  745d                 je 0x516725
// 005166c8  0fb632               movzx esi, byte ptr [edx]
// 005166cb  0fb619               movzx ebx, byte ptr [ecx]
// 005166ce  2bf3                 sub esi, ebx
// 005166d0  7545                 jne 0x516717
// 005166d2  83e801               sub eax, 1
// 005166d5  83c101               add ecx, 1
// 005166d8  83c201               add edx, 1
// 005166db  85c0                 test eax, eax
// 005166dd  7446                 je 0x516725
// 005166df  0fb632               movzx esi, byte ptr [edx]
// 005166e2  0fb619               movzx ebx, byte ptr [ecx]
// 005166e5  2bf3                 sub esi, ebx
// 005166e7  752e                 jne 0x516717
// 005166e9  83e801               sub eax, 1
// 005166ec  83c101               add ecx, 1
// 005166ef  83c201               add edx, 1
// 005166f2  85c0                 test eax, eax
// 005166f4  742f                 je 0x516725
// 005166f6  0fb632               movzx esi, byte ptr [edx]
// 005166f9  0fb619               movzx ebx, byte ptr [ecx]
// 005166fc  2bf3                 sub esi, ebx
// 005166fe  7517                 jne 0x516717
// 00516700  83e801               sub eax, 1
// 00516703  83c101               add ecx, 1
// 00516706  83c201               add edx, 1
// 00516709  85c0                 test eax, eax
// 0051670b  7418                 je 0x516725
// 0051670d  0fb632               movzx esi, byte ptr [edx]
// 00516710  0fb611               movzx edx, byte ptr [ecx]
// 00516713  2bf2                 sub esi, edx
// 00516715  740e                 je 0x516725
// 00516717  85f6                 test esi, esi
// 00516719  b801000000           mov eax, 1
// 0051671e  7f07                 jg 0x516727
// 00516720  83c8ff               or eax, 0xffffffff
// 00516723  eb02                 jmp 0x516727
// 00516725  33c0                 xor eax, eax
// 00516727  85c0                 test eax, eax
// 00516729  7518                 jne 0x516743
// 0051672b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051672f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516733  55                   push ebp
// 00516734  50                   push eax
// 00516735  53                   push ebx
// 00516736  e835b40000           call 0x521b70
// 0051673b  83c40c               add esp, 0xc
// 0051673e  e9a1f9ffff           jmp 0x5160e4
// 00516743  b804000000           mov eax, 4
// 00516748  b9b4157a00           mov ecx, 0x7a15b4
// 0051674d  8bd7                 mov edx, edi
// 0051674f  90                   nop 
// 00516750  8b32                 mov esi, dword ptr [edx]
// 00516752  3b31                 cmp esi, dword ptr [ecx]
// 00516754  7512                 jne 0x516768
// 00516756  83e804               sub eax, 4
// 00516759  83c104               add ecx, 4
// 0051675c  83c204               add edx, 4
// 0051675f  83f804               cmp eax, 4
// 00516762  73ec                 jae 0x516750
// 00516764  85c0                 test eax, eax
// 00516766  745d                 je 0x5167c5
// 00516768  0fb619               movzx ebx, byte ptr [ecx]
// 0051676b  0fb632               movzx esi, byte ptr [edx]
// 0051676e  2bf3                 sub esi, ebx
// 00516770  7545                 jne 0x5167b7
// 00516772  83e801               sub eax, 1
// 00516775  83c101               add ecx, 1
// 00516778  83c201               add edx, 1
// 0051677b  85c0                 test eax, eax
// 0051677d  7446                 je 0x5167c5
// 0051677f  0fb619               movzx ebx, byte ptr [ecx]
// 00516782  0fb632               movzx esi, byte ptr [edx]
// 00516785  2bf3                 sub esi, ebx
// 00516787  752e                 jne 0x5167b7
// 00516789  83e801               sub eax, 1
// 0051678c  83c101               add ecx, 1
// 0051678f  83c201               add edx, 1
// 00516792  85c0                 test eax, eax
// 00516794  742f                 je 0x5167c5
// 00516796  0fb619               movzx ebx, byte ptr [ecx]
// 00516799  0fb632               movzx esi, byte ptr [edx]
// 0051679c  2bf3                 sub esi, ebx
// 0051679e  7517                 jne 0x5167b7
// 005167a0  83e801               sub eax, 1
// 005167a3  83c101               add ecx, 1
// 005167a6  83c201               add edx, 1
// 005167a9  85c0                 test eax, eax
// 005167ab  7418                 je 0x5167c5
// 005167ad  0fb609               movzx ecx, byte ptr [ecx]
// 005167b0  0fb632               movzx esi, byte ptr [edx]
// 005167b3  2bf1                 sub esi, ecx
// 005167b5  740e                 je 0x5167c5
// 005167b7  85f6                 test esi, esi
// 005167b9  b801000000           mov eax, 1
// 005167be  7f07                 jg 0x5167c7
// 005167c0  83c8ff               or eax, 0xffffffff
// 005167c3  eb02                 jmp 0x5167c7
// 005167c5  33c0                 xor eax, eax
// 005167c7  85c0                 test eax, eax
// 005167c9  7518                 jne 0x5167e3
// 005167cb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005167cf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005167d3  55                   push ebp
// 005167d4  52                   push edx
// 005167d5  53                   push ebx
// 005167d6  e8b5c50000           call 0x522d90
// 005167db  83c40c               add esp, 0xc
// 005167de  e901f9ffff           jmp 0x5160e4
// 005167e3  b804000000           mov eax, 4
// 005167e8  b9cc157a00           mov ecx, 0x7a15cc
// 005167ed  8bd7                 mov edx, edi
// 005167ef  90                   nop 
// 005167f0  8b32                 mov esi, dword ptr [edx]
// 005167f2  3b31                 cmp esi, dword ptr [ecx]
// 005167f4  7512                 jne 0x516808
// 005167f6  83e804               sub eax, 4
// 005167f9  83c104               add ecx, 4
// 005167fc  83c204               add edx, 4
// 005167ff  83f804               cmp eax, 4
// 00516802  73ec                 jae 0x5167f0
// 00516804  85c0                 test eax, eax
// 00516806  745d                 je 0x516865
// 00516808  0fb632               movzx esi, byte ptr [edx]
// 0051680b  0fb619               movzx ebx, byte ptr [ecx]
// 0051680e  2bf3                 sub esi, ebx
// 00516810  7545                 jne 0x516857
// 00516812  83e801               sub eax, 1
// 00516815  83c101               add ecx, 1
// 00516818  83c201               add edx, 1
// 0051681b  85c0                 test eax, eax
// 0051681d  7446                 je 0x516865
// 0051681f  0fb632               movzx esi, byte ptr [edx]
// 00516822  0fb619               movzx ebx, byte ptr [ecx]
// 00516825  2bf3                 sub esi, ebx
// 00516827  752e                 jne 0x516857
// 00516829  83e801               sub eax, 1
// 0051682c  83c101               add ecx, 1
// 0051682f  83c201               add edx, 1
// 00516832  85c0                 test eax, eax
// 00516834  742f                 je 0x516865
// 00516836  0fb632               movzx esi, byte ptr [edx]
// 00516839  0fb619               movzx ebx, byte ptr [ecx]
// 0051683c  2bf3                 sub esi, ebx
// 0051683e  7517                 jne 0x516857
// 00516840  83e801               sub eax, 1
// 00516843  83c101               add ecx, 1
// 00516846  83c201               add edx, 1
// 00516849  85c0                 test eax, eax
// 0051684b  7418                 je 0x516865
// 0051684d  0fb632               movzx esi, byte ptr [edx]
// 00516850  0fb601               movzx eax, byte ptr [ecx]
// 00516853  2bf0                 sub esi, eax
// 00516855  740e                 je 0x516865
// 00516857  85f6                 test esi, esi
// 00516859  b801000000           mov eax, 1
// 0051685e  7f07                 jg 0x516867
// 00516860  83c8ff               or eax, 0xffffffff
// 00516863  eb02                 jmp 0x516867
// 00516865  33c0                 xor eax, eax
// 00516867  85c0                 test eax, eax
// 00516869  7518                 jne 0x516883
// 0051686b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051686f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516873  55                   push ebp
// 00516874  51                   push ecx
// 00516875  53                   push ebx
// 00516876  e8d5c70000           call 0x523050
// 0051687b  83c40c               add esp, 0xc
// 0051687e  e961f8ffff           jmp 0x5160e4
// 00516883  b804000000           mov eax, 4
// 00516888  b9d4157a00           mov ecx, 0x7a15d4
// 0051688d  8bd7                 mov edx, edi
// 0051688f  90                   nop 
// 00516890  8b32                 mov esi, dword ptr [edx]
// 00516892  3b31                 cmp esi, dword ptr [ecx]
// 00516894  7512                 jne 0x5168a8
// 00516896  83e804               sub eax, 4
// 00516899  83c104               add ecx, 4
// 0051689c  83c204               add edx, 4
// 0051689f  83f804               cmp eax, 4
// 005168a2  73ec                 jae 0x516890
// 005168a4  85c0                 test eax, eax
// 005168a6  745d                 je 0x516905
// 005168a8  0fb619               movzx ebx, byte ptr [ecx]
// 005168ab  0fb632               movzx esi, byte ptr [edx]
// 005168ae  2bf3                 sub esi, ebx
// 005168b0  7545                 jne 0x5168f7
// 005168b2  83e801               sub eax, 1
// 005168b5  83c101               add ecx, 1
// 005168b8  83c201               add edx, 1
// 005168bb  85c0                 test eax, eax
// 005168bd  7446                 je 0x516905
// 005168bf  0fb619               movzx ebx, byte ptr [ecx]
// 005168c2  0fb632               movzx esi, byte ptr [edx]
// 005168c5  2bf3                 sub esi, ebx
// 005168c7  752e                 jne 0x5168f7
// 005168c9  83e801               sub eax, 1
// 005168cc  83c101               add ecx, 1
// 005168cf  83c201               add edx, 1
// 005168d2  85c0                 test eax, eax
// 005168d4  742f                 je 0x516905
// 005168d6  0fb619               movzx ebx, byte ptr [ecx]
// 005168d9  0fb632               movzx esi, byte ptr [edx]
// 005168dc  2bf3                 sub esi, ebx
// 005168de  7517                 jne 0x5168f7
// 005168e0  83e801               sub eax, 1
// 005168e3  83c101               add ecx, 1
// 005168e6  83c201               add edx, 1
// 005168e9  85c0                 test eax, eax
// 005168eb  7418                 je 0x516905
// 005168ed  0fb601               movzx eax, byte ptr [ecx]
// 005168f0  0fb632               movzx esi, byte ptr [edx]
// 005168f3  2bf0                 sub esi, eax
// 005168f5  740e                 je 0x516905
// 005168f7  85f6                 test esi, esi
// 005168f9  b801000000           mov eax, 1
// 005168fe  7f07                 jg 0x516907
// 00516900  83c8ff               or eax, 0xffffffff
// 00516903  eb02                 jmp 0x516907
// 00516905  33c0                 xor eax, eax
// 00516907  85c0                 test eax, eax
// 00516909  7518                 jne 0x516923
// 0051690b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051690f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516913  55                   push ebp
// 00516914  51                   push ecx
// 00516915  53                   push ebx
// 00516916  e865c80000           call 0x523180
// 0051691b  83c40c               add esp, 0xc
// 0051691e  e9c1f7ffff           jmp 0x5160e4
// 00516923  b804000000           mov eax, 4
// 00516928  b9dc157a00           mov ecx, 0x7a15dc
// 0051692d  8bd7                 mov edx, edi
// 0051692f  90                   nop 
// 00516930  8b32                 mov esi, dword ptr [edx]
// 00516932  3b31                 cmp esi, dword ptr [ecx]
// 00516934  7512                 jne 0x516948
// 00516936  83e804               sub eax, 4
// 00516939  83c104               add ecx, 4
// 0051693c  83c204               add edx, 4
// 0051693f  83f804               cmp eax, 4
// 00516942  73ec                 jae 0x516930
// 00516944  85c0                 test eax, eax
// 00516946  745d                 je 0x5169a5
// 00516948  0fb632               movzx esi, byte ptr [edx]
// 0051694b  0fb619               movzx ebx, byte ptr [ecx]
// 0051694e  2bf3                 sub esi, ebx
// 00516950  7545                 jne 0x516997
// 00516952  83e801               sub eax, 1
// 00516955  83c101               add ecx, 1
// 00516958  83c201               add edx, 1
// 0051695b  85c0                 test eax, eax
// 0051695d  7446                 je 0x5169a5
// 0051695f  0fb632               movzx esi, byte ptr [edx]
// 00516962  0fb619               movzx ebx, byte ptr [ecx]
// 00516965  2bf3                 sub esi, ebx
// 00516967  752e                 jne 0x516997
// 00516969  83e801               sub eax, 1
// 0051696c  83c101               add ecx, 1
// 0051696f  83c201               add edx, 1
// 00516972  85c0                 test eax, eax
// 00516974  742f                 je 0x5169a5
// 00516976  0fb632               movzx esi, byte ptr [edx]
// 00516979  0fb619               movzx ebx, byte ptr [ecx]
// 0051697c  2bf3                 sub esi, ebx
// 0051697e  7517                 jne 0x516997
// 00516980  83e801               sub eax, 1
// 00516983  83c101               add ecx, 1
// 00516986  83c201               add edx, 1
// 00516989  85c0                 test eax, eax
// 0051698b  7418                 je 0x5169a5
// 0051698d  0fb632               movzx esi, byte ptr [edx]
// 00516990  0fb611               movzx edx, byte ptr [ecx]
// 00516993  2bf2                 sub esi, edx
// 00516995  740e                 je 0x5169a5
// 00516997  85f6                 test esi, esi
// 00516999  b801000000           mov eax, 1
// 0051699e  7f07                 jg 0x5169a7
// 005169a0  83c8ff               or eax, 0xffffffff
// 005169a3  eb02                 jmp 0x5169a7
// 005169a5  33c0                 xor eax, eax
// 005169a7  85c0                 test eax, eax
// 005169a9  7518                 jne 0x5169c3
// 005169ab  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005169af  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005169b3  55                   push ebp
// 005169b4  50                   push eax
// 005169b5  53                   push ebx
// 005169b6  e825ca0000           call 0x5233e0
// 005169bb  83c40c               add esp, 0xc
// 005169be  e921f7ffff           jmp 0x5160e4
// 005169c3  b804000000           mov eax, 4
// 005169c8  b9e4157a00           mov ecx, 0x7a15e4
// 005169cd  8bd7                 mov edx, edi
// 005169cf  90                   nop 
// 005169d0  8b32                 mov esi, dword ptr [edx]
// 005169d2  3b31                 cmp esi, dword ptr [ecx]
// 005169d4  7512                 jne 0x5169e8
// 005169d6  83e804               sub eax, 4
// 005169d9  83c104               add ecx, 4
// 005169dc  83c204               add edx, 4
// 005169df  83f804               cmp eax, 4
// 005169e2  73ec                 jae 0x5169d0
// 005169e4  85c0                 test eax, eax
// 005169e6  745d                 je 0x516a45
// 005169e8  0fb619               movzx ebx, byte ptr [ecx]
// 005169eb  0fb632               movzx esi, byte ptr [edx]
// 005169ee  2bf3                 sub esi, ebx
// 005169f0  7545                 jne 0x516a37
// 005169f2  83e801               sub eax, 1
// 005169f5  83c101               add ecx, 1
// 005169f8  83c201               add edx, 1
// 005169fb  85c0                 test eax, eax
// 005169fd  7446                 je 0x516a45
// 005169ff  0fb619               movzx ebx, byte ptr [ecx]
// 00516a02  0fb632               movzx esi, byte ptr [edx]
// 00516a05  2bf3                 sub esi, ebx
// 00516a07  752e                 jne 0x516a37
// 00516a09  83e801               sub eax, 1
// 00516a0c  83c101               add ecx, 1
// 00516a0f  83c201               add edx, 1
// 00516a12  85c0                 test eax, eax
// 00516a14  742f                 je 0x516a45
// 00516a16  0fb619               movzx ebx, byte ptr [ecx]
// 00516a19  0fb632               movzx esi, byte ptr [edx]
// 00516a1c  2bf3                 sub esi, ebx
// 00516a1e  7517                 jne 0x516a37
// 00516a20  83e801               sub eax, 1
// 00516a23  83c101               add ecx, 1
// 00516a26  83c201               add edx, 1
// 00516a29  85c0                 test eax, eax
// 00516a2b  7418                 je 0x516a45
// 00516a2d  0fb609               movzx ecx, byte ptr [ecx]
// 00516a30  0fb632               movzx esi, byte ptr [edx]
// 00516a33  2bf1                 sub esi, ecx
// 00516a35  740e                 je 0x516a45
// 00516a37  85f6                 test esi, esi
// 00516a39  b801000000           mov eax, 1
// 00516a3e  7f07                 jg 0x516a47
// 00516a40  83c8ff               or eax, 0xffffffff
// 00516a43  eb02                 jmp 0x516a47
// 00516a45  33c0                 xor eax, eax
// 00516a47  85c0                 test eax, eax
// 00516a49  7518                 jne 0x516a63
// 00516a4b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00516a4f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516a53  55                   push ebp
// 00516a54  52                   push edx
// 00516a55  53                   push ebx
// 00516a56  e8d5c40000           call 0x522f30
// 00516a5b  83c40c               add esp, 0xc
// 00516a5e  e981f6ffff           jmp 0x5160e4
// 00516a63  b804000000           mov eax, 4
// 00516a68  b9ec157a00           mov ecx, 0x7a15ec
// 00516a6d  8bd7                 mov edx, edi
// 00516a6f  90                   nop 
// 00516a70  8b32                 mov esi, dword ptr [edx]
// 00516a72  3b31                 cmp esi, dword ptr [ecx]
// 00516a74  7516                 jne 0x516a8c
// 00516a76  83e804               sub eax, 4
// 00516a79  83c104               add ecx, 4
// 00516a7c  83c204               add edx, 4
// 00516a7f  83f804               cmp eax, 4
// 00516a82  73ec                 jae 0x516a70
// 00516a84  85c0                 test eax, eax
// 00516a86  0f845d000000         je 0x516ae9
// 00516a8c  0fb632               movzx esi, byte ptr [edx]
// 00516a8f  0fb619               movzx ebx, byte ptr [ecx]
// 00516a92  2bf3                 sub esi, ebx
// 00516a94  7545                 jne 0x516adb
// 00516a96  83e801               sub eax, 1
// 00516a99  83c101               add ecx, 1
// 00516a9c  83c201               add edx, 1
// 00516a9f  85c0                 test eax, eax
// 00516aa1  7446                 je 0x516ae9
// 00516aa3  0fb632               movzx esi, byte ptr [edx]
// 00516aa6  0fb619               movzx ebx, byte ptr [ecx]
// 00516aa9  2bf3                 sub esi, ebx
// 00516aab  752e                 jne 0x516adb
// 00516aad  83e801               sub eax, 1
// 00516ab0  83c101               add ecx, 1
// 00516ab3  83c201               add edx, 1
// 00516ab6  85c0                 test eax, eax
// 00516ab8  742f                 je 0x516ae9
// 00516aba  0fb632               movzx esi, byte ptr [edx]
// 00516abd  0fb619               movzx ebx, byte ptr [ecx]
// 00516ac0  2bf3                 sub esi, ebx
// 00516ac2  7517                 jne 0x516adb
// 00516ac4  83e801               sub eax, 1
// 00516ac7  83c101               add ecx, 1
// 00516aca  83c201               add edx, 1
// 00516acd  85c0                 test eax, eax
// 00516acf  7418                 je 0x516ae9
// 00516ad1  0fb632               movzx esi, byte ptr [edx]
// 00516ad4  0fb601               movzx eax, byte ptr [ecx]
// 00516ad7  2bf0                 sub esi, eax
// 00516ad9  740e                 je 0x516ae9
// 00516adb  85f6                 test esi, esi
// 00516add  b801000000           mov eax, 1
// 00516ae2  7f07                 jg 0x516aeb
// 00516ae4  83c8ff               or eax, 0xffffffff
// 00516ae7  eb02                 jmp 0x516aeb
// 00516ae9  33c0                 xor eax, eax
// 00516aeb  85c0                 test eax, eax
// 00516aed  7518                 jne 0x516b07
// 00516aef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00516af3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516af7  55                   push ebp
// 00516af8  51                   push ecx
// 00516af9  53                   push ebx
// 00516afa  e8e1b10000           call 0x521ce0
// 00516aff  83c40c               add esp, 0xc
// 00516b02  e9ddf5ffff           jmp 0x5160e4
// 00516b07  b804000000           mov eax, 4
// 00516b0c  b9fc157a00           mov ecx, 0x7a15fc
// 00516b11  8bd7                 mov edx, edi
// 00516b13  8b32                 mov esi, dword ptr [edx]
// 00516b15  3b31                 cmp esi, dword ptr [ecx]
// 00516b17  7516                 jne 0x516b2f
// 00516b19  83e804               sub eax, 4
// 00516b1c  83c104               add ecx, 4
// 00516b1f  83c204               add edx, 4
// 00516b22  83f804               cmp eax, 4
// 00516b25  73ec                 jae 0x516b13
// 00516b27  85c0                 test eax, eax
// 00516b29  0f845d000000         je 0x516b8c
// 00516b2f  0fb619               movzx ebx, byte ptr [ecx]
// 00516b32  0fb632               movzx esi, byte ptr [edx]
// 00516b35  2bf3                 sub esi, ebx
// 00516b37  7545                 jne 0x516b7e
// 00516b39  83e801               sub eax, 1
// 00516b3c  83c101               add ecx, 1
// 00516b3f  83c201               add edx, 1
// 00516b42  85c0                 test eax, eax
// 00516b44  7446                 je 0x516b8c
// 00516b46  0fb619               movzx ebx, byte ptr [ecx]
// 00516b49  0fb632               movzx esi, byte ptr [edx]
// 00516b4c  2bf3                 sub esi, ebx
// 00516b4e  752e                 jne 0x516b7e
// 00516b50  83e801               sub eax, 1
// 00516b53  83c101               add ecx, 1
// 00516b56  83c201               add edx, 1
// 00516b59  85c0                 test eax, eax
// 00516b5b  742f                 je 0x516b8c
// 00516b5d  0fb619               movzx ebx, byte ptr [ecx]
// 00516b60  0fb632               movzx esi, byte ptr [edx]
// 00516b63  2bf3                 sub esi, ebx
// 00516b65  7517                 jne 0x516b7e
// 00516b67  83e801               sub eax, 1
// 00516b6a  83c101               add ecx, 1
// 00516b6d  83c201               add edx, 1
// 00516b70  85c0                 test eax, eax
// 00516b72  7418                 je 0x516b8c
// 00516b74  0fb601               movzx eax, byte ptr [ecx]
// 00516b77  0fb632               movzx esi, byte ptr [edx]
// 00516b7a  2bf0                 sub esi, eax
// 00516b7c  740e                 je 0x516b8c
// 00516b7e  85f6                 test esi, esi
// 00516b80  b801000000           mov eax, 1
// 00516b85  7f07                 jg 0x516b8e
// 00516b87  83c8ff               or eax, 0xffffffff
// 00516b8a  eb02                 jmp 0x516b8e
// 00516b8c  33c0                 xor eax, eax
// 00516b8e  85c0                 test eax, eax
// 00516b90  7518                 jne 0x516baa
// 00516b92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00516b96  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516b9a  55                   push ebp
// 00516b9b  51                   push ecx
// 00516b9c  53                   push ebx
// 00516b9d  e89eb70000           call 0x522340
// 00516ba2  83c40c               add esp, 0xc
// 00516ba5  e93af5ffff           jmp 0x5160e4
// 00516baa  b804000000           mov eax, 4
// 00516baf  b9bc157a00           mov ecx, 0x7a15bc
// 00516bb4  8bd7                 mov edx, edi
// 00516bb6  8b32                 mov esi, dword ptr [edx]
// 00516bb8  3b31                 cmp esi, dword ptr [ecx]
// 00516bba  7516                 jne 0x516bd2
// 00516bbc  83e804               sub eax, 4
// 00516bbf  83c104               add ecx, 4
// 00516bc2  83c204               add edx, 4
// 00516bc5  83f804               cmp eax, 4
// 00516bc8  73ec                 jae 0x516bb6
// 00516bca  85c0                 test eax, eax
// 00516bcc  0f845d000000         je 0x516c2f
// 00516bd2  0fb632               movzx esi, byte ptr [edx]
// 00516bd5  0fb619               movzx ebx, byte ptr [ecx]
// 00516bd8  2bf3                 sub esi, ebx
// 00516bda  7545                 jne 0x516c21
// 00516bdc  83e801               sub eax, 1
// 00516bdf  83c101               add ecx, 1
// 00516be2  83c201               add edx, 1
// 00516be5  85c0                 test eax, eax
// 00516be7  7446                 je 0x516c2f
// 00516be9  0fb632               movzx esi, byte ptr [edx]
// 00516bec  0fb619               movzx ebx, byte ptr [ecx]
// 00516bef  2bf3                 sub esi, ebx
// 00516bf1  752e                 jne 0x516c21
// 00516bf3  83e801               sub eax, 1
// 00516bf6  83c101               add ecx, 1
// 00516bf9  83c201               add edx, 1
// 00516bfc  85c0                 test eax, eax
// 00516bfe  742f                 je 0x516c2f
// 00516c00  0fb632               movzx esi, byte ptr [edx]
// 00516c03  0fb619               movzx ebx, byte ptr [ecx]
// 00516c06  2bf3                 sub esi, ebx
// 00516c08  7517                 jne 0x516c21
// 00516c0a  83e801               sub eax, 1
// 00516c0d  83c101               add ecx, 1
// 00516c10  83c201               add edx, 1
// 00516c13  85c0                 test eax, eax
// 00516c15  7418                 je 0x516c2f
// 00516c17  0fb632               movzx esi, byte ptr [edx]
// 00516c1a  0fb611               movzx edx, byte ptr [ecx]
// 00516c1d  2bf2                 sub esi, edx
// 00516c1f  740e                 je 0x516c2f
// 00516c21  85f6                 test esi, esi
// 00516c23  b801000000           mov eax, 1
// 00516c28  7f07                 jg 0x516c31
// 00516c2a  83c8ff               or eax, 0xffffffff
// 00516c2d  eb02                 jmp 0x516c31
// 00516c2f  33c0                 xor eax, eax
// 00516c31  85c0                 test eax, eax
// 00516c33  7518                 jne 0x516c4d
// 00516c35  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00516c39  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516c3d  55                   push ebp
// 00516c3e  50                   push eax
// 00516c3f  53                   push ebx
// 00516c40  e8ebb80000           call 0x522530
// 00516c45  83c40c               add esp, 0xc
// 00516c48  e997f4ffff           jmp 0x5160e4
// 00516c4d  b804000000           mov eax, 4
// 00516c52  b9f4157a00           mov ecx, 0x7a15f4
// 00516c57  8bd7                 mov edx, edi
// 00516c59  8da42400000000       lea esp, [esp]
// 00516c60  8b32                 mov esi, dword ptr [edx]
// 00516c62  3b31                 cmp esi, dword ptr [ecx]
// 00516c64  7516                 jne 0x516c7c
// 00516c66  83e804               sub eax, 4
// 00516c69  83c104               add ecx, 4
// 00516c6c  83c204               add edx, 4
// 00516c6f  83f804               cmp eax, 4
// 00516c72  73ec                 jae 0x516c60
// 00516c74  85c0                 test eax, eax
// 00516c76  0f845d000000         je 0x516cd9
// 00516c7c  0fb619               movzx ebx, byte ptr [ecx]
// 00516c7f  0fb632               movzx esi, byte ptr [edx]
// 00516c82  2bf3                 sub esi, ebx
// 00516c84  7545                 jne 0x516ccb
// 00516c86  83e801               sub eax, 1
// 00516c89  83c101               add ecx, 1
// 00516c8c  83c201               add edx, 1
// 00516c8f  85c0                 test eax, eax
// 00516c91  7446                 je 0x516cd9
// 00516c93  0fb619               movzx ebx, byte ptr [ecx]
// 00516c96  0fb632               movzx esi, byte ptr [edx]
// 00516c99  2bf3                 sub esi, ebx
// 00516c9b  752e                 jne 0x516ccb
// 00516c9d  83e801               sub eax, 1
// 00516ca0  83c101               add ecx, 1
// 00516ca3  83c201               add edx, 1
// 00516ca6  85c0                 test eax, eax
// 00516ca8  742f                 je 0x516cd9
// 00516caa  0fb619               movzx ebx, byte ptr [ecx]
// 00516cad  0fb632               movzx esi, byte ptr [edx]
// 00516cb0  2bf3                 sub esi, ebx
// 00516cb2  7517                 jne 0x516ccb
// 00516cb4  83e801               sub eax, 1
// 00516cb7  83c101               add ecx, 1
// 00516cba  83c201               add edx, 1
// 00516cbd  85c0                 test eax, eax
// 00516cbf  7418                 je 0x516cd9
// 00516cc1  0fb609               movzx ecx, byte ptr [ecx]
// 00516cc4  0fb632               movzx esi, byte ptr [edx]
// 00516cc7  2bf1                 sub esi, ecx
// 00516cc9  740e                 je 0x516cd9
// 00516ccb  85f6                 test esi, esi
// 00516ccd  b801000000           mov eax, 1
// 00516cd2  7f07                 jg 0x516cdb
// 00516cd4  83c8ff               or eax, 0xffffffff
// 00516cd7  eb02                 jmp 0x516cdb
// 00516cd9  33c0                 xor eax, eax
// 00516cdb  85c0                 test eax, eax
// 00516cdd  7518                 jne 0x516cf7
// 00516cdf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00516ce3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516ce7  55                   push ebp
// 00516ce8  52                   push edx
// 00516ce9  53                   push ebx
// 00516cea  e8f1b90000           call 0x5226e0
// 00516cef  83c40c               add esp, 0xc
// 00516cf2  e9edf3ffff           jmp 0x5160e4
// 00516cf7  b804000000           mov eax, 4
// 00516cfc  b904167a00           mov ecx, 0x7a1604
// 00516d01  8bd7                 mov edx, edi
// 00516d03  8b32                 mov esi, dword ptr [edx]
// 00516d05  3b31                 cmp esi, dword ptr [ecx]
// 00516d07  7516                 jne 0x516d1f
// 00516d09  83e804               sub eax, 4
// 00516d0c  83c104               add ecx, 4
// 00516d0f  83c204               add edx, 4
// 00516d12  83f804               cmp eax, 4
// 00516d15  73ec                 jae 0x516d03
// 00516d17  85c0                 test eax, eax
// 00516d19  0f845d000000         je 0x516d7c
// 00516d1f  0fb632               movzx esi, byte ptr [edx]
// 00516d22  0fb619               movzx ebx, byte ptr [ecx]
// 00516d25  2bf3                 sub esi, ebx
// 00516d27  7545                 jne 0x516d6e
// 00516d29  83e801               sub eax, 1
// 00516d2c  83c101               add ecx, 1
// 00516d2f  83c201               add edx, 1
// 00516d32  85c0                 test eax, eax
// 00516d34  7446                 je 0x516d7c
// 00516d36  0fb632               movzx esi, byte ptr [edx]
// 00516d39  0fb619               movzx ebx, byte ptr [ecx]
// 00516d3c  2bf3                 sub esi, ebx
// 00516d3e  752e                 jne 0x516d6e
// 00516d40  83e801               sub eax, 1
// 00516d43  83c101               add ecx, 1
// 00516d46  83c201               add edx, 1
// 00516d49  85c0                 test eax, eax
// 00516d4b  742f                 je 0x516d7c
// 00516d4d  0fb632               movzx esi, byte ptr [edx]
// 00516d50  0fb619               movzx ebx, byte ptr [ecx]
// 00516d53  2bf3                 sub esi, ebx
// 00516d55  7517                 jne 0x516d6e
// 00516d57  83e801               sub eax, 1
// 00516d5a  83c101               add ecx, 1
// 00516d5d  83c201               add edx, 1
// 00516d60  85c0                 test eax, eax
// 00516d62  7418                 je 0x516d7c
// 00516d64  0fb632               movzx esi, byte ptr [edx]
// 00516d67  0fb601               movzx eax, byte ptr [ecx]
// 00516d6a  2bf0                 sub esi, eax
// 00516d6c  740e                 je 0x516d7c
// 00516d6e  85f6                 test esi, esi
// 00516d70  b801000000           mov eax, 1
// 00516d75  7f07                 jg 0x516d7e
// 00516d77  83c8ff               or eax, 0xffffffff
// 00516d7a  eb02                 jmp 0x516d7e
// 00516d7c  33c0                 xor eax, eax
// 00516d7e  85c0                 test eax, eax
// 00516d80  7518                 jne 0x516d9a
// 00516d82  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00516d86  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516d8a  55                   push ebp
// 00516d8b  51                   push ecx
// 00516d8c  53                   push ebx
// 00516d8d  e82ec90000           call 0x5236c0
// 00516d92  83c40c               add esp, 0xc
// 00516d95  e94af3ffff           jmp 0x5160e4
// 00516d9a  b804000000           mov eax, 4
// 00516d9f  b90c167a00           mov ecx, 0x7a160c
// 00516da4  8bd7                 mov edx, edi
// 00516da6  8b32                 mov esi, dword ptr [edx]
// 00516da8  3b31                 cmp esi, dword ptr [ecx]
// 00516daa  7516                 jne 0x516dc2
// 00516dac  83e804               sub eax, 4
// 00516daf  83c104               add ecx, 4
// 00516db2  83c204               add edx, 4
// 00516db5  83f804               cmp eax, 4
// 00516db8  73ec                 jae 0x516da6
// 00516dba  85c0                 test eax, eax
// 00516dbc  0f845d000000         je 0x516e1f
// 00516dc2  0fb619               movzx ebx, byte ptr [ecx]
// 00516dc5  0fb632               movzx esi, byte ptr [edx]
// 00516dc8  2bf3                 sub esi, ebx
// 00516dca  7545                 jne 0x516e11
// 00516dcc  83e801               sub eax, 1
// 00516dcf  83c101               add ecx, 1
// 00516dd2  83c201               add edx, 1
// 00516dd5  85c0                 test eax, eax
// 00516dd7  7446                 je 0x516e1f
// 00516dd9  0fb619               movzx ebx, byte ptr [ecx]
// 00516ddc  0fb632               movzx esi, byte ptr [edx]
// 00516ddf  2bf3                 sub esi, ebx
// 00516de1  752e                 jne 0x516e11
// 00516de3  83e801               sub eax, 1
// 00516de6  83c101               add ecx, 1
// 00516de9  83c201               add edx, 1
// 00516dec  85c0                 test eax, eax
// 00516dee  742f                 je 0x516e1f
// 00516df0  0fb619               movzx ebx, byte ptr [ecx]
// 00516df3  0fb632               movzx esi, byte ptr [edx]
// 00516df6  2bf3                 sub esi, ebx
// 00516df8  7517                 jne 0x516e11
// 00516dfa  83e801               sub eax, 1
// 00516dfd  83c101               add ecx, 1
// 00516e00  83c201               add edx, 1
// 00516e03  85c0                 test eax, eax
// 00516e05  7418                 je 0x516e1f
// 00516e07  0fb601               movzx eax, byte ptr [ecx]
// 00516e0a  0fb632               movzx esi, byte ptr [edx]
// 00516e0d  2bf0                 sub esi, eax
// 00516e0f  740e                 je 0x516e1f
// 00516e11  85f6                 test esi, esi
// 00516e13  b801000000           mov eax, 1
// 00516e18  7f07                 jg 0x516e21
// 00516e1a  83c8ff               or eax, 0xffffffff
// 00516e1d  eb02                 jmp 0x516e21
// 00516e1f  33c0                 xor eax, eax
// 00516e21  85c0                 test eax, eax
// 00516e23  7518                 jne 0x516e3d
// 00516e25  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00516e29  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516e2d  55                   push ebp
// 00516e2e  51                   push ecx
// 00516e2f  53                   push ebx
// 00516e30  e86bc70000           call 0x5235a0
// 00516e35  83c40c               add esp, 0xc
// 00516e38  e9a7f2ffff           jmp 0x5160e4
// 00516e3d  b804000000           mov eax, 4
// 00516e42  b914167a00           mov ecx, 0x7a1614
// 00516e47  8bd7                 mov edx, edi
// 00516e49  8da42400000000       lea esp, [esp]
// 00516e50  8b32                 mov esi, dword ptr [edx]
// 00516e52  3b31                 cmp esi, dword ptr [ecx]
// 00516e54  7516                 jne 0x516e6c
// 00516e56  83e804               sub eax, 4
// 00516e59  83c104               add ecx, 4
// 00516e5c  83c204               add edx, 4
// 00516e5f  83f804               cmp eax, 4
// 00516e62  73ec                 jae 0x516e50
// 00516e64  85c0                 test eax, eax
// 00516e66  0f845d000000         je 0x516ec9
// 00516e6c  0fb632               movzx esi, byte ptr [edx]
// 00516e6f  0fb619               movzx ebx, byte ptr [ecx]
// 00516e72  2bf3                 sub esi, ebx
// 00516e74  7545                 jne 0x516ebb
// 00516e76  83e801               sub eax, 1
// 00516e79  83c101               add ecx, 1
// 00516e7c  83c201               add edx, 1
// 00516e7f  85c0                 test eax, eax
// 00516e81  7446                 je 0x516ec9
// 00516e83  0fb632               movzx esi, byte ptr [edx]
// 00516e86  0fb619               movzx ebx, byte ptr [ecx]
// 00516e89  2bf3                 sub esi, ebx
// 00516e8b  752e                 jne 0x516ebb
// 00516e8d  83e801               sub eax, 1
// 00516e90  83c101               add ecx, 1
// 00516e93  83c201               add edx, 1
// 00516e96  85c0                 test eax, eax
// 00516e98  742f                 je 0x516ec9
// 00516e9a  0fb632               movzx esi, byte ptr [edx]
// 00516e9d  0fb619               movzx ebx, byte ptr [ecx]
// 00516ea0  2bf3                 sub esi, ebx
// 00516ea2  7517                 jne 0x516ebb
// 00516ea4  83e801               sub eax, 1
// 00516ea7  83c101               add ecx, 1
// 00516eaa  83c201               add edx, 1
// 00516ead  85c0                 test eax, eax
// 00516eaf  7418                 je 0x516ec9
// 00516eb1  0fb632               movzx esi, byte ptr [edx]
// 00516eb4  0fb611               movzx edx, byte ptr [ecx]
// 00516eb7  2bf2                 sub esi, edx
// 00516eb9  740e                 je 0x516ec9
// 00516ebb  85f6                 test esi, esi
// 00516ebd  b801000000           mov eax, 1
// 00516ec2  7f07                 jg 0x516ecb
// 00516ec4  83c8ff               or eax, 0xffffffff
// 00516ec7  eb02                 jmp 0x516ecb
// 00516ec9  33c0                 xor eax, eax
// 00516ecb  85c0                 test eax, eax
// 00516ecd  7518                 jne 0x516ee7
// 00516ecf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00516ed3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516ed7  55                   push ebp
// 00516ed8  50                   push eax
// 00516ed9  53                   push ebx
// 00516eda  e821ba0000           call 0x522900
// 00516edf  83c40c               add esp, 0xc
// 00516ee2  e9fdf1ffff           jmp 0x5160e4
// 00516ee7  b804000000           mov eax, 4
// 00516eec  b91c167a00           mov ecx, 0x7a161c
// 00516ef1  8bd7                 mov edx, edi
// 00516ef3  8b32                 mov esi, dword ptr [edx]
// 00516ef5  3b31                 cmp esi, dword ptr [ecx]
// 00516ef7  7516                 jne 0x516f0f
// 00516ef9  83e804               sub eax, 4
// 00516efc  83c104               add ecx, 4
// 00516eff  83c204               add edx, 4
// 00516f02  83f804               cmp eax, 4
// 00516f05  73ec                 jae 0x516ef3
// 00516f07  85c0                 test eax, eax
// 00516f09  0f845d000000         je 0x516f6c
// 00516f0f  0fb619               movzx ebx, byte ptr [ecx]
// 00516f12  0fb632               movzx esi, byte ptr [edx]
// 00516f15  2bf3                 sub esi, ebx
// 00516f17  7545                 jne 0x516f5e
// 00516f19  83e801               sub eax, 1
// 00516f1c  83c101               add ecx, 1
// 00516f1f  83c201               add edx, 1
// 00516f22  85c0                 test eax, eax
// 00516f24  7446                 je 0x516f6c
// 00516f26  0fb619               movzx ebx, byte ptr [ecx]
// 00516f29  0fb632               movzx esi, byte ptr [edx]
// 00516f2c  2bf3                 sub esi, ebx
// 00516f2e  752e                 jne 0x516f5e
// 00516f30  83e801               sub eax, 1
// 00516f33  83c101               add ecx, 1
// 00516f36  83c201               add edx, 1
// 00516f39  85c0                 test eax, eax
// 00516f3b  742f                 je 0x516f6c
// 00516f3d  0fb619               movzx ebx, byte ptr [ecx]
// 00516f40  0fb632               movzx esi, byte ptr [edx]
// 00516f43  2bf3                 sub esi, ebx
// 00516f45  7517                 jne 0x516f5e
// 00516f47  83e801               sub eax, 1
// 00516f4a  83c101               add ecx, 1
// 00516f4d  83c201               add edx, 1
// 00516f50  85c0                 test eax, eax
// 00516f52  7418                 je 0x516f6c
// 00516f54  0fb609               movzx ecx, byte ptr [ecx]
// 00516f57  0fb632               movzx esi, byte ptr [edx]
// 00516f5a  2bf1                 sub esi, ecx
// 00516f5c  740e                 je 0x516f6c
// 00516f5e  85f6                 test esi, esi
// 00516f60  b801000000           mov eax, 1
// 00516f65  7f07                 jg 0x516f6e
// 00516f67  83c8ff               or eax, 0xffffffff
// 00516f6a  eb02                 jmp 0x516f6e
// 00516f6c  33c0                 xor eax, eax
// 00516f6e  85c0                 test eax, eax
// 00516f70  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00516f74  55                   push ebp
// 00516f75  7513                 jne 0x516f8a
// 00516f77  8b542420             mov edx, dword ptr [esp + 0x20]
// 00516f7b  52                   push edx
// 00516f7c  53                   push ebx
// 00516f7d  e85ec80000           call 0x5237e0
// 00516f82  83c40c               add esp, 0xc
// 00516f85  e95af1ffff           jmp 0x5160e4
// 00516f8a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00516f8e  50                   push eax
// 00516f8f  53                   push ebx
// 00516f90  e8abc90000           call 0x523940
// 00516f95  83c40c               add esp, 0xc
// 00516f98  e947f1ffff           jmp 0x5160e4
// 00516f9d  80bb2601000003       cmp byte ptr [ebx + 0x126], 3
// 00516fa4  0f854f000000         jne 0x516ff9
// 00516faa  a802                 test al, 2
// 00516fac  754b                 jne 0x516ff9
// 00516fae  68102c7a00           push 0x7a2c10
// 00516fb3  53                   push ebx
// 00516fb4  e827790000           call 0x51e8e0
// 00516fb9  83c408               add esp, 8
// 00516fbc  5f                   pop edi
// 00516fbd  5e                   pop esi
// 00516fbe  5d                   pop ebp
// 00516fbf  5b                   pop ebx
// 00516fc0  59                   pop ecx
// 00516fc1  c3                   ret 
// 00516fc2  8b742418             mov esi, dword ptr [esp + 0x18]
// 00516fc6  8b4668               mov eax, dword ptr [esi + 0x68]
// 00516fc9  a801                 test al, 1
// 00516fcb  7507                 jne 0x516fd4
// 00516fcd  682c2c7a00           push 0x7a2c2c
// 00516fd2  eb12                 jmp 0x516fe6
// 00516fd4  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 00516fdb  7512                 jne 0x516fef
// 00516fdd  a802                 test al, 2
// 00516fdf  750e                 jne 0x516fef
// 00516fe1  68102c7a00           push 0x7a2c10
// 00516fe6  56                   push esi
// 00516fe7  e8f4780000           call 0x51e8e0
// 00516fec  83c408               add esp, 8
// 00516fef  834e6804             or dword ptr [esi + 0x68], 4
// 00516ff3  89ae0c010000         mov dword ptr [esi + 0x10c], ebp
// 00516ff9  5f                   pop edi
// 00516ffa  5e                   pop esi
// 00516ffb  5d                   pop ebp
// 00516ffc  5b                   pop ebx
// 00516ffd  59                   pop ecx
// 00516ffe  c3                   ret 
// library libpng-1.2.6/pngread.c (function _png_read_info)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngread.c
