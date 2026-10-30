// roc 2007-03 00521ed0  unit: seg_00520000  size: 612 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00521ed0
//
// 00521ed0  83ec0c               sub esp, 0xc
// 00521ed3  53                   push ebx
// 00521ed4  55                   push ebp
// 00521ed5  56                   push esi
// 00521ed6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00521eda  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00521ee0  33ed                 xor ebp, ebp
// 00521ee2  3bc5                 cmp eax, ebp
// 00521ee4  0f94c3               sete bl
// 00521ee7  57                   push edi
// 00521ee8  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00521eee  32c9                 xor cl, cl
// 00521ef0  84db                 test bl, bl
// 00521ef2  897c2418             mov dword ptr [esp + 0x18], edi
// 00521ef6  885c2420             mov byte ptr [esp + 0x20], bl
// 00521efa  7408                 je 0x521f04
// 00521efc  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 00521f02  eb18                 jmp 0x521f1c
// 00521f04  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 00521f0a  3bc2                 cmp eax, edx
// 00521f0c  7f05                 jg 0x521f13
// 00521f0e  83fa40               cmp edx, 0x40
// 00521f11  7c02                 jl 0x521f15
// 00521f13  b101                 mov cl, 1
// 00521f15  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 00521f1c  7402                 je 0x521f20
// 00521f1e  b101                 mov cl, 1
// 00521f20  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00521f26  3bc5                 cmp eax, ebp
// 00521f28  740d                 je 0x521f37
// 00521f2a  83c0ff               add eax, -1
// 00521f2d  398678010000         cmp dword ptr [esi + 0x178], eax
// 00521f33  7402                 je 0x521f37
// 00521f35  b101                 mov cl, 1
// 00521f37  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 00521f3e  7f04                 jg 0x521f44
// 00521f40  84c9                 test cl, cl
// 00521f42  743f                 je 0x521f83
// 00521f44  8b06                 mov eax, dword ptr [esi]
// 00521f46  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 00521f4d  8b0e                 mov ecx, dword ptr [esi]
// 00521f4f  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 00521f55  895118               mov dword ptr [ecx + 0x18], edx
// 00521f58  8b06                 mov eax, dword ptr [esi]
// 00521f5a  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 00521f60  89481c               mov dword ptr [eax + 0x1c], ecx
// 00521f63  8b16                 mov edx, dword ptr [esi]
// 00521f65  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00521f6b  894220               mov dword ptr [edx + 0x20], eax
// 00521f6e  8b0e                 mov ecx, dword ptr [esi]
// 00521f70  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 00521f76  895124               mov dword ptr [ecx + 0x24], edx
// 00521f79  8b06                 mov eax, dword ptr [esi]
// 00521f7b  8b08                 mov ecx, dword ptr [eax]
// 00521f7d  56                   push esi
// 00521f7e  ffd1                 call ecx
// 00521f80  83c404               add esp, 4
// 00521f83  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 00521f89  896c2410             mov dword ptr [esp + 0x10], ebp
// 00521f8d  0f8ed3000000         jle 0x522066
// 00521f93  8d9628010000         lea edx, [esi + 0x128]
// 00521f99  89542414             mov dword ptr [esp + 0x14], edx
// 00521f9d  8d4900               lea ecx, [ecx]
// 00521fa0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00521fa4  8b08                 mov ecx, dword ptr [eax]
// 00521fa6  8b5904               mov ebx, dword ptr [ecx + 4]
// 00521fa9  8beb                 mov ebp, ebx
// 00521fab  c1e508               shl ebp, 8
// 00521fae  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 00521fb4  807c242000           cmp byte ptr [esp + 0x20], 0
// 00521fb9  752a                 jne 0x521fe5
// 00521fbb  837d0000             cmp dword ptr [ebp], 0
// 00521fbf  7d24                 jge 0x521fe5
// 00521fc1  8b16                 mov edx, dword ptr [esi]
// 00521fc3  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 00521fca  8b06                 mov eax, dword ptr [esi]
// 00521fcc  895818               mov dword ptr [eax + 0x18], ebx
// 00521fcf  8b0e                 mov ecx, dword ptr [esi]
// 00521fd1  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 00521fd8  8b16                 mov edx, dword ptr [esi]
// 00521fda  8b4204               mov eax, dword ptr [edx + 4]
// 00521fdd  6aff                 push -1
// 00521fdf  56                   push esi
// 00521fe0  ffd0                 call eax
// 00521fe2  83c408               add esp, 8
// 00521fe5  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 00521feb  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 00521ff1  7f4d                 jg 0x522040
// 00521ff3  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 00521ff7  33c9                 xor ecx, ecx
// 00521ff9  85c0                 test eax, eax
// 00521ffb  0f9cc1               setl cl
// 00521ffe  83e901               sub ecx, 1
// 00522001  23c1                 and eax, ecx
// 00522003  398674010000         cmp dword ptr [esi + 0x174], eax
// 00522009  7420                 je 0x52202b
// 0052200b  8b16                 mov edx, dword ptr [esi]
// 0052200d  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 00522014  8b06                 mov eax, dword ptr [esi]
// 00522016  895818               mov dword ptr [eax + 0x18], ebx
// 00522019  8b0e                 mov ecx, dword ptr [esi]
// 0052201b  89791c               mov dword ptr [ecx + 0x1c], edi
// 0052201e  8b16                 mov edx, dword ptr [esi]
// 00522020  8b4204               mov eax, dword ptr [edx + 4]
// 00522023  6aff                 push -1
// 00522025  56                   push esi
// 00522026  ffd0                 call eax
// 00522028  83c408               add esp, 8
// 0052202b  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00522031  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 00522035  83c701               add edi, 1
// 00522038  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0052203e  7eb3                 jle 0x521ff3
// 00522040  8b442410             mov eax, dword ptr [esp + 0x10]
// 00522044  8344241404           add dword ptr [esp + 0x14], 4
// 00522049  83c001               add eax, 1
// 0052204c  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00522052  89442410             mov dword ptr [esp + 0x10], eax
// 00522056  0f8c44ffffff         jl 0x521fa0
// 0052205c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00522060  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 00522064  33ed                 xor ebp, ebp
// 00522066  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 0052206c  7516                 jne 0x522084
// 0052206e  84db                 test bl, bl
// 00522070  7409                 je 0x52207b
// 00522072  c7470450155200       mov dword ptr [edi + 4], 0x521550
// 00522079  eb1d                 jmp 0x522098
// 0052207b  c7470490175200       mov dword ptr [edi + 4], 0x521790
// 00522082  eb14                 jmp 0x522098
// 00522084  84db                 test bl, bl
// 00522086  7409                 je 0x522091
// 00522088  c74704e0195200       mov dword ptr [edi + 4], 0x5219e0
// 0052208f  eb07                 jmp 0x522098
// 00522091  c74704d01a5200       mov dword ptr [edi + 4], 0x521ad0
// 00522098  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 0052209e  896c2410             mov dword ptr [esp + 0x10], ebp
// 005220a2  7e72                 jle 0x522116
// 005220a4  8d6f18               lea ebp, [edi + 0x18]
// 005220a7  8d9e28010000         lea ebx, [esi + 0x128]
// 005220ad  8d4900               lea ecx, [ecx]
// 005220b0  807c242000           cmp byte ptr [esp + 0x20], 0
// 005220b5  8b03                 mov eax, dword ptr [ebx]
// 005220b7  741c                 je 0x5220d5
// 005220b9  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 005220c0  7532                 jne 0x5220f4
// 005220c2  8b4014               mov eax, dword ptr [eax + 0x14]
// 005220c5  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 005220c9  52                   push edx
// 005220ca  50                   push eax
// 005220cb  6a01                 push 1
// 005220cd  56                   push esi
// 005220ce  e89de8ffff           call 0x520970
// 005220d3  eb1c                 jmp 0x5220f1
// 005220d5  8b4018               mov eax, dword ptr [eax + 0x18]
// 005220d8  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 005220dc  57                   push edi
// 005220dd  50                   push eax
// 005220de  6a00                 push 0
// 005220e0  56                   push esi
// 005220e1  e88ae8ffff           call 0x520970
// 005220e6  8b07                 mov eax, dword ptr [edi]
// 005220e8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005220ec  89413c               mov dword ptr [ecx + 0x3c], eax
// 005220ef  8bf9                 mov edi, ecx
// 005220f1  83c410               add esp, 0x10
// 005220f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005220f8  c7450000000000       mov dword ptr [ebp], 0
// 005220ff  83c001               add eax, 1
// 00522102  83c304               add ebx, 4
// 00522105  83c504               add ebp, 4
// 00522108  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0052210e  89442410             mov dword ptr [esp + 0x10], eax
// 00522112  7c9c                 jl 0x5220b0
// 00522114  33ed                 xor ebp, ebp
// 00522116  896f10               mov dword ptr [edi + 0x10], ebp
// 00522119  896f0c               mov dword ptr [edi + 0xc], ebp
// 0052211c  896f14               mov dword ptr [edi + 0x14], ebp
// 0052211f  c6470800             mov byte ptr [edi + 8], 0
// 00522123  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00522129  895728               mov dword ptr [edi + 0x28], edx
// 0052212c  5f                   pop edi
// 0052212d  5e                   pop esi
// 0052212e  5d                   pop ebp
// 0052212f  5b                   pop ebx
// 00522130  83c40c               add esp, 0xc
// 00522133  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
