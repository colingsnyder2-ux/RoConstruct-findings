// from server: 100% by auto
// roc 2012-06 00667140  unit: seg_00660000  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667140
//
// 00667140  81ec14050000         sub esp, 0x514
// 00667146  53                   push ebx
// 00667147  55                   push ebp
// 00667148  56                   push esi
// 00667149  8bb4242c050000       mov esi, dword ptr [esp + 0x52c]
// 00667150  57                   push edi
// 00667151  bf32000000           mov edi, 0x32
// 00667156  85f6                 test esi, esi
// 00667158  7c05                 jl 0x66715f
// 0066715a  83fe04               cmp esi, 4
// 0066715d  7c20                 jl 0x66717f
// 0066715f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 00667166  8b4500               mov eax, dword ptr [ebp]
// 00667169  897814               mov dword ptr [eax + 0x14], edi
// 0066716c  8b4d00               mov ecx, dword ptr [ebp]
// 0066716f  897118               mov dword ptr [ecx + 0x18], esi
// 00667172  8b5500               mov edx, dword ptr [ebp]
// 00667175  8b02                 mov eax, dword ptr [edx]
// 00667177  55                   push ebp
// 00667178  ffd0                 call eax
// 0066717a  83c404               add esp, 4
// 0066717d  eb07                 jmp 0x667186
// 0066717f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 00667186  80bc242c05000000     cmp byte ptr [esp + 0x52c], 0
// 0066718e  740a                 je 0x66719a
// 00667190  8b4cb558             mov ecx, dword ptr [ebp + esi*4 + 0x58]
// 00667194  894c2410             mov dword ptr [esp + 0x10], ecx
// 00667198  eb08                 jmp 0x6671a2
// 0066719a  8b54b568             mov edx, dword ptr [ebp + esi*4 + 0x68]
// 0066719e  89542410             mov dword ptr [esp + 0x10], edx
// 006671a2  837c241000           cmp dword ptr [esp + 0x10], 0
// 006671a7  7517                 jne 0x6671c0
// 006671a9  8b4500               mov eax, dword ptr [ebp]
// 006671ac  897814               mov dword ptr [eax + 0x14], edi
// 006671af  8b4d00               mov ecx, dword ptr [ebp]
// 006671b2  897118               mov dword ptr [ecx + 0x18], esi
// 006671b5  8b5500               mov edx, dword ptr [ebp]
// 006671b8  8b02                 mov eax, dword ptr [edx]
// 006671ba  55                   push ebp
// 006671bb  ffd0                 call eax
// 006671bd  83c404               add esp, 4
// 006671c0  8bb42434050000       mov esi, dword ptr [esp + 0x534]
// 006671c7  833e00               cmp dword ptr [esi], 0
// 006671ca  7514                 jne 0x6671e0
// 006671cc  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006671cf  8b11                 mov edx, dword ptr [ecx]
// 006671d1  6800050000           push 0x500
// 006671d6  6a01                 push 1
// 006671d8  55                   push ebp
// 006671d9  ffd2                 call edx
// 006671db  83c40c               add esp, 0xc
// 006671de  8906                 mov dword ptr [esi], eax
// 006671e0  8b06                 mov eax, dword ptr [esi]
// 006671e2  89442418             mov dword ptr [esp + 0x18], eax
// 006671e6  33ff                 xor edi, edi
// 006671e8  bb01000000           mov ebx, 1
// 006671ed  8d4900               lea ecx, [ecx]
// 006671f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006671f4  0fb6340b             movzx esi, byte ptr [ebx + ecx]
// 006671f8  85f6                 test esi, esi
// 006671fa  7c0b                 jl 0x667207
// 006671fc  8d143e               lea edx, [esi + edi]
// 006671ff  81fa00010000         cmp edx, 0x100
// 00667205  7e15                 jle 0x66721c
// 00667207  8b4500               mov eax, dword ptr [ebp]
// 0066720a  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00667211  8b4d00               mov ecx, dword ptr [ebp]
// 00667214  8b11                 mov edx, dword ptr [ecx]
// 00667216  55                   push ebp
// 00667217  ffd2                 call edx
// 00667219  83c404               add esp, 4
// 0066721c  85f6                 test esi, esi
// 0066721e  7411                 je 0x667231
// 00667220  56                   push esi
// 00667221  8d443c20             lea eax, [esp + edi + 0x20]
// 00667225  53                   push ebx
// 00667226  50                   push eax
// 00667227  e848c13100           call 0x983374
// 0066722c  83c40c               add esp, 0xc
// 0066722f  03fe                 add edi, esi
// 00667231  43                   inc ebx
// 00667232  83fb10               cmp ebx, 0x10
// 00667235  7eb9                 jle 0x6671f0
// 00667237  c6443c1c00           mov byte ptr [esp + edi + 0x1c], 0
// 0066723c  8a44241c             mov al, byte ptr [esp + 0x1c]
// 00667240  897c2414             mov dword ptr [esp + 0x14], edi
// 00667244  33ff                 xor edi, edi
// 00667246  33f6                 xor esi, esi
// 00667248  0fbed8               movsx ebx, al
// 0066724b  84c0                 test al, al
// 0066724d  7451                 je 0x6672a0
// 0066724f  8d44241c             lea eax, [esp + 0x1c]
// 00667253  0fbe00               movsx eax, byte ptr [eax]
// 00667256  3bc3                 cmp eax, ebx
// 00667258  7518                 jne 0x667272
// 0066725a  8d9b00000000         lea ebx, [ebx]
// 00667260  0fbe4c341d           movsx ecx, byte ptr [esp + esi + 0x1d]
// 00667265  89bcb420010000       mov dword ptr [esp + esi*4 + 0x120], edi
// 0066726c  46                   inc esi
// 0066726d  47                   inc edi
// 0066726e  3bcb                 cmp ecx, ebx
// 00667270  74ee                 je 0x667260
// 00667272  ba01000000           mov edx, 1
// 00667277  8bcb                 mov ecx, ebx
// 00667279  d3e2                 shl edx, cl
// 0066727b  3bfa                 cmp edi, edx
// 0066727d  7c15                 jl 0x667294
// 0066727f  8b4500               mov eax, dword ptr [ebp]
// 00667282  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00667289  8b4d00               mov ecx, dword ptr [ebp]
// 0066728c  8b11                 mov edx, dword ptr [ecx]
// 0066728e  55                   push ebp
// 0066728f  ffd2                 call edx
// 00667291  83c404               add esp, 4
// 00667294  8d44341c             lea eax, [esp + esi + 0x1c]
// 00667298  03ff                 add edi, edi
// 0066729a  43                   inc ebx
// 0066729b  803800               cmp byte ptr [eax], 0
// 0066729e  75b3                 jne 0x667253
// 006672a0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006672a4  6800010000           push 0x100
// 006672a9  81c500040000         add ebp, 0x400
// 006672af  6a00                 push 0
// 006672b1  55                   push ebp
// 006672b2  e8bdc03100           call 0x983374
// 006672b7  0fb69c2438050000     movzx ebx, byte ptr [esp + 0x538]
// 006672bf  83c40c               add esp, 0xc
// 006672c2  f7db                 neg ebx
// 006672c4  1bdb                 sbb ebx, ebx
// 006672c6  81e310ffffff         and ebx, 0xffffff10
// 006672cc  33f6                 xor esi, esi
// 006672ce  81c3ff000000         add ebx, 0xff
// 006672d4  39742414             cmp dword ptr [esp + 0x14], esi
// 006672d8  7e53                 jle 0x66732d
// 006672da  8d9b00000000         lea ebx, [ebx]
// 006672e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006672e4  0fb67c3011           movzx edi, byte ptr [eax + esi + 0x11]
// 006672e9  85ff                 test edi, edi
// 006672eb  7c0a                 jl 0x6672f7
// 006672ed  3bfb                 cmp edi, ebx
// 006672ef  7f06                 jg 0x6672f7
// 006672f1  803c2f00             cmp byte ptr [edi + ebp], 0
// 006672f5  741a                 je 0x667311
// 006672f7  8b842428050000       mov eax, dword ptr [esp + 0x528]
// 006672fe  8b08                 mov ecx, dword ptr [eax]
// 00667300  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 00667307  8b10                 mov edx, dword ptr [eax]
// 00667309  50                   push eax
// 0066730a  8b02                 mov eax, dword ptr [edx]
// 0066730c  ffd0                 call eax
// 0066730e  83c404               add esp, 4
// 00667311  8b8cb420010000       mov ecx, dword ptr [esp + esi*4 + 0x120]
// 00667318  8a44341c             mov al, byte ptr [esp + esi + 0x1c]
// 0066731c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667320  46                   inc esi
// 00667321  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00667325  890cba               mov dword ptr [edx + edi*4], ecx
// 00667328  88042f               mov byte ptr [edi + ebp], al
// 0066732b  7cb3                 jl 0x6672e0
// 0066732d  5f                   pop edi
// 0066732e  5e                   pop esi
// 0066732f  5d                   pop ebp
// 00667330  5b                   pop ebx
// 00667331  81c414050000         add esp, 0x514
// 00667337  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_make_c_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
