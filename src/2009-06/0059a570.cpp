// from server: 100% by auto
// roc 2009-06 0059a570  unit: seg_00590000  size: 1227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059a570
//
// 0059a570  83ec7c               sub esp, 0x7c
// 0059a573  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0059a57a  33c0                 xor eax, eax
// 0059a57c  0fb7c8               movzx ecx, ax
// 0059a57f  8bc1                 mov eax, ecx
// 0059a581  c1e110               shl ecx, 0x10
// 0059a584  0bc1                 or eax, ecx
// 0059a586  53                   push ebx
// 0059a587  55                   push ebp
// 0059a588  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0059a58f  89442444             mov dword ptr [esp + 0x44], eax
// 0059a593  89442448             mov dword ptr [esp + 0x48], eax
// 0059a597  8944244c             mov dword ptr [esp + 0x4c], eax
// 0059a59b  89442450             mov dword ptr [esp + 0x50], eax
// 0059a59f  89442454             mov dword ptr [esp + 0x54], eax
// 0059a5a3  89442458             mov dword ptr [esp + 0x58], eax
// 0059a5a7  8944245c             mov dword ptr [esp + 0x5c], eax
// 0059a5ab  89442460             mov dword ptr [esp + 0x60], eax
// 0059a5af  33c0                 xor eax, eax
// 0059a5b1  56                   push esi
// 0059a5b2  85d2                 test edx, edx
// 0059a5b4  761d                 jbe 0x59a5d3
// 0059a5b6  eb08                 jmp 0x59a5c0
// 0059a5b8  8da42400000000       lea esp, [esp]
// 0059a5bf  90                   nop 
// 0059a5c0  0fb74c4500           movzx ecx, word ptr [ebp + eax*2]
// 0059a5c5  66ff444c48           inc word ptr [esp + ecx*2 + 0x48]
// 0059a5ca  8d4c4c48             lea ecx, [esp + ecx*2 + 0x48]
// 0059a5ce  40                   inc eax
// 0059a5cf  3bc2                 cmp eax, edx
// 0059a5d1  72ed                 jb 0x59a5c0
// 0059a5d3  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 0059a5da  8b06                 mov eax, dword ptr [esi]
// 0059a5dc  89442410             mov dword ptr [esp + 0x10], eax
// 0059a5e0  bb0f000000           mov ebx, 0xf
// 0059a5e5  66837c5c4800         cmp word ptr [esp + ebx*2 + 0x48], 0
// 0059a5eb  7506                 jne 0x59a5f3
// 0059a5ed  4b                   dec ebx
// 0059a5ee  83fb01               cmp ebx, 1
// 0059a5f1  73f2                 jae 0x59a5e5
// 0059a5f3  895c2418             mov dword ptr [esp + 0x18], ebx
// 0059a5f7  3bc3                 cmp eax, ebx
// 0059a5f9  7604                 jbe 0x59a5ff
// 0059a5fb  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059a5ff  85db                 test ebx, ebx
// 0059a601  7539                 jne 0x59a63c
// 0059a603  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0059a60a  33d2                 xor edx, edx
// 0059a60c  668954240e           mov word ptr [esp + 0xe], dx
// 0059a611  8b10                 mov edx, dword ptr [eax]
// 0059a613  c644240c40           mov byte ptr [esp + 0xc], 0x40
// 0059a618  c644240d01           mov byte ptr [esp + 0xd], 1
// 0059a61d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a621  890a                 mov dword ptr [edx], ecx
// 0059a623  830004               add dword ptr [eax], 4
// 0059a626  8b10                 mov edx, dword ptr [eax]
// 0059a628  890a                 mov dword ptr [edx], ecx
// 0059a62a  830004               add dword ptr [eax], 4
// 0059a62d  c70601000000         mov dword ptr [esi], 1
// 0059a633  5e                   pop esi
// 0059a634  5d                   pop ebp
// 0059a635  33c0                 xor eax, eax
// 0059a637  5b                   pop ebx
// 0059a638  83c47c               add esp, 0x7c
// 0059a63b  c3                   ret 
// 0059a63c  be01000000           mov esi, 1
// 0059a641  66837c744800         cmp word ptr [esp + esi*2 + 0x48], 0
// 0059a647  753a                 jne 0x59a683
// 0059a649  66837c744a00         cmp word ptr [esp + esi*2 + 0x4a], 0
// 0059a64f  7522                 jne 0x59a673
// 0059a651  66837c744c00         cmp word ptr [esp + esi*2 + 0x4c], 0
// 0059a657  751d                 jne 0x59a676
// 0059a659  66837c744e00         cmp word ptr [esp + esi*2 + 0x4e], 0
// 0059a65f  751a                 jne 0x59a67b
// 0059a661  66837c745000         cmp word ptr [esp + esi*2 + 0x50], 0
// 0059a667  7517                 jne 0x59a680
// 0059a669  83c605               add esi, 5
// 0059a66c  83fe0f               cmp esi, 0xf
// 0059a66f  76d0                 jbe 0x59a641
// 0059a671  eb10                 jmp 0x59a683
// 0059a673  46                   inc esi
// 0059a674  eb0d                 jmp 0x59a683
// 0059a676  83c602               add esi, 2
// 0059a679  eb08                 jmp 0x59a683
// 0059a67b  83c603               add esi, 3
// 0059a67e  eb03                 jmp 0x59a683
// 0059a680  83c604               add esi, 4
// 0059a683  39742410             cmp dword ptr [esp + 0x10], esi
// 0059a687  7304                 jae 0x59a68d
// 0059a689  89742410             mov dword ptr [esp + 0x10], esi
// 0059a68d  ba01000000           mov edx, 1
// 0059a692  8bc2                 mov eax, edx
// 0059a694  0fb74c4448           movzx ecx, word ptr [esp + eax*2 + 0x48]
// 0059a699  03d2                 add edx, edx
// 0059a69b  2bd1                 sub edx, ecx
// 0059a69d  7826                 js 0x59a6c5
// 0059a69f  40                   inc eax
// 0059a6a0  83f80f               cmp eax, 0xf
// 0059a6a3  76ef                 jbe 0x59a694
// 0059a6a5  57                   push edi
// 0059a6a6  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 0059a6ad  85d2                 test edx, edx
// 0059a6af  7e1e                 jle 0x59a6cf
// 0059a6b1  85ff                 test edi, edi
// 0059a6b3  7405                 je 0x59a6ba
// 0059a6b5  83fb01               cmp ebx, 1
// 0059a6b8  7415                 je 0x59a6cf
// 0059a6ba  5f                   pop edi
// 0059a6bb  5e                   pop esi
// 0059a6bc  5d                   pop ebp
// 0059a6bd  83c8ff               or eax, 0xffffffff
// 0059a6c0  5b                   pop ebx
// 0059a6c1  83c47c               add esp, 0x7c
// 0059a6c4  c3                   ret 
// 0059a6c5  5e                   pop esi
// 0059a6c6  5d                   pop ebp
// 0059a6c7  83c8ff               or eax, 0xffffffff
// 0059a6ca  5b                   pop ebx
// 0059a6cb  83c47c               add esp, 0x7c
// 0059a6ce  c3                   ret 
// 0059a6cf  33c0                 xor eax, eax
// 0059a6d1  668944246e           mov word ptr [esp + 0x6e], ax
// 0059a6d6  b802000000           mov eax, 2
// 0059a6db  eb03                 jmp 0x59a6e0
// 0059a6dd  8d4900               lea ecx, [ecx]
// 0059a6e0  668b4c046c           mov cx, word ptr [esp + eax + 0x6c]
// 0059a6e5  66034c044c           add cx, word ptr [esp + eax + 0x4c]
// 0059a6ea  83c002               add eax, 2
// 0059a6ed  66894c046c           mov word ptr [esp + eax + 0x6c], cx
// 0059a6f2  83f81e               cmp eax, 0x1e
// 0059a6f5  72e9                 jb 0x59a6e0
// 0059a6f7  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 0059a6fe  33c0                 xor eax, eax
// 0059a700  85db                 test ebx, ebx
// 0059a702  7630                 jbe 0x59a734
// 0059a704  66837c450000         cmp word ptr [ebp + eax*2], 0
// 0059a70a  7423                 je 0x59a72f
// 0059a70c  0fb7544500           movzx edx, word ptr [ebp + eax*2]
// 0059a711  0fb74c546c           movzx ecx, word ptr [esp + edx*2 + 0x6c]
// 0059a716  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 0059a71d  6689044a             mov word ptr [edx + ecx*2], ax
// 0059a721  0fb7544500           movzx edx, word ptr [ebp + eax*2]
// 0059a726  66ff44546c           inc word ptr [esp + edx*2 + 0x6c]
// 0059a72b  8d54546c             lea edx, [esp + edx*2 + 0x6c]
// 0059a72f  40                   inc eax
// 0059a730  3bc3                 cmp eax, ebx
// 0059a732  72d0                 jb 0x59a704
// 0059a734  8bc7                 mov eax, edi
// 0059a736  83e800               sub eax, 0
// 0059a739  baffffffff           mov edx, 0xffffffff
// 0059a73e  743d                 je 0x59a77d
// 0059a740  83e801               sub eax, 1
// 0059a743  7416                 je 0x59a75b
// 0059a745  c7442434c0398d00     mov dword ptr [esp + 0x34], 0x8d39c0
// 0059a74d  c7442430003a8d00     mov dword ptr [esp + 0x30], 0x8d3a00
// 0059a755  8954242c             mov dword ptr [esp + 0x2c], edx
// 0059a759  eb39                 jmp 0x59a794
// 0059a75b  b840398d00           mov eax, 0x8d3940
// 0059a760  2d02020000           sub eax, 0x202
// 0059a765  89442434             mov dword ptr [esp + 0x34], eax
// 0059a769  b880398d00           mov eax, 0x8d3980
// 0059a76e  2d02020000           sub eax, 0x202
// 0059a773  c744242c00010000     mov dword ptr [esp + 0x2c], 0x100
// 0059a77b  eb13                 jmp 0x59a790
// 0059a77d  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0059a784  89442434             mov dword ptr [esp + 0x34], eax
// 0059a788  c744242c13000000     mov dword ptr [esp + 0x2c], 0x13
// 0059a790  89442430             mov dword ptr [esp + 0x30], eax
// 0059a794  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0059a79b  8b08                 mov ecx, dword ptr [eax]
// 0059a79d  894c2420             mov dword ptr [esp + 0x20], ecx
// 0059a7a1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059a7a5  b801000000           mov eax, 1
// 0059a7aa  d3e0                 shl eax, cl
// 0059a7ac  89542438             mov dword ptr [esp + 0x38], edx
// 0059a7b0  33ed                 xor ebp, ebp
// 0059a7b2  33db                 xor ebx, ebx
// 0059a7b4  8d50ff               lea edx, [eax - 1]
// 0059a7b7  89742418             mov dword ptr [esp + 0x18], esi
// 0059a7bb  8944243c             mov dword ptr [esp + 0x3c], eax
// 0059a7bf  89442428             mov dword ptr [esp + 0x28], eax
// 0059a7c3  89542440             mov dword ptr [esp + 0x40], edx
// 0059a7c7  83ff01               cmp edi, 1
// 0059a7ca  750b                 jne 0x59a7d7
// 0059a7cc  3db0050000           cmp eax, 0x5b0
// 0059a7d1  0f8357020000         jae 0x59aa2e
// 0059a7d7  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0059a7de  89442424             mov dword ptr [esp + 0x24], eax
// 0059a7e2  8a4c2418             mov cl, byte ptr [esp + 0x18]
// 0059a7e6  8b742424             mov esi, dword ptr [esp + 0x24]
// 0059a7ea  0fb706               movzx eax, word ptr [esi]
// 0059a7ed  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059a7f1  2acb                 sub cl, bl
// 0059a7f3  884c2411             mov byte ptr [esp + 0x11], cl
// 0059a7f7  0fb7c8               movzx ecx, ax
// 0059a7fa  3bca                 cmp ecx, edx
// 0059a7fc  7d0c                 jge 0x59a80a
// 0059a7fe  c644241000           mov byte ptr [esp + 0x10], 0
// 0059a803  6689442412           mov word ptr [esp + 0x12], ax
// 0059a808  eb2d                 jmp 0x59a837
// 0059a80a  7e1f                 jle 0x59a82b
// 0059a80c  0fb706               movzx eax, word ptr [esi]
// 0059a80f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059a813  03c0                 add eax, eax
// 0059a815  8a0c10               mov cl, byte ptr [eax + edx]
// 0059a818  8b542434             mov edx, dword ptr [esp + 0x34]
// 0059a81c  668b0410             mov ax, word ptr [eax + edx]
// 0059a820  884c2410             mov byte ptr [esp + 0x10], cl
// 0059a824  6689442412           mov word ptr [esp + 0x12], ax
// 0059a829  eb0c                 jmp 0x59a837
// 0059a82b  33c9                 xor ecx, ecx
// 0059a82d  c644241060           mov byte ptr [esp + 0x10], 0x60
// 0059a832  66894c2412           mov word ptr [esp + 0x12], cx
// 0059a837  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059a83b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0059a83f  2bcb                 sub ecx, ebx
// 0059a841  ba01000000           mov edx, 1
// 0059a846  d3e2                 shl edx, cl
// 0059a848  8bcb                 mov ecx, ebx
// 0059a84a  8bfd                 mov edi, ebp
// 0059a84c  d3ef                 shr edi, cl
// 0059a84e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059a852  89442444             mov dword ptr [esp + 0x44], eax
// 0059a856  8d349500000000       lea esi, [edx*4]
// 0059a85d  03f8                 add edi, eax
// 0059a85f  8d0cb9               lea ecx, [ecx + edi*4]
// 0059a862  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059a866  2bc2                 sub eax, edx
// 0059a868  2bce                 sub ecx, esi
// 0059a86a  8939                 mov dword ptr [ecx], edi
// 0059a86c  85c0                 test eax, eax
// 0059a86e  75f6                 jne 0x59a866
// 0059a870  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a874  8d4aff               lea ecx, [edx - 1]
// 0059a877  b801000000           mov eax, 1
// 0059a87c  d3e0                 shl eax, cl
// 0059a87e  85c5                 test ebp, eax
// 0059a880  7406                 je 0x59a888
// 0059a882  d1e8                 shr eax, 1
// 0059a884  85c5                 test ebp, eax
// 0059a886  75fa                 jne 0x59a882
// 0059a888  85c0                 test eax, eax
// 0059a88a  740b                 je 0x59a897
// 0059a88c  8d48ff               lea ecx, [eax - 1]
// 0059a88f  23cd                 and ecx, ebp
// 0059a891  03c8                 add ecx, eax
// 0059a893  8be9                 mov ebp, ecx
// 0059a895  eb02                 jmp 0x59a899
// 0059a897  33ed                 xor ebp, ebp
// 0059a899  8344242402           add dword ptr [esp + 0x24], 2
// 0059a89e  b8ffff0000           mov eax, 0xffff
// 0059a8a3  660144544c           add word ptr [esp + edx*2 + 0x4c], ax
// 0059a8a8  0fb744544c           movzx eax, word ptr [esp + edx*2 + 0x4c]
// 0059a8ad  6685c0               test ax, ax
// 0059a8b0  7522                 jne 0x59a8d4
// 0059a8b2  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0059a8b6  0f84d9000000         je 0x59a995
// 0059a8bc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059a8c0  0fb711               movzx edx, word ptr [ecx]
// 0059a8c3  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0059a8ca  0fb70c50             movzx ecx, word ptr [eax + edx*2]
// 0059a8ce  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059a8d2  8bd1                 mov edx, ecx
// 0059a8d4  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0059a8d8  0f8604ffffff         jbe 0x59a7e2
// 0059a8de  8b742440             mov esi, dword ptr [esp + 0x40]
// 0059a8e2  23f5                 and esi, ebp
// 0059a8e4  89742448             mov dword ptr [esp + 0x48], esi
// 0059a8e8  3b742438             cmp esi, dword ptr [esp + 0x38]
// 0059a8ec  0f84f0feffff         je 0x59a7e2
// 0059a8f2  85db                 test ebx, ebx
// 0059a8f4  7504                 jne 0x59a8fa
// 0059a8f6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0059a8fa  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059a8fe  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059a902  8d0c82               lea ecx, [edx + eax*4]
// 0059a905  894c2420             mov dword ptr [esp + 0x20], ecx
// 0059a909  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059a90d  2bcb                 sub ecx, ebx
// 0059a90f  b801000000           mov eax, 1
// 0059a914  8d140b               lea edx, [ebx + ecx]
// 0059a917  d3e0                 shl eax, cl
// 0059a919  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0059a91d  731e                 jae 0x59a93d
// 0059a91f  8d74544c             lea esi, [esp + edx*2 + 0x4c]
// 0059a923  0fb73e               movzx edi, word ptr [esi]
// 0059a926  2bc7                 sub eax, edi
// 0059a928  85c0                 test eax, eax
// 0059a92a  7e0d                 jle 0x59a939
// 0059a92c  42                   inc edx
// 0059a92d  41                   inc ecx
// 0059a92e  83c602               add esi, 2
// 0059a931  03c0                 add eax, eax
// 0059a933  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0059a937  72ea                 jb 0x59a923
// 0059a939  8b742448             mov esi, dword ptr [esp + 0x48]
// 0059a93d  b801000000           mov eax, 1
// 0059a942  d3e0                 shl eax, cl
// 0059a944  01442428             add dword ptr [esp + 0x28], eax
// 0059a948  83bc249000000001     cmp dword ptr [esp + 0x90], 1
// 0059a950  8944243c             mov dword ptr [esp + 0x3c], eax
// 0059a954  750e                 jne 0x59a964
// 0059a956  817c2428b0050000     cmp dword ptr [esp + 0x28], 0x5b0
// 0059a95e  0f83ca000000         jae 0x59aa2e
// 0059a964  8bd6                 mov edx, esi
// 0059a966  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 0059a96d  8b06                 mov eax, dword ptr [esi]
// 0059a96f  880c90               mov byte ptr [eax + edx*4], cl
// 0059a972  8b0e                 mov ecx, dword ptr [esi]
// 0059a974  8a442414             mov al, byte ptr [esp + 0x14]
// 0059a978  88449101             mov byte ptr [ecx + edx*4 + 1], al
// 0059a97c  8b06                 mov eax, dword ptr [esi]
// 0059a97e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059a982  2bc8                 sub ecx, eax
// 0059a984  c1f902               sar ecx, 2
// 0059a987  89542438             mov dword ptr [esp + 0x38], edx
// 0059a98b  66894c9002           mov word ptr [eax + edx*4 + 2], cx
// 0059a990  e94dfeffff           jmp 0x59a7e2
// 0059a995  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 0059a99c  8ac2                 mov al, dl
// 0059a99e  2ac3                 sub al, bl
// 0059a9a0  33c9                 xor ecx, ecx
// 0059a9a2  c644241040           mov byte ptr [esp + 0x10], 0x40
// 0059a9a7  88442411             mov byte ptr [esp + 0x11], al
// 0059a9ab  66894c2412           mov word ptr [esp + 0x12], cx
// 0059a9b0  85ed                 test ebp, ebp
// 0059a9b2  7456                 je 0x59aa0a
// 0059a9b4  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059a9b8  85db                 test ebx, ebx
// 0059a9ba  741e                 je 0x59a9da
// 0059a9bc  8b442440             mov eax, dword ptr [esp + 0x40]
// 0059a9c0  23c5                 and eax, ebp
// 0059a9c2  3b442438             cmp eax, dword ptr [esp + 0x38]
// 0059a9c6  7412                 je 0x59a9da
// 0059a9c8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059a9cc  8b37                 mov esi, dword ptr [edi]
// 0059a9ce  33db                 xor ebx, ebx
// 0059a9d0  89442418             mov dword ptr [esp + 0x18], eax
// 0059a9d4  88442411             mov byte ptr [esp + 0x11], al
// 0059a9d8  8bd0                 mov edx, eax
// 0059a9da  8bcb                 mov ecx, ebx
// 0059a9dc  8bc5                 mov eax, ebp
// 0059a9de  d3e8                 shr eax, cl
// 0059a9e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059a9e4  890c86               mov dword ptr [esi + eax*4], ecx
// 0059a9e7  8d4aff               lea ecx, [edx - 1]
// 0059a9ea  b801000000           mov eax, 1
// 0059a9ef  d3e0                 shl eax, cl
// 0059a9f1  85c5                 test ebp, eax
// 0059a9f3  7406                 je 0x59a9fb
// 0059a9f5  d1e8                 shr eax, 1
// 0059a9f7  85c5                 test ebp, eax
// 0059a9f9  75fa                 jne 0x59a9f5
// 0059a9fb  85c0                 test eax, eax
// 0059a9fd  740b                 je 0x59aa0a
// 0059a9ff  8d48ff               lea ecx, [eax - 1]
// 0059aa02  23cd                 and ecx, ebp
// 0059aa04  03c8                 add ecx, eax
// 0059aa06  8be9                 mov ebp, ecx
// 0059aa08  75ae                 jne 0x59a9b8
// 0059aa0a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059aa0e  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0059aa15  8d049500000000       lea eax, [edx*4]
// 0059aa1c  0107                 add dword ptr [edi], eax
// 0059aa1e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059aa22  5f                   pop edi
// 0059aa23  5e                   pop esi
// 0059aa24  5d                   pop ebp
// 0059aa25  8911                 mov dword ptr [ecx], edx
// 0059aa27  33c0                 xor eax, eax
// 0059aa29  5b                   pop ebx
// 0059aa2a  83c47c               add esp, 0x7c
// 0059aa2d  c3                   ret 
// 0059aa2e  5f                   pop edi
// 0059aa2f  5e                   pop esi
// 0059aa30  5d                   pop ebp
// 0059aa31  b801000000           mov eax, 1
// 0059aa36  5b                   pop ebx
// 0059aa37  83c47c               add esp, 0x7c
// 0059aa3a  c3                   ret 
// library zlib-1.2.3/inftrees.c (function _inflate_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inftrees.c
