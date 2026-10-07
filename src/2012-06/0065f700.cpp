// roc 2012-06 0065f700  unit: seg_00650000  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f700
//
// 0065f700  83ec08               sub esp, 8
// 0065f703  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065f707  53                   push ebx
// 0065f708  55                   push ebp
// 0065f709  57                   push edi
// 0065f70a  8b38                 mov edi, dword ptr [eax]
// 0065f70c  8b4008               mov eax, dword ptr [eax + 8]
// 0065f70f  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0065f712  8b10                 mov edx, dword ptr [eax]
// 0065f714  33db                 xor ebx, ebx
// 0065f716  83cdff               or ebp, 0xffffffff
// 0065f719  33c0                 xor eax, eax
// 0065f71b  3bcb                 cmp ecx, ebx
// 0065f71d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0065f721  896c240c             mov dword ptr [esp + 0xc], ebp
// 0065f725  899e50140000         mov dword ptr [esi + 0x1450], ebx
// 0065f72b  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 0065f735  7e36                 jle 0x65f76d
// 0065f737  66391c87             cmp word ptr [edi + eax*4], bx
// 0065f73b  7422                 je 0x65f75f
// 0065f73d  ff8650140000         inc dword ptr [esi + 0x1450]
// 0065f743  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0065f749  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0065f750  8944240c             mov dword ptr [esp + 0xc], eax
// 0065f754  889c3058140000       mov byte ptr [eax + esi + 0x1458], bl
// 0065f75b  8be8                 mov ebp, eax
// 0065f75d  eb07                 jmp 0x65f766
// 0065f75f  33c9                 xor ecx, ecx
// 0065f761  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 0065f766  40                   inc eax
// 0065f767  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0065f76b  7cca                 jl 0x65f737
// 0065f76d  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0065f774  7d51                 jge 0x65f7c7
// 0065f776  83fd02               cmp ebp, 2
// 0065f779  7d05                 jge 0x65f780
// 0065f77b  45                   inc ebp
// 0065f77c  8bc5                 mov eax, ebp
// 0065f77e  eb02                 jmp 0x65f782
// 0065f780  33c0                 xor eax, eax
// 0065f782  ff8650140000         inc dword ptr [esi + 0x1450]
// 0065f788  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0065f78e  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0065f795  b901000000           mov ecx, 1
// 0065f79a  66890c87             mov word ptr [edi + eax*4], cx
// 0065f79e  889c0658140000       mov byte ptr [esi + eax + 0x1458], bl
// 0065f7a5  ff8ea8160000         dec dword ptr [esi + 0x16a8]
// 0065f7ab  3bd3                 cmp edx, ebx
// 0065f7ad  740b                 je 0x65f7ba
// 0065f7af  0fb7448202           movzx eax, word ptr [edx + eax*4 + 2]
// 0065f7b4  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 0065f7ba  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0065f7c1  7cb3                 jl 0x65f776
// 0065f7c3  896c240c             mov dword ptr [esp + 0xc], ebp
// 0065f7c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065f7cb  896904               mov dword ptr [ecx + 4], ebp
// 0065f7ce  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 0065f7d4  99                   cdq 
// 0065f7d5  2bc2                 sub eax, edx
// 0065f7d7  8be8                 mov ebp, eax
// 0065f7d9  d1fd                 sar ebp, 1
// 0065f7db  83fd01               cmp ebp, 1
// 0065f7de  7c11                 jl 0x65f7f1
// 0065f7e0  55                   push ebp
// 0065f7e1  8bc6                 mov eax, esi
// 0065f7e3  e8a8ecffff           call 0x65e490
// 0065f7e8  4d                   dec ebp
// 0065f7e9  83c404               add esp, 4
// 0065f7ec  83fd01               cmp ebp, 1
// 0065f7ef  7def                 jge 0x65f7e0
// 0065f7f1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065f7f5  eb09                 jmp 0x65f800
// 0065f7f7  8da42400000000       lea esp, [esp]
// 0065f7fe  8bff                 mov edi, edi
// 0065f800  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 0065f806  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 0065f80d  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 0065f813  48                   dec eax
// 0065f814  898650140000         mov dword ptr [esi + 0x1450], eax
// 0065f81a  6a01                 push 1
// 0065f81c  8bc6                 mov eax, esi
// 0065f81e  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 0065f824  e867ecffff           call 0x65e490
// 0065f829  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 0065f82f  83caff               or edx, 0xffffffff
// 0065f832  019654140000         add dword ptr [esi + 0x1454], edx
// 0065f838  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 0065f83e  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 0065f845  019654140000         add dword ptr [esi + 0x1454], edx
// 0065f84b  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 0065f851  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0065f858  668b0c87             mov cx, word ptr [edi + eax*4]
// 0065f85c  66030caf             add cx, word ptr [edi + ebp*4]
// 0065f860  83c404               add esp, 4
// 0065f863  66890c9f             mov word ptr [edi + ebx*4], cx
// 0065f867  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 0065f86e  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 0065f875  3ad1                 cmp dl, cl
// 0065f877  7205                 jb 0x65f87e
// 0065f879  0fb6ca               movzx ecx, dl
// 0065f87c  eb03                 jmp 0x65f881
// 0065f87e  0fb6c9               movzx ecx, cl
// 0065f881  fec1                 inc cl
// 0065f883  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 0065f88a  0fb7cb               movzx ecx, bx
// 0065f88d  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 0065f892  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 0065f897  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 0065f89d  6a01                 push 1
// 0065f89f  8bc6                 mov eax, esi
// 0065f8a1  43                   inc ebx
// 0065f8a2  e8e9ebffff           call 0x65e490
// 0065f8a7  83c404               add esp, 4
// 0065f8aa  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0065f8b1  0f8d49ffffff         jge 0x65f800
// 0065f8b7  ff8e54140000         dec dword ptr [esi + 0x1454]
// 0065f8bd  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 0065f8c3  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 0065f8c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065f8cd  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 0065f8d4  8bc6                 mov eax, esi
// 0065f8d6  e885ecffff           call 0x65e560
// 0065f8db  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0065f8df  8d963c0b0000         lea edx, [esi + 0xb3c]
// 0065f8e5  e896fdffff           call 0x65f680
// 0065f8ea  5f                   pop edi
// 0065f8eb  5d                   pop ebp
// 0065f8ec  5b                   pop ebx
// 0065f8ed  83c408               add esp, 8
// 0065f8f0  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
