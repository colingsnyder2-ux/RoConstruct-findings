// roc 2007-03 00526e60  unit: seg_00520000  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526e60
//
// 00526e60  81ec38080000         sub esp, 0x838
// 00526e66  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00526e6b  33c4                 xor eax, esp
// 00526e6d  89842434080000       mov dword ptr [esp + 0x834], eax
// 00526e74  8b84243c080000       mov eax, dword ptr [esp + 0x83c]
// 00526e7b  8b8c2440080000       mov ecx, dword ptr [esp + 0x840]
// 00526e82  53                   push ebx
// 00526e83  8b9c2448080000       mov ebx, dword ptr [esp + 0x848]
// 00526e8a  55                   push ebp
// 00526e8b  56                   push esi
// 00526e8c  57                   push edi
// 00526e8d  89442414             mov dword ptr [esp + 0x14], eax
// 00526e91  33c0                 xor eax, eax
// 00526e93  6804040000           push 0x404
// 00526e98  50                   push eax
// 00526e99  8d542420             lea edx, [esp + 0x20]
// 00526e9d  52                   push edx
// 00526e9e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00526ea2  8984242c080000       mov dword ptr [esp + 0x82c], eax
// 00526ea9  89842430080000       mov dword ptr [esp + 0x830], eax
// 00526eb0  89842434080000       mov dword ptr [esp + 0x834], eax
// 00526eb7  89842438080000       mov dword ptr [esp + 0x838], eax
// 00526ebe  8984243c080000       mov dword ptr [esp + 0x83c], eax
// 00526ec5  89842440080000       mov dword ptr [esp + 0x840], eax
// 00526ecc  89842444080000       mov dword ptr [esp + 0x844], eax
// 00526ed3  89842448080000       mov dword ptr [esp + 0x848], eax
// 00526eda  8884244c080000       mov byte ptr [esp + 0x84c], al
// 00526ee1  e836810f00           call 0x61f01c
// 00526ee6  83c40c               add esp, 0xc
// 00526ee9  b901010000           mov ecx, 0x101
// 00526eee  83c8ff               or eax, 0xffffffff
// 00526ef1  8dbc241c040000       lea edi, [esp + 0x41c]
// 00526ef8  bd01000000           mov ebp, 1
// 00526efd  f3ab                 rep stosd dword ptr es:[edi], eax
// 00526eff  89ab00040000         mov dword ptr [ebx + 0x400], ebp
// 00526f05  83c8ff               or eax, 0xffffffff
// 00526f08  be00ca9a3b           mov esi, 0x3b9aca00
// 00526f0d  33c9                 xor ecx, ecx
// 00526f0f  90                   nop 
// 00526f10  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 00526f13  85d2                 test edx, edx
// 00526f15  7408                 je 0x526f1f
// 00526f17  3bd6                 cmp edx, esi
// 00526f19  7f04                 jg 0x526f1f
// 00526f1b  8bf2                 mov esi, edx
// 00526f1d  8bc1                 mov eax, ecx
// 00526f1f  03cd                 add ecx, ebp
// 00526f21  81f900010000         cmp ecx, 0x100
// 00526f27  7ee7                 jle 0x526f10
// 00526f29  83caff               or edx, 0xffffffff
// 00526f2c  bf00ca9a3b           mov edi, 0x3b9aca00
// 00526f31  33c9                 xor ecx, ecx
// 00526f33  8b348b               mov esi, dword ptr [ebx + ecx*4]
// 00526f36  85f6                 test esi, esi
// 00526f38  740c                 je 0x526f46
// 00526f3a  3bf7                 cmp esi, edi
// 00526f3c  7f08                 jg 0x526f46
// 00526f3e  3bc8                 cmp ecx, eax
// 00526f40  7404                 je 0x526f46
// 00526f42  8bfe                 mov edi, esi
// 00526f44  8bd1                 mov edx, ecx
// 00526f46  03cd                 add ecx, ebp
// 00526f48  81f900010000         cmp ecx, 0x100
// 00526f4e  7ee3                 jle 0x526f33
// 00526f50  85d2                 test edx, edx
// 00526f52  0f8c84000000         jl 0x526fdc
// 00526f58  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 00526f5b  010c83               add dword ptr [ebx + eax*4], ecx
// 00526f5e  016c8418             add dword ptr [esp + eax*4 + 0x18], ebp
// 00526f62  83bc841c04000000     cmp dword ptr [esp + eax*4 + 0x41c], 0
// 00526f6a  8d8c841c040000       lea ecx, [esp + eax*4 + 0x41c]
// 00526f71  c7049300000000       mov dword ptr [ebx + edx*4], 0
// 00526f78  7c1d                 jl 0x526f97
// 00526f7a  8d9b00000000         lea ebx, [ebx]
// 00526f80  8b01                 mov eax, dword ptr [ecx]
// 00526f82  016c8418             add dword ptr [esp + eax*4 + 0x18], ebp
// 00526f86  83bc841c04000000     cmp dword ptr [esp + eax*4 + 0x41c], 0
// 00526f8e  8d8c841c040000       lea ecx, [esp + eax*4 + 0x41c]
// 00526f95  7de9                 jge 0x526f80
// 00526f97  016c9418             add dword ptr [esp + edx*4 + 0x18], ebp
// 00526f9b  8994841c040000       mov dword ptr [esp + eax*4 + 0x41c], edx
// 00526fa2  83bc941c04000000     cmp dword ptr [esp + edx*4 + 0x41c], 0
// 00526faa  8d84941c040000       lea eax, [esp + edx*4 + 0x41c]
// 00526fb1  0f8c4effffff         jl 0x526f05
// 00526fb7  eb07                 jmp 0x526fc0
// 00526fb9  8da42400000000       lea esp, [esp]
// 00526fc0  8b00                 mov eax, dword ptr [eax]
// 00526fc2  016c8418             add dword ptr [esp + eax*4 + 0x18], ebp
// 00526fc6  83bc841c04000000     cmp dword ptr [esp + eax*4 + 0x41c], 0
// 00526fce  8d84841c040000       lea eax, [esp + eax*4 + 0x41c]
// 00526fd5  7de9                 jge 0x526fc0
// 00526fd7  e929ffffff           jmp 0x526f05
// 00526fdc  33ff                 xor edi, edi
// 00526fde  bb27000000           mov ebx, 0x27
// 00526fe3  8b74bc18             mov esi, dword ptr [esp + edi*4 + 0x18]
// 00526fe7  85f6                 test esi, esi
// 00526fe9  7427                 je 0x527012
// 00526feb  83fe20               cmp esi, 0x20
// 00526fee  7e13                 jle 0x527003
// 00526ff0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00526ff4  8b10                 mov edx, dword ptr [eax]
// 00526ff6  895a14               mov dword ptr [edx + 0x14], ebx
// 00526ff9  8b08                 mov ecx, dword ptr [eax]
// 00526ffb  8b11                 mov edx, dword ptr [ecx]
// 00526ffd  50                   push eax
// 00526ffe  ffd2                 call edx
// 00527000  83c404               add esp, 4
// 00527003  8084342008000001     add byte ptr [esp + esi + 0x820], 1
// 0052700b  8d843420080000       lea eax, [esp + esi + 0x820]
// 00527012  03fd                 add edi, ebp
// 00527014  81ff00010000         cmp edi, 0x100
// 0052701a  7ec7                 jle 0x526fe3
// 0052701c  be10000000           mov esi, 0x10
// 00527021  b91e000000           mov ecx, 0x1e
// 00527026  8bd6                 mov edx, esi
// 00527028  eb06                 jmp 0x527030
// 0052702a  8d9b00000000         lea ebx, [ebx]
// 00527030  80bc0c2208000000     cmp byte ptr [esp + ecx + 0x822], 0
// 00527038  7653                 jbe 0x52708d
// 0052703a  8d9b00000000         lea ebx, [ebx]
// 00527040  80bc0c2008000000     cmp byte ptr [esp + ecx + 0x820], 0
// 00527048  8bc1                 mov eax, ecx
// 0052704a  7510                 jne 0x52705c
// 0052704c  8d642400             lea esp, [esp]
// 00527050  2bc5                 sub eax, ebp
// 00527052  80bc042008000000     cmp byte ptr [esp + eax + 0x820], 0
// 0052705a  74f4                 je 0x527050
// 0052705c  80840c22080000fe     add byte ptr [esp + ecx + 0x822], 0xfe
// 00527064  80840c2108000001     add byte ptr [esp + ecx + 0x821], 1
// 0052706c  8084042108000002     add byte ptr [esp + eax + 0x821], 2
// 00527074  80840420080000ff     add byte ptr [esp + eax + 0x820], 0xff
// 0052707c  80bc0c2208000000     cmp byte ptr [esp + ecx + 0x822], 0
// 00527084  8d840420080000       lea eax, [esp + eax + 0x820]
// 0052708b  77b3                 ja 0x527040
// 0052708d  2bcd                 sub ecx, ebp
// 0052708f  2bf5                 sub esi, ebp
// 00527091  759d                 jne 0x527030
// 00527093  80bc243008000000     cmp byte ptr [esp + 0x830], 0
// 0052709b  750f                 jne 0x5270ac
// 0052709d  8d4900               lea ecx, [ecx]
// 005270a0  2bd5                 sub edx, ebp
// 005270a2  80bc142008000000     cmp byte ptr [esp + edx + 0x820], 0
// 005270aa  74f4                 je 0x5270a0
// 005270ac  80841420080000ff     add byte ptr [esp + edx + 0x820], 0xff
// 005270b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 005270b8  8b8c2424080000       mov ecx, dword ptr [esp + 0x824]
// 005270bf  8d841420080000       lea eax, [esp + edx + 0x820]
// 005270c6  8b842420080000       mov eax, dword ptr [esp + 0x820]
// 005270cd  8b942428080000       mov edx, dword ptr [esp + 0x828]
// 005270d4  8906                 mov dword ptr [esi], eax
// 005270d6  8b84242c080000       mov eax, dword ptr [esp + 0x82c]
// 005270dd  894e04               mov dword ptr [esi + 4], ecx
// 005270e0  8a8c2430080000       mov cl, byte ptr [esp + 0x830]
// 005270e7  895608               mov dword ptr [esi + 8], edx
// 005270ea  89460c               mov dword ptr [esi + 0xc], eax
// 005270ed  884e10               mov byte ptr [esi + 0x10], cl
// 005270f0  33c9                 xor ecx, ecx
// 005270f2  8bd5                 mov edx, ebp
// 005270f4  33c0                 xor eax, eax
// 005270f6  39548418             cmp dword ptr [esp + eax*4 + 0x18], edx
// 005270fa  7506                 jne 0x527102
// 005270fc  88440e11             mov byte ptr [esi + ecx + 0x11], al
// 00527100  03cd                 add ecx, ebp
// 00527102  03c5                 add eax, ebp
// 00527104  3dff000000           cmp eax, 0xff
// 00527109  7eeb                 jle 0x5270f6
// 0052710b  03d5                 add edx, ebp
// 0052710d  83fa20               cmp edx, 0x20
// 00527110  7ee2                 jle 0x5270f4
// 00527112  8b8c2444080000       mov ecx, dword ptr [esp + 0x844]
// 00527119  5f                   pop edi
// 0052711a  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00527121  5e                   pop esi
// 00527122  5d                   pop ebp
// 00527123  5b                   pop ebx
// 00527124  33cc                 xor ecx, esp
// 00527126  e87b7d0f00           call 0x61eea6
// 0052712b  81c438080000         add esp, 0x838
// 00527131  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_gen_optimal_table)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jchuff.c
