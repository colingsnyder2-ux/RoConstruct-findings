// roc 2007-08 005132f0  unit: G3D::_internal::DialogTemplate  size: 894 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005132f0
//
// 005132f0  53                   push ebx
// 005132f1  56                   push esi
// 005132f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005132f6  57                   push edi
// 005132f7  33db                 xor ebx, ebx
// 005132f9  8da42400000000       lea esp, [esp]
// 00513300  399e7c010000         cmp dword ptr [esi + 0x17c], ebx
// 00513306  751f                 jne 0x513327
// 00513308  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051330e  38580c               cmp byte ptr [eax + 0xc], bl
// 00513311  56                   push esi
// 00513312  7507                 jne 0x51331b
// 00513314  e827ffffff           call 0x513240
// 00513319  eb05                 jmp 0x513320
// 0051331b  e8f0fdffff           call 0x513110
// 00513320  83c404               add esp, 4
// 00513323  84c0                 test al, al
// 00513325  7430                 je 0x513357
// 00513327  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0051332d  8d48ff               lea ecx, [eax - 1]
// 00513330  81f9fd000000         cmp ecx, 0xfd
// 00513336  0f8789010000         ja 0x5134c5
// 0051333c  0fb68970355100       movzx ecx, byte ptr [ecx + 0x513570]
// 00513343  ff248d30355100       jmp dword ptr [ecx*4 + 0x513530]
// 0051334a  e8b1eaffff           call 0x511e00
// 0051334f  84c0                 test al, al
// 00513351  0f858c010000         jne 0x5134e3
// 00513357  5f                   pop edi
// 00513358  5e                   pop esi
// 00513359  33c0                 xor eax, eax
// 0051335b  5b                   pop ebx
// 0051335c  c3                   ret 
// 0051335d  32c9                 xor cl, cl
// 0051335f  32c0                 xor al, al
// 00513361  e84aebffff           call 0x511eb0
// 00513366  84c0                 test al, al
// 00513368  74ed                 je 0x513357
// 0051336a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513370  eb8e                 jmp 0x513300
// 00513372  32c9                 xor cl, cl
// 00513374  b001                 mov al, 1
// 00513376  e835ebffff           call 0x511eb0
// 0051337b  84c0                 test al, al
// 0051337d  74d8                 je 0x513357
// 0051337f  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513385  e976ffffff           jmp 0x513300
// 0051338a  b101                 mov cl, 1
// 0051338c  32c0                 xor al, al
// 0051338e  e81debffff           call 0x511eb0
// 00513393  84c0                 test al, al
// 00513395  74c0                 je 0x513357
// 00513397  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051339d  e95effffff           jmp 0x513300
// 005133a2  b101                 mov cl, 1
// 005133a4  8ac1                 mov al, cl
// 005133a6  e805ebffff           call 0x511eb0
// 005133ab  84c0                 test al, al
// 005133ad  74a8                 je 0x513357
// 005133af  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005133b5  e946ffffff           jmp 0x513300
// 005133ba  8b16                 mov edx, dword ptr [esi]
// 005133bc  c742143c000000       mov dword ptr [edx + 0x14], 0x3c
// 005133c3  8b06                 mov eax, dword ptr [esi]
// 005133c5  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 005133cb  894818               mov dword ptr [eax + 0x18], ecx
// 005133ce  8b16                 mov edx, dword ptr [esi]
// 005133d0  8b02                 mov eax, dword ptr [edx]
// 005133d2  56                   push esi
// 005133d3  ffd0                 call eax
// 005133d5  83c404               add esp, 4
// 005133d8  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005133de  e91dffffff           jmp 0x513300
// 005133e3  56                   push esi
// 005133e4  e877fcffff           call 0x513060
// 005133e9  83c404               add esp, 4
// 005133ec  84c0                 test al, al
// 005133ee  0f8463ffffff         je 0x513357
// 005133f4  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005133fa  e901ffffff           jmp 0x513300
// 005133ff  56                   push esi
// 00513400  e8fbf0ffff           call 0x512500
// 00513405  83c404               add esp, 4
// 00513408  84c0                 test al, al
// 0051340a  0f8447ffffff         je 0x513357
// 00513410  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513416  e9e5feffff           jmp 0x513300
// 0051341b  8bfe                 mov edi, esi
// 0051341d  e80ef4ffff           call 0x512830
// 00513422  84c0                 test al, al
// 00513424  0f842dffffff         je 0x513357
// 0051342a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513430  e9cbfeffff           jmp 0x513300
// 00513435  56                   push esi
// 00513436  e875f6ffff           call 0x512ab0
// 0051343b  83c404               add esp, 4
// 0051343e  84c0                 test al, al
// 00513440  0f8411ffffff         je 0x513357
// 00513446  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051344c  e9affeffff           jmp 0x513300
// 00513451  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00513457  8b94819cfcffff       mov edx, dword ptr [ecx + eax*4 - 0x364]
// 0051345e  56                   push esi
// 0051345f  ffd2                 call edx
// 00513461  83c404               add esp, 4
// 00513464  84c0                 test al, al
// 00513466  0f84ebfeffff         je 0x513357
// 0051346c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513472  e989feffff           jmp 0x513300
// 00513477  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051347d  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00513480  56                   push esi
// 00513481  ffd1                 call ecx
// 00513483  83c404               add esp, 4
// 00513486  84c0                 test al, al
// 00513488  0f84c9feffff         je 0x513357
// 0051348e  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513494  e967feffff           jmp 0x513300
// 00513499  8b16                 mov edx, dword ptr [esi]
// 0051349b  c742145c000000       mov dword ptr [edx + 0x14], 0x5c
// 005134a2  8b06                 mov eax, dword ptr [esi]
// 005134a4  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 005134aa  894818               mov dword ptr [eax + 0x18], ecx
// 005134ad  8b16                 mov edx, dword ptr [esi]
// 005134af  8b4204               mov eax, dword ptr [edx + 4]
// 005134b2  6a01                 push 1
// 005134b4  56                   push esi
// 005134b5  ffd0                 call eax
// 005134b7  83c408               add esp, 8
// 005134ba  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005134c0  e93bfeffff           jmp 0x513300
// 005134c5  8b0e                 mov ecx, dword ptr [esi]
// 005134c7  c7411444000000       mov dword ptr [ecx + 0x14], 0x44
// 005134ce  8b16                 mov edx, dword ptr [esi]
// 005134d0  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 005134d6  894218               mov dword ptr [edx + 0x18], eax
// 005134d9  8b0e                 mov ecx, dword ptr [esi]
// 005134db  8b11                 mov edx, dword ptr [ecx]
// 005134dd  56                   push esi
// 005134de  ffd2                 call edx
// 005134e0  83c404               add esp, 4
// 005134e3  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005134e9  e912feffff           jmp 0x513300
// 005134ee  e8edecffff           call 0x5121e0
// 005134f3  84c0                 test al, al
// 005134f5  0f845cfeffff         je 0x513357
// 005134fb  5f                   pop edi
// 005134fc  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513502  5e                   pop esi
// 00513503  b801000000           mov eax, 1
// 00513508  5b                   pop ebx
// 00513509  c3                   ret 
// 0051350a  8b06                 mov eax, dword ptr [esi]
// 0051350c  c7401455000000       mov dword ptr [eax + 0x14], 0x55
// 00513513  8b0e                 mov ecx, dword ptr [esi]
// 00513515  8b5104               mov edx, dword ptr [ecx + 4]
// 00513518  6a01                 push 1
// 0051351a  56                   push esi
// 0051351b  ffd2                 call edx
// 0051351d  83c408               add esp, 8
// 00513520  5f                   pop edi
// 00513521  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00513527  5e                   pop esi
// 00513528  b802000000           mov eax, 2
// 0051352d  5b                   pop ebx
// 0051352e  c3                   ret 
// 0051352f  90                   nop 
// 00513530  99                   cdq 
// 00513531  3451                 xor al, 0x51
// 00513533  005d33               add byte ptr [ebp + 0x33], bl
// 00513536  51                   push ecx
// 00513537  007233               add byte ptr [edx + 0x33], dh
// 0051353a  51                   push ecx
// 0051353b  00ba335100ff         add byte ptr [edx - 0xffaecd], bh
// 00513541  335100               xor edx, dword ptr [ecx]
// 00513544  8a33                 mov dh, byte ptr [ebx]
// 00513546  51                   push ecx
// 00513547  00a2335100e3         add byte ptr [edx - 0x1cffaecd], ah
// 0051354d  335100               xor edx, dword ptr [ecx]
// 00513550  4a                   dec edx
// 00513551  335100               xor edx, dword ptr [ecx]
// 00513554  0a355100ee34         or dh, byte ptr [0x34ee0051]
// 0051355a  51                   push ecx
// 0051355b  001b                 add byte ptr [ebx], bl
// 0051355d  3451                 xor al, 0x51
// 0051355f  003534510051         add byte ptr [0x51005134], dh
// 00513565  3451                 xor al, 0x51
// 00513567  007734               add byte ptr [edi + 0x34], dh
// 0051356a  51                   push ecx
// 0051356b  00c5                 add ch, al
// 0051356d  3451                 xor al, 0x51
// 0051356f  0000                 add byte ptr [eax], al
// library jpeg-6b/jdmarker.c (function _read_markers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
