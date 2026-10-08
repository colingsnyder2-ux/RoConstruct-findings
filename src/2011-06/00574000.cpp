// from server: 100% by auto
// roc 2011-06 00574000  unit: seg_00570000  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574000
//
// 00574000  83ec08               sub esp, 8
// 00574003  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00574007  53                   push ebx
// 00574008  55                   push ebp
// 00574009  57                   push edi
// 0057400a  8b38                 mov edi, dword ptr [eax]
// 0057400c  8b4008               mov eax, dword ptr [eax + 8]
// 0057400f  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00574012  8b10                 mov edx, dword ptr [eax]
// 00574014  33db                 xor ebx, ebx
// 00574016  83cdff               or ebp, 0xffffffff
// 00574019  33c0                 xor eax, eax
// 0057401b  3bcb                 cmp ecx, ebx
// 0057401d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00574021  896c240c             mov dword ptr [esp + 0xc], ebp
// 00574025  899e50140000         mov dword ptr [esi + 0x1450], ebx
// 0057402b  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 00574035  7e36                 jle 0x57406d
// 00574037  66391c87             cmp word ptr [edi + eax*4], bx
// 0057403b  7422                 je 0x57405f
// 0057403d  ff8650140000         inc dword ptr [esi + 0x1450]
// 00574043  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 00574049  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00574050  8944240c             mov dword ptr [esp + 0xc], eax
// 00574054  889c3058140000       mov byte ptr [eax + esi + 0x1458], bl
// 0057405b  8be8                 mov ebp, eax
// 0057405d  eb07                 jmp 0x574066
// 0057405f  33c9                 xor ecx, ecx
// 00574061  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 00574066  40                   inc eax
// 00574067  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0057406b  7cca                 jl 0x574037
// 0057406d  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 00574074  7d51                 jge 0x5740c7
// 00574076  83fd02               cmp ebp, 2
// 00574079  7d05                 jge 0x574080
// 0057407b  45                   inc ebp
// 0057407c  8bc5                 mov eax, ebp
// 0057407e  eb02                 jmp 0x574082
// 00574080  33c0                 xor eax, eax
// 00574082  ff8650140000         inc dword ptr [esi + 0x1450]
// 00574088  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0057408e  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00574095  b901000000           mov ecx, 1
// 0057409a  66890c87             mov word ptr [edi + eax*4], cx
// 0057409e  889c0658140000       mov byte ptr [esi + eax + 0x1458], bl
// 005740a5  ff8ea8160000         dec dword ptr [esi + 0x16a8]
// 005740ab  3bd3                 cmp edx, ebx
// 005740ad  740b                 je 0x5740ba
// 005740af  0fb7448202           movzx eax, word ptr [edx + eax*4 + 2]
// 005740b4  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 005740ba  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 005740c1  7cb3                 jl 0x574076
// 005740c3  896c240c             mov dword ptr [esp + 0xc], ebp
// 005740c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005740cb  896904               mov dword ptr [ecx + 4], ebp
// 005740ce  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 005740d4  99                   cdq 
// 005740d5  2bc2                 sub eax, edx
// 005740d7  8be8                 mov ebp, eax
// 005740d9  d1fd                 sar ebp, 1
// 005740db  83fd01               cmp ebp, 1
// 005740de  7c11                 jl 0x5740f1
// 005740e0  55                   push ebp
// 005740e1  8bc6                 mov eax, esi
// 005740e3  e8a8ecffff           call 0x572d90
// 005740e8  4d                   dec ebp
// 005740e9  83c404               add esp, 4
// 005740ec  83fd01               cmp ebp, 1
// 005740ef  7def                 jge 0x5740e0
// 005740f1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005740f5  eb09                 jmp 0x574100
// 005740f7  8da42400000000       lea esp, [esp]
// 005740fe  8bff                 mov edi, edi
// 00574100  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 00574106  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 0057410d  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 00574113  48                   dec eax
// 00574114  898650140000         mov dword ptr [esi + 0x1450], eax
// 0057411a  6a01                 push 1
// 0057411c  8bc6                 mov eax, esi
// 0057411e  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 00574124  e867ecffff           call 0x572d90
// 00574129  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 0057412f  83caff               or edx, 0xffffffff
// 00574132  019654140000         add dword ptr [esi + 0x1454], edx
// 00574138  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 0057413e  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 00574145  019654140000         add dword ptr [esi + 0x1454], edx
// 0057414b  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 00574151  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00574158  668b0c87             mov cx, word ptr [edi + eax*4]
// 0057415c  66030caf             add cx, word ptr [edi + ebp*4]
// 00574160  83c404               add esp, 4
// 00574163  66890c9f             mov word ptr [edi + ebx*4], cx
// 00574167  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 0057416e  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 00574175  3ad1                 cmp dl, cl
// 00574177  7205                 jb 0x57417e
// 00574179  0fb6ca               movzx ecx, dl
// 0057417c  eb03                 jmp 0x574181
// 0057417e  0fb6c9               movzx ecx, cl
// 00574181  fec1                 inc cl
// 00574183  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 0057418a  0fb7cb               movzx ecx, bx
// 0057418d  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 00574192  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 00574197  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 0057419d  6a01                 push 1
// 0057419f  8bc6                 mov eax, esi
// 005741a1  43                   inc ebx
// 005741a2  e8e9ebffff           call 0x572d90
// 005741a7  83c404               add esp, 4
// 005741aa  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 005741b1  0f8d49ffffff         jge 0x574100
// 005741b7  ff8e54140000         dec dword ptr [esi + 0x1454]
// 005741bd  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 005741c3  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 005741c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005741cd  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 005741d4  8bc6                 mov eax, esi
// 005741d6  e885ecffff           call 0x572e60
// 005741db  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005741df  8d963c0b0000         lea edx, [esi + 0xb3c]
// 005741e5  e896fdffff           call 0x573f80
// 005741ea  5f                   pop edi
// 005741eb  5d                   pop ebp
// 005741ec  5b                   pop ebx
// 005741ed  83c408               add esp, 8
// 005741f0  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
