// from server: 100% by king_originala
// roc 2008-06 00406300  unit: VCApp::?$CComObject  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406300
//
// 00406300  56                   push esi
// 00406301  8b742408             mov esi, dword ptr [esp + 8]
// 00406305  85f6                 test esi, esi
// 00406307  750a                 jne 0x406313
// 00406309  6805400080           push 0x80004005
// 0040630e  e8edacffff           call 0x401000
// 00406313  57                   push edi
// 00406314  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00406318  85ff                 test edi, edi
// 0040631a  750a                 jne 0x406326
// 0040631c  6805400080           push 0x80004005
// 00406321  e8daacffff           call 0x401000
// 00406326  8a0e                 mov cl, byte ptr [esi]
// 00406328  53                   push ebx
// 00406329  55                   push ebp
// 0040632a  33ed                 xor ebp, ebp
// 0040632c  8d4501               lea eax, [ebp + 1]
// 0040632f  84c9                 test cl, cl
// 00406331  0f84f1000000         je 0x406428
// 00406337  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 0040633b  7507                 jne 0x406344
// 0040633d  33c0                 xor eax, eax
// 0040633f  e9d3000000           jmp 0x406417
// 00406344  85c0                 test eax, eax
// 00406346  0f84cb000000         je 0x406417
// 0040634c  80f925               cmp cl, 0x25
// 0040634f  0f85bf000000         jne 0x406414
// 00406355  807e0100             cmp byte ptr [esi + 1], 0
// 00406359  0f84ed000000         je 0x40644c
// 0040635f  807e0200             cmp byte ptr [esi + 2], 0
// 00406363  0f84e3000000         je 0x40644c
// 00406369  8a4e01               mov cl, byte ptr [esi + 1]
// 0040636c  46                   inc esi
// 0040636d  8ad1                 mov dl, cl
// 0040636f  80ea30               sub dl, 0x30
// 00406372  80fa09               cmp dl, 9
// 00406375  770d                 ja 0x406384
// 00406377  660fb6c9             movzx cx, cl
// 0040637b  6683e930             sub cx, 0x30
// 0040637f  0fb7d1               movzx edx, cx
// 00406382  eb31                 jmp 0x4063b5
// 00406384  8ad1                 mov dl, cl
// 00406386  80ea41               sub dl, 0x41
// 00406389  80fa05               cmp dl, 5
// 0040638c  770d                 ja 0x40639b
// 0040638e  660fb6c9             movzx cx, cl
// 00406392  6683e937             sub cx, 0x37
// 00406396  0fb7d1               movzx edx, cx
// 00406399  eb1a                 jmp 0x4063b5
// 0040639b  8ad1                 mov dl, cl
// 0040639d  80ea61               sub dl, 0x61
// 004063a0  80fa05               cmp dl, 5
// 004063a3  770d                 ja 0x4063b2
// 004063a5  660fb6c9             movzx cx, cl
// 004063a9  6683e957             sub cx, 0x57
// 004063ad  0fb7d1               movzx edx, cx
// 004063b0  eb03                 jmp 0x4063b5
// 004063b2  83caff               or edx, 0xffffffff
// 004063b5  8a4e01               mov cl, byte ptr [esi + 1]
// 004063b8  46                   inc esi
// 004063b9  8ad9                 mov bl, cl
// 004063bb  80eb30               sub bl, 0x30
// 004063be  80fb09               cmp bl, 9
// 004063c1  770d                 ja 0x4063d0
// 004063c3  660fb6c9             movzx cx, cl
// 004063c7  6683e930             sub cx, 0x30
// 004063cb  0fb7c9               movzx ecx, cx
// 004063ce  eb31                 jmp 0x406401
// 004063d0  8ad9                 mov bl, cl
// 004063d2  80eb41               sub bl, 0x41
// 004063d5  80fb05               cmp bl, 5
// 004063d8  770d                 ja 0x4063e7
// 004063da  660fb6c9             movzx cx, cl
// 004063de  6683e937             sub cx, 0x37
// 004063e2  0fb7c9               movzx ecx, cx
// 004063e5  eb1a                 jmp 0x406401
// 004063e7  8ad9                 mov bl, cl
// 004063e9  80eb61               sub bl, 0x61
// 004063ec  80fb05               cmp bl, 5
// 004063ef  770d                 ja 0x4063fe
// 004063f1  660fb6c9             movzx cx, cl
// 004063f5  6683e957             sub cx, 0x57
// 004063f9  0fb7c9               movzx ecx, cx
// 004063fc  eb03                 jmp 0x406401
// 004063fe  83c9ff               or ecx, 0xffffffff
// 00406401  6685d2               test dx, dx
// 00406404  7c46                 jl 0x40644c
// 00406406  6685c9               test cx, cx
// 00406409  7c41                 jl 0x40644c
// 0040640b  c0e204               shl dl, 4
// 0040640e  02d1                 add dl, cl
// 00406410  8817                 mov byte ptr [edi], dl
// 00406412  eb02                 jmp 0x406416
// 00406414  880f                 mov byte ptr [edi], cl
// 00406416  47                   inc edi
// 00406417  8a4e01               mov cl, byte ptr [esi + 1]
// 0040641a  46                   inc esi
// 0040641b  45                   inc ebp
// 0040641c  84c9                 test cl, cl
// 0040641e  0f8513ffffff         jne 0x406337
// 00406424  85c0                 test eax, eax
// 00406426  7409                 je 0x406431
// 00406428  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 0040642c  7303                 jae 0x406431
// 0040642e  c60700               mov byte ptr [edi], 0
// 00406431  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00406435  85c9                 test ecx, ecx
// 00406437  7405                 je 0x40643e
// 00406439  8d5501               lea edx, [ebp + 1]
// 0040643c  8911                 mov dword ptr [ecx], edx
// 0040643e  45                   inc ebp
// 0040643f  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 00406443  5d                   pop ebp
// 00406444  5b                   pop ebx
// 00406445  7602                 jbe 0x406449
// 00406447  33c0                 xor eax, eax
// 00406449  5f                   pop edi
// 0040644a  5e                   pop esi
// 0040644b  c3                   ret 
// 0040644c  33c0                 xor eax, eax
// 0040644e  ebe1                 jmp 0x406431

// from server: 24% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll-rtm roc_unit_5fe21fa90d7ae9fe.cpp
