// roc 2007-03 00725910  unit: seg_00720000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725910
//
// 00725910  83ec08               sub esp, 8
// 00725913  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00725917  53                   push ebx
// 00725918  55                   push ebp
// 00725919  57                   push edi
// 0072591a  8b38                 mov edi, dword ptr [eax]
// 0072591c  8b4008               mov eax, dword ptr [eax + 8]
// 0072591f  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00725922  8b28                 mov ebp, dword ptr [eax]
// 00725924  33d2                 xor edx, edx
// 00725926  83cbff               or ebx, 0xffffffff
// 00725929  33c0                 xor eax, eax
// 0072592b  3bca                 cmp ecx, edx
// 0072592d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00725931  895c240c             mov dword ptr [esp + 0xc], ebx
// 00725935  899650140000         mov dword ptr [esi + 0x1450], edx
// 0072593b  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 00725945  7e37                 jle 0x72597e
// 00725947  66391487             cmp word ptr [edi + eax*4], dx
// 0072594b  7423                 je 0x725970
// 0072594d  83865014000001       add dword ptr [esi + 0x1450], 1
// 00725954  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 0072595a  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00725961  8944240c             mov dword ptr [esp + 0xc], eax
// 00725965  88943058140000       mov byte ptr [eax + esi + 0x1458], dl
// 0072596c  8bd8                 mov ebx, eax
// 0072596e  eb05                 jmp 0x725975
// 00725970  6689548702           mov word ptr [edi + eax*4 + 2], dx
// 00725975  83c001               add eax, 1
// 00725978  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0072597c  7cc9                 jl 0x725947
// 0072597e  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 00725985  7d52                 jge 0x7259d9
// 00725987  83fb02               cmp ebx, 2
// 0072598a  7d07                 jge 0x725993
// 0072598c  83c301               add ebx, 1
// 0072598f  8bc3                 mov eax, ebx
// 00725991  eb02                 jmp 0x725995
// 00725993  33c0                 xor eax, eax
// 00725995  83865014000001       add dword ptr [esi + 0x1450], 1
// 0072599c  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 007259a2  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 007259a9  66c704870100         mov word ptr [edi + eax*4], 1
// 007259af  88940658140000       mov byte ptr [esi + eax + 0x1458], dl
// 007259b6  8386a8160000ff       add dword ptr [esi + 0x16a8], -1
// 007259bd  3bea                 cmp ebp, edx
// 007259bf  740b                 je 0x7259cc
// 007259c1  0fb7448502           movzx eax, word ptr [ebp + eax*4 + 2]
// 007259c6  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 007259cc  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 007259d3  7cb2                 jl 0x725987
// 007259d5  895c240c             mov dword ptr [esp + 0xc], ebx
// 007259d9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007259dd  895904               mov dword ptr [ecx + 4], ebx
// 007259e0  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 007259e6  99                   cdq 
// 007259e7  2bc2                 sub eax, edx
// 007259e9  8be8                 mov ebp, eax
// 007259eb  d1fd                 sar ebp, 1
// 007259ed  83fd01               cmp ebp, 1
// 007259f0  7c13                 jl 0x725a05
// 007259f2  55                   push ebp
// 007259f3  8bc6                 mov eax, esi
// 007259f5  e836ecffff           call 0x724630
// 007259fa  83ed01               sub ebp, 1
// 007259fd  83c404               add esp, 4
// 00725a00  83fd01               cmp ebp, 1
// 00725a03  7ded                 jge 0x7259f2
// 00725a05  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00725a09  8da42400000000       lea esp, [esp]
// 00725a10  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 00725a16  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 00725a1d  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 00725a23  83c0ff               add eax, -1
// 00725a26  898650140000         mov dword ptr [esi + 0x1450], eax
// 00725a2c  6a01                 push 1
// 00725a2e  8bc6                 mov eax, esi
// 00725a30  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 00725a36  e8f5ebffff           call 0x724630
// 00725a3b  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 00725a41  83caff               or edx, 0xffffffff
// 00725a44  019654140000         add dword ptr [esi + 0x1454], edx
// 00725a4a  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 00725a50  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 00725a57  019654140000         add dword ptr [esi + 0x1454], edx
// 00725a5d  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 00725a63  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 00725a6a  668b0c87             mov cx, word ptr [edi + eax*4]
// 00725a6e  66030caf             add cx, word ptr [edi + ebp*4]
// 00725a72  83c404               add esp, 4
// 00725a75  66890c9f             mov word ptr [edi + ebx*4], cx
// 00725a79  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 00725a80  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 00725a87  3ad1                 cmp dl, cl
// 00725a89  7205                 jb 0x725a90
// 00725a8b  0fb6ca               movzx ecx, dl
// 00725a8e  eb03                 jmp 0x725a93
// 00725a90  0fb6c9               movzx ecx, cl
// 00725a93  80c101               add cl, 1
// 00725a96  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 00725a9d  0fb7cb               movzx ecx, bx
// 00725aa0  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 00725aa5  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 00725aaa  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 00725ab0  6a01                 push 1
// 00725ab2  8bc6                 mov eax, esi
// 00725ab4  83c301               add ebx, 1
// 00725ab7  e874ebffff           call 0x724630
// 00725abc  83c404               add esp, 4
// 00725abf  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 00725ac6  0f8d44ffffff         jge 0x725a10
// 00725acc  838654140000ff       add dword ptr [esi + 0x1454], -1
// 00725ad3  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 00725ad9  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 00725adf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00725ae3  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 00725aea  8bc6                 mov eax, esi
// 00725aec  e80fecffff           call 0x724700
// 00725af1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00725af5  8d963c0b0000         lea edx, [esi + 0xb3c]
// 00725afb  e890fdffff           call 0x725890
// 00725b00  5f                   pop edi
// 00725b01  5d                   pop ebp
// 00725b02  5b                   pop ebx
// 00725b03  83c408               add esp, 8
// 00725b06  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
