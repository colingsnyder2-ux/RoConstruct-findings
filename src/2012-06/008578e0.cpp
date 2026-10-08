// from server: 100% by auto
// roc 2012-06 008578e0  unit: lua_exception  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008578e0
//
// 008578e0  51                   push ecx
// 008578e1  53                   push ebx
// 008578e2  57                   push edi
// 008578e3  8d442408             lea eax, [esp + 8]
// 008578e7  50                   push eax
// 008578e8  51                   push ecx
// 008578e9  52                   push edx
// 008578ea  e831c0fdff           call 0x833920
// 008578ef  8d9e0c020000         lea ebx, [esi + 0x20c]
// 008578f5  83c40c               add esp, 0xc
// 008578f8  8bf8                 mov edi, eax
// 008578fa  391e                 cmp dword ptr [esi], ebx
// 008578fc  7209                 jb 0x857907
// 008578fe  56                   push esi
// 008578ff  e87cb8fdff           call 0x833180
// 00857904  83c404               add esp, 4
// 00857907  8b06                 mov eax, dword ptr [esi]
// 00857909  c60022               mov byte ptr [eax], 0x22
// 0085790c  ff06                 inc dword ptr [esi]
// 0085790e  837c240800           cmp dword ptr [esp + 8], 0
// 00857913  0f848f000000         je 0x8579a8
// 00857919  8da42400000000       lea esp, [esp]
// 00857920  ff4c2408             dec dword ptr [esp + 8]
// 00857924  0fbe07               movsx eax, byte ptr [edi]
// 00857927  83f85c               cmp eax, 0x5c
// 0085792a  775b                 ja 0x857987
// 0085792c  0fb688d4798500       movzx ecx, byte ptr [eax + 0x8579d4]
// 00857933  ff248dc4798500       jmp dword ptr [ecx*4 + 0x8579c4]
// 0085793a  391e                 cmp dword ptr [esi], ebx
// 0085793c  7209                 jb 0x857947
// 0085793e  56                   push esi
// 0085793f  e83cb8fdff           call 0x833180
// 00857944  83c404               add esp, 4
// 00857947  8b16                 mov edx, dword ptr [esi]
// 00857949  c6025c               mov byte ptr [edx], 0x5c
// 0085794c  ff06                 inc dword ptr [esi]
// 0085794e  391e                 cmp dword ptr [esi], ebx
// 00857950  7209                 jb 0x85795b
// 00857952  56                   push esi
// 00857953  e828b8fdff           call 0x833180
// 00857958  83c404               add esp, 4
// 0085795b  8b06                 mov eax, dword ptr [esi]
// 0085795d  8a0f                 mov cl, byte ptr [edi]
// 0085795f  8808                 mov byte ptr [eax], cl
// 00857961  eb37                 jmp 0x85799a
// 00857963  6a02                 push 2
// 00857965  68383eb800           push 0xb83e38
// 0085796a  56                   push esi
// 0085796b  e850b8fdff           call 0x8331c0
// 00857970  83c40c               add esp, 0xc
// 00857973  eb27                 jmp 0x85799c
// 00857975  6a04                 push 4
// 00857977  681c3fbd00           push 0xbd3f1c
// 0085797c  56                   push esi
// 0085797d  e83eb8fdff           call 0x8331c0
// 00857982  83c40c               add esp, 0xc
// 00857985  eb15                 jmp 0x85799c
// 00857987  391e                 cmp dword ptr [esi], ebx
// 00857989  7209                 jb 0x857994
// 0085798b  56                   push esi
// 0085798c  e8efb7fdff           call 0x833180
// 00857991  83c404               add esp, 4
// 00857994  8b16                 mov edx, dword ptr [esi]
// 00857996  8a07                 mov al, byte ptr [edi]
// 00857998  8802                 mov byte ptr [edx], al
// 0085799a  ff06                 inc dword ptr [esi]
// 0085799c  47                   inc edi
// 0085799d  837c240800           cmp dword ptr [esp + 8], 0
// 008579a2  0f8578ffffff         jne 0x857920
// 008579a8  ff4c2408             dec dword ptr [esp + 8]
// 008579ac  391e                 cmp dword ptr [esi], ebx
// 008579ae  5f                   pop edi
// 008579af  5b                   pop ebx
// 008579b0  7209                 jb 0x8579bb
// 008579b2  56                   push esi
// 008579b3  e8c8b7fdff           call 0x833180
// 008579b8  83c404               add esp, 4
// 008579bb  8b0e                 mov ecx, dword ptr [esi]
// 008579bd  c60122               mov byte ptr [ecx], 0x22
// 008579c0  ff06                 inc dword ptr [esi]
// 008579c2  59                   pop ecx
// 008579c3  c3                   ret 
// 008579c4  7579                 jne 0x857a3f
// 008579c6  8500                 test dword ptr [eax], eax
// 008579c8  3a7985               cmp bh, byte ptr [ecx - 0x7b]
// 008579cb  006379               add byte ptr [ebx + 0x79], ah
// 008579ce  8500                 test dword ptr [eax], eax
// 008579d0  877985               xchg dword ptr [ecx - 0x7b], edi
// 008579d3  0000                 add byte ptr [eax], al
// 008579d5  0303                 add eax, dword ptr [ebx]
// 008579d7  0303                 add eax, dword ptr [ebx]
// 008579d9  0303                 add eax, dword ptr [ebx]
// 008579db  0303                 add eax, dword ptr [ebx]
// 008579dd  0301                 add eax, dword ptr [ecx]
// 008579df  0303                 add eax, dword ptr [ebx]
// 008579e1  0203                 add al, byte ptr [ebx]
// 008579e3  0303                 add eax, dword ptr [ebx]
// 008579e5  0303                 add eax, dword ptr [ebx]
// 008579e7  0303                 add eax, dword ptr [ebx]
// 008579e9  0303                 add eax, dword ptr [ebx]
// 008579eb  0303                 add eax, dword ptr [ebx]
// 008579ed  0303                 add eax, dword ptr [ebx]
// 008579ef  0303                 add eax, dword ptr [ebx]
// 008579f1  0303                 add eax, dword ptr [ebx]
// 008579f3  0303                 add eax, dword ptr [ebx]
// 008579f5  0301                 add eax, dword ptr [ecx]
// 008579f7  0303                 add eax, dword ptr [ebx]
// 008579f9  0303                 add eax, dword ptr [ebx]
// 008579fb  0303                 add eax, dword ptr [ebx]
// 008579fd  0303                 add eax, dword ptr [ebx]
// 008579ff  0303                 add eax, dword ptr [ebx]
// 00857a01  0303                 add eax, dword ptr [ebx]
// 00857a03  0303                 add eax, dword ptr [ebx]
// 00857a05  0303                 add eax, dword ptr [ebx]
// 00857a07  0303                 add eax, dword ptr [ebx]
// 00857a09  0303                 add eax, dword ptr [ebx]
// 00857a0b  0303                 add eax, dword ptr [ebx]
// 00857a0d  0303                 add eax, dword ptr [ebx]
// 00857a0f  0303                 add eax, dword ptr [ebx]
// 00857a11  0303                 add eax, dword ptr [ebx]
// 00857a13  0303                 add eax, dword ptr [ebx]
// 00857a15  0303                 add eax, dword ptr [ebx]
// 00857a17  0303                 add eax, dword ptr [ebx]
// 00857a19  0303                 add eax, dword ptr [ebx]
// 00857a1b  0303                 add eax, dword ptr [ebx]
// 00857a1d  0303                 add eax, dword ptr [ebx]
// 00857a1f  0303                 add eax, dword ptr [ebx]
// 00857a21  0303                 add eax, dword ptr [ebx]
// 00857a23  0303                 add eax, dword ptr [ebx]
// 00857a25  0303                 add eax, dword ptr [ebx]
// 00857a27  0303                 add eax, dword ptr [ebx]
// 00857a29  0303                 add eax, dword ptr [ebx]
// 00857a2b  0303                 add eax, dword ptr [ebx]
// 00857a2d  0303                 add eax, dword ptr [ebx]
// 00857a2f  0301                 add eax, dword ptr [ecx]
// library lua-5.1.4/lstrlib.c (function _addquoted)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
