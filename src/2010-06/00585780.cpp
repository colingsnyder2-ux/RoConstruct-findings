// roc 2010-06 00585780  unit: seg_00580000  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585780
//
// 00585780  81ec14050000         sub esp, 0x514
// 00585786  53                   push ebx
// 00585787  55                   push ebp
// 00585788  56                   push esi
// 00585789  8bb4242c050000       mov esi, dword ptr [esp + 0x52c]
// 00585790  57                   push edi
// 00585791  bf32000000           mov edi, 0x32
// 00585796  85f6                 test esi, esi
// 00585798  7c05                 jl 0x58579f
// 0058579a  83fe04               cmp esi, 4
// 0058579d  7c20                 jl 0x5857bf
// 0058579f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 005857a6  8b4500               mov eax, dword ptr [ebp]
// 005857a9  897814               mov dword ptr [eax + 0x14], edi
// 005857ac  8b4d00               mov ecx, dword ptr [ebp]
// 005857af  897118               mov dword ptr [ecx + 0x18], esi
// 005857b2  8b5500               mov edx, dword ptr [ebp]
// 005857b5  8b02                 mov eax, dword ptr [edx]
// 005857b7  55                   push ebp
// 005857b8  ffd0                 call eax
// 005857ba  83c404               add esp, 4
// 005857bd  eb07                 jmp 0x5857c6
// 005857bf  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 005857c6  80bc242c05000000     cmp byte ptr [esp + 0x52c], 0
// 005857ce  740a                 je 0x5857da
// 005857d0  8b4cb558             mov ecx, dword ptr [ebp + esi*4 + 0x58]
// 005857d4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005857d8  eb08                 jmp 0x5857e2
// 005857da  8b54b568             mov edx, dword ptr [ebp + esi*4 + 0x68]
// 005857de  89542410             mov dword ptr [esp + 0x10], edx
// 005857e2  837c241000           cmp dword ptr [esp + 0x10], 0
// 005857e7  7517                 jne 0x585800
// 005857e9  8b4500               mov eax, dword ptr [ebp]
// 005857ec  897814               mov dword ptr [eax + 0x14], edi
// 005857ef  8b4d00               mov ecx, dword ptr [ebp]
// 005857f2  897118               mov dword ptr [ecx + 0x18], esi
// 005857f5  8b5500               mov edx, dword ptr [ebp]
// 005857f8  8b02                 mov eax, dword ptr [edx]
// 005857fa  55                   push ebp
// 005857fb  ffd0                 call eax
// 005857fd  83c404               add esp, 4
// 00585800  8bb42434050000       mov esi, dword ptr [esp + 0x534]
// 00585807  833e00               cmp dword ptr [esi], 0
// 0058580a  7514                 jne 0x585820
// 0058580c  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0058580f  8b11                 mov edx, dword ptr [ecx]
// 00585811  6800050000           push 0x500
// 00585816  6a01                 push 1
// 00585818  55                   push ebp
// 00585819  ffd2                 call edx
// 0058581b  83c40c               add esp, 0xc
// 0058581e  8906                 mov dword ptr [esi], eax
// 00585820  8b06                 mov eax, dword ptr [esi]
// 00585822  89442418             mov dword ptr [esp + 0x18], eax
// 00585826  33ff                 xor edi, edi
// 00585828  bb01000000           mov ebx, 1
// 0058582d  8d4900               lea ecx, [ecx]
// 00585830  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00585834  0fb6340b             movzx esi, byte ptr [ebx + ecx]
// 00585838  85f6                 test esi, esi
// 0058583a  7c0b                 jl 0x585847
// 0058583c  8d143e               lea edx, [esi + edi]
// 0058583f  81fa00010000         cmp edx, 0x100
// 00585845  7e15                 jle 0x58585c
// 00585847  8b4500               mov eax, dword ptr [ebp]
// 0058584a  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00585851  8b4d00               mov ecx, dword ptr [ebp]
// 00585854  8b11                 mov edx, dword ptr [ecx]
// 00585856  55                   push ebp
// 00585857  ffd2                 call edx
// 00585859  83c404               add esp, 4
// 0058585c  85f6                 test esi, esi
// 0058585e  7411                 je 0x585871
// 00585860  56                   push esi
// 00585861  8d443c20             lea eax, [esp + edi + 0x20]
// 00585865  53                   push ebx
// 00585866  50                   push eax
// 00585867  e878332200           call 0x7a8be4
// 0058586c  83c40c               add esp, 0xc
// 0058586f  03fe                 add edi, esi
// 00585871  43                   inc ebx
// 00585872  83fb10               cmp ebx, 0x10
// 00585875  7eb9                 jle 0x585830
// 00585877  c6443c1c00           mov byte ptr [esp + edi + 0x1c], 0
// 0058587c  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00585880  897c2414             mov dword ptr [esp + 0x14], edi
// 00585884  33ff                 xor edi, edi
// 00585886  33f6                 xor esi, esi
// 00585888  0fbed8               movsx ebx, al
// 0058588b  84c0                 test al, al
// 0058588d  7451                 je 0x5858e0
// 0058588f  8d44241c             lea eax, [esp + 0x1c]
// 00585893  0fbe00               movsx eax, byte ptr [eax]
// 00585896  3bc3                 cmp eax, ebx
// 00585898  7518                 jne 0x5858b2
// 0058589a  8d9b00000000         lea ebx, [ebx]
// 005858a0  0fbe4c341d           movsx ecx, byte ptr [esp + esi + 0x1d]
// 005858a5  89bcb420010000       mov dword ptr [esp + esi*4 + 0x120], edi
// 005858ac  46                   inc esi
// 005858ad  47                   inc edi
// 005858ae  3bcb                 cmp ecx, ebx
// 005858b0  74ee                 je 0x5858a0
// 005858b2  ba01000000           mov edx, 1
// 005858b7  8bcb                 mov ecx, ebx
// 005858b9  d3e2                 shl edx, cl
// 005858bb  3bfa                 cmp edi, edx
// 005858bd  7c15                 jl 0x5858d4
// 005858bf  8b4500               mov eax, dword ptr [ebp]
// 005858c2  c7401408000000       mov dword ptr [eax + 0x14], 8
// 005858c9  8b4d00               mov ecx, dword ptr [ebp]
// 005858cc  8b11                 mov edx, dword ptr [ecx]
// 005858ce  55                   push ebp
// 005858cf  ffd2                 call edx
// 005858d1  83c404               add esp, 4
// 005858d4  8d44341c             lea eax, [esp + esi + 0x1c]
// 005858d8  03ff                 add edi, edi
// 005858da  43                   inc ebx
// 005858db  803800               cmp byte ptr [eax], 0
// 005858de  75b3                 jne 0x585893
// 005858e0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005858e4  6800010000           push 0x100
// 005858e9  81c500040000         add ebp, 0x400
// 005858ef  6a00                 push 0
// 005858f1  55                   push ebp
// 005858f2  e8ed322200           call 0x7a8be4
// 005858f7  0fb69c2438050000     movzx ebx, byte ptr [esp + 0x538]
// 005858ff  83c40c               add esp, 0xc
// 00585902  f7db                 neg ebx
// 00585904  1bdb                 sbb ebx, ebx
// 00585906  81e310ffffff         and ebx, 0xffffff10
// 0058590c  33f6                 xor esi, esi
// 0058590e  81c3ff000000         add ebx, 0xff
// 00585914  39742414             cmp dword ptr [esp + 0x14], esi
// 00585918  7e53                 jle 0x58596d
// 0058591a  8d9b00000000         lea ebx, [ebx]
// 00585920  8b442410             mov eax, dword ptr [esp + 0x10]
// 00585924  0fb67c3011           movzx edi, byte ptr [eax + esi + 0x11]
// 00585929  85ff                 test edi, edi
// 0058592b  7c0a                 jl 0x585937
// 0058592d  3bfb                 cmp edi, ebx
// 0058592f  7f06                 jg 0x585937
// 00585931  803c2f00             cmp byte ptr [edi + ebp], 0
// 00585935  741a                 je 0x585951
// 00585937  8b842428050000       mov eax, dword ptr [esp + 0x528]
// 0058593e  8b08                 mov ecx, dword ptr [eax]
// 00585940  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 00585947  8b10                 mov edx, dword ptr [eax]
// 00585949  50                   push eax
// 0058594a  8b02                 mov eax, dword ptr [edx]
// 0058594c  ffd0                 call eax
// 0058594e  83c404               add esp, 4
// 00585951  8b8cb420010000       mov ecx, dword ptr [esp + esi*4 + 0x120]
// 00585958  8a44341c             mov al, byte ptr [esp + esi + 0x1c]
// 0058595c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00585960  46                   inc esi
// 00585961  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00585965  890cba               mov dword ptr [edx + edi*4], ecx
// 00585968  88042f               mov byte ptr [edi + ebp], al
// 0058596b  7cb3                 jl 0x585920
// 0058596d  5f                   pop edi
// 0058596e  5e                   pop esi
// 0058596f  5d                   pop ebp
// 00585970  5b                   pop ebx
// 00585971  81c414050000         add esp, 0x514
// 00585977  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_make_c_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
