// roc 2008-06 0051b080  unit: G3D::_internal::DialogTemplate  size: 894 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b080
//
// 0051b080  53                   push ebx
// 0051b081  56                   push esi
// 0051b082  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051b086  57                   push edi
// 0051b087  33db                 xor ebx, ebx
// 0051b089  8da42400000000       lea esp, [esp]
// 0051b090  399e7c010000         cmp dword ptr [esi + 0x17c], ebx
// 0051b096  751f                 jne 0x51b0b7
// 0051b098  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051b09e  56                   push esi
// 0051b09f  38580c               cmp byte ptr [eax + 0xc], bl
// 0051b0a2  7507                 jne 0x51b0ab
// 0051b0a4  e837ffffff           call 0x51afe0
// 0051b0a9  eb05                 jmp 0x51b0b0
// 0051b0ab  e810feffff           call 0x51aec0
// 0051b0b0  83c404               add esp, 4
// 0051b0b3  84c0                 test al, al
// 0051b0b5  7430                 je 0x51b0e7
// 0051b0b7  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0051b0bd  8d48ff               lea ecx, [eax - 1]
// 0051b0c0  81f9fd000000         cmp ecx, 0xfd
// 0051b0c6  0f8789010000         ja 0x51b255
// 0051b0cc  0fb68900b35100       movzx ecx, byte ptr [ecx + 0x51b300]
// 0051b0d3  ff248dc0b25100       jmp dword ptr [ecx*4 + 0x51b2c0]
// 0051b0da  e8b1ebffff           call 0x519c90
// 0051b0df  84c0                 test al, al
// 0051b0e1  0f858c010000         jne 0x51b273
// 0051b0e7  5f                   pop edi
// 0051b0e8  5e                   pop esi
// 0051b0e9  33c0                 xor eax, eax
// 0051b0eb  5b                   pop ebx
// 0051b0ec  c3                   ret 
// 0051b0ed  32c9                 xor cl, cl
// 0051b0ef  32c0                 xor al, al
// 0051b0f1  e84aecffff           call 0x519d40
// 0051b0f6  84c0                 test al, al
// 0051b0f8  74ed                 je 0x51b0e7
// 0051b0fa  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b100  eb8e                 jmp 0x51b090
// 0051b102  32c9                 xor cl, cl
// 0051b104  b001                 mov al, 1
// 0051b106  e835ecffff           call 0x519d40
// 0051b10b  84c0                 test al, al
// 0051b10d  74d8                 je 0x51b0e7
// 0051b10f  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b115  e976ffffff           jmp 0x51b090
// 0051b11a  b101                 mov cl, 1
// 0051b11c  32c0                 xor al, al
// 0051b11e  e81decffff           call 0x519d40
// 0051b123  84c0                 test al, al
// 0051b125  74c0                 je 0x51b0e7
// 0051b127  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b12d  e95effffff           jmp 0x51b090
// 0051b132  b101                 mov cl, 1
// 0051b134  8ac1                 mov al, cl
// 0051b136  e805ecffff           call 0x519d40
// 0051b13b  84c0                 test al, al
// 0051b13d  74a8                 je 0x51b0e7
// 0051b13f  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b145  e946ffffff           jmp 0x51b090
// 0051b14a  8b16                 mov edx, dword ptr [esi]
// 0051b14c  c742143c000000       mov dword ptr [edx + 0x14], 0x3c
// 0051b153  8b06                 mov eax, dword ptr [esi]
// 0051b155  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0051b15b  894818               mov dword ptr [eax + 0x18], ecx
// 0051b15e  8b16                 mov edx, dword ptr [esi]
// 0051b160  8b02                 mov eax, dword ptr [edx]
// 0051b162  56                   push esi
// 0051b163  ffd0                 call eax
// 0051b165  83c404               add esp, 4
// 0051b168  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b16e  e91dffffff           jmp 0x51b090
// 0051b173  56                   push esi
// 0051b174  e897fcffff           call 0x51ae10
// 0051b179  83c404               add esp, 4
// 0051b17c  84c0                 test al, al
// 0051b17e  0f8463ffffff         je 0x51b0e7
// 0051b184  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b18a  e901ffffff           jmp 0x51b090
// 0051b18f  56                   push esi
// 0051b190  e8abf1ffff           call 0x51a340
// 0051b195  83c404               add esp, 4
// 0051b198  84c0                 test al, al
// 0051b19a  0f8447ffffff         je 0x51b0e7
// 0051b1a0  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b1a6  e9e5feffff           jmp 0x51b090
// 0051b1ab  8bfe                 mov edi, esi
// 0051b1ad  e88ef4ffff           call 0x51a640
// 0051b1b2  84c0                 test al, al
// 0051b1b4  0f842dffffff         je 0x51b0e7
// 0051b1ba  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b1c0  e9cbfeffff           jmp 0x51b090
// 0051b1c5  56                   push esi
// 0051b1c6  e8d5f6ffff           call 0x51a8a0
// 0051b1cb  83c404               add esp, 4
// 0051b1ce  84c0                 test al, al
// 0051b1d0  0f8411ffffff         je 0x51b0e7
// 0051b1d6  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b1dc  e9affeffff           jmp 0x51b090
// 0051b1e1  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0051b1e7  8b94819cfcffff       mov edx, dword ptr [ecx + eax*4 - 0x364]
// 0051b1ee  56                   push esi
// 0051b1ef  ffd2                 call edx
// 0051b1f1  83c404               add esp, 4
// 0051b1f4  84c0                 test al, al
// 0051b1f6  0f84ebfeffff         je 0x51b0e7
// 0051b1fc  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b202  e989feffff           jmp 0x51b090
// 0051b207  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051b20d  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0051b210  56                   push esi
// 0051b211  ffd1                 call ecx
// 0051b213  83c404               add esp, 4
// 0051b216  84c0                 test al, al
// 0051b218  0f84c9feffff         je 0x51b0e7
// 0051b21e  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b224  e967feffff           jmp 0x51b090
// 0051b229  8b16                 mov edx, dword ptr [esi]
// 0051b22b  c742145c000000       mov dword ptr [edx + 0x14], 0x5c
// 0051b232  8b06                 mov eax, dword ptr [esi]
// 0051b234  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0051b23a  894818               mov dword ptr [eax + 0x18], ecx
// 0051b23d  8b16                 mov edx, dword ptr [esi]
// 0051b23f  8b4204               mov eax, dword ptr [edx + 4]
// 0051b242  6a01                 push 1
// 0051b244  56                   push esi
// 0051b245  ffd0                 call eax
// 0051b247  83c408               add esp, 8
// 0051b24a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b250  e93bfeffff           jmp 0x51b090
// 0051b255  8b0e                 mov ecx, dword ptr [esi]
// 0051b257  c7411444000000       mov dword ptr [ecx + 0x14], 0x44
// 0051b25e  8b16                 mov edx, dword ptr [esi]
// 0051b260  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0051b266  894218               mov dword ptr [edx + 0x18], eax
// 0051b269  8b0e                 mov ecx, dword ptr [esi]
// 0051b26b  8b11                 mov edx, dword ptr [ecx]
// 0051b26d  56                   push esi
// 0051b26e  ffd2                 call edx
// 0051b270  83c404               add esp, 4
// 0051b273  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b279  e912feffff           jmp 0x51b090
// 0051b27e  e8bdedffff           call 0x51a040
// 0051b283  84c0                 test al, al
// 0051b285  0f845cfeffff         je 0x51b0e7
// 0051b28b  5f                   pop edi
// 0051b28c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b292  5e                   pop esi
// 0051b293  b801000000           mov eax, 1
// 0051b298  5b                   pop ebx
// 0051b299  c3                   ret 
// 0051b29a  8b06                 mov eax, dword ptr [esi]
// 0051b29c  c7401455000000       mov dword ptr [eax + 0x14], 0x55
// 0051b2a3  8b0e                 mov ecx, dword ptr [esi]
// 0051b2a5  8b5104               mov edx, dword ptr [ecx + 4]
// 0051b2a8  6a01                 push 1
// 0051b2aa  56                   push esi
// 0051b2ab  ffd2                 call edx
// 0051b2ad  83c408               add esp, 8
// 0051b2b0  5f                   pop edi
// 0051b2b1  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b2b7  5e                   pop esi
// 0051b2b8  b802000000           mov eax, 2
// 0051b2bd  5b                   pop ebx
// 0051b2be  c3                   ret 
// 0051b2bf  90                   nop 
// 0051b2c0  29b25100edb0         sub dword ptr [edx - 0x4f12ffaf], esi
// 0051b2c6  51                   push ecx
// 0051b2c7  0002                 add byte ptr [edx], al
// 0051b2c9  b151                 mov cl, 0x51
// 0051b2cb  004ab1               add byte ptr [edx - 0x4f], cl
// 0051b2ce  51                   push ecx
// 0051b2cf  008fb151001a         add byte ptr [edi + 0x1a0051b1], cl
// 0051b2d5  b151                 mov cl, 0x51
// 0051b2d7  0032                 add byte ptr [edx], dh
// 0051b2d9  b151                 mov cl, 0x51
// 0051b2db  0073b1               add byte ptr [ebx - 0x4f], dh
// 0051b2de  51                   push ecx
// 0051b2df  00da                 add dl, bl
// 0051b2e1  b051                 mov al, 0x51
// 0051b2e3  009ab251007e         add byte ptr [edx + 0x7e0051b2], bl
// 0051b2e9  b251                 mov dl, 0x51
// 0051b2eb  00abb15100c5         add byte ptr [ebx - 0x3affae4f], ch
// 0051b2f1  b151                 mov cl, 0x51
// 0051b2f3  00e1                 add cl, ah
// 0051b2f5  b151                 mov cl, 0x51
// 0051b2f7  0007                 add byte ptr [edi], al
// 0051b2f9  b251                 mov dl, 0x51
// 0051b2fb  0055b2               add byte ptr [ebp - 0x4e], dl
// 0051b2fe  51                   push ecx
// 0051b2ff  0000                 add byte ptr [eax], al
// library jpeg-6b/jdmarker.c (function _read_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
