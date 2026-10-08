// from server: 100% by auto
// roc 2009-06 006e9200  unit: RBX::PartDropTool  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9200
//
// 006e9200  8b460c               mov eax, dword ptr [esi + 0xc]
// 006e9203  f6400503             test byte ptr [eax + 5], 3
// 006e9207  740a                 je 0x6e9213
// 006e9209  50                   push eax
// 006e920a  53                   push ebx
// 006e920b  e8f0fbffff           call 0x6e8e00
// 006e9210  83c408               add esp, 8
// 006e9213  807e0600             cmp byte ptr [esi + 6], 0
// 006e9217  55                   push ebp
// 006e9218  57                   push edi
// 006e9219  7432                 je 0x6e924d
// 006e921b  33ed                 xor ebp, ebp
// 006e921d  807e0700             cmp byte ptr [esi + 7], 0
// 006e9221  766c                 jbe 0x6e928f
// 006e9223  8d7e18               lea edi, [esi + 0x18]
// 006e9226  837f0804             cmp dword ptr [edi + 8], 4
// 006e922a  7c12                 jl 0x6e923e
// 006e922c  8b07                 mov eax, dword ptr [edi]
// 006e922e  f6400503             test byte ptr [eax + 5], 3
// 006e9232  740a                 je 0x6e923e
// 006e9234  50                   push eax
// 006e9235  53                   push ebx
// 006e9236  e8c5fbffff           call 0x6e8e00
// 006e923b  83c408               add esp, 8
// 006e923e  0fb64607             movzx eax, byte ptr [esi + 7]
// 006e9242  45                   inc ebp
// 006e9243  83c710               add edi, 0x10
// 006e9246  3be8                 cmp ebp, eax
// 006e9248  7cdc                 jl 0x6e9226
// 006e924a  5f                   pop edi
// 006e924b  5d                   pop ebp
// 006e924c  c3                   ret 
// 006e924d  8b4610               mov eax, dword ptr [esi + 0x10]
// 006e9250  f6400503             test byte ptr [eax + 5], 3
// 006e9254  740a                 je 0x6e9260
// 006e9256  50                   push eax
// 006e9257  53                   push ebx
// 006e9258  e8a3fbffff           call 0x6e8e00
// 006e925d  83c408               add esp, 8
// 006e9260  33ff                 xor edi, edi
// 006e9262  807e0700             cmp byte ptr [esi + 7], 0
// 006e9266  7627                 jbe 0x6e928f
// 006e9268  8d6e14               lea ebp, [esi + 0x14]
// 006e926b  eb03                 jmp 0x6e9270
// 006e926d  8d4900               lea ecx, [ecx]
// 006e9270  8b4500               mov eax, dword ptr [ebp]
// 006e9273  f6400503             test byte ptr [eax + 5], 3
// 006e9277  740a                 je 0x6e9283
// 006e9279  50                   push eax
// 006e927a  53                   push ebx
// 006e927b  e880fbffff           call 0x6e8e00
// 006e9280  83c408               add esp, 8
// 006e9283  0fb64e07             movzx ecx, byte ptr [esi + 7]
// 006e9287  47                   inc edi
// 006e9288  83c504               add ebp, 4
// 006e928b  3bf9                 cmp edi, ecx
// 006e928d  7ce1                 jl 0x6e9270
// 006e928f  5f                   pop edi
// 006e9290  5d                   pop ebp
// 006e9291  c3                   ret 
// library lua-5.1.4/lgc.c (function _traverseclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
