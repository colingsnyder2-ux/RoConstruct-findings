// from server: 100% by auto
// roc 2012-06 0066b0e0  unit: seg_00660000  size: 966 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066b0e0
//
// 0066b0e0  55                   push ebp
// 0066b0e1  8bec                 mov ebp, esp
// 0066b0e3  83e4f8               and esp, 0xfffffff8
// 0066b0e6  81ec300a0000         sub esp, 0xa30
// 0066b0ec  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0066b0f3  53                   push ebx
// 0066b0f4  57                   push edi
// 0066b0f5  7f1c                 jg 0x66b113
// 0066b0f7  8b06                 mov eax, dword ptr [esi]
// 0066b0f9  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0066b100  8b0e                 mov ecx, dword ptr [esi]
// 0066b102  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 0066b109  8b16                 mov edx, dword ptr [esi]
// 0066b10b  8b02                 mov eax, dword ptr [edx]
// 0066b10d  56                   push esi
// 0066b10e  ffd0                 call eax
// 0066b110  83c404               add esp, 4
// 0066b113  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 0066b119  837b1400             cmp dword ptr [ebx + 0x14], 0
// 0066b11d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066b121  7528                 jne 0x66b14b
// 0066b123  837b183f             cmp dword ptr [ebx + 0x18], 0x3f
// 0066b127  7522                 jne 0x66b14b
// 0066b129  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0066b12d  c686d400000000       mov byte ptr [esi + 0xd4], 0
// 0066b134  7e37                 jle 0x66b16d
// 0066b136  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0066b139  51                   push ecx
// 0066b13a  8d542430             lea edx, [esp + 0x30]
// 0066b13e  6a00                 push 0
// 0066b140  52                   push edx
// 0066b141  e82e823100           call 0x983374
// 0066b146  83c40c               add esp, 0xc
// 0066b149  eb22                 jmp 0x66b16d
// 0066b14b  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0066b14f  c686d400000001       mov byte ptr [esi + 0xd4], 1
// 0066b156  7e15                 jle 0x66b16d
// 0066b158  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0066b15b  81e1ffffff00         and ecx, 0xffffff
// 0066b161  c1e106               shl ecx, 6
// 0066b164  83c8ff               or eax, 0xffffffff
// 0066b167  8d7c2438             lea edi, [esp + 0x38]
// 0066b16b  f3ab                 rep stosd dword ptr es:[edi], eax
// 0066b16d  b801000000           mov eax, 1
// 0066b172  3986a8000000         cmp dword ptr [esi + 0xa8], eax
// 0066b178  8944240c             mov dword ptr [esp + 0xc], eax
// 0066b17c  0f8cb4020000         jl 0x66b436
// 0066b182  8b03                 mov eax, dword ptr [ebx]
// 0066b184  89442410             mov dword ptr [esp + 0x10], eax
// 0066b188  85c0                 test eax, eax
// 0066b18a  7e05                 jle 0x66b191
// 0066b18c  83f804               cmp eax, 4
// 0066b18f  7e21                 jle 0x66b1b2
// 0066b191  8b0e                 mov ecx, dword ptr [esi]
// 0066b193  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0066b19a  8b16                 mov edx, dword ptr [esi]
// 0066b19c  894218               mov dword ptr [edx + 0x18], eax
// 0066b19f  8b06                 mov eax, dword ptr [esi]
// 0066b1a1  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0066b1a8  8b0e                 mov ecx, dword ptr [esi]
// 0066b1aa  8b11                 mov edx, dword ptr [ecx]
// 0066b1ac  56                   push esi
// 0066b1ad  ffd2                 call edx
// 0066b1af  83c404               add esp, 4
// 0066b1b2  33ff                 xor edi, edi
// 0066b1b4  397c2410             cmp dword ptr [esp + 0x10], edi
// 0066b1b8  7e63                 jle 0x66b21d
// 0066b1ba  8d9b00000000         lea ebx, [ebx]
// 0066b1c0  8b5cbb04             mov ebx, dword ptr [ebx + edi*4 + 4]
// 0066b1c4  85db                 test ebx, ebx
// 0066b1c6  7c05                 jl 0x66b1cd
// 0066b1c8  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0066b1cb  7c1c                 jl 0x66b1e9
// 0066b1cd  8b06                 mov eax, dword ptr [esi]
// 0066b1cf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066b1d3  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0066b1da  8b0e                 mov ecx, dword ptr [esi]
// 0066b1dc  895118               mov dword ptr [ecx + 0x18], edx
// 0066b1df  8b06                 mov eax, dword ptr [esi]
// 0066b1e1  8b08                 mov ecx, dword ptr [eax]
// 0066b1e3  56                   push esi
// 0066b1e4  ffd1                 call ecx
// 0066b1e6  83c404               add esp, 4
// 0066b1e9  85ff                 test edi, edi
// 0066b1eb  7e25                 jle 0x66b212
// 0066b1ed  8b542414             mov edx, dword ptr [esp + 0x14]
// 0066b1f1  3b1cba               cmp ebx, dword ptr [edx + edi*4]
// 0066b1f4  7f1c                 jg 0x66b212
// 0066b1f6  8b06                 mov eax, dword ptr [esi]
// 0066b1f8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066b1fc  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0066b203  8b0e                 mov ecx, dword ptr [esi]
// 0066b205  895118               mov dword ptr [ecx + 0x18], edx
// 0066b208  8b06                 mov eax, dword ptr [esi]
// 0066b20a  8b08                 mov ecx, dword ptr [eax]
// 0066b20c  56                   push esi
// 0066b20d  ffd1                 call ecx
// 0066b20f  83c404               add esp, 4
// 0066b212  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066b216  47                   inc edi
// 0066b217  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0066b21b  7ca3                 jl 0x66b1c0
// 0066b21d  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0066b224  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 0066b227  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0066b22a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0066b22d  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0066b230  897c2420             mov dword ptr [esp + 0x20], edi
// 0066b234  8944241c             mov dword ptr [esp + 0x1c], eax
// 0066b238  894c2424             mov dword ptr [esp + 0x24], ecx
// 0066b23c  89542428             mov dword ptr [esp + 0x28], edx
// 0066b240  0f8454010000         je 0x66b39a
// 0066b246  83ff3f               cmp edi, 0x3f
// 0066b249  7717                 ja 0x66b262
// 0066b24b  3bc7                 cmp eax, edi
// 0066b24d  7c13                 jl 0x66b262
// 0066b24f  83f840               cmp eax, 0x40
// 0066b252  7d0e                 jge 0x66b262
// 0066b254  83f90a               cmp ecx, 0xa
// 0066b257  7709                 ja 0x66b262
// 0066b259  85d2                 test edx, edx
// 0066b25b  7c05                 jl 0x66b262
// 0066b25d  83fa0a               cmp edx, 0xa
// 0066b260  7e20                 jle 0x66b282
// 0066b262  8b16                 mov edx, dword ptr [esi]
// 0066b264  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066b268  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0066b26f  8b06                 mov eax, dword ptr [esi]
// 0066b271  894818               mov dword ptr [eax + 0x18], ecx
// 0066b274  8b16                 mov edx, dword ptr [esi]
// 0066b276  8b02                 mov eax, dword ptr [edx]
// 0066b278  56                   push esi
// 0066b279  ffd0                 call eax
// 0066b27b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066b27f  83c404               add esp, 4
// 0066b282  85ff                 test edi, edi
// 0066b284  751f                 jne 0x66b2a5
// 0066b286  85c0                 test eax, eax
// 0066b288  743e                 je 0x66b2c8
// 0066b28a  8b0e                 mov ecx, dword ptr [esi]
// 0066b28c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066b290  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0066b297  8b16                 mov edx, dword ptr [esi]
// 0066b299  894218               mov dword ptr [edx + 0x18], eax
// 0066b29c  8b0e                 mov ecx, dword ptr [esi]
// 0066b29e  8b11                 mov edx, dword ptr [ecx]
// 0066b2a0  56                   push esi
// 0066b2a1  ffd2                 call edx
// 0066b2a3  eb20                 jmp 0x66b2c5
// 0066b2a5  837c241001           cmp dword ptr [esp + 0x10], 1
// 0066b2aa  741c                 je 0x66b2c8
// 0066b2ac  8b06                 mov eax, dword ptr [esi]
// 0066b2ae  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066b2b2  c7401411000000       mov dword ptr [eax + 0x14], 0x11
// 0066b2b9  8b0e                 mov ecx, dword ptr [esi]
// 0066b2bb  895118               mov dword ptr [ecx + 0x18], edx
// 0066b2be  8b06                 mov eax, dword ptr [esi]
// 0066b2c0  8b08                 mov ecx, dword ptr [eax]
// 0066b2c2  56                   push esi
// 0066b2c3  ffd1                 call ecx
// 0066b2c5  83c404               add esp, 4
// 0066b2c8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066b2cc  85c0                 test eax, eax
// 0066b2ce  0f8e46010000         jle 0x66b41a
// 0066b2d4  83c304               add ebx, 4
// 0066b2d7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066b2db  89442418             mov dword ptr [esp + 0x18], eax
// 0066b2df  eb04                 jmp 0x66b2e5
// 0066b2e1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0066b2e5  8b1b                 mov ebx, dword ptr [ebx]
// 0066b2e7  c1e308               shl ebx, 8
// 0066b2ea  8d5c1c38             lea ebx, [esp + ebx + 0x38]
// 0066b2ee  85ff                 test edi, edi
// 0066b2f0  7421                 je 0x66b313
// 0066b2f2  833b00               cmp dword ptr [ebx], 0
// 0066b2f5  7d1c                 jge 0x66b313
// 0066b2f7  8b16                 mov edx, dword ptr [esi]
// 0066b2f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066b2fd  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0066b304  8b06                 mov eax, dword ptr [esi]
// 0066b306  894818               mov dword ptr [eax + 0x18], ecx
// 0066b309  8b16                 mov edx, dword ptr [esi]
// 0066b30b  8b02                 mov eax, dword ptr [edx]
// 0066b30d  56                   push esi
// 0066b30e  ffd0                 call eax
// 0066b310  83c404               add esp, 4
// 0066b313  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066b317  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0066b31b  7f65                 jg 0x66b382
// 0066b31d  8d4900               lea ecx, [ecx]
// 0066b320  8b04bb               mov eax, dword ptr [ebx + edi*4]
// 0066b323  85c0                 test eax, eax
// 0066b325  7d22                 jge 0x66b349
// 0066b327  837c242400           cmp dword ptr [esp + 0x24], 0
// 0066b32c  7446                 je 0x66b374
// 0066b32e  8b16                 mov edx, dword ptr [esi]
// 0066b330  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066b334  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0066b33b  8b06                 mov eax, dword ptr [esi]
// 0066b33d  894818               mov dword ptr [eax + 0x18], ecx
// 0066b340  8b16                 mov edx, dword ptr [esi]
// 0066b342  8b02                 mov eax, dword ptr [edx]
// 0066b344  56                   push esi
// 0066b345  ffd0                 call eax
// 0066b347  eb28                 jmp 0x66b371
// 0066b349  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0066b34d  3bc8                 cmp ecx, eax
// 0066b34f  7507                 jne 0x66b358
// 0066b351  49                   dec ecx
// 0066b352  394c2428             cmp dword ptr [esp + 0x28], ecx
// 0066b356  741c                 je 0x66b374
// 0066b358  8b0e                 mov ecx, dword ptr [esi]
// 0066b35a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066b35e  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0066b365  8b16                 mov edx, dword ptr [esi]
// 0066b367  894218               mov dword ptr [edx + 0x18], eax
// 0066b36a  8b0e                 mov ecx, dword ptr [esi]
// 0066b36c  8b11                 mov edx, dword ptr [ecx]
// 0066b36e  56                   push esi
// 0066b36f  ffd2                 call edx
// 0066b371  83c404               add esp, 4
// 0066b374  8b442428             mov eax, dword ptr [esp + 0x28]
// 0066b378  8904bb               mov dword ptr [ebx + edi*4], eax
// 0066b37b  47                   inc edi
// 0066b37c  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0066b380  7e9e                 jle 0x66b320
// 0066b382  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066b386  83c304               add ebx, 4
// 0066b389  836c241801           sub dword ptr [esp + 0x18], 1
// 0066b38e  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066b392  0f8549ffffff         jne 0x66b2e1
// 0066b398  eb7c                 jmp 0x66b416
// 0066b39a  85ff                 test edi, edi
// 0066b39c  750d                 jne 0x66b3ab
// 0066b39e  83f83f               cmp eax, 0x3f
// 0066b3a1  7508                 jne 0x66b3ab
// 0066b3a3  85c9                 test ecx, ecx
// 0066b3a5  7504                 jne 0x66b3ab
// 0066b3a7  85d2                 test edx, edx
// 0066b3a9  741c                 je 0x66b3c7
// 0066b3ab  8b0e                 mov ecx, dword ptr [esi]
// 0066b3ad  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066b3b1  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 0066b3b8  8b16                 mov edx, dword ptr [esi]
// 0066b3ba  894218               mov dword ptr [edx + 0x18], eax
// 0066b3bd  8b0e                 mov ecx, dword ptr [esi]
// 0066b3bf  8b11                 mov edx, dword ptr [ecx]
// 0066b3c1  56                   push esi
// 0066b3c2  ffd2                 call edx
// 0066b3c4  83c404               add esp, 4
// 0066b3c7  837c241000           cmp dword ptr [esp + 0x10], 0
// 0066b3cc  7e4c                 jle 0x66b41a
// 0066b3ce  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066b3d2  83c304               add ebx, 4
// 0066b3d5  89442418             mov dword ptr [esp + 0x18], eax
// 0066b3d9  8da42400000000       lea esp, [esp]
// 0066b3e0  8b03                 mov eax, dword ptr [ebx]
// 0066b3e2  807c042c00           cmp byte ptr [esp + eax + 0x2c], 0
// 0066b3e7  8d7c042c             lea edi, [esp + eax + 0x2c]
// 0066b3eb  741c                 je 0x66b409
// 0066b3ed  8b0e                 mov ecx, dword ptr [esi]
// 0066b3ef  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066b3f3  c7411413000000       mov dword ptr [ecx + 0x14], 0x13
// 0066b3fa  8b16                 mov edx, dword ptr [esi]
// 0066b3fc  894218               mov dword ptr [edx + 0x18], eax
// 0066b3ff  8b0e                 mov ecx, dword ptr [esi]
// 0066b401  8b11                 mov edx, dword ptr [ecx]
// 0066b403  56                   push esi
// 0066b404  ffd2                 call edx
// 0066b406  83c404               add esp, 4
// 0066b409  83c304               add ebx, 4
// 0066b40c  836c241801           sub dword ptr [esp + 0x18], 1
// 0066b411  c60701               mov byte ptr [edi], 1
// 0066b414  75ca                 jne 0x66b3e0
// 0066b416  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066b41a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066b41e  40                   inc eax
// 0066b41f  83c324               add ebx, 0x24
// 0066b422  3b86a8000000         cmp eax, dword ptr [esi + 0xa8]
// 0066b428  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066b42c  8944240c             mov dword ptr [esp + 0xc], eax
// 0066b430  0f8e4cfdffff         jle 0x66b182
// 0066b436  33ff                 xor edi, edi
// 0066b438  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0066b43f  7433                 je 0x66b474
// 0066b441  397e3c               cmp dword ptr [esi + 0x3c], edi
// 0066b444  7e5a                 jle 0x66b4a0
// 0066b446  8d5c2438             lea ebx, [esp + 0x38]
// 0066b44a  833b00               cmp dword ptr [ebx], 0
// 0066b44d  7d13                 jge 0x66b462
// 0066b44f  8b06                 mov eax, dword ptr [esi]
// 0066b451  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0066b458  8b0e                 mov ecx, dword ptr [esi]
// 0066b45a  8b11                 mov edx, dword ptr [ecx]
// 0066b45c  56                   push esi
// 0066b45d  ffd2                 call edx
// 0066b45f  83c404               add esp, 4
// 0066b462  47                   inc edi
// 0066b463  81c300010000         add ebx, 0x100
// 0066b469  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0066b46c  7cdc                 jl 0x66b44a
// 0066b46e  5f                   pop edi
// 0066b46f  5b                   pop ebx
// 0066b470  8be5                 mov esp, ebp
// 0066b472  5d                   pop ebp
// 0066b473  c3                   ret 
// 0066b474  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0066b478  7e26                 jle 0x66b4a0
// 0066b47a  8d9b00000000         lea ebx, [ebx]
// 0066b480  807c3c2c00           cmp byte ptr [esp + edi + 0x2c], 0
// 0066b485  7513                 jne 0x66b49a
// 0066b487  8b06                 mov eax, dword ptr [esi]
// 0066b489  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 0066b490  8b0e                 mov ecx, dword ptr [esi]
// 0066b492  8b11                 mov edx, dword ptr [ecx]
// 0066b494  56                   push esi
// 0066b495  ffd2                 call edx
// 0066b497  83c404               add esp, 4
// 0066b49a  47                   inc edi
// 0066b49b  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0066b49e  7ce0                 jl 0x66b480
// 0066b4a0  5f                   pop edi
// 0066b4a1  5b                   pop ebx
// 0066b4a2  8be5                 mov esp, ebp
// 0066b4a4  5d                   pop ebp
// 0066b4a5  c3                   ret 
// library jpeg-6b/jcmaster.c (function _validate_script)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
