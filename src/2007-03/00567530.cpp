// roc 2007-03 00567530  unit: seg_00560000  size: 924 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00567530
//
// 00567530  83ec24               sub esp, 0x24
// 00567533  57                   push edi
// 00567534  8d44243c             lea eax, [esp + 0x3c]
// 00567538  33ff                 xor edi, edi
// 0056753a  50                   push eax
// 0056753b  8d4c2434             lea ecx, [esp + 0x34]
// 0056753f  897c240c             mov dword ptr [esp + 0xc], edi
// 00567543  e8c8f6ffff           call 0x566c10
// 00567548  84c0                 test al, al
// 0056754a  0f855d030000         jne 0x5678ad
// 00567550  53                   push ebx
// 00567551  55                   push ebp
// 00567552  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00567556  56                   push esi
// 00567557  eb09                 jmp 0x567562
// 00567559  8da42400000000       lea esp, [esp]
// 00567560  33ff                 xor edi, edi
// 00567562  8a442444             mov al, byte ptr [esp + 0x44]
// 00567566  84c0                 test al, al
// 00567568  8b742440             mov esi, dword ptr [esp + 0x40]
// 0056756c  751f                 jne 0x56758d
// 0056756e  3bf7                 cmp esi, edi
// 00567570  7413                 je 0x567585
// 00567572  8bce                 mov ecx, esi
// 00567574  ff15b0e57700         call dword ptr [0x77e5b0]
// 0056757a  83f8ff               cmp eax, -1
// 0056757d  7406                 je 0x567585
// 0056757f  88442445             mov byte ptr [esp + 0x45], al
// 00567583  eb06                 jmp 0x56758b
// 00567585  33f6                 xor esi, esi
// 00567587  89742440             mov dword ptr [esp + 0x40], esi
// 0056758b  b001                 mov al, 1
// 0056758d  84c0                 test al, al
// 0056758f  8a5c2445             mov bl, byte ptr [esp + 0x45]
// 00567593  885c2410             mov byte ptr [esp + 0x10], bl
// 00567597  7515                 jne 0x5675ae
// 00567599  3bf7                 cmp esi, edi
// 0056759b  7429                 je 0x5675c6
// 0056759d  8bce                 mov ecx, esi
// 0056759f  ff15b0e57700         call dword ptr [0x77e5b0]
// 005675a5  83f8ff               cmp eax, -1
// 005675a8  741c                 je 0x5675c6
// 005675aa  88442445             mov byte ptr [esp + 0x45], al
// 005675ae  3bf7                 cmp esi, edi
// 005675b0  7414                 je 0x5675c6
// 005675b2  8bce                 mov ecx, esi
// 005675b4  ff15b4e57700         call dword ptr [0x77e5b4]
// 005675ba  83f8ff               cmp eax, -1
// 005675bd  7407                 je 0x5675c6
// 005675bf  c644244400           mov byte ptr [esp + 0x44], 0
// 005675c4  eb09                 jmp 0x5675cf
// 005675c6  897c2440             mov dword ptr [esp + 0x40], edi
// 005675ca  c644244401           mov byte ptr [esp + 0x44], 1
// 005675cf  8d4c2448             lea ecx, [esp + 0x48]
// 005675d3  51                   push ecx
// 005675d4  8d4c2440             lea ecx, [esp + 0x40]
// 005675d8  e833f6ffff           call 0x566c10
// 005675dd  84c0                 test al, al
// 005675df  0f852a020000         jne 0x56780f
// 005675e5  8a442444             mov al, byte ptr [esp + 0x44]
// 005675e9  84c0                 test al, al
// 005675eb  8b742440             mov esi, dword ptr [esp + 0x40]
// 005675ef  751f                 jne 0x567610
// 005675f1  3bf7                 cmp esi, edi
// 005675f3  7413                 je 0x567608
// 005675f5  8bce                 mov ecx, esi
// 005675f7  ff15b0e57700         call dword ptr [0x77e5b0]
// 005675fd  83f8ff               cmp eax, -1
// 00567600  7406                 je 0x567608
// 00567602  88442445             mov byte ptr [esp + 0x45], al
// 00567606  eb06                 jmp 0x56760e
// 00567608  33f6                 xor esi, esi
// 0056760a  89742440             mov dword ptr [esp + 0x40], esi
// 0056760e  b001                 mov al, 1
// 00567610  84c0                 test al, al
// 00567612  8a5c2445             mov bl, byte ptr [esp + 0x45]
// 00567616  885c2411             mov byte ptr [esp + 0x11], bl
// 0056761a  7515                 jne 0x567631
// 0056761c  3bf7                 cmp esi, edi
// 0056761e  7429                 je 0x567649
// 00567620  8bce                 mov ecx, esi
// 00567622  ff15b0e57700         call dword ptr [0x77e5b0]
// 00567628  83f8ff               cmp eax, -1
// 0056762b  741c                 je 0x567649
// 0056762d  88442445             mov byte ptr [esp + 0x45], al
// 00567631  3bf7                 cmp esi, edi
// 00567633  7414                 je 0x567649
// 00567635  8bce                 mov ecx, esi
// 00567637  ff15b4e57700         call dword ptr [0x77e5b4]
// 0056763d  83f8ff               cmp eax, -1
// 00567640  7407                 je 0x567649
// 00567642  c644244400           mov byte ptr [esp + 0x44], 0
// 00567647  eb09                 jmp 0x567652
// 00567649  897c2440             mov dword ptr [esp + 0x40], edi
// 0056764d  c644244401           mov byte ptr [esp + 0x44], 1
// 00567652  8d542448             lea edx, [esp + 0x48]
// 00567656  52                   push edx
// 00567657  8d4c2440             lea ecx, [esp + 0x40]
// 0056765b  e8b0f5ffff           call 0x566c10
// 00567660  84c0                 test al, al
// 00567662  0f85e2010000         jne 0x56784a
// 00567668  8a442444             mov al, byte ptr [esp + 0x44]
// 0056766c  84c0                 test al, al
// 0056766e  8b742440             mov esi, dword ptr [esp + 0x40]
// 00567672  751f                 jne 0x567693
// 00567674  3bf7                 cmp esi, edi
// 00567676  7413                 je 0x56768b
// 00567678  8bce                 mov ecx, esi
// 0056767a  ff15b0e57700         call dword ptr [0x77e5b0]
// 00567680  83f8ff               cmp eax, -1
// 00567683  7406                 je 0x56768b
// 00567685  88442445             mov byte ptr [esp + 0x45], al
// 00567689  eb06                 jmp 0x567691
// 0056768b  33f6                 xor esi, esi
// 0056768d  89742440             mov dword ptr [esp + 0x40], esi
// 00567691  b001                 mov al, 1
// 00567693  84c0                 test al, al
// 00567695  8a5c2445             mov bl, byte ptr [esp + 0x45]
// 00567699  7515                 jne 0x5676b0
// 0056769b  3bf7                 cmp esi, edi
// 0056769d  7429                 je 0x5676c8
// 0056769f  8bce                 mov ecx, esi
// 005676a1  ff15b0e57700         call dword ptr [0x77e5b0]
// 005676a7  83f8ff               cmp eax, -1
// 005676aa  741c                 je 0x5676c8
// 005676ac  88442445             mov byte ptr [esp + 0x45], al
// 005676b0  3bf7                 cmp esi, edi
// 005676b2  7414                 je 0x5676c8
// 005676b4  8bce                 mov ecx, esi
// 005676b6  ff15b4e57700         call dword ptr [0x77e5b4]
// 005676bc  83f8ff               cmp eax, -1
// 005676bf  7407                 je 0x5676c8
// 005676c1  c644244400           mov byte ptr [esp + 0x44], 0
// 005676c6  eb09                 jmp 0x5676d1
// 005676c8  897c2440             mov dword ptr [esp + 0x40], edi
// 005676cc  c644244401           mov byte ptr [esp + 0x44], 1
// 005676d1  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 005676d6  8bc6                 mov eax, esi
// 005676d8  c1e802               shr eax, 2
// 005676db  3bef                 cmp ebp, edi
// 005676dd  8a0c85e8e08900       mov cl, byte ptr [eax*4 + 0x89e0e8]
// 005676e4  884c2418             mov byte ptr [esp + 0x18], cl
// 005676e8  7412                 je 0x5676fc
// 005676ea  8b542418             mov edx, dword ptr [esp + 0x18]
// 005676ee  52                   push edx
// 005676ef  8bcd                 mov ecx, ebp
// 005676f1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005676f7  83f8ff               cmp eax, -1
// 005676fa  7505                 jne 0x567701
// 005676fc  c644245801           mov byte ptr [esp + 0x58], 1
// 00567701  0fb67c2411           movzx edi, byte ptr [esp + 0x11]
// 00567706  83e603               and esi, 3
// 00567709  8bc7                 mov eax, edi
// 0056770b  c1e804               shr eax, 4
// 0056770e  c1e604               shl esi, 4
// 00567711  03c6                 add eax, esi
// 00567713  85ed                 test ebp, ebp
// 00567715  8a0c85e8e08900       mov cl, byte ptr [eax*4 + 0x89e0e8]
// 0056771c  884c241c             mov byte ptr [esp + 0x1c], cl
// 00567720  7412                 je 0x567734
// 00567722  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00567726  52                   push edx
// 00567727  8bcd                 mov ecx, ebp
// 00567729  ff15c4e67700         call dword ptr [0x77e6c4]
// 0056772f  83f8ff               cmp eax, -1
// 00567732  7505                 jne 0x567739
// 00567734  c644245801           mov byte ptr [esp + 0x58], 1
// 00567739  0fb6f3               movzx esi, bl
// 0056773c  8bc6                 mov eax, esi
// 0056773e  c1e806               shr eax, 6
// 00567741  83e70f               and edi, 0xf
// 00567744  85ed                 test ebp, ebp
// 00567746  8d0cb8               lea ecx, [eax + edi*4]
// 00567749  8a148de8e08900       mov dl, byte ptr [ecx*4 + 0x89e0e8]
// 00567750  88542420             mov byte ptr [esp + 0x20], dl
// 00567754  7412                 je 0x567768
// 00567756  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056775a  50                   push eax
// 0056775b  8bcd                 mov ecx, ebp
// 0056775d  ff15c4e67700         call dword ptr [0x77e6c4]
// 00567763  83f8ff               cmp eax, -1
// 00567766  7505                 jne 0x56776d
// 00567768  c644245801           mov byte ptr [esp + 0x58], 1
// 0056776d  83e63f               and esi, 0x3f
// 00567770  85ed                 test ebp, ebp
// 00567772  8a0cb5e8e08900       mov cl, byte ptr [esi*4 + 0x89e0e8]
// 00567779  884c2424             mov byte ptr [esp + 0x24], cl
// 0056777d  7412                 je 0x567791
// 0056777f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00567783  52                   push edx
// 00567784  8bcd                 mov ecx, ebp
// 00567786  ff15c4e67700         call dword ptr [0x77e6c4]
// 0056778c  83f8ff               cmp eax, -1
// 0056778f  7505                 jne 0x567796
// 00567791  c644245801           mov byte ptr [esp + 0x58], 1
// 00567796  837c241411           cmp dword ptr [esp + 0x14], 0x11
// 0056779b  7552                 jne 0x5677ef
// 0056779d  85ed                 test ebp, ebp
// 0056779f  8b442458             mov eax, dword ptr [esp + 0x58]
// 005677a3  8b742454             mov esi, dword ptr [esp + 0x54]
// 005677a7  8944242c             mov dword ptr [esp + 0x2c], eax
// 005677ab  740f                 je 0x5677bc
// 005677ad  6a0d                 push 0xd
// 005677af  8bcd                 mov ecx, ebp
// 005677b1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005677b7  83f8ff               cmp eax, -1
// 005677ba  7505                 jne 0x5677c1
// 005677bc  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005677c1  85ed                 test ebp, ebp
// 005677c3  740f                 je 0x5677d4
// 005677c5  6a0a                 push 0xa
// 005677c7  8bcd                 mov ecx, ebp
// 005677c9  ff15c4e67700         call dword ptr [0x77e6c4]
// 005677cf  83f8ff               cmp eax, -1
// 005677d2  7505                 jne 0x5677d9
// 005677d4  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005677d9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005677dd  89742454             mov dword ptr [esp + 0x54], esi
// 005677e1  894c2458             mov dword ptr [esp + 0x58], ecx
// 005677e5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005677ed  eb05                 jmp 0x5677f4
// 005677ef  8344241401           add dword ptr [esp + 0x14], 1
// 005677f4  8d542448             lea edx, [esp + 0x48]
// 005677f8  52                   push edx
// 005677f9  8d4c2440             lea ecx, [esp + 0x40]
// 005677fd  e80ef4ffff           call 0x566c10
// 00567802  84c0                 test al, al
// 00567804  0f8456fdffff         je 0x567560
// 0056780a  e99b000000           jmp 0x5678aa
// 0056780f  3bef                 cmp ebp, edi
// 00567811  0f8493000000         je 0x5678aa
// 00567817  0fb6f3               movzx esi, bl
// 0056781a  8bc6                 mov eax, esi
// 0056781c  c1e802               shr eax, 2
// 0056781f  0fb60c85e8e08900     movzx ecx, byte ptr [eax*4 + 0x89e0e8]
// 00567827  51                   push ecx
// 00567828  8bcd                 mov ecx, ebp
// 0056782a  ff15c4e67700         call dword ptr [0x77e6c4]
// 00567830  83e603               and esi, 3
// 00567833  c1e606               shl esi, 6
// 00567836  0fb696e8e08900       movzx edx, byte ptr [esi + 0x89e0e8]
// 0056783d  52                   push edx
// 0056783e  8bcd                 mov ecx, ebp
// 00567840  ff15c4e67700         call dword ptr [0x77e6c4]
// 00567846  6a3d                 push 0x3d
// 00567848  eb4e                 jmp 0x567898
// 0056784a  3bef                 cmp ebp, edi
// 0056784c  745c                 je 0x5678aa
// 0056784e  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 00567853  8bc6                 mov eax, esi
// 00567855  c1e802               shr eax, 2
// 00567858  0fb60c85e8e08900     movzx ecx, byte ptr [eax*4 + 0x89e0e8]
// 00567860  51                   push ecx
// 00567861  8bcd                 mov ecx, ebp
// 00567863  ff15c4e67700         call dword ptr [0x77e6c4]
// 00567869  0fb6fb               movzx edi, bl
// 0056786c  8bd7                 mov edx, edi
// 0056786e  83e603               and esi, 3
// 00567871  c1ea04               shr edx, 4
// 00567874  c1e604               shl esi, 4
// 00567877  03d6                 add edx, esi
// 00567879  0fb60495e8e08900     movzx eax, byte ptr [edx*4 + 0x89e0e8]
// 00567881  50                   push eax
// 00567882  8bcd                 mov ecx, ebp
// 00567884  ff15c4e67700         call dword ptr [0x77e6c4]
// 0056788a  83e70f               and edi, 0xf
// 0056788d  c1e704               shl edi, 4
// 00567890  0fb68fe8e08900       movzx ecx, byte ptr [edi + 0x89e0e8]
// 00567897  51                   push ecx
// 00567898  8bcd                 mov ecx, ebp
// 0056789a  ff15c4e67700         call dword ptr [0x77e6c4]
// 005678a0  6a3d                 push 0x3d
// 005678a2  8bcd                 mov ecx, ebp
// 005678a4  ff15c4e67700         call dword ptr [0x77e6c4]
// 005678aa  5e                   pop esi
// 005678ab  5d                   pop ebp
// 005678ac  5b                   pop ebx
// 005678ad  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005678b1  8b542430             mov edx, dword ptr [esp + 0x30]
// 005678b5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005678b9  8910                 mov dword ptr [eax], edx
// 005678bb  8b542438             mov edx, dword ptr [esp + 0x38]
// 005678bf  894804               mov dword ptr [eax + 4], ecx
// 005678c2  895008               mov dword ptr [eax + 8], edx
// 005678c5  5f                   pop edi
// 005678c6  83c424               add esp, 0x24
// 005678c9  c23000               ret 0x30
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??$put@V?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@HUcrlf@?$base64@DU?$char_traits@D@std@@@@@?$base64@DU?$char_traits@D@std@@@@QBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V12@0V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@AAHUcrlf@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
