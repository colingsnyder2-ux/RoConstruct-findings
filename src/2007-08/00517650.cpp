// roc 2007-08 00517650  unit: seg_00510000  size: 3684 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00517650
//
// 00517650  51                   push ecx
// 00517651  53                   push ebx
// 00517652  55                   push ebp
// 00517653  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00517657  56                   push esi
// 00517658  57                   push edi
// 00517659  6a00                 push 0
// 0051765b  55                   push ebp
// 0051765c  e8efa00000           call 0x521750
// 00517661  83c408               add esp, 8
// 00517664  8dbd1c010000         lea edi, [ebp + 0x11c]
// 0051766a  8d9b00000000         lea ebx, [ebx]
// 00517670  6a04                 push 4
// 00517672  8d442414             lea eax, [esp + 0x14]
// 00517676  50                   push eax
// 00517677  55                   push ebp
// 00517678  e813610000           call 0x51d790
// 0051767d  8d4c241c             lea ecx, [esp + 0x1c]
// 00517681  51                   push ecx
// 00517682  55                   push ebp
// 00517683  e898a00000           call 0x521720
// 00517688  55                   push ebp
// 00517689  89442430             mov dword ptr [esp + 0x30], eax
// 0051768d  e82ed8ffff           call 0x514ec0
// 00517692  6a04                 push 4
// 00517694  57                   push edi
// 00517695  55                   push ebp
// 00517696  e805900000           call 0x5206a0
// 0051769b  83c424               add esp, 0x24
// 0051769e  b804000000           mov eax, 4
// 005176a3  b97c157a00           mov ecx, 0x7a157c
// 005176a8  8bd7                 mov edx, edi
// 005176aa  8d9b00000000         lea ebx, [ebx]
// 005176b0  8b32                 mov esi, dword ptr [edx]
// 005176b2  3b31                 cmp esi, dword ptr [ecx]
// 005176b4  7512                 jne 0x5176c8
// 005176b6  83e804               sub eax, 4
// 005176b9  83c104               add ecx, 4
// 005176bc  83c204               add edx, 4
// 005176bf  83f804               cmp eax, 4
// 005176c2  73ec                 jae 0x5176b0
// 005176c4  85c0                 test eax, eax
// 005176c6  745d                 je 0x517725
// 005176c8  0fb619               movzx ebx, byte ptr [ecx]
// 005176cb  0fb632               movzx esi, byte ptr [edx]
// 005176ce  2bf3                 sub esi, ebx
// 005176d0  7545                 jne 0x517717
// 005176d2  83e801               sub eax, 1
// 005176d5  83c101               add ecx, 1
// 005176d8  83c201               add edx, 1
// 005176db  85c0                 test eax, eax
// 005176dd  7446                 je 0x517725
// 005176df  0fb619               movzx ebx, byte ptr [ecx]
// 005176e2  0fb632               movzx esi, byte ptr [edx]
// 005176e5  2bf3                 sub esi, ebx
// 005176e7  752e                 jne 0x517717
// 005176e9  83e801               sub eax, 1
// 005176ec  83c101               add ecx, 1
// 005176ef  83c201               add edx, 1
// 005176f2  85c0                 test eax, eax
// 005176f4  742f                 je 0x517725
// 005176f6  0fb619               movzx ebx, byte ptr [ecx]
// 005176f9  0fb632               movzx esi, byte ptr [edx]
// 005176fc  2bf3                 sub esi, ebx
// 005176fe  7517                 jne 0x517717
// 00517700  83e801               sub eax, 1
// 00517703  83c101               add ecx, 1
// 00517706  83c201               add edx, 1
// 00517709  85c0                 test eax, eax
// 0051770b  7418                 je 0x517725
// 0051770d  0fb601               movzx eax, byte ptr [ecx]
// 00517710  0fb632               movzx esi, byte ptr [edx]
// 00517713  2bf0                 sub esi, eax
// 00517715  740e                 je 0x517725
// 00517717  85f6                 test esi, esi
// 00517719  b801000000           mov eax, 1
// 0051771e  7f07                 jg 0x517727
// 00517720  83c8ff               or eax, 0xffffffff
// 00517723  eb02                 jmp 0x517727
// 00517725  33c0                 xor eax, eax
// 00517727  85c0                 test eax, eax
// 00517729  7515                 jne 0x517740
// 0051772b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051772f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517733  51                   push ecx
// 00517734  52                   push edx
// 00517735  55                   push ebp
// 00517736  e8d5a00000           call 0x521810
// 0051773b  e9610d0000           jmp 0x5184a1
// 00517740  b804000000           mov eax, 4
// 00517745  b98c157a00           mov ecx, 0x7a158c
// 0051774a  8bd7                 mov edx, edi
// 0051774c  8d642400             lea esp, [esp]
// 00517750  8b32                 mov esi, dword ptr [edx]
// 00517752  3b31                 cmp esi, dword ptr [ecx]
// 00517754  7512                 jne 0x517768
// 00517756  83e804               sub eax, 4
// 00517759  83c104               add ecx, 4
// 0051775c  83c204               add edx, 4
// 0051775f  83f804               cmp eax, 4
// 00517762  73ec                 jae 0x517750
// 00517764  85c0                 test eax, eax
// 00517766  745d                 je 0x5177c5
// 00517768  0fb632               movzx esi, byte ptr [edx]
// 0051776b  0fb619               movzx ebx, byte ptr [ecx]
// 0051776e  2bf3                 sub esi, ebx
// 00517770  7545                 jne 0x5177b7
// 00517772  83e801               sub eax, 1
// 00517775  83c101               add ecx, 1
// 00517778  83c201               add edx, 1
// 0051777b  85c0                 test eax, eax
// 0051777d  7446                 je 0x5177c5
// 0051777f  0fb632               movzx esi, byte ptr [edx]
// 00517782  0fb619               movzx ebx, byte ptr [ecx]
// 00517785  2bf3                 sub esi, ebx
// 00517787  752e                 jne 0x5177b7
// 00517789  83e801               sub eax, 1
// 0051778c  83c101               add ecx, 1
// 0051778f  83c201               add edx, 1
// 00517792  85c0                 test eax, eax
// 00517794  742f                 je 0x5177c5
// 00517796  0fb632               movzx esi, byte ptr [edx]
// 00517799  0fb619               movzx ebx, byte ptr [ecx]
// 0051779c  2bf3                 sub esi, ebx
// 0051779e  7517                 jne 0x5177b7
// 005177a0  83e801               sub eax, 1
// 005177a3  83c101               add ecx, 1
// 005177a6  83c201               add edx, 1
// 005177a9  85c0                 test eax, eax
// 005177ab  7418                 je 0x5177c5
// 005177ad  0fb632               movzx esi, byte ptr [edx]
// 005177b0  0fb601               movzx eax, byte ptr [ecx]
// 005177b3  2bf0                 sub esi, eax
// 005177b5  740e                 je 0x5177c5
// 005177b7  85f6                 test esi, esi
// 005177b9  b801000000           mov eax, 1
// 005177be  7f07                 jg 0x5177c7
// 005177c0  83c8ff               or eax, 0xffffffff
// 005177c3  eb02                 jmp 0x5177c7
// 005177c5  33c0                 xor eax, eax
// 005177c7  85c0                 test eax, eax
// 005177c9  7515                 jne 0x5177e0
// 005177cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005177cf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005177d3  51                   push ecx
// 005177d4  52                   push edx
// 005177d5  55                   push ebp
// 005177d6  e845a30000           call 0x521b20
// 005177db  e9c10c0000           jmp 0x5184a1
// 005177e0  57                   push edi
// 005177e1  55                   push ebp
// 005177e2  e899dbffff           call 0x515380
// 005177e7  83c408               add esp, 8
// 005177ea  85c0                 test eax, eax
// 005177ec  b984157a00           mov ecx, 0x7a1584
// 005177f1  8bd7                 mov edx, edi
// 005177f3  b804000000           mov eax, 4
// 005177f8  0f844a010000         je 0x517948
// 005177fe  8bff                 mov edi, edi
// 00517800  8b32                 mov esi, dword ptr [edx]
// 00517802  3b31                 cmp esi, dword ptr [ecx]
// 00517804  7512                 jne 0x517818
// 00517806  83e804               sub eax, 4
// 00517809  83c104               add ecx, 4
// 0051780c  83c204               add edx, 4
// 0051780f  83f804               cmp eax, 4
// 00517812  73ec                 jae 0x517800
// 00517814  85c0                 test eax, eax
// 00517816  745d                 je 0x517875
// 00517818  0fb619               movzx ebx, byte ptr [ecx]
// 0051781b  0fb632               movzx esi, byte ptr [edx]
// 0051781e  2bf3                 sub esi, ebx
// 00517820  7545                 jne 0x517867
// 00517822  83e801               sub eax, 1
// 00517825  83c101               add ecx, 1
// 00517828  83c201               add edx, 1
// 0051782b  85c0                 test eax, eax
// 0051782d  7446                 je 0x517875
// 0051782f  0fb619               movzx ebx, byte ptr [ecx]
// 00517832  0fb632               movzx esi, byte ptr [edx]
// 00517835  2bf3                 sub esi, ebx
// 00517837  752e                 jne 0x517867
// 00517839  83e801               sub eax, 1
// 0051783c  83c101               add ecx, 1
// 0051783f  83c201               add edx, 1
// 00517842  85c0                 test eax, eax
// 00517844  742f                 je 0x517875
// 00517846  0fb619               movzx ebx, byte ptr [ecx]
// 00517849  0fb632               movzx esi, byte ptr [edx]
// 0051784c  2bf3                 sub esi, ebx
// 0051784e  7517                 jne 0x517867
// 00517850  83e801               sub eax, 1
// 00517853  83c101               add ecx, 1
// 00517856  83c201               add edx, 1
// 00517859  85c0                 test eax, eax
// 0051785b  7418                 je 0x517875
// 0051785d  0fb601               movzx eax, byte ptr [ecx]
// 00517860  0fb632               movzx esi, byte ptr [edx]
// 00517863  2bf0                 sub esi, eax
// 00517865  740e                 je 0x517875
// 00517867  85f6                 test esi, esi
// 00517869  b801000000           mov eax, 1
// 0051786e  7f07                 jg 0x517877
// 00517870  83c8ff               or eax, 0xffffffff
// 00517873  eb02                 jmp 0x517877
// 00517875  33c0                 xor eax, eax
// 00517877  85c0                 test eax, eax
// 00517879  751c                 jne 0x517897
// 0051787b  39442418             cmp dword ptr [esp + 0x18], eax
// 0051787f  7706                 ja 0x517887
// 00517881  f6456808             test byte ptr [ebp + 0x68], 8
// 00517885  7414                 je 0x51789b
// 00517887  68302d7a00           push 0x7a2d30
// 0051788c  55                   push ebp
// 0051788d  e84e700000           call 0x51e8e0
// 00517892  83c408               add esp, 8
// 00517895  eb04                 jmp 0x51789b
// 00517897  834d6808             or dword ptr [ebp + 0x68], 8
// 0051789b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051789f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005178a3  51                   push ecx
// 005178a4  52                   push edx
// 005178a5  55                   push ebp
// 005178a6  e895c00000           call 0x523940
// 005178ab  83c40c               add esp, 0xc
// 005178ae  b804000000           mov eax, 4
// 005178b3  b994157a00           mov ecx, 0x7a1594
// 005178b8  8bd7                 mov edx, edi
// 005178ba  8d9b00000000         lea ebx, [ebx]
// 005178c0  8b32                 mov esi, dword ptr [edx]
// 005178c2  3b31                 cmp esi, dword ptr [ecx]
// 005178c4  7512                 jne 0x5178d8
// 005178c6  83e804               sub eax, 4
// 005178c9  83c104               add ecx, 4
// 005178cc  83c204               add edx, 4
// 005178cf  83f804               cmp eax, 4
// 005178d2  73ec                 jae 0x5178c0
// 005178d4  85c0                 test eax, eax
// 005178d6  745d                 je 0x517935
// 005178d8  0fb632               movzx esi, byte ptr [edx]
// 005178db  0fb619               movzx ebx, byte ptr [ecx]
// 005178de  2bf3                 sub esi, ebx
// 005178e0  7545                 jne 0x517927
// 005178e2  83e801               sub eax, 1
// 005178e5  83c101               add ecx, 1
// 005178e8  83c201               add edx, 1
// 005178eb  85c0                 test eax, eax
// 005178ed  7446                 je 0x517935
// 005178ef  0fb632               movzx esi, byte ptr [edx]
// 005178f2  0fb619               movzx ebx, byte ptr [ecx]
// 005178f5  2bf3                 sub esi, ebx
// 005178f7  752e                 jne 0x517927
// 005178f9  83e801               sub eax, 1
// 005178fc  83c101               add ecx, 1
// 005178ff  83c201               add edx, 1
// 00517902  85c0                 test eax, eax
// 00517904  742f                 je 0x517935
// 00517906  0fb632               movzx esi, byte ptr [edx]
// 00517909  0fb619               movzx ebx, byte ptr [ecx]
// 0051790c  2bf3                 sub esi, ebx
// 0051790e  7517                 jne 0x517927
// 00517910  83e801               sub eax, 1
// 00517913  83c101               add ecx, 1
// 00517916  83c201               add edx, 1
// 00517919  85c0                 test eax, eax
// 0051791b  7418                 je 0x517935
// 0051791d  0fb632               movzx esi, byte ptr [edx]
// 00517920  0fb601               movzx eax, byte ptr [ecx]
// 00517923  2bf0                 sub esi, eax
// 00517925  740e                 je 0x517935
// 00517927  85f6                 test esi, esi
// 00517929  b801000000           mov eax, 1
// 0051792e  7f07                 jg 0x517937
// 00517930  83c8ff               or eax, 0xffffffff
// 00517933  eb02                 jmp 0x517937
// 00517935  33c0                 xor eax, eax
// 00517937  85c0                 test eax, eax
// 00517939  0f85650b0000         jne 0x5184a4
// 0051793f  834d6802             or dword ptr [ebp + 0x68], 2
// 00517943  e95c0b0000           jmp 0x5184a4
// 00517948  8b32                 mov esi, dword ptr [edx]
// 0051794a  3b31                 cmp esi, dword ptr [ecx]
// 0051794c  7512                 jne 0x517960
// 0051794e  83e804               sub eax, 4
// 00517951  83c104               add ecx, 4
// 00517954  83c204               add edx, 4
// 00517957  83f804               cmp eax, 4
// 0051795a  73ec                 jae 0x517948
// 0051795c  85c0                 test eax, eax
// 0051795e  745d                 je 0x5179bd
// 00517960  0fb619               movzx ebx, byte ptr [ecx]
// 00517963  0fb632               movzx esi, byte ptr [edx]
// 00517966  2bf3                 sub esi, ebx
// 00517968  7545                 jne 0x5179af
// 0051796a  83e801               sub eax, 1
// 0051796d  83c101               add ecx, 1
// 00517970  83c201               add edx, 1
// 00517973  85c0                 test eax, eax
// 00517975  7446                 je 0x5179bd
// 00517977  0fb619               movzx ebx, byte ptr [ecx]
// 0051797a  0fb632               movzx esi, byte ptr [edx]
// 0051797d  2bf3                 sub esi, ebx
// 0051797f  752e                 jne 0x5179af
// 00517981  83e801               sub eax, 1
// 00517984  83c101               add ecx, 1
// 00517987  83c201               add edx, 1
// 0051798a  85c0                 test eax, eax
// 0051798c  742f                 je 0x5179bd
// 0051798e  0fb619               movzx ebx, byte ptr [ecx]
// 00517991  0fb632               movzx esi, byte ptr [edx]
// 00517994  2bf3                 sub esi, ebx
// 00517996  7517                 jne 0x5179af
// 00517998  83e801               sub eax, 1
// 0051799b  83c101               add ecx, 1
// 0051799e  83c201               add edx, 1
// 005179a1  85c0                 test eax, eax
// 005179a3  7418                 je 0x5179bd
// 005179a5  0fb609               movzx ecx, byte ptr [ecx]
// 005179a8  0fb632               movzx esi, byte ptr [edx]
// 005179ab  2bf1                 sub esi, ecx
// 005179ad  740e                 je 0x5179bd
// 005179af  85f6                 test esi, esi
// 005179b1  b801000000           mov eax, 1
// 005179b6  7f07                 jg 0x5179bf
// 005179b8  83c8ff               or eax, 0xffffffff
// 005179bb  eb02                 jmp 0x5179bf
// 005179bd  33c0                 xor eax, eax
// 005179bf  85c0                 test eax, eax
// 005179c1  752b                 jne 0x5179ee
// 005179c3  8b742418             mov esi, dword ptr [esp + 0x18]
// 005179c7  85f6                 test esi, esi
// 005179c9  7706                 ja 0x5179d1
// 005179cb  f6456808             test byte ptr [ebp + 0x68], 8
// 005179cf  740e                 je 0x5179df
// 005179d1  68302d7a00           push 0x7a2d30
// 005179d6  55                   push ebp
// 005179d7  e8046f0000           call 0x51e8e0
// 005179dc  83c408               add esp, 8
// 005179df  56                   push esi
// 005179e0  55                   push ebp
// 005179e1  e86a9d0000           call 0x521750
// 005179e6  83c408               add esp, 8
// 005179e9  e9b60a0000           jmp 0x5184a4
// 005179ee  b804000000           mov eax, 4
// 005179f3  b994157a00           mov ecx, 0x7a1594
// 005179f8  8bd7                 mov edx, edi
// 005179fa  8d9b00000000         lea ebx, [ebx]
// 00517a00  8b32                 mov esi, dword ptr [edx]
// 00517a02  3b31                 cmp esi, dword ptr [ecx]
// 00517a04  7512                 jne 0x517a18
// 00517a06  83e804               sub eax, 4
// 00517a09  83c104               add ecx, 4
// 00517a0c  83c204               add edx, 4
// 00517a0f  83f804               cmp eax, 4
// 00517a12  73ec                 jae 0x517a00
// 00517a14  85c0                 test eax, eax
// 00517a16  745d                 je 0x517a75
// 00517a18  0fb632               movzx esi, byte ptr [edx]
// 00517a1b  0fb619               movzx ebx, byte ptr [ecx]
// 00517a1e  2bf3                 sub esi, ebx
// 00517a20  7545                 jne 0x517a67
// 00517a22  83e801               sub eax, 1
// 00517a25  83c101               add ecx, 1
// 00517a28  83c201               add edx, 1
// 00517a2b  85c0                 test eax, eax
// 00517a2d  7446                 je 0x517a75
// 00517a2f  0fb632               movzx esi, byte ptr [edx]
// 00517a32  0fb619               movzx ebx, byte ptr [ecx]
// 00517a35  2bf3                 sub esi, ebx
// 00517a37  752e                 jne 0x517a67
// 00517a39  83e801               sub eax, 1
// 00517a3c  83c101               add ecx, 1
// 00517a3f  83c201               add edx, 1
// 00517a42  85c0                 test eax, eax
// 00517a44  742f                 je 0x517a75
// 00517a46  0fb632               movzx esi, byte ptr [edx]
// 00517a49  0fb619               movzx ebx, byte ptr [ecx]
// 00517a4c  2bf3                 sub esi, ebx
// 00517a4e  7517                 jne 0x517a67
// 00517a50  83e801               sub eax, 1
// 00517a53  83c101               add ecx, 1
// 00517a56  83c201               add edx, 1
// 00517a59  85c0                 test eax, eax
// 00517a5b  7418                 je 0x517a75
// 00517a5d  0fb632               movzx esi, byte ptr [edx]
// 00517a60  0fb611               movzx edx, byte ptr [ecx]
// 00517a63  2bf2                 sub esi, edx
// 00517a65  740e                 je 0x517a75
// 00517a67  85f6                 test esi, esi
// 00517a69  b801000000           mov eax, 1
// 00517a6e  7f07                 jg 0x517a77
// 00517a70  83c8ff               or eax, 0xffffffff
// 00517a73  eb02                 jmp 0x517a77
// 00517a75  33c0                 xor eax, eax
// 00517a77  85c0                 test eax, eax
// 00517a79  7515                 jne 0x517a90
// 00517a7b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00517a7f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00517a83  50                   push eax
// 00517a84  51                   push ecx
// 00517a85  55                   push ebp
// 00517a86  e8059f0000           call 0x521990
// 00517a8b  e9110a0000           jmp 0x5184a1
// 00517a90  b804000000           mov eax, 4
// 00517a95  b99c157a00           mov ecx, 0x7a159c
// 00517a9a  8bd7                 mov edx, edi
// 00517a9c  8d642400             lea esp, [esp]
// 00517aa0  8b32                 mov esi, dword ptr [edx]
// 00517aa2  3b31                 cmp esi, dword ptr [ecx]
// 00517aa4  7512                 jne 0x517ab8
// 00517aa6  83e804               sub eax, 4
// 00517aa9  83c104               add ecx, 4
// 00517aac  83c204               add edx, 4
// 00517aaf  83f804               cmp eax, 4
// 00517ab2  73ec                 jae 0x517aa0
// 00517ab4  85c0                 test eax, eax
// 00517ab6  745d                 je 0x517b15
// 00517ab8  0fb619               movzx ebx, byte ptr [ecx]
// 00517abb  0fb632               movzx esi, byte ptr [edx]
// 00517abe  2bf3                 sub esi, ebx
// 00517ac0  7545                 jne 0x517b07
// 00517ac2  83e801               sub eax, 1
// 00517ac5  83c101               add ecx, 1
// 00517ac8  83c201               add edx, 1
// 00517acb  85c0                 test eax, eax
// 00517acd  7446                 je 0x517b15
// 00517acf  0fb619               movzx ebx, byte ptr [ecx]
// 00517ad2  0fb632               movzx esi, byte ptr [edx]
// 00517ad5  2bf3                 sub esi, ebx
// 00517ad7  752e                 jne 0x517b07
// 00517ad9  83e801               sub eax, 1
// 00517adc  83c101               add ecx, 1
// 00517adf  83c201               add edx, 1
// 00517ae2  85c0                 test eax, eax
// 00517ae4  742f                 je 0x517b15
// 00517ae6  0fb619               movzx ebx, byte ptr [ecx]
// 00517ae9  0fb632               movzx esi, byte ptr [edx]
// 00517aec  2bf3                 sub esi, ebx
// 00517aee  7517                 jne 0x517b07
// 00517af0  83e801               sub eax, 1
// 00517af3  83c101               add ecx, 1
// 00517af6  83c201               add edx, 1
// 00517af9  85c0                 test eax, eax
// 00517afb  7418                 je 0x517b15
// 00517afd  0fb601               movzx eax, byte ptr [ecx]
// 00517b00  0fb632               movzx esi, byte ptr [edx]
// 00517b03  2bf0                 sub esi, eax
// 00517b05  740e                 je 0x517b15
// 00517b07  85f6                 test esi, esi
// 00517b09  b801000000           mov eax, 1
// 00517b0e  7f07                 jg 0x517b17
// 00517b10  83c8ff               or eax, 0xffffffff
// 00517b13  eb02                 jmp 0x517b17
// 00517b15  33c0                 xor eax, eax
// 00517b17  85c0                 test eax, eax
// 00517b19  7515                 jne 0x517b30
// 00517b1b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517b1f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517b23  51                   push ecx
// 00517b24  52                   push edx
// 00517b25  55                   push ebp
// 00517b26  e825b00000           call 0x522b50
// 00517b2b  e971090000           jmp 0x5184a1
// 00517b30  b804000000           mov eax, 4
// 00517b35  b9a4157a00           mov ecx, 0x7a15a4
// 00517b3a  8bd7                 mov edx, edi
// 00517b3c  8d642400             lea esp, [esp]
// 00517b40  8b32                 mov esi, dword ptr [edx]
// 00517b42  3b31                 cmp esi, dword ptr [ecx]
// 00517b44  7512                 jne 0x517b58
// 00517b46  83e804               sub eax, 4
// 00517b49  83c104               add ecx, 4
// 00517b4c  83c204               add edx, 4
// 00517b4f  83f804               cmp eax, 4
// 00517b52  73ec                 jae 0x517b40
// 00517b54  85c0                 test eax, eax
// 00517b56  745d                 je 0x517bb5
// 00517b58  0fb632               movzx esi, byte ptr [edx]
// 00517b5b  0fb619               movzx ebx, byte ptr [ecx]
// 00517b5e  2bf3                 sub esi, ebx
// 00517b60  7545                 jne 0x517ba7
// 00517b62  83e801               sub eax, 1
// 00517b65  83c101               add ecx, 1
// 00517b68  83c201               add edx, 1
// 00517b6b  85c0                 test eax, eax
// 00517b6d  7446                 je 0x517bb5
// 00517b6f  0fb632               movzx esi, byte ptr [edx]
// 00517b72  0fb619               movzx ebx, byte ptr [ecx]
// 00517b75  2bf3                 sub esi, ebx
// 00517b77  752e                 jne 0x517ba7
// 00517b79  83e801               sub eax, 1
// 00517b7c  83c101               add ecx, 1
// 00517b7f  83c201               add edx, 1
// 00517b82  85c0                 test eax, eax
// 00517b84  742f                 je 0x517bb5
// 00517b86  0fb632               movzx esi, byte ptr [edx]
// 00517b89  0fb619               movzx ebx, byte ptr [ecx]
// 00517b8c  2bf3                 sub esi, ebx
// 00517b8e  7517                 jne 0x517ba7
// 00517b90  83e801               sub eax, 1
// 00517b93  83c101               add ecx, 1
// 00517b96  83c201               add edx, 1
// 00517b99  85c0                 test eax, eax
// 00517b9b  7418                 je 0x517bb5
// 00517b9d  0fb632               movzx esi, byte ptr [edx]
// 00517ba0  0fb601               movzx eax, byte ptr [ecx]
// 00517ba3  2bf0                 sub esi, eax
// 00517ba5  740e                 je 0x517bb5
// 00517ba7  85f6                 test esi, esi
// 00517ba9  b801000000           mov eax, 1
// 00517bae  7f07                 jg 0x517bb7
// 00517bb0  83c8ff               or eax, 0xffffffff
// 00517bb3  eb02                 jmp 0x517bb7
// 00517bb5  33c0                 xor eax, eax
// 00517bb7  85c0                 test eax, eax
// 00517bb9  7515                 jne 0x517bd0
// 00517bbb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517bbf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517bc3  51                   push ecx
// 00517bc4  52                   push edx
// 00517bc5  55                   push ebp
// 00517bc6  e885a20000           call 0x521e50
// 00517bcb  e9d1080000           jmp 0x5184a1
// 00517bd0  b804000000           mov eax, 4
// 00517bd5  b9ac157a00           mov ecx, 0x7a15ac
// 00517bda  8bd7                 mov edx, edi
// 00517bdc  8d642400             lea esp, [esp]
// 00517be0  8b32                 mov esi, dword ptr [edx]
// 00517be2  3b31                 cmp esi, dword ptr [ecx]
// 00517be4  7512                 jne 0x517bf8
// 00517be6  83e804               sub eax, 4
// 00517be9  83c104               add ecx, 4
// 00517bec  83c204               add edx, 4
// 00517bef  83f804               cmp eax, 4
// 00517bf2  73ec                 jae 0x517be0
// 00517bf4  85c0                 test eax, eax
// 00517bf6  745d                 je 0x517c55
// 00517bf8  0fb619               movzx ebx, byte ptr [ecx]
// 00517bfb  0fb632               movzx esi, byte ptr [edx]
// 00517bfe  2bf3                 sub esi, ebx
// 00517c00  7545                 jne 0x517c47
// 00517c02  83e801               sub eax, 1
// 00517c05  83c101               add ecx, 1
// 00517c08  83c201               add edx, 1
// 00517c0b  85c0                 test eax, eax
// 00517c0d  7446                 je 0x517c55
// 00517c0f  0fb619               movzx ebx, byte ptr [ecx]
// 00517c12  0fb632               movzx esi, byte ptr [edx]
// 00517c15  2bf3                 sub esi, ebx
// 00517c17  752e                 jne 0x517c47
// 00517c19  83e801               sub eax, 1
// 00517c1c  83c101               add ecx, 1
// 00517c1f  83c201               add edx, 1
// 00517c22  85c0                 test eax, eax
// 00517c24  742f                 je 0x517c55
// 00517c26  0fb619               movzx ebx, byte ptr [ecx]
// 00517c29  0fb632               movzx esi, byte ptr [edx]
// 00517c2c  2bf3                 sub esi, ebx
// 00517c2e  7517                 jne 0x517c47
// 00517c30  83e801               sub eax, 1
// 00517c33  83c101               add ecx, 1
// 00517c36  83c201               add edx, 1
// 00517c39  85c0                 test eax, eax
// 00517c3b  7418                 je 0x517c55
// 00517c3d  0fb601               movzx eax, byte ptr [ecx]
// 00517c40  0fb632               movzx esi, byte ptr [edx]
// 00517c43  2bf0                 sub esi, eax
// 00517c45  740e                 je 0x517c55
// 00517c47  85f6                 test esi, esi
// 00517c49  b801000000           mov eax, 1
// 00517c4e  7f07                 jg 0x517c57
// 00517c50  83c8ff               or eax, 0xffffffff
// 00517c53  eb02                 jmp 0x517c57
// 00517c55  33c0                 xor eax, eax
// 00517c57  85c0                 test eax, eax
// 00517c59  7515                 jne 0x517c70
// 00517c5b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517c5f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517c63  51                   push ecx
// 00517c64  52                   push edx
// 00517c65  55                   push ebp
// 00517c66  e8059f0000           call 0x521b70
// 00517c6b  e931080000           jmp 0x5184a1
// 00517c70  b804000000           mov eax, 4
// 00517c75  b9b4157a00           mov ecx, 0x7a15b4
// 00517c7a  8bd7                 mov edx, edi
// 00517c7c  8d642400             lea esp, [esp]
// 00517c80  8b32                 mov esi, dword ptr [edx]
// 00517c82  3b31                 cmp esi, dword ptr [ecx]
// 00517c84  7512                 jne 0x517c98
// 00517c86  83e804               sub eax, 4
// 00517c89  83c104               add ecx, 4
// 00517c8c  83c204               add edx, 4
// 00517c8f  83f804               cmp eax, 4
// 00517c92  73ec                 jae 0x517c80
// 00517c94  85c0                 test eax, eax
// 00517c96  745d                 je 0x517cf5
// 00517c98  0fb632               movzx esi, byte ptr [edx]
// 00517c9b  0fb619               movzx ebx, byte ptr [ecx]
// 00517c9e  2bf3                 sub esi, ebx
// 00517ca0  7545                 jne 0x517ce7
// 00517ca2  83e801               sub eax, 1
// 00517ca5  83c101               add ecx, 1
// 00517ca8  83c201               add edx, 1
// 00517cab  85c0                 test eax, eax
// 00517cad  7446                 je 0x517cf5
// 00517caf  0fb632               movzx esi, byte ptr [edx]
// 00517cb2  0fb619               movzx ebx, byte ptr [ecx]
// 00517cb5  2bf3                 sub esi, ebx
// 00517cb7  752e                 jne 0x517ce7
// 00517cb9  83e801               sub eax, 1
// 00517cbc  83c101               add ecx, 1
// 00517cbf  83c201               add edx, 1
// 00517cc2  85c0                 test eax, eax
// 00517cc4  742f                 je 0x517cf5
// 00517cc6  0fb632               movzx esi, byte ptr [edx]
// 00517cc9  0fb619               movzx ebx, byte ptr [ecx]
// 00517ccc  2bf3                 sub esi, ebx
// 00517cce  7517                 jne 0x517ce7
// 00517cd0  83e801               sub eax, 1
// 00517cd3  83c101               add ecx, 1
// 00517cd6  83c201               add edx, 1
// 00517cd9  85c0                 test eax, eax
// 00517cdb  7418                 je 0x517cf5
// 00517cdd  0fb632               movzx esi, byte ptr [edx]
// 00517ce0  0fb601               movzx eax, byte ptr [ecx]
// 00517ce3  2bf0                 sub esi, eax
// 00517ce5  740e                 je 0x517cf5
// 00517ce7  85f6                 test esi, esi
// 00517ce9  b801000000           mov eax, 1
// 00517cee  7f07                 jg 0x517cf7
// 00517cf0  83c8ff               or eax, 0xffffffff
// 00517cf3  eb02                 jmp 0x517cf7
// 00517cf5  33c0                 xor eax, eax
// 00517cf7  85c0                 test eax, eax
// 00517cf9  7515                 jne 0x517d10
// 00517cfb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517cff  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517d03  51                   push ecx
// 00517d04  52                   push edx
// 00517d05  55                   push ebp
// 00517d06  e885b00000           call 0x522d90
// 00517d0b  e991070000           jmp 0x5184a1
// 00517d10  b804000000           mov eax, 4
// 00517d15  b9cc157a00           mov ecx, 0x7a15cc
// 00517d1a  8bd7                 mov edx, edi
// 00517d1c  8d642400             lea esp, [esp]
// 00517d20  8b32                 mov esi, dword ptr [edx]
// 00517d22  3b31                 cmp esi, dword ptr [ecx]
// 00517d24  7512                 jne 0x517d38
// 00517d26  83e804               sub eax, 4
// 00517d29  83c104               add ecx, 4
// 00517d2c  83c204               add edx, 4
// 00517d2f  83f804               cmp eax, 4
// 00517d32  73ec                 jae 0x517d20
// 00517d34  85c0                 test eax, eax
// 00517d36  745d                 je 0x517d95
// 00517d38  0fb619               movzx ebx, byte ptr [ecx]
// 00517d3b  0fb632               movzx esi, byte ptr [edx]
// 00517d3e  2bf3                 sub esi, ebx
// 00517d40  7545                 jne 0x517d87
// 00517d42  83e801               sub eax, 1
// 00517d45  83c101               add ecx, 1
// 00517d48  83c201               add edx, 1
// 00517d4b  85c0                 test eax, eax
// 00517d4d  7446                 je 0x517d95
// 00517d4f  0fb619               movzx ebx, byte ptr [ecx]
// 00517d52  0fb632               movzx esi, byte ptr [edx]
// 00517d55  2bf3                 sub esi, ebx
// 00517d57  752e                 jne 0x517d87
// 00517d59  83e801               sub eax, 1
// 00517d5c  83c101               add ecx, 1
// 00517d5f  83c201               add edx, 1
// 00517d62  85c0                 test eax, eax
// 00517d64  742f                 je 0x517d95
// 00517d66  0fb619               movzx ebx, byte ptr [ecx]
// 00517d69  0fb632               movzx esi, byte ptr [edx]
// 00517d6c  2bf3                 sub esi, ebx
// 00517d6e  7517                 jne 0x517d87
// 00517d70  83e801               sub eax, 1
// 00517d73  83c101               add ecx, 1
// 00517d76  83c201               add edx, 1
// 00517d79  85c0                 test eax, eax
// 00517d7b  7418                 je 0x517d95
// 00517d7d  0fb601               movzx eax, byte ptr [ecx]
// 00517d80  0fb632               movzx esi, byte ptr [edx]
// 00517d83  2bf0                 sub esi, eax
// 00517d85  740e                 je 0x517d95
// 00517d87  85f6                 test esi, esi
// 00517d89  b801000000           mov eax, 1
// 00517d8e  7f07                 jg 0x517d97
// 00517d90  83c8ff               or eax, 0xffffffff
// 00517d93  eb02                 jmp 0x517d97
// 00517d95  33c0                 xor eax, eax
// 00517d97  85c0                 test eax, eax
// 00517d99  7515                 jne 0x517db0
// 00517d9b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517d9f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517da3  51                   push ecx
// 00517da4  52                   push edx
// 00517da5  55                   push ebp
// 00517da6  e8a5b20000           call 0x523050
// 00517dab  e9f1060000           jmp 0x5184a1
// 00517db0  b804000000           mov eax, 4
// 00517db5  b9d4157a00           mov ecx, 0x7a15d4
// 00517dba  8bd7                 mov edx, edi
// 00517dbc  8d642400             lea esp, [esp]
// 00517dc0  8b32                 mov esi, dword ptr [edx]
// 00517dc2  3b31                 cmp esi, dword ptr [ecx]
// 00517dc4  7512                 jne 0x517dd8
// 00517dc6  83e804               sub eax, 4
// 00517dc9  83c104               add ecx, 4
// 00517dcc  83c204               add edx, 4
// 00517dcf  83f804               cmp eax, 4
// 00517dd2  73ec                 jae 0x517dc0
// 00517dd4  85c0                 test eax, eax
// 00517dd6  745d                 je 0x517e35
// 00517dd8  0fb632               movzx esi, byte ptr [edx]
// 00517ddb  0fb619               movzx ebx, byte ptr [ecx]
// 00517dde  2bf3                 sub esi, ebx
// 00517de0  7545                 jne 0x517e27
// 00517de2  83e801               sub eax, 1
// 00517de5  83c101               add ecx, 1
// 00517de8  83c201               add edx, 1
// 00517deb  85c0                 test eax, eax
// 00517ded  7446                 je 0x517e35
// 00517def  0fb632               movzx esi, byte ptr [edx]
// 00517df2  0fb619               movzx ebx, byte ptr [ecx]
// 00517df5  2bf3                 sub esi, ebx
// 00517df7  752e                 jne 0x517e27
// 00517df9  83e801               sub eax, 1
// 00517dfc  83c101               add ecx, 1
// 00517dff  83c201               add edx, 1
// 00517e02  85c0                 test eax, eax
// 00517e04  742f                 je 0x517e35
// 00517e06  0fb632               movzx esi, byte ptr [edx]
// 00517e09  0fb619               movzx ebx, byte ptr [ecx]
// 00517e0c  2bf3                 sub esi, ebx
// 00517e0e  7517                 jne 0x517e27
// 00517e10  83e801               sub eax, 1
// 00517e13  83c101               add ecx, 1
// 00517e16  83c201               add edx, 1
// 00517e19  85c0                 test eax, eax
// 00517e1b  7418                 je 0x517e35
// 00517e1d  0fb632               movzx esi, byte ptr [edx]
// 00517e20  0fb601               movzx eax, byte ptr [ecx]
// 00517e23  2bf0                 sub esi, eax
// 00517e25  740e                 je 0x517e35
// 00517e27  85f6                 test esi, esi
// 00517e29  b801000000           mov eax, 1
// 00517e2e  7f07                 jg 0x517e37
// 00517e30  83c8ff               or eax, 0xffffffff
// 00517e33  eb02                 jmp 0x517e37
// 00517e35  33c0                 xor eax, eax
// 00517e37  85c0                 test eax, eax
// 00517e39  7515                 jne 0x517e50
// 00517e3b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517e3f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517e43  51                   push ecx
// 00517e44  52                   push edx
// 00517e45  55                   push ebp
// 00517e46  e835b30000           call 0x523180
// 00517e4b  e951060000           jmp 0x5184a1
// 00517e50  b804000000           mov eax, 4
// 00517e55  b9dc157a00           mov ecx, 0x7a15dc
// 00517e5a  8bd7                 mov edx, edi
// 00517e5c  8d642400             lea esp, [esp]
// 00517e60  8b32                 mov esi, dword ptr [edx]
// 00517e62  3b31                 cmp esi, dword ptr [ecx]
// 00517e64  7512                 jne 0x517e78
// 00517e66  83e804               sub eax, 4
// 00517e69  83c104               add ecx, 4
// 00517e6c  83c204               add edx, 4
// 00517e6f  83f804               cmp eax, 4
// 00517e72  73ec                 jae 0x517e60
// 00517e74  85c0                 test eax, eax
// 00517e76  745d                 je 0x517ed5
// 00517e78  0fb619               movzx ebx, byte ptr [ecx]
// 00517e7b  0fb632               movzx esi, byte ptr [edx]
// 00517e7e  2bf3                 sub esi, ebx
// 00517e80  7545                 jne 0x517ec7
// 00517e82  83e801               sub eax, 1
// 00517e85  83c101               add ecx, 1
// 00517e88  83c201               add edx, 1
// 00517e8b  85c0                 test eax, eax
// 00517e8d  7446                 je 0x517ed5
// 00517e8f  0fb619               movzx ebx, byte ptr [ecx]
// 00517e92  0fb632               movzx esi, byte ptr [edx]
// 00517e95  2bf3                 sub esi, ebx
// 00517e97  752e                 jne 0x517ec7
// 00517e99  83e801               sub eax, 1
// 00517e9c  83c101               add ecx, 1
// 00517e9f  83c201               add edx, 1
// 00517ea2  85c0                 test eax, eax
// 00517ea4  742f                 je 0x517ed5
// 00517ea6  0fb619               movzx ebx, byte ptr [ecx]
// 00517ea9  0fb632               movzx esi, byte ptr [edx]
// 00517eac  2bf3                 sub esi, ebx
// 00517eae  7517                 jne 0x517ec7
// 00517eb0  83e801               sub eax, 1
// 00517eb3  83c101               add ecx, 1
// 00517eb6  83c201               add edx, 1
// 00517eb9  85c0                 test eax, eax
// 00517ebb  7418                 je 0x517ed5
// 00517ebd  0fb601               movzx eax, byte ptr [ecx]
// 00517ec0  0fb632               movzx esi, byte ptr [edx]
// 00517ec3  2bf0                 sub esi, eax
// 00517ec5  740e                 je 0x517ed5
// 00517ec7  85f6                 test esi, esi
// 00517ec9  b801000000           mov eax, 1
// 00517ece  7f07                 jg 0x517ed7
// 00517ed0  83c8ff               or eax, 0xffffffff
// 00517ed3  eb02                 jmp 0x517ed7
// 00517ed5  33c0                 xor eax, eax
// 00517ed7  85c0                 test eax, eax
// 00517ed9  7515                 jne 0x517ef0
// 00517edb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517edf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517ee3  51                   push ecx
// 00517ee4  52                   push edx
// 00517ee5  55                   push ebp
// 00517ee6  e8f5b40000           call 0x5233e0
// 00517eeb  e9b1050000           jmp 0x5184a1
// 00517ef0  b804000000           mov eax, 4
// 00517ef5  b9e4157a00           mov ecx, 0x7a15e4
// 00517efa  8bd7                 mov edx, edi
// 00517efc  8d642400             lea esp, [esp]
// 00517f00  8b32                 mov esi, dword ptr [edx]
// 00517f02  3b31                 cmp esi, dword ptr [ecx]
// 00517f04  7512                 jne 0x517f18
// 00517f06  83e804               sub eax, 4
// 00517f09  83c104               add ecx, 4
// 00517f0c  83c204               add edx, 4
// 00517f0f  83f804               cmp eax, 4
// 00517f12  73ec                 jae 0x517f00
// 00517f14  85c0                 test eax, eax
// 00517f16  745d                 je 0x517f75
// 00517f18  0fb632               movzx esi, byte ptr [edx]
// 00517f1b  0fb619               movzx ebx, byte ptr [ecx]
// 00517f1e  2bf3                 sub esi, ebx
// 00517f20  7545                 jne 0x517f67
// 00517f22  83e801               sub eax, 1
// 00517f25  83c101               add ecx, 1
// 00517f28  83c201               add edx, 1
// 00517f2b  85c0                 test eax, eax
// 00517f2d  7446                 je 0x517f75
// 00517f2f  0fb632               movzx esi, byte ptr [edx]
// 00517f32  0fb619               movzx ebx, byte ptr [ecx]
// 00517f35  2bf3                 sub esi, ebx
// 00517f37  752e                 jne 0x517f67
// 00517f39  83e801               sub eax, 1
// 00517f3c  83c101               add ecx, 1
// 00517f3f  83c201               add edx, 1
// 00517f42  85c0                 test eax, eax
// 00517f44  742f                 je 0x517f75
// 00517f46  0fb632               movzx esi, byte ptr [edx]
// 00517f49  0fb619               movzx ebx, byte ptr [ecx]
// 00517f4c  2bf3                 sub esi, ebx
// 00517f4e  7517                 jne 0x517f67
// 00517f50  83e801               sub eax, 1
// 00517f53  83c101               add ecx, 1
// 00517f56  83c201               add edx, 1
// 00517f59  85c0                 test eax, eax
// 00517f5b  7418                 je 0x517f75
// 00517f5d  0fb632               movzx esi, byte ptr [edx]
// 00517f60  0fb601               movzx eax, byte ptr [ecx]
// 00517f63  2bf0                 sub esi, eax
// 00517f65  740e                 je 0x517f75
// 00517f67  85f6                 test esi, esi
// 00517f69  b801000000           mov eax, 1
// 00517f6e  7f07                 jg 0x517f77
// 00517f70  83c8ff               or eax, 0xffffffff
// 00517f73  eb02                 jmp 0x517f77
// 00517f75  33c0                 xor eax, eax
// 00517f77  85c0                 test eax, eax
// 00517f79  7515                 jne 0x517f90
// 00517f7b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00517f7f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00517f83  51                   push ecx
// 00517f84  52                   push edx
// 00517f85  55                   push ebp
// 00517f86  e8a5af0000           call 0x522f30
// 00517f8b  e911050000           jmp 0x5184a1
// 00517f90  b804000000           mov eax, 4
// 00517f95  b9ec157a00           mov ecx, 0x7a15ec
// 00517f9a  8bd7                 mov edx, edi
// 00517f9c  8d642400             lea esp, [esp]
// 00517fa0  8b32                 mov esi, dword ptr [edx]
// 00517fa2  3b31                 cmp esi, dword ptr [ecx]
// 00517fa4  7512                 jne 0x517fb8
// 00517fa6  83e804               sub eax, 4
// 00517fa9  83c104               add ecx, 4
// 00517fac  83c204               add edx, 4
// 00517faf  83f804               cmp eax, 4
// 00517fb2  73ec                 jae 0x517fa0
// 00517fb4  85c0                 test eax, eax
// 00517fb6  745d                 je 0x518015
// 00517fb8  0fb619               movzx ebx, byte ptr [ecx]
// 00517fbb  0fb632               movzx esi, byte ptr [edx]
// 00517fbe  2bf3                 sub esi, ebx
// 00517fc0  7545                 jne 0x518007
// 00517fc2  83e801               sub eax, 1
// 00517fc5  83c101               add ecx, 1
// 00517fc8  83c201               add edx, 1
// 00517fcb  85c0                 test eax, eax
// 00517fcd  7446                 je 0x518015
// 00517fcf  0fb619               movzx ebx, byte ptr [ecx]
// 00517fd2  0fb632               movzx esi, byte ptr [edx]
// 00517fd5  2bf3                 sub esi, ebx
// 00517fd7  752e                 jne 0x518007
// 00517fd9  83e801               sub eax, 1
// 00517fdc  83c101               add ecx, 1
// 00517fdf  83c201               add edx, 1
// 00517fe2  85c0                 test eax, eax
// 00517fe4  742f                 je 0x518015
// 00517fe6  0fb619               movzx ebx, byte ptr [ecx]
// 00517fe9  0fb632               movzx esi, byte ptr [edx]
// 00517fec  2bf3                 sub esi, ebx
// 00517fee  7517                 jne 0x518007
// 00517ff0  83e801               sub eax, 1
// 00517ff3  83c101               add ecx, 1
// 00517ff6  83c201               add edx, 1
// 00517ff9  85c0                 test eax, eax
// 00517ffb  7418                 je 0x518015
// 00517ffd  0fb601               movzx eax, byte ptr [ecx]
// 00518000  0fb632               movzx esi, byte ptr [edx]
// 00518003  2bf0                 sub esi, eax
// 00518005  740e                 je 0x518015
// 00518007  85f6                 test esi, esi
// 00518009  b801000000           mov eax, 1
// 0051800e  7f07                 jg 0x518017
// 00518010  83c8ff               or eax, 0xffffffff
// 00518013  eb02                 jmp 0x518017
// 00518015  33c0                 xor eax, eax
// 00518017  85c0                 test eax, eax
// 00518019  7515                 jne 0x518030
// 0051801b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051801f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00518023  51                   push ecx
// 00518024  52                   push edx
// 00518025  55                   push ebp
// 00518026  e8b59c0000           call 0x521ce0
// 0051802b  e971040000           jmp 0x5184a1
// 00518030  b804000000           mov eax, 4
// 00518035  b9fc157a00           mov ecx, 0x7a15fc
// 0051803a  8bd7                 mov edx, edi
// 0051803c  8d642400             lea esp, [esp]
// 00518040  8b32                 mov esi, dword ptr [edx]
// 00518042  3b31                 cmp esi, dword ptr [ecx]
// 00518044  7512                 jne 0x518058
// 00518046  83e804               sub eax, 4
// 00518049  83c104               add ecx, 4
// 0051804c  83c204               add edx, 4
// 0051804f  83f804               cmp eax, 4
// 00518052  73ec                 jae 0x518040
// 00518054  85c0                 test eax, eax
// 00518056  745d                 je 0x5180b5
// 00518058  0fb632               movzx esi, byte ptr [edx]
// 0051805b  0fb619               movzx ebx, byte ptr [ecx]
// 0051805e  2bf3                 sub esi, ebx
// 00518060  7545                 jne 0x5180a7
// 00518062  83e801               sub eax, 1
// 00518065  83c101               add ecx, 1
// 00518068  83c201               add edx, 1
// 0051806b  85c0                 test eax, eax
// 0051806d  7446                 je 0x5180b5
// 0051806f  0fb632               movzx esi, byte ptr [edx]
// 00518072  0fb619               movzx ebx, byte ptr [ecx]
// 00518075  2bf3                 sub esi, ebx
// 00518077  752e                 jne 0x5180a7
// 00518079  83e801               sub eax, 1
// 0051807c  83c101               add ecx, 1
// 0051807f  83c201               add edx, 1
// 00518082  85c0                 test eax, eax
// 00518084  742f                 je 0x5180b5
// 00518086  0fb632               movzx esi, byte ptr [edx]
// 00518089  0fb619               movzx ebx, byte ptr [ecx]
// 0051808c  2bf3                 sub esi, ebx
// 0051808e  7517                 jne 0x5180a7
// 00518090  83e801               sub eax, 1
// 00518093  83c101               add ecx, 1
// 00518096  83c201               add edx, 1
// 00518099  85c0                 test eax, eax
// 0051809b  7418                 je 0x5180b5
// 0051809d  0fb632               movzx esi, byte ptr [edx]
// 005180a0  0fb601               movzx eax, byte ptr [ecx]
// 005180a3  2bf0                 sub esi, eax
// 005180a5  740e                 je 0x5180b5
// 005180a7  85f6                 test esi, esi
// 005180a9  b801000000           mov eax, 1
// 005180ae  7f07                 jg 0x5180b7
// 005180b0  83c8ff               or eax, 0xffffffff
// 005180b3  eb02                 jmp 0x5180b7
// 005180b5  33c0                 xor eax, eax
// 005180b7  85c0                 test eax, eax
// 005180b9  7515                 jne 0x5180d0
// 005180bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005180bf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005180c3  51                   push ecx
// 005180c4  52                   push edx
// 005180c5  55                   push ebp
// 005180c6  e875a20000           call 0x522340
// 005180cb  e9d1030000           jmp 0x5184a1
// 005180d0  b804000000           mov eax, 4
// 005180d5  b9bc157a00           mov ecx, 0x7a15bc
// 005180da  8bd7                 mov edx, edi
// 005180dc  8d642400             lea esp, [esp]
// 005180e0  8b32                 mov esi, dword ptr [edx]
// 005180e2  3b31                 cmp esi, dword ptr [ecx]
// 005180e4  7512                 jne 0x5180f8
// 005180e6  83e804               sub eax, 4
// 005180e9  83c104               add ecx, 4
// 005180ec  83c204               add edx, 4
// 005180ef  83f804               cmp eax, 4
// 005180f2  73ec                 jae 0x5180e0
// 005180f4  85c0                 test eax, eax
// 005180f6  745d                 je 0x518155
// 005180f8  0fb619               movzx ebx, byte ptr [ecx]
// 005180fb  0fb632               movzx esi, byte ptr [edx]
// 005180fe  2bf3                 sub esi, ebx
// 00518100  7545                 jne 0x518147
// 00518102  83e801               sub eax, 1
// 00518105  83c101               add ecx, 1
// 00518108  83c201               add edx, 1
// 0051810b  85c0                 test eax, eax
// 0051810d  7446                 je 0x518155
// 0051810f  0fb619               movzx ebx, byte ptr [ecx]
// 00518112  0fb632               movzx esi, byte ptr [edx]
// 00518115  2bf3                 sub esi, ebx
// 00518117  752e                 jne 0x518147
// 00518119  83e801               sub eax, 1
// 0051811c  83c101               add ecx, 1
// 0051811f  83c201               add edx, 1
// 00518122  85c0                 test eax, eax
// 00518124  742f                 je 0x518155
// 00518126  0fb619               movzx ebx, byte ptr [ecx]
// 00518129  0fb632               movzx esi, byte ptr [edx]
// 0051812c  2bf3                 sub esi, ebx
// 0051812e  7517                 jne 0x518147
// 00518130  83e801               sub eax, 1
// 00518133  83c101               add ecx, 1
// 00518136  83c201               add edx, 1
// 00518139  85c0                 test eax, eax
// 0051813b  7418                 je 0x518155
// 0051813d  0fb601               movzx eax, byte ptr [ecx]
// 00518140  0fb632               movzx esi, byte ptr [edx]
// 00518143  2bf0                 sub esi, eax
// 00518145  740e                 je 0x518155
// 00518147  85f6                 test esi, esi
// 00518149  b801000000           mov eax, 1
// 0051814e  7f07                 jg 0x518157
// 00518150  83c8ff               or eax, 0xffffffff
// 00518153  eb02                 jmp 0x518157
// 00518155  33c0                 xor eax, eax
// 00518157  85c0                 test eax, eax
// 00518159  7515                 jne 0x518170
// 0051815b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051815f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00518163  51                   push ecx
// 00518164  52                   push edx
// 00518165  55                   push ebp
// 00518166  e8c5a30000           call 0x522530
// 0051816b  e931030000           jmp 0x5184a1
// 00518170  b804000000           mov eax, 4
// 00518175  b9f4157a00           mov ecx, 0x7a15f4
// 0051817a  8bd7                 mov edx, edi
// 0051817c  8d642400             lea esp, [esp]
// 00518180  8b32                 mov esi, dword ptr [edx]
// 00518182  3b31                 cmp esi, dword ptr [ecx]
// 00518184  7512                 jne 0x518198
// 00518186  83e804               sub eax, 4
// 00518189  83c104               add ecx, 4
// 0051818c  83c204               add edx, 4
// 0051818f  83f804               cmp eax, 4
// 00518192  73ec                 jae 0x518180
// 00518194  85c0                 test eax, eax
// 00518196  745d                 je 0x5181f5
// 00518198  0fb632               movzx esi, byte ptr [edx]
// 0051819b  0fb619               movzx ebx, byte ptr [ecx]
// 0051819e  2bf3                 sub esi, ebx
// 005181a0  7545                 jne 0x5181e7
// 005181a2  83e801               sub eax, 1
// 005181a5  83c101               add ecx, 1
// 005181a8  83c201               add edx, 1
// 005181ab  85c0                 test eax, eax
// 005181ad  7446                 je 0x5181f5
// 005181af  0fb632               movzx esi, byte ptr [edx]
// 005181b2  0fb619               movzx ebx, byte ptr [ecx]
// 005181b5  2bf3                 sub esi, ebx
// 005181b7  752e                 jne 0x5181e7
// 005181b9  83e801               sub eax, 1
// 005181bc  83c101               add ecx, 1
// 005181bf  83c201               add edx, 1
// 005181c2  85c0                 test eax, eax
// 005181c4  742f                 je 0x5181f5
// 005181c6  0fb632               movzx esi, byte ptr [edx]
// 005181c9  0fb619               movzx ebx, byte ptr [ecx]
// 005181cc  2bf3                 sub esi, ebx
// 005181ce  7517                 jne 0x5181e7
// 005181d0  83e801               sub eax, 1
// 005181d3  83c101               add ecx, 1
// 005181d6  83c201               add edx, 1
// 005181d9  85c0                 test eax, eax
// 005181db  7418                 je 0x5181f5
// 005181dd  0fb632               movzx esi, byte ptr [edx]
// 005181e0  0fb601               movzx eax, byte ptr [ecx]
// 005181e3  2bf0                 sub esi, eax
// 005181e5  740e                 je 0x5181f5
// 005181e7  85f6                 test esi, esi
// 005181e9  b801000000           mov eax, 1
// 005181ee  7f07                 jg 0x5181f7
// 005181f0  83c8ff               or eax, 0xffffffff
// 005181f3  eb02                 jmp 0x5181f7
// 005181f5  33c0                 xor eax, eax
// 005181f7  85c0                 test eax, eax
// 005181f9  7515                 jne 0x518210
// 005181fb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005181ff  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00518203  51                   push ecx
// 00518204  52                   push edx
// 00518205  55                   push ebp
// 00518206  e8d5a40000           call 0x5226e0
// 0051820b  e991020000           jmp 0x5184a1
// 00518210  b804000000           mov eax, 4
// 00518215  b904167a00           mov ecx, 0x7a1604
// 0051821a  8bd7                 mov edx, edi
// 0051821c  8d642400             lea esp, [esp]
// 00518220  8b32                 mov esi, dword ptr [edx]
// 00518222  3b31                 cmp esi, dword ptr [ecx]
// 00518224  7512                 jne 0x518238
// 00518226  83e804               sub eax, 4
// 00518229  83c104               add ecx, 4
// 0051822c  83c204               add edx, 4
// 0051822f  83f804               cmp eax, 4
// 00518232  73ec                 jae 0x518220
// 00518234  85c0                 test eax, eax
// 00518236  745d                 je 0x518295
// 00518238  0fb619               movzx ebx, byte ptr [ecx]
// 0051823b  0fb632               movzx esi, byte ptr [edx]
// 0051823e  2bf3                 sub esi, ebx
// 00518240  7545                 jne 0x518287
// 00518242  83e801               sub eax, 1
// 00518245  83c101               add ecx, 1
// 00518248  83c201               add edx, 1
// 0051824b  85c0                 test eax, eax
// 0051824d  7446                 je 0x518295
// 0051824f  0fb619               movzx ebx, byte ptr [ecx]
// 00518252  0fb632               movzx esi, byte ptr [edx]
// 00518255  2bf3                 sub esi, ebx
// 00518257  752e                 jne 0x518287
// 00518259  83e801               sub eax, 1
// 0051825c  83c101               add ecx, 1
// 0051825f  83c201               add edx, 1
// 00518262  85c0                 test eax, eax
// 00518264  742f                 je 0x518295
// 00518266  0fb619               movzx ebx, byte ptr [ecx]
// 00518269  0fb632               movzx esi, byte ptr [edx]
// 0051826c  2bf3                 sub esi, ebx
// 0051826e  7517                 jne 0x518287
// 00518270  83e801               sub eax, 1
// 00518273  83c101               add ecx, 1
// 00518276  83c201               add edx, 1
// 00518279  85c0                 test eax, eax
// 0051827b  7418                 je 0x518295
// 0051827d  0fb601               movzx eax, byte ptr [ecx]
// 00518280  0fb632               movzx esi, byte ptr [edx]
// 00518283  2bf0                 sub esi, eax
// 00518285  740e                 je 0x518295
// 00518287  85f6                 test esi, esi
// 00518289  b801000000           mov eax, 1
// 0051828e  7f07                 jg 0x518297
// 00518290  83c8ff               or eax, 0xffffffff
// 00518293  eb02                 jmp 0x518297
// 00518295  33c0                 xor eax, eax
// 00518297  85c0                 test eax, eax
// 00518299  7515                 jne 0x5182b0
// 0051829b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051829f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005182a3  51                   push ecx
// 005182a4  52                   push edx
// 005182a5  55                   push ebp
// 005182a6  e815b40000           call 0x5236c0
// 005182ab  e9f1010000           jmp 0x5184a1
// 005182b0  b804000000           mov eax, 4
// 005182b5  b90c167a00           mov ecx, 0x7a160c
// 005182ba  8bd7                 mov edx, edi
// 005182bc  8d642400             lea esp, [esp]
// 005182c0  8b32                 mov esi, dword ptr [edx]
// 005182c2  3b31                 cmp esi, dword ptr [ecx]
// 005182c4  7512                 jne 0x5182d8
// 005182c6  83e804               sub eax, 4
// 005182c9  83c104               add ecx, 4
// 005182cc  83c204               add edx, 4
// 005182cf  83f804               cmp eax, 4
// 005182d2  73ec                 jae 0x5182c0
// 005182d4  85c0                 test eax, eax
// 005182d6  745d                 je 0x518335
// 005182d8  0fb632               movzx esi, byte ptr [edx]
// 005182db  0fb619               movzx ebx, byte ptr [ecx]
// 005182de  2bf3                 sub esi, ebx
// 005182e0  7545                 jne 0x518327
// 005182e2  83e801               sub eax, 1
// 005182e5  83c101               add ecx, 1
// 005182e8  83c201               add edx, 1
// 005182eb  85c0                 test eax, eax
// 005182ed  7446                 je 0x518335
// 005182ef  0fb632               movzx esi, byte ptr [edx]
// 005182f2  0fb619               movzx ebx, byte ptr [ecx]
// 005182f5  2bf3                 sub esi, ebx
// 005182f7  752e                 jne 0x518327
// 005182f9  83e801               sub eax, 1
// 005182fc  83c101               add ecx, 1
// 005182ff  83c201               add edx, 1
// 00518302  85c0                 test eax, eax
// 00518304  742f                 je 0x518335
// 00518306  0fb632               movzx esi, byte ptr [edx]
// 00518309  0fb619               movzx ebx, byte ptr [ecx]
// 0051830c  2bf3                 sub esi, ebx
// 0051830e  7517                 jne 0x518327
// 00518310  83e801               sub eax, 1
// 00518313  83c101               add ecx, 1
// 00518316  83c201               add edx, 1
// 00518319  85c0                 test eax, eax
// 0051831b  7418                 je 0x518335
// 0051831d  0fb632               movzx esi, byte ptr [edx]
// 00518320  0fb601               movzx eax, byte ptr [ecx]
// 00518323  2bf0                 sub esi, eax
// 00518325  740e                 je 0x518335
// 00518327  85f6                 test esi, esi
// 00518329  b801000000           mov eax, 1
// 0051832e  7f07                 jg 0x518337
// 00518330  83c8ff               or eax, 0xffffffff
// 00518333  eb02                 jmp 0x518337
// 00518335  33c0                 xor eax, eax
// 00518337  85c0                 test eax, eax
// 00518339  7515                 jne 0x518350
// 0051833b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051833f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00518343  51                   push ecx
// 00518344  52                   push edx
// 00518345  55                   push ebp
// 00518346  e855b20000           call 0x5235a0
// 0051834b  e951010000           jmp 0x5184a1
// 00518350  b804000000           mov eax, 4
// 00518355  b914167a00           mov ecx, 0x7a1614
// 0051835a  8bd7                 mov edx, edi
// 0051835c  8d642400             lea esp, [esp]
// 00518360  8b32                 mov esi, dword ptr [edx]
// 00518362  3b31                 cmp esi, dword ptr [ecx]
// 00518364  7512                 jne 0x518378
// 00518366  83e804               sub eax, 4
// 00518369  83c104               add ecx, 4
// 0051836c  83c204               add edx, 4
// 0051836f  83f804               cmp eax, 4
// 00518372  73ec                 jae 0x518360
// 00518374  85c0                 test eax, eax
// 00518376  745d                 je 0x5183d5
// 00518378  0fb619               movzx ebx, byte ptr [ecx]
// 0051837b  0fb632               movzx esi, byte ptr [edx]
// 0051837e  2bf3                 sub esi, ebx
// 00518380  7545                 jne 0x5183c7
// 00518382  83e801               sub eax, 1
// 00518385  83c101               add ecx, 1
// 00518388  83c201               add edx, 1
// 0051838b  85c0                 test eax, eax
// 0051838d  7446                 je 0x5183d5
// 0051838f  0fb619               movzx ebx, byte ptr [ecx]
// 00518392  0fb632               movzx esi, byte ptr [edx]
// 00518395  2bf3                 sub esi, ebx
// 00518397  752e                 jne 0x5183c7
// 00518399  83e801               sub eax, 1
// 0051839c  83c101               add ecx, 1
// 0051839f  83c201               add edx, 1
// 005183a2  85c0                 test eax, eax
// 005183a4  742f                 je 0x5183d5
// 005183a6  0fb619               movzx ebx, byte ptr [ecx]
// 005183a9  0fb632               movzx esi, byte ptr [edx]
// 005183ac  2bf3                 sub esi, ebx
// 005183ae  7517                 jne 0x5183c7
// 005183b0  83e801               sub eax, 1
// 005183b3  83c101               add ecx, 1
// 005183b6  83c201               add edx, 1
// 005183b9  85c0                 test eax, eax
// 005183bb  7418                 je 0x5183d5
// 005183bd  0fb601               movzx eax, byte ptr [ecx]
// 005183c0  0fb632               movzx esi, byte ptr [edx]
// 005183c3  2bf0                 sub esi, eax
// 005183c5  740e                 je 0x5183d5
// 005183c7  85f6                 test esi, esi
// 005183c9  b801000000           mov eax, 1
// 005183ce  7f07                 jg 0x5183d7
// 005183d0  83c8ff               or eax, 0xffffffff
// 005183d3  eb02                 jmp 0x5183d7
// 005183d5  33c0                 xor eax, eax
// 005183d7  85c0                 test eax, eax
// 005183d9  7515                 jne 0x5183f0
// 005183db  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005183df  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005183e3  51                   push ecx
// 005183e4  52                   push edx
// 005183e5  55                   push ebp
// 005183e6  e815a50000           call 0x522900
// 005183eb  e9b1000000           jmp 0x5184a1
// 005183f0  b804000000           mov eax, 4
// 005183f5  b91c167a00           mov ecx, 0x7a161c
// 005183fa  8bd7                 mov edx, edi
// 005183fc  8d642400             lea esp, [esp]
// 00518400  8b32                 mov esi, dword ptr [edx]
// 00518402  3b31                 cmp esi, dword ptr [ecx]
// 00518404  7516                 jne 0x51841c
// 00518406  83e804               sub eax, 4
// 00518409  83c104               add ecx, 4
// 0051840c  83c204               add edx, 4
// 0051840f  83f804               cmp eax, 4
// 00518412  73ec                 jae 0x518400
// 00518414  85c0                 test eax, eax
// 00518416  0f845d000000         je 0x518479
// 0051841c  0fb632               movzx esi, byte ptr [edx]
// 0051841f  0fb619               movzx ebx, byte ptr [ecx]
// 00518422  2bf3                 sub esi, ebx
// 00518424  7545                 jne 0x51846b
// 00518426  83e801               sub eax, 1
// 00518429  83c101               add ecx, 1
// 0051842c  83c201               add edx, 1
// 0051842f  85c0                 test eax, eax
// 00518431  7446                 je 0x518479
// 00518433  0fb632               movzx esi, byte ptr [edx]
// 00518436  0fb619               movzx ebx, byte ptr [ecx]
// 00518439  2bf3                 sub esi, ebx
// 0051843b  752e                 jne 0x51846b
// 0051843d  83e801               sub eax, 1
// 00518440  83c101               add ecx, 1
// 00518443  83c201               add edx, 1
// 00518446  85c0                 test eax, eax
// 00518448  742f                 je 0x518479
// 0051844a  0fb632               movzx esi, byte ptr [edx]
// 0051844d  0fb619               movzx ebx, byte ptr [ecx]
// 00518450  2bf3                 sub esi, ebx
// 00518452  7517                 jne 0x51846b
// 00518454  83e801               sub eax, 1
// 00518457  83c101               add ecx, 1
// 0051845a  83c201               add edx, 1
// 0051845d  85c0                 test eax, eax
// 0051845f  7418                 je 0x518479
// 00518461  0fb632               movzx esi, byte ptr [edx]
// 00518464  0fb601               movzx eax, byte ptr [ecx]
// 00518467  2bf0                 sub esi, eax
// 00518469  740e                 je 0x518479
// 0051846b  85f6                 test esi, esi
// 0051846d  b801000000           mov eax, 1
// 00518472  7f07                 jg 0x51847b
// 00518474  83c8ff               or eax, 0xffffffff
// 00518477  eb02                 jmp 0x51847b
// 00518479  33c0                 xor eax, eax
// 0051847b  85c0                 test eax, eax
// 0051847d  7512                 jne 0x518491
// 0051847f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00518483  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00518487  51                   push ecx
// 00518488  52                   push edx
// 00518489  55                   push ebp
// 0051848a  e851b30000           call 0x5237e0
// 0051848f  eb10                 jmp 0x5184a1
// 00518491  8b442418             mov eax, dword ptr [esp + 0x18]
// 00518495  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00518499  50                   push eax
// 0051849a  51                   push ecx
// 0051849b  55                   push ebp
// 0051849c  e89fb40000           call 0x523940
// 005184a1  83c40c               add esp, 0xc
// 005184a4  f6456810             test byte ptr [ebp + 0x68], 0x10
// 005184a8  0f84c2f1ffff         je 0x517670
// 005184ae  5f                   pop edi
// 005184af  5e                   pop esi
// 005184b0  5d                   pop ebp
// 005184b1  5b                   pop ebx
// 005184b2  59                   pop ecx
// 005184b3  c3                   ret 
// library libpng-1.2.6/pngread.c (function _png_read_end)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngread.c
