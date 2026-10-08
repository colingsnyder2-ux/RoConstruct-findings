// from server: 100% by auto
// roc 2010-06 0057d510  unit: seg_00570000  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d510
//
// 0057d510  83ec08               sub esp, 8
// 0057d513  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057d517  53                   push ebx
// 0057d518  55                   push ebp
// 0057d519  57                   push edi
// 0057d51a  8b38                 mov edi, dword ptr [eax]
// 0057d51c  8b4008               mov eax, dword ptr [eax + 8]
// 0057d51f  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0057d522  8b10                 mov edx, dword ptr [eax]
// 0057d524  33db                 xor ebx, ebx
// 0057d526  83cdff               or ebp, 0xffffffff
// 0057d529  33c0                 xor eax, eax
// 0057d52b  3bcb                 cmp ecx, ebx
// 0057d52d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057d531  896c240c             mov dword ptr [esp + 0xc], ebp
// 0057d535  899e50140000         mov dword ptr [esi + 0x1450], ebx
// 0057d53b  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 0057d545  7e36                 jle 0x57d57d
// 0057d547  66391c87             cmp word ptr [edi + eax*4], bx
// 0057d54b  7422                 je 0x57d56f
// 0057d54d  ff8650140000         inc dword ptr [esi + 0x1450]
// 0057d553  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0057d559  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0057d560  8944240c             mov dword ptr [esp + 0xc], eax
// 0057d564  889c3058140000       mov byte ptr [eax + esi + 0x1458], bl
// 0057d56b  8be8                 mov ebp, eax
// 0057d56d  eb07                 jmp 0x57d576
// 0057d56f  33c9                 xor ecx, ecx
// 0057d571  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 0057d576  40                   inc eax
// 0057d577  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0057d57b  7cca                 jl 0x57d547
// 0057d57d  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0057d584  7d51                 jge 0x57d5d7
// 0057d586  83fd02               cmp ebp, 2
// 0057d589  7d05                 jge 0x57d590
// 0057d58b  45                   inc ebp
// 0057d58c  8bc5                 mov eax, ebp
// 0057d58e  eb02                 jmp 0x57d592
// 0057d590  33c0                 xor eax, eax
// 0057d592  ff8650140000         inc dword ptr [esi + 0x1450]
// 0057d598  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0057d59e  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0057d5a5  b901000000           mov ecx, 1
// 0057d5aa  66890c87             mov word ptr [edi + eax*4], cx
// 0057d5ae  889c0658140000       mov byte ptr [esi + eax + 0x1458], bl
// 0057d5b5  ff8ea8160000         dec dword ptr [esi + 0x16a8]
// 0057d5bb  3bd3                 cmp edx, ebx
// 0057d5bd  740b                 je 0x57d5ca
// 0057d5bf  0fb7448202           movzx eax, word ptr [edx + eax*4 + 2]
// 0057d5c4  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 0057d5ca  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0057d5d1  7cb3                 jl 0x57d586
// 0057d5d3  896c240c             mov dword ptr [esp + 0xc], ebp
// 0057d5d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057d5db  896904               mov dword ptr [ecx + 4], ebp
// 0057d5de  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 0057d5e4  99                   cdq 
// 0057d5e5  2bc2                 sub eax, edx
// 0057d5e7  8be8                 mov ebp, eax
// 0057d5e9  d1fd                 sar ebp, 1
// 0057d5eb  83fd01               cmp ebp, 1
// 0057d5ee  7c11                 jl 0x57d601
// 0057d5f0  55                   push ebp
// 0057d5f1  8bc6                 mov eax, esi
// 0057d5f3  e8a8ecffff           call 0x57c2a0
// 0057d5f8  4d                   dec ebp
// 0057d5f9  83c404               add esp, 4
// 0057d5fc  83fd01               cmp ebp, 1
// 0057d5ff  7def                 jge 0x57d5f0
// 0057d601  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057d605  eb09                 jmp 0x57d610
// 0057d607  8da42400000000       lea esp, [esp]
// 0057d60e  8bff                 mov edi, edi
// 0057d610  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 0057d616  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 0057d61d  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 0057d623  48                   dec eax
// 0057d624  898650140000         mov dword ptr [esi + 0x1450], eax
// 0057d62a  6a01                 push 1
// 0057d62c  8bc6                 mov eax, esi
// 0057d62e  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 0057d634  e867ecffff           call 0x57c2a0
// 0057d639  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 0057d63f  83caff               or edx, 0xffffffff
// 0057d642  019654140000         add dword ptr [esi + 0x1454], edx
// 0057d648  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 0057d64e  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 0057d655  019654140000         add dword ptr [esi + 0x1454], edx
// 0057d65b  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 0057d661  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0057d668  668b0c87             mov cx, word ptr [edi + eax*4]
// 0057d66c  66030caf             add cx, word ptr [edi + ebp*4]
// 0057d670  83c404               add esp, 4
// 0057d673  66890c9f             mov word ptr [edi + ebx*4], cx
// 0057d677  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 0057d67e  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 0057d685  3ad1                 cmp dl, cl
// 0057d687  7205                 jb 0x57d68e
// 0057d689  0fb6ca               movzx ecx, dl
// 0057d68c  eb03                 jmp 0x57d691
// 0057d68e  0fb6c9               movzx ecx, cl
// 0057d691  fec1                 inc cl
// 0057d693  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 0057d69a  0fb7cb               movzx ecx, bx
// 0057d69d  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 0057d6a2  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 0057d6a7  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 0057d6ad  6a01                 push 1
// 0057d6af  8bc6                 mov eax, esi
// 0057d6b1  43                   inc ebx
// 0057d6b2  e8e9ebffff           call 0x57c2a0
// 0057d6b7  83c404               add esp, 4
// 0057d6ba  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0057d6c1  0f8d49ffffff         jge 0x57d610
// 0057d6c7  ff8e54140000         dec dword ptr [esi + 0x1454]
// 0057d6cd  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 0057d6d3  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 0057d6d9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057d6dd  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 0057d6e4  8bc6                 mov eax, esi
// 0057d6e6  e885ecffff           call 0x57c370
// 0057d6eb  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0057d6ef  8d963c0b0000         lea edx, [esi + 0xb3c]
// 0057d6f5  e896fdffff           call 0x57d490
// 0057d6fa  5f                   pop edi
// 0057d6fb  5d                   pop ebp
// 0057d6fc  5b                   pop ebx
// 0057d6fd  83c408               add esp, 8
// 0057d700  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
