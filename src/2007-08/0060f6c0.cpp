// roc 2007-08 0060f6c0  unit: RBX::Ball  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f6c0
//
// 0060f6c0  55                   push ebp
// 0060f6c1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0060f6c5  85ed                 test ebp, ebp
// 0060f6c7  0f84e6000000         je 0x60f7b3
// 0060f6cd  53                   push ebx
// 0060f6ce  56                   push esi
// 0060f6cf  57                   push edi
// 0060f6d0  bb04000000           mov ebx, 4
// 0060f6d5  f6450510             test byte ptr [ebp + 5], 0x10
// 0060f6d9  8b7d1c               mov edi, dword ptr [ebp + 0x1c]
// 0060f6dc  744e                 je 0x60f72c
// 0060f6de  85ff                 test edi, edi
// 0060f6e0  744a                 je 0x60f72c
// 0060f6e2  8bf7                 mov esi, edi
// 0060f6e4  c1e604               shl esi, 4
// 0060f6e7  eb07                 jmp 0x60f6f0
// 0060f6e9  8da42400000000       lea esp, [esp]
// 0060f6f0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0060f6f3  83ee10               sub esi, 0x10
// 0060f6f6  8b4c3008             mov ecx, dword ptr [eax + esi + 8]
// 0060f6fa  03c6                 add eax, esi
// 0060f6fc  83ef01               sub edi, 1
// 0060f6ff  3bcb                 cmp ecx, ebx
// 0060f701  7c25                 jl 0x60f728
// 0060f703  7508                 jne 0x60f70d
// 0060f705  8b00                 mov eax, dword ptr [eax]
// 0060f707  806005fc             and byte ptr [eax + 5], 0xfc
// 0060f70b  eb1b                 jmp 0x60f728
// 0060f70d  8b10                 mov edx, dword ptr [eax]
// 0060f70f  8a5205               mov dl, byte ptr [edx + 5]
// 0060f712  f6c203               test dl, 3
// 0060f715  750a                 jne 0x60f721
// 0060f717  83f907               cmp ecx, 7
// 0060f71a  750c                 jne 0x60f728
// 0060f71c  f6c208               test dl, 8
// 0060f71f  7407                 je 0x60f728
// 0060f721  c7400800000000       mov dword ptr [eax + 8], 0
// 0060f728  85ff                 test edi, edi
// 0060f72a  75c4                 jne 0x60f6f0
// 0060f72c  8a4d07               mov cl, byte ptr [ebp + 7]
// 0060f72f  be01000000           mov esi, 1
// 0060f734  d3e6                 shl esi, cl
// 0060f736  85f6                 test esi, esi
// 0060f738  746b                 je 0x60f7a5
// 0060f73a  8bfe                 mov edi, esi
// 0060f73c  c1e705               shl edi, 5
// 0060f73f  90                   nop 
// 0060f740  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0060f743  83ef20               sub edi, 0x20
// 0060f746  03c7                 add eax, edi
// 0060f748  83ee01               sub esi, 1
// 0060f74b  83780800             cmp dword ptr [eax + 8], 0
// 0060f74f  7450                 je 0x60f7a1
// 0060f751  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0060f754  3bcb                 cmp ecx, ebx
// 0060f756  7c11                 jl 0x60f769
// 0060f758  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0060f75b  7506                 jne 0x60f763
// 0060f75d  806105fc             and byte ptr [ecx + 5], 0xfc
// 0060f761  eb06                 jmp 0x60f769
// 0060f763  f6410503             test byte ptr [ecx + 5], 3
// 0060f767  7525                 jne 0x60f78e
// 0060f769  8b4808               mov ecx, dword ptr [eax + 8]
// 0060f76c  3bcb                 cmp ecx, ebx
// 0060f76e  7c31                 jl 0x60f7a1
// 0060f770  7508                 jne 0x60f77a
// 0060f772  8b00                 mov eax, dword ptr [eax]
// 0060f774  806005fc             and byte ptr [eax + 5], 0xfc
// 0060f778  eb27                 jmp 0x60f7a1
// 0060f77a  8b10                 mov edx, dword ptr [eax]
// 0060f77c  8a5205               mov dl, byte ptr [edx + 5]
// 0060f77f  f6c203               test dl, 3
// 0060f782  750a                 jne 0x60f78e
// 0060f784  83f907               cmp ecx, 7
// 0060f787  7518                 jne 0x60f7a1
// 0060f789  f6c208               test dl, 8
// 0060f78c  7413                 je 0x60f7a1
// 0060f78e  395818               cmp dword ptr [eax + 0x18], ebx
// 0060f791  c7400800000000       mov dword ptr [eax + 8], 0
// 0060f798  7c07                 jl 0x60f7a1
// 0060f79a  c740180b000000       mov dword ptr [eax + 0x18], 0xb
// 0060f7a1  85f6                 test esi, esi
// 0060f7a3  759b                 jne 0x60f740
// 0060f7a5  8b6d18               mov ebp, dword ptr [ebp + 0x18]
// 0060f7a8  85ed                 test ebp, ebp
// 0060f7aa  0f8525ffffff         jne 0x60f6d5
// 0060f7b0  5f                   pop edi
// 0060f7b1  5e                   pop esi
// 0060f7b2  5b                   pop ebx
// 0060f7b3  5d                   pop ebp
// 0060f7b4  c3                   ret 
// library lua-5.1.4/lgc.c (function _cleartable)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
