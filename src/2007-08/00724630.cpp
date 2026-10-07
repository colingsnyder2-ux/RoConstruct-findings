// roc 2007-08 00724630  unit: CXTIconHandle  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724630
//
// 00724630  83ec08               sub esp, 8
// 00724633  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00724637  53                   push ebx
// 00724638  55                   push ebp
// 00724639  57                   push edi
// 0072463a  8b38                 mov edi, dword ptr [eax]
// 0072463c  8b4008               mov eax, dword ptr [eax + 8]
// 0072463f  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00724642  8b28                 mov ebp, dword ptr [eax]
// 00724644  33d2                 xor edx, edx
// 00724646  83cbff               or ebx, 0xffffffff
// 00724649  33c0                 xor eax, eax
// 0072464b  3bca                 cmp ecx, edx
// 0072464d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00724651  895c240c             mov dword ptr [esp + 0xc], ebx
// 00724655  899650140000         mov dword ptr [esi + 0x1450], edx
// 0072465b  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 00724665  7e37                 jle 0x72469e
// 00724667  66391487             cmp word ptr [edi + eax*4], dx
// 0072466b  7423                 je 0x724690
// 0072466d  83865014000001       add dword ptr [esi + 0x1450], 1
// 00724674  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0072467a  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00724681  8944240c             mov dword ptr [esp + 0xc], eax
// 00724685  88943058140000       mov byte ptr [eax + esi + 0x1458], dl
// 0072468c  8bd8                 mov ebx, eax
// 0072468e  eb05                 jmp 0x724695
// 00724690  6689548702           mov word ptr [edi + eax*4 + 2], dx
// 00724695  83c001               add eax, 1
// 00724698  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0072469c  7cc9                 jl 0x724667
// 0072469e  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 007246a5  7d52                 jge 0x7246f9
// 007246a7  83fb02               cmp ebx, 2
// 007246aa  7d07                 jge 0x7246b3
// 007246ac  83c301               add ebx, 1
// 007246af  8bc3                 mov eax, ebx
// 007246b1  eb02                 jmp 0x7246b5
// 007246b3  33c0                 xor eax, eax
// 007246b5  83865014000001       add dword ptr [esi + 0x1450], 1
// 007246bc  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 007246c2  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 007246c9  66c704870100         mov word ptr [edi + eax*4], 1
// 007246cf  88940658140000       mov byte ptr [esi + eax + 0x1458], dl
// 007246d6  8386a8160000ff       add dword ptr [esi + 0x16a8], -1
// 007246dd  3bea                 cmp ebp, edx
// 007246df  740b                 je 0x7246ec
// 007246e1  0fb7448502           movzx eax, word ptr [ebp + eax*4 + 2]
// 007246e6  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 007246ec  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 007246f3  7cb2                 jl 0x7246a7
// 007246f5  895c240c             mov dword ptr [esp + 0xc], ebx
// 007246f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007246fd  895904               mov dword ptr [ecx + 4], ebx
// 00724700  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 00724706  99                   cdq 
// 00724707  2bc2                 sub eax, edx
// 00724709  8be8                 mov ebp, eax
// 0072470b  d1fd                 sar ebp, 1
// 0072470d  83fd01               cmp ebp, 1
// 00724710  7c13                 jl 0x724725
// 00724712  55                   push ebp
// 00724713  8bc6                 mov eax, esi
// 00724715  e846ecffff           call 0x723360
// 0072471a  83ed01               sub ebp, 1
// 0072471d  83c404               add esp, 4
// 00724720  83fd01               cmp ebp, 1
// 00724723  7ded                 jge 0x724712
// 00724725  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00724729  8da42400000000       lea esp, [esp]
// 00724730  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 00724736  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 0072473d  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 00724743  83c0ff               add eax, -1
// 00724746  898650140000         mov dword ptr [esi + 0x1450], eax
// 0072474c  6a01                 push 1
// 0072474e  8bc6                 mov eax, esi
// 00724750  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 00724756  e805ecffff           call 0x723360
// 0072475b  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 00724761  83caff               or edx, 0xffffffff
// 00724764  019654140000         add dword ptr [esi + 0x1454], edx
// 0072476a  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 00724770  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 00724777  019654140000         add dword ptr [esi + 0x1454], edx
// 0072477d  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 00724783  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 0072478a  668b0c87             mov cx, word ptr [edi + eax*4]
// 0072478e  66030caf             add cx, word ptr [edi + ebp*4]
// 00724792  83c404               add esp, 4
// 00724795  66890c9f             mov word ptr [edi + ebx*4], cx
// 00724799  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 007247a0  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 007247a7  3ad1                 cmp dl, cl
// 007247a9  7205                 jb 0x7247b0
// 007247ab  0fb6ca               movzx ecx, dl
// 007247ae  eb03                 jmp 0x7247b3
// 007247b0  0fb6c9               movzx ecx, cl
// 007247b3  80c101               add cl, 1
// 007247b6  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 007247bd  0fb7cb               movzx ecx, bx
// 007247c0  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 007247c5  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 007247ca  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 007247d0  6a01                 push 1
// 007247d2  8bc6                 mov eax, esi
// 007247d4  83c301               add ebx, 1
// 007247d7  e884ebffff           call 0x723360
// 007247dc  83c404               add esp, 4
// 007247df  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 007247e6  0f8d44ffffff         jge 0x724730
// 007247ec  838654140000ff       add dword ptr [esi + 0x1454], -1
// 007247f3  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 007247f9  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 007247ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00724803  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 0072480a  8bc6                 mov eax, esi
// 0072480c  e81fecffff           call 0x723430
// 00724811  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00724815  8d963c0b0000         lea edx, [esi + 0xb3c]
// 0072481b  e890fdffff           call 0x7245b0
// 00724820  5f                   pop edi
// 00724821  5d                   pop ebp
// 00724822  5b                   pop ebx
// 00724823  83c408               add esp, 8
// 00724826  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
