// roc 2009-12 0061b9b0  unit: seg_00610000  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b9b0
//
// 0061b9b0  83ec08               sub esp, 8
// 0061b9b3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061b9b7  53                   push ebx
// 0061b9b8  55                   push ebp
// 0061b9b9  57                   push edi
// 0061b9ba  8b38                 mov edi, dword ptr [eax]
// 0061b9bc  8b4008               mov eax, dword ptr [eax + 8]
// 0061b9bf  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0061b9c2  8b10                 mov edx, dword ptr [eax]
// 0061b9c4  33db                 xor ebx, ebx
// 0061b9c6  83cdff               or ebp, 0xffffffff
// 0061b9c9  33c0                 xor eax, eax
// 0061b9cb  3bcb                 cmp ecx, ebx
// 0061b9cd  894c2410             mov dword ptr [esp + 0x10], ecx
// 0061b9d1  896c240c             mov dword ptr [esp + 0xc], ebp
// 0061b9d5  899e50140000         mov dword ptr [esi + 0x1450], ebx
// 0061b9db  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 0061b9e5  7e36                 jle 0x61ba1d
// 0061b9e7  66391c87             cmp word ptr [edi + eax*4], bx
// 0061b9eb  7422                 je 0x61ba0f
// 0061b9ed  ff8650140000         inc dword ptr [esi + 0x1450]
// 0061b9f3  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0061b9f9  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0061ba00  8944240c             mov dword ptr [esp + 0xc], eax
// 0061ba04  889c3058140000       mov byte ptr [eax + esi + 0x1458], bl
// 0061ba0b  8be8                 mov ebp, eax
// 0061ba0d  eb07                 jmp 0x61ba16
// 0061ba0f  33c9                 xor ecx, ecx
// 0061ba11  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 0061ba16  40                   inc eax
// 0061ba17  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0061ba1b  7cca                 jl 0x61b9e7
// 0061ba1d  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0061ba24  7d51                 jge 0x61ba77
// 0061ba26  83fd02               cmp ebp, 2
// 0061ba29  7d05                 jge 0x61ba30
// 0061ba2b  45                   inc ebp
// 0061ba2c  8bc5                 mov eax, ebp
// 0061ba2e  eb02                 jmp 0x61ba32
// 0061ba30  33c0                 xor eax, eax
// 0061ba32  ff8650140000         inc dword ptr [esi + 0x1450]
// 0061ba38  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0061ba3e  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0061ba45  b901000000           mov ecx, 1
// 0061ba4a  66890c87             mov word ptr [edi + eax*4], cx
// 0061ba4e  889c0658140000       mov byte ptr [esi + eax + 0x1458], bl
// 0061ba55  ff8ea8160000         dec dword ptr [esi + 0x16a8]
// 0061ba5b  3bd3                 cmp edx, ebx
// 0061ba5d  740b                 je 0x61ba6a
// 0061ba5f  0fb7448202           movzx eax, word ptr [edx + eax*4 + 2]
// 0061ba64  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 0061ba6a  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0061ba71  7cb3                 jl 0x61ba26
// 0061ba73  896c240c             mov dword ptr [esp + 0xc], ebp
// 0061ba77  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061ba7b  896904               mov dword ptr [ecx + 4], ebp
// 0061ba7e  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 0061ba84  99                   cdq 
// 0061ba85  2bc2                 sub eax, edx
// 0061ba87  8be8                 mov ebp, eax
// 0061ba89  d1fd                 sar ebp, 1
// 0061ba8b  83fd01               cmp ebp, 1
// 0061ba8e  7c11                 jl 0x61baa1
// 0061ba90  55                   push ebp
// 0061ba91  8bc6                 mov eax, esi
// 0061ba93  e8a8ecffff           call 0x61a740
// 0061ba98  4d                   dec ebp
// 0061ba99  83c404               add esp, 4
// 0061ba9c  83fd01               cmp ebp, 1
// 0061ba9f  7def                 jge 0x61ba90
// 0061baa1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0061baa5  eb09                 jmp 0x61bab0
// 0061baa7  8da42400000000       lea esp, [esp]
// 0061baae  8bff                 mov edi, edi
// 0061bab0  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 0061bab6  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 0061babd  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 0061bac3  48                   dec eax
// 0061bac4  898650140000         mov dword ptr [esi + 0x1450], eax
// 0061baca  6a01                 push 1
// 0061bacc  8bc6                 mov eax, esi
// 0061bace  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 0061bad4  e867ecffff           call 0x61a740
// 0061bad9  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 0061badf  83caff               or edx, 0xffffffff
// 0061bae2  019654140000         add dword ptr [esi + 0x1454], edx
// 0061bae8  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 0061baee  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 0061baf5  019654140000         add dword ptr [esi + 0x1454], edx
// 0061bafb  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 0061bb01  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0061bb08  668b0c87             mov cx, word ptr [edi + eax*4]
// 0061bb0c  66030caf             add cx, word ptr [edi + ebp*4]
// 0061bb10  83c404               add esp, 4
// 0061bb13  66890c9f             mov word ptr [edi + ebx*4], cx
// 0061bb17  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 0061bb1e  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 0061bb25  3ad1                 cmp dl, cl
// 0061bb27  7205                 jb 0x61bb2e
// 0061bb29  0fb6ca               movzx ecx, dl
// 0061bb2c  eb03                 jmp 0x61bb31
// 0061bb2e  0fb6c9               movzx ecx, cl
// 0061bb31  fec1                 inc cl
// 0061bb33  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 0061bb3a  0fb7cb               movzx ecx, bx
// 0061bb3d  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 0061bb42  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 0061bb47  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 0061bb4d  6a01                 push 1
// 0061bb4f  8bc6                 mov eax, esi
// 0061bb51  43                   inc ebx
// 0061bb52  e8e9ebffff           call 0x61a740
// 0061bb57  83c404               add esp, 4
// 0061bb5a  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 0061bb61  0f8d49ffffff         jge 0x61bab0
// 0061bb67  ff8e54140000         dec dword ptr [esi + 0x1454]
// 0061bb6d  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 0061bb73  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 0061bb79  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061bb7d  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 0061bb84  8bc6                 mov eax, esi
// 0061bb86  e885ecffff           call 0x61a810
// 0061bb8b  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0061bb8f  8d963c0b0000         lea edx, [esi + 0xb3c]
// 0061bb95  e896fdffff           call 0x61b930
// 0061bb9a  5f                   pop edi
// 0061bb9b  5d                   pop ebp
// 0061bb9c  5b                   pop ebx
// 0061bb9d  83c408               add esp, 8
// 0061bba0  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
