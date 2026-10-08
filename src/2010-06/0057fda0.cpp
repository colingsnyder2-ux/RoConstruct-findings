// from server: 100% by auto
// roc 2010-06 0057fda0  unit: seg_00570000  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057fda0
//
// 0057fda0  81ec20050000         sub esp, 0x520
// 0057fda6  53                   push ebx
// 0057fda7  55                   push ebp
// 0057fda8  56                   push esi
// 0057fda9  8bb42438050000       mov esi, dword ptr [esp + 0x538]
// 0057fdb0  57                   push edi
// 0057fdb1  bd32000000           mov ebp, 0x32
// 0057fdb6  85f6                 test esi, esi
// 0057fdb8  7c05                 jl 0x57fdbf
// 0057fdba  83fe04               cmp esi, 4
// 0057fdbd  7c1d                 jl 0x57fddc
// 0057fdbf  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 0057fdc6  8b03                 mov eax, dword ptr [ebx]
// 0057fdc8  896814               mov dword ptr [eax + 0x14], ebp
// 0057fdcb  8b0b                 mov ecx, dword ptr [ebx]
// 0057fdcd  897118               mov dword ptr [ecx + 0x18], esi
// 0057fdd0  8b13                 mov edx, dword ptr [ebx]
// 0057fdd2  8b02                 mov eax, dword ptr [edx]
// 0057fdd4  53                   push ebx
// 0057fdd5  ffd0                 call eax
// 0057fdd7  83c404               add esp, 4
// 0057fdda  eb07                 jmp 0x57fde3
// 0057fddc  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 0057fde3  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 0057fdeb  740d                 je 0x57fdfa
// 0057fded  8bbcb3a0000000       mov edi, dword ptr [ebx + esi*4 + 0xa0]
// 0057fdf4  897c2410             mov dword ptr [esp + 0x10], edi
// 0057fdf8  eb0d                 jmp 0x57fe07
// 0057fdfa  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 0057fe01  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057fe05  8bf9                 mov edi, ecx
// 0057fe07  85ff                 test edi, edi
// 0057fe09  7514                 jne 0x57fe1f
// 0057fe0b  8b13                 mov edx, dword ptr [ebx]
// 0057fe0d  896a14               mov dword ptr [edx + 0x14], ebp
// 0057fe10  8b03                 mov eax, dword ptr [ebx]
// 0057fe12  897018               mov dword ptr [eax + 0x18], esi
// 0057fe15  8b0b                 mov ecx, dword ptr [ebx]
// 0057fe17  8b11                 mov edx, dword ptr [ecx]
// 0057fe19  53                   push ebx
// 0057fe1a  ffd2                 call edx
// 0057fe1c  83c404               add esp, 4
// 0057fe1f  8bb42440050000       mov esi, dword ptr [esp + 0x540]
// 0057fe26  833e00               cmp dword ptr [esi], 0
// 0057fe29  7514                 jne 0x57fe3f
// 0057fe2b  8b4304               mov eax, dword ptr [ebx + 4]
// 0057fe2e  8b08                 mov ecx, dword ptr [eax]
// 0057fe30  6890050000           push 0x590
// 0057fe35  6a01                 push 1
// 0057fe37  53                   push ebx
// 0057fe38  ffd1                 call ecx
// 0057fe3a  83c40c               add esp, 0xc
// 0057fe3d  8906                 mov dword ptr [esi], eax
// 0057fe3f  8b16                 mov edx, dword ptr [esi]
// 0057fe41  89ba8c000000         mov dword ptr [edx + 0x8c], edi
// 0057fe47  89542414             mov dword ptr [esp + 0x14], edx
// 0057fe4b  33ff                 xor edi, edi
// 0057fe4d  bd01000000           mov ebp, 1
// 0057fe52  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057fe56  0fb63428             movzx esi, byte ptr [eax + ebp]
// 0057fe5a  85f6                 test esi, esi
// 0057fe5c  7c0b                 jl 0x57fe69
// 0057fe5e  8d0c3e               lea ecx, [esi + edi]
// 0057fe61  81f900010000         cmp ecx, 0x100
// 0057fe67  7e17                 jle 0x57fe80
// 0057fe69  8b13                 mov edx, dword ptr [ebx]
// 0057fe6b  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0057fe72  8b03                 mov eax, dword ptr [ebx]
// 0057fe74  8b08                 mov ecx, dword ptr [eax]
// 0057fe76  53                   push ebx
// 0057fe77  ffd1                 call ecx
// 0057fe79  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057fe7d  83c404               add esp, 4
// 0057fe80  85f6                 test esi, esi
// 0057fe82  7415                 je 0x57fe99
// 0057fe84  56                   push esi
// 0057fe85  8d443c2c             lea eax, [esp + edi + 0x2c]
// 0057fe89  55                   push ebp
// 0057fe8a  50                   push eax
// 0057fe8b  e8548d2200           call 0x7a8be4
// 0057fe90  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057fe94  83c40c               add esp, 0xc
// 0057fe97  03fe                 add edi, esi
// 0057fe99  45                   inc ebp
// 0057fe9a  83fd10               cmp ebp, 0x10
// 0057fe9d  7eb3                 jle 0x57fe52
// 0057fe9f  c6443c2800           mov byte ptr [esp + edi + 0x28], 0
// 0057fea4  8a442428             mov al, byte ptr [esp + 0x28]
// 0057fea8  897c2420             mov dword ptr [esp + 0x20], edi
// 0057feac  33ff                 xor edi, edi
// 0057feae  33f6                 xor esi, esi
// 0057feb0  0fbee8               movsx ebp, al
// 0057feb3  84c0                 test al, al
// 0057feb5  745b                 je 0x57ff12
// 0057feb7  8d442428             lea eax, [esp + 0x28]
// 0057febb  eb03                 jmp 0x57fec0
// 0057febd  8d4900               lea ecx, [ecx]
// 0057fec0  0fbe00               movsx eax, byte ptr [eax]
// 0057fec3  3bc5                 cmp eax, ebp
// 0057fec5  751b                 jne 0x57fee2
// 0057fec7  eb07                 jmp 0x57fed0
// 0057fec9  8da42400000000       lea esp, [esp]
// 0057fed0  0fbe4c3429           movsx ecx, byte ptr [esp + esi + 0x29]
// 0057fed5  89bcb42c010000       mov dword ptr [esp + esi*4 + 0x12c], edi
// 0057fedc  46                   inc esi
// 0057fedd  47                   inc edi
// 0057fede  3bcd                 cmp ecx, ebp
// 0057fee0  74ee                 je 0x57fed0
// 0057fee2  b801000000           mov eax, 1
// 0057fee7  8bcd                 mov ecx, ebp
// 0057fee9  d3e0                 shl eax, cl
// 0057feeb  3bf8                 cmp edi, eax
// 0057feed  7c17                 jl 0x57ff06
// 0057feef  8b0b                 mov ecx, dword ptr [ebx]
// 0057fef1  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 0057fef8  8b13                 mov edx, dword ptr [ebx]
// 0057fefa  8b02                 mov eax, dword ptr [edx]
// 0057fefc  53                   push ebx
// 0057fefd  ffd0                 call eax
// 0057feff  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057ff03  83c404               add esp, 4
// 0057ff06  8d443428             lea eax, [esp + esi + 0x28]
// 0057ff0a  03ff                 add edi, edi
// 0057ff0c  45                   inc ebp
// 0057ff0d  803800               cmp byte ptr [eax], 0
// 0057ff10  75ae                 jne 0x57fec0
// 0057ff12  33c9                 xor ecx, ecx
// 0057ff14  b801000000           mov eax, 1
// 0057ff19  8da42400000000       lea esp, [esp]
// 0057ff20  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057ff24  803c3000             cmp byte ptr [eax + esi], 0
// 0057ff28  741f                 je 0x57ff49
// 0057ff2a  8bf9                 mov edi, ecx
// 0057ff2c  2bbc8c2c010000       sub edi, dword ptr [esp + ecx*4 + 0x12c]
// 0057ff33  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 0057ff37  0fb63430             movzx esi, byte ptr [eax + esi]
// 0057ff3b  03ce                 add ecx, esi
// 0057ff3d  8bb48c28010000       mov esi, dword ptr [esp + ecx*4 + 0x128]
// 0057ff44  893482               mov dword ptr [edx + eax*4], esi
// 0057ff47  eb07                 jmp 0x57ff50
// 0057ff49  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 0057ff50  40                   inc eax
// 0057ff51  83f810               cmp eax, 0x10
// 0057ff54  7eca                 jle 0x57ff20
// 0057ff56  6800040000           push 0x400
// 0057ff5b  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 0057ff62  81c290000000         add edx, 0x90
// 0057ff68  6a00                 push 0
// 0057ff6a  52                   push edx
// 0057ff6b  e8748c2200           call 0x7a8be4
// 0057ff70  83c40c               add esp, 0xc
// 0057ff73  33db                 xor ebx, ebx
// 0057ff75  b907000000           mov ecx, 7
// 0057ff7a  8d7b01               lea edi, [ebx + 1]
// 0057ff7d  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057ff81  eb0d                 jmp 0x57ff90
// 0057ff83  8da42400000000       lea esp, [esp]
// 0057ff8a  8d9b00000000         lea ebx, [ebx]
// 0057ff90  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057ff94  803c3701             cmp byte ptr [edi + esi], 1
// 0057ff98  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0057ffa0  725d                 jb 0x57ffff
// 0057ffa2  b801000000           mov eax, 1
// 0057ffa7  d3e0                 shl eax, cl
// 0057ffa9  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 0057ffad  89442424             mov dword ptr [esp + 0x24], eax
// 0057ffb1  8b949c2c010000       mov edx, dword ptr [esp + ebx*4 + 0x12c]
// 0057ffb8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057ffbc  d3e2                 shl edx, cl
// 0057ffbe  85c0                 test eax, eax
// 0057ffc0  7e2a                 jle 0x57ffec
// 0057ffc2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057ffc6  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 0057ffcd  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 0057ffd4  893a                 mov dword ptr [edx], edi
// 0057ffd6  8a4d00               mov cl, byte ptr [ebp]
// 0057ffd9  880e                 mov byte ptr [esi], cl
// 0057ffdb  48                   dec eax
// 0057ffdc  83c204               add edx, 4
// 0057ffdf  46                   inc esi
// 0057ffe0  85c0                 test eax, eax
// 0057ffe2  7ff0                 jg 0x57ffd4
// 0057ffe4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057ffe8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057ffec  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057fff0  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 0057fff4  42                   inc edx
// 0057fff5  43                   inc ebx
// 0057fff6  45                   inc ebp
// 0057fff7  3bd1                 cmp edx, ecx
// 0057fff9  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057fffd  7eb2                 jle 0x57ffb1
// 0057ffff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00580003  47                   inc edi
// 00580004  83e901               sub ecx, 1
// 00580007  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058000b  7983                 jns 0x57ff90
// 0058000d  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 00580015  7437                 je 0x58004e
// 00580017  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0058001b  33ff                 xor edi, edi
// 0058001d  85db                 test ebx, ebx
// 0058001f  7e2d                 jle 0x58004e
// 00580021  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 00580026  85c0                 test eax, eax
// 00580028  7c05                 jl 0x58002f
// 0058002a  83f80f               cmp eax, 0xf
// 0058002d  7e1a                 jle 0x580049
// 0058002f  8b842434050000       mov eax, dword ptr [esp + 0x534]
// 00580036  8b10                 mov edx, dword ptr [eax]
// 00580038  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0058003f  8b08                 mov ecx, dword ptr [eax]
// 00580041  8b11                 mov edx, dword ptr [ecx]
// 00580043  50                   push eax
// 00580044  ffd2                 call edx
// 00580046  83c404               add esp, 4
// 00580049  47                   inc edi
// 0058004a  3bfb                 cmp edi, ebx
// 0058004c  7cd3                 jl 0x580021
// 0058004e  5f                   pop edi
// 0058004f  5e                   pop esi
// 00580050  5d                   pop ebp
// 00580051  5b                   pop ebx
// 00580052  81c420050000         add esp, 0x520
// 00580058  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
