// roc 2008-06 00530390  unit: seg_00530000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530390
//
// 00530390  53                   push ebx
// 00530391  56                   push esi
// 00530392  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00530396  57                   push edi
// 00530397  68d8000000           push 0xd8
// 0053039c  e85ff2ffff           call 0x52f600
// 005303a1  83c404               add esp, 4
// 005303a4  33ff                 xor edi, edi
// 005303a6  8d5e48               lea ebx, [esi + 0x48]
// 005303a9  8da42400000000       lea esp, [esp]
// 005303b0  833b00               cmp dword ptr [ebx], 0
// 005303b3  740b                 je 0x5303c0
// 005303b5  57                   push edi
// 005303b6  8bc6                 mov eax, esi
// 005303b8  e823f3ffff           call 0x52f6e0
// 005303bd  83c404               add esp, 4
// 005303c0  47                   inc edi
// 005303c1  83c304               add ebx, 4
// 005303c4  83ff04               cmp edi, 4
// 005303c7  7ce7                 jl 0x5303b0
// 005303c9  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 005303d0  7533                 jne 0x530405
// 005303d2  33ff                 xor edi, edi
// 005303d4  8d5e68               lea ebx, [esi + 0x68]
// 005303d7  837bf000             cmp dword ptr [ebx - 0x10], 0
// 005303db  740d                 je 0x5303ea
// 005303dd  6a00                 push 0
// 005303df  57                   push edi
// 005303e0  8bc6                 mov eax, esi
// 005303e2  e8d9f4ffff           call 0x52f8c0
// 005303e7  83c408               add esp, 8
// 005303ea  833b00               cmp dword ptr [ebx], 0
// 005303ed  740d                 je 0x5303fc
// 005303ef  6a01                 push 1
// 005303f1  57                   push edi
// 005303f2  8bc6                 mov eax, esi
// 005303f4  e8c7f4ffff           call 0x52f8c0
// 005303f9  83c408               add esp, 8
// 005303fc  47                   inc edi
// 005303fd  83c304               add ebx, 4
// 00530400  83ff04               cmp edi, 4
// 00530403  7cd2                 jl 0x5303d7
// 00530405  8b4618               mov eax, dword ptr [esi + 0x18]
// 00530408  8b08                 mov ecx, dword ptr [eax]
// 0053040a  c601ff               mov byte ptr [ecx], 0xff
// 0053040d  ff00                 inc dword ptr [eax]
// 0053040f  83cfff               or edi, 0xffffffff
// 00530412  017804               add dword ptr [eax + 4], edi
// 00530415  8d5f19               lea ebx, [edi + 0x19]
// 00530418  751c                 jne 0x530436
// 0053041a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0053041d  56                   push esi
// 0053041e  ffd2                 call edx
// 00530420  83c404               add esp, 4
// 00530423  84c0                 test al, al
// 00530425  750f                 jne 0x530436
// 00530427  8b06                 mov eax, dword ptr [esi]
// 00530429  895814               mov dword ptr [eax + 0x14], ebx
// 0053042c  8b0e                 mov ecx, dword ptr [esi]
// 0053042e  8b11                 mov edx, dword ptr [ecx]
// 00530430  56                   push esi
// 00530431  ffd2                 call edx
// 00530433  83c404               add esp, 4
// 00530436  8b4618               mov eax, dword ptr [esi + 0x18]
// 00530439  8b08                 mov ecx, dword ptr [eax]
// 0053043b  c601d9               mov byte ptr [ecx], 0xd9
// 0053043e  ff00                 inc dword ptr [eax]
// 00530440  017804               add dword ptr [eax + 4], edi
// 00530443  751c                 jne 0x530461
// 00530445  8b500c               mov edx, dword ptr [eax + 0xc]
// 00530448  56                   push esi
// 00530449  ffd2                 call edx
// 0053044b  83c404               add esp, 4
// 0053044e  84c0                 test al, al
// 00530450  750f                 jne 0x530461
// 00530452  8b06                 mov eax, dword ptr [esi]
// 00530454  895814               mov dword ptr [eax + 0x14], ebx
// 00530457  8b0e                 mov ecx, dword ptr [esi]
// 00530459  8b11                 mov edx, dword ptr [ecx]
// 0053045b  56                   push esi
// 0053045c  ffd2                 call edx
// 0053045e  83c404               add esp, 4
// 00530461  5f                   pop edi
// 00530462  5e                   pop esi
// 00530463  5b                   pop ebx
// 00530464  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_tables_only)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
