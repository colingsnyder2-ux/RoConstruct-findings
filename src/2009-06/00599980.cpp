// roc 2009-06 00599980  unit: seg_00590000  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00599980
//
// 00599980  83ec08               sub esp, 8
// 00599983  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00599987  53                   push ebx
// 00599988  55                   push ebp
// 00599989  57                   push edi
// 0059998a  8b38                 mov edi, dword ptr [eax]
// 0059998c  8b4008               mov eax, dword ptr [eax + 8]
// 0059998f  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00599992  8b10                 mov edx, dword ptr [eax]
// 00599994  33db                 xor ebx, ebx
// 00599996  83cdff               or ebp, 0xffffffff
// 00599999  33c0                 xor eax, eax
// 0059999b  3bcb                 cmp ecx, ebx
// 0059999d  894c2410             mov dword ptr [esp + 0x10], ecx
// 005999a1  896c240c             mov dword ptr [esp + 0xc], ebp
// 005999a5  899e50140000         mov dword ptr [esi + 0x1450], ebx
// 005999ab  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 005999b5  7e36                 jle 0x5999ed
// 005999b7  66391c87             cmp word ptr [edi + eax*4], bx
// 005999bb  7422                 je 0x5999df
// 005999bd  ff8650140000         inc dword ptr [esi + 0x1450]
// 005999c3  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 005999c9  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 005999d0  8944240c             mov dword ptr [esp + 0xc], eax
// 005999d4  889c3058140000       mov byte ptr [eax + esi + 0x1458], bl
// 005999db  8be8                 mov ebp, eax
// 005999dd  eb07                 jmp 0x5999e6
// 005999df  33c9                 xor ecx, ecx
// 005999e1  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 005999e6  40                   inc eax
// 005999e7  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005999eb  7cca                 jl 0x5999b7
// 005999ed  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 005999f4  7d51                 jge 0x599a47
// 005999f6  83fd02               cmp ebp, 2
// 005999f9  7d05                 jge 0x599a00
// 005999fb  45                   inc ebp
// 005999fc  8bc5                 mov eax, ebp
// 005999fe  eb02                 jmp 0x599a02
// 00599a00  33c0                 xor eax, eax
// 00599a02  ff8650140000         inc dword ptr [esi + 0x1450]
// 00599a08  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 00599a0e  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00599a15  b901000000           mov ecx, 1
// 00599a1a  66890c87             mov word ptr [edi + eax*4], cx
// 00599a1e  889c0658140000       mov byte ptr [esi + eax + 0x1458], bl
// 00599a25  ff8ea8160000         dec dword ptr [esi + 0x16a8]
// 00599a2b  3bd3                 cmp edx, ebx
// 00599a2d  740b                 je 0x599a3a
// 00599a2f  0fb7448202           movzx eax, word ptr [edx + eax*4 + 2]
// 00599a34  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 00599a3a  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 00599a41  7cb3                 jl 0x5999f6
// 00599a43  896c240c             mov dword ptr [esp + 0xc], ebp
// 00599a47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00599a4b  896904               mov dword ptr [ecx + 4], ebp
// 00599a4e  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 00599a54  99                   cdq 
// 00599a55  2bc2                 sub eax, edx
// 00599a57  8be8                 mov ebp, eax
// 00599a59  d1fd                 sar ebp, 1
// 00599a5b  83fd01               cmp ebp, 1
// 00599a5e  7c11                 jl 0x599a71
// 00599a60  55                   push ebp
// 00599a61  8bc6                 mov eax, esi
// 00599a63  e8a8ecffff           call 0x598710
// 00599a68  4d                   dec ebp
// 00599a69  83c404               add esp, 4
// 00599a6c  83fd01               cmp ebp, 1
// 00599a6f  7def                 jge 0x599a60
// 00599a71  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00599a75  eb09                 jmp 0x599a80
// 00599a77  8da42400000000       lea esp, [esp]
// 00599a7e  8bff                 mov edi, edi
// 00599a80  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 00599a86  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 00599a8d  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 00599a93  48                   dec eax
// 00599a94  898650140000         mov dword ptr [esi + 0x1450], eax
// 00599a9a  6a01                 push 1
// 00599a9c  8bc6                 mov eax, esi
// 00599a9e  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 00599aa4  e867ecffff           call 0x598710
// 00599aa9  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 00599aaf  83caff               or edx, 0xffffffff
// 00599ab2  019654140000         add dword ptr [esi + 0x1454], edx
// 00599ab8  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 00599abe  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 00599ac5  019654140000         add dword ptr [esi + 0x1454], edx
// 00599acb  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 00599ad1  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00599ad8  668b0c87             mov cx, word ptr [edi + eax*4]
// 00599adc  66030caf             add cx, word ptr [edi + ebp*4]
// 00599ae0  83c404               add esp, 4
// 00599ae3  66890c9f             mov word ptr [edi + ebx*4], cx
// 00599ae7  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 00599aee  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 00599af5  3ad1                 cmp dl, cl
// 00599af7  7205                 jb 0x599afe
// 00599af9  0fb6ca               movzx ecx, dl
// 00599afc  eb03                 jmp 0x599b01
// 00599afe  0fb6c9               movzx ecx, cl
// 00599b01  fec1                 inc cl
// 00599b03  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 00599b0a  0fb7cb               movzx ecx, bx
// 00599b0d  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 00599b12  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 00599b17  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 00599b1d  6a01                 push 1
// 00599b1f  8bc6                 mov eax, esi
// 00599b21  43                   inc ebx
// 00599b22  e8e9ebffff           call 0x598710
// 00599b27  83c404               add esp, 4
// 00599b2a  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 00599b31  0f8d49ffffff         jge 0x599a80
// 00599b37  ff8e54140000         dec dword ptr [esi + 0x1454]
// 00599b3d  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 00599b43  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 00599b49  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00599b4d  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 00599b54  8bc6                 mov eax, esi
// 00599b56  e885ecffff           call 0x5987e0
// 00599b5b  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00599b5f  8d963c0b0000         lea edx, [esi + 0xb3c]
// 00599b65  e896fdffff           call 0x599900
// 00599b6a  5f                   pop edi
// 00599b6b  5d                   pop ebp
// 00599b6c  5b                   pop ebx
// 00599b6d  83c408               add esp, 8
// 00599b70  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
