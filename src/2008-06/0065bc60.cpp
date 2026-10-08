// from server: 100% by auto
// roc 2008-06 0065bc60  unit: RBX::BallBallContact  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065bc60
//
// 0065bc60  55                   push ebp
// 0065bc61  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0065bc65  85ed                 test ebp, ebp
// 0065bc67  0f84e4000000         je 0x65bd51
// 0065bc6d  53                   push ebx
// 0065bc6e  56                   push esi
// 0065bc6f  57                   push edi
// 0065bc70  bb04000000           mov ebx, 4
// 0065bc75  f6450510             test byte ptr [ebp + 5], 0x10
// 0065bc79  8b7d1c               mov edi, dword ptr [ebp + 0x1c]
// 0065bc7c  744c                 je 0x65bcca
// 0065bc7e  85ff                 test edi, edi
// 0065bc80  7448                 je 0x65bcca
// 0065bc82  8bf7                 mov esi, edi
// 0065bc84  c1e604               shl esi, 4
// 0065bc87  eb07                 jmp 0x65bc90
// 0065bc89  8da42400000000       lea esp, [esp]
// 0065bc90  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0065bc93  83ee10               sub esi, 0x10
// 0065bc96  8b4c3008             mov ecx, dword ptr [eax + esi + 8]
// 0065bc9a  03c6                 add eax, esi
// 0065bc9c  4f                   dec edi
// 0065bc9d  3bcb                 cmp ecx, ebx
// 0065bc9f  7c25                 jl 0x65bcc6
// 0065bca1  7508                 jne 0x65bcab
// 0065bca3  8b00                 mov eax, dword ptr [eax]
// 0065bca5  806005fc             and byte ptr [eax + 5], 0xfc
// 0065bca9  eb1b                 jmp 0x65bcc6
// 0065bcab  8b10                 mov edx, dword ptr [eax]
// 0065bcad  8a5205               mov dl, byte ptr [edx + 5]
// 0065bcb0  f6c203               test dl, 3
// 0065bcb3  750a                 jne 0x65bcbf
// 0065bcb5  83f907               cmp ecx, 7
// 0065bcb8  750c                 jne 0x65bcc6
// 0065bcba  f6c208               test dl, 8
// 0065bcbd  7407                 je 0x65bcc6
// 0065bcbf  c7400800000000       mov dword ptr [eax + 8], 0
// 0065bcc6  85ff                 test edi, edi
// 0065bcc8  75c6                 jne 0x65bc90
// 0065bcca  8a4d07               mov cl, byte ptr [ebp + 7]
// 0065bccd  be01000000           mov esi, 1
// 0065bcd2  d3e6                 shl esi, cl
// 0065bcd4  85f6                 test esi, esi
// 0065bcd6  746b                 je 0x65bd43
// 0065bcd8  8bfe                 mov edi, esi
// 0065bcda  c1e705               shl edi, 5
// 0065bcdd  8d4900               lea ecx, [ecx]
// 0065bce0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0065bce3  83ef20               sub edi, 0x20
// 0065bce6  03c7                 add eax, edi
// 0065bce8  4e                   dec esi
// 0065bce9  83780800             cmp dword ptr [eax + 8], 0
// 0065bced  7450                 je 0x65bd3f
// 0065bcef  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0065bcf2  3bcb                 cmp ecx, ebx
// 0065bcf4  7c11                 jl 0x65bd07
// 0065bcf6  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0065bcf9  7506                 jne 0x65bd01
// 0065bcfb  806105fc             and byte ptr [ecx + 5], 0xfc
// 0065bcff  eb06                 jmp 0x65bd07
// 0065bd01  f6410503             test byte ptr [ecx + 5], 3
// 0065bd05  7525                 jne 0x65bd2c
// 0065bd07  8b4808               mov ecx, dword ptr [eax + 8]
// 0065bd0a  3bcb                 cmp ecx, ebx
// 0065bd0c  7c31                 jl 0x65bd3f
// 0065bd0e  7508                 jne 0x65bd18
// 0065bd10  8b00                 mov eax, dword ptr [eax]
// 0065bd12  806005fc             and byte ptr [eax + 5], 0xfc
// 0065bd16  eb27                 jmp 0x65bd3f
// 0065bd18  8b10                 mov edx, dword ptr [eax]
// 0065bd1a  8a5205               mov dl, byte ptr [edx + 5]
// 0065bd1d  f6c203               test dl, 3
// 0065bd20  750a                 jne 0x65bd2c
// 0065bd22  83f907               cmp ecx, 7
// 0065bd25  7518                 jne 0x65bd3f
// 0065bd27  f6c208               test dl, 8
// 0065bd2a  7413                 je 0x65bd3f
// 0065bd2c  395818               cmp dword ptr [eax + 0x18], ebx
// 0065bd2f  c7400800000000       mov dword ptr [eax + 8], 0
// 0065bd36  7c07                 jl 0x65bd3f
// 0065bd38  c740180b000000       mov dword ptr [eax + 0x18], 0xb
// 0065bd3f  85f6                 test esi, esi
// 0065bd41  759d                 jne 0x65bce0
// 0065bd43  8b6d18               mov ebp, dword ptr [ebp + 0x18]
// 0065bd46  85ed                 test ebp, ebp
// 0065bd48  0f8527ffffff         jne 0x65bc75
// 0065bd4e  5f                   pop edi
// 0065bd4f  5e                   pop esi
// 0065bd50  5b                   pop ebx
// 0065bd51  5d                   pop ebp
// 0065bd52  c3                   ret 
// library lua-5.1.4/lgc.c (function _cleartable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
