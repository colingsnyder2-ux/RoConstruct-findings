// roc 2007-03 00714da0  unit: seg_00710000  size: 1020 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00714da0
//
// 00714da0  51                   push ecx
// 00714da1  53                   push ebx
// 00714da2  55                   push ebp
// 00714da3  56                   push esi
// 00714da4  57                   push edi
// 00714da5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00714da9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00714db1  bd01000000           mov ebp, 1
// 00714db6  8b4774               mov eax, dword ptr [edi + 0x74]
// 00714db9  3d06010000           cmp eax, 0x106
// 00714dbe  7323                 jae 0x714de3
// 00714dc0  e8abfaffff           call 0x714870
// 00714dc5  8b4774               mov eax, dword ptr [edi + 0x74]
// 00714dc8  3d06010000           cmp eax, 0x106
// 00714dcd  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00714dd1  7308                 jae 0x714ddb
// 00714dd3  85f6                 test esi, esi
// 00714dd5  0f845b020000         je 0x715036
// 00714ddb  85c0                 test eax, eax
// 00714ddd  0f8408030000         je 0x7150eb
// 00714de3  83f803               cmp eax, 3
// 00714de6  724d                 jb 0x714e35
// 00714de8  8b4748               mov eax, dword ptr [edi + 0x48]
// 00714deb  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00714dee  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00714df1  8b7734               mov esi, dword ptr [edi + 0x34]
// 00714df4  d3e0                 shl eax, cl
// 00714df6  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00714df9  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 00714dfe  33c1                 xor eax, ecx
// 00714e00  234754               and eax, dword ptr [edi + 0x54]
// 00714e03  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00714e06  894748               mov dword ptr [edi + 0x48], eax
// 00714e09  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 00714e0d  23f2                 and esi, edx
// 00714e0f  8b5740               mov edx, dword ptr [edi + 0x40]
// 00714e12  66890472             mov word ptr [edx + esi*2], ax
// 00714e16  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00714e19  234f34               and ecx, dword ptr [edi + 0x34]
// 00714e1c  8b5740               mov edx, dword ptr [edi + 0x40]
// 00714e1f  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 00714e23  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00714e26  8b5744               mov edx, dword ptr [edi + 0x44]
// 00714e29  89442410             mov dword ptr [esp + 0x10], eax
// 00714e2d  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 00714e31  6689044a             mov word ptr [edx + ecx*2], ax
// 00714e35  8b5770               mov edx, dword ptr [edi + 0x70]
// 00714e38  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00714e3b  895764               mov dword ptr [edi + 0x64], edx
// 00714e3e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00714e42  85d2                 test edx, edx
// 00714e44  bb02000000           mov ebx, 2
// 00714e49  894f78               mov dword ptr [edi + 0x78], ecx
// 00714e4c  895f60               mov dword ptr [edi + 0x60], ebx
// 00714e4f  7471                 je 0x714ec2
// 00714e51  8bc1                 mov eax, ecx
// 00714e53  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 00714e59  7367                 jae 0x714ec2
// 00714e5b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00714e5e  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00714e61  2bc2                 sub eax, edx
// 00714e63  81e906010000         sub ecx, 0x106
// 00714e69  3bc1                 cmp eax, ecx
// 00714e6b  7755                 ja 0x714ec2
// 00714e6d  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 00714e73  3bcb                 cmp ecx, ebx
// 00714e75  740e                 je 0x714e85
// 00714e77  83f903               cmp ecx, 3
// 00714e7a  740e                 je 0x714e8a
// 00714e7c  8bc2                 mov eax, edx
// 00714e7e  e85d790100           call 0x72c7e0
// 00714e83  eb14                 jmp 0x714e99
// 00714e85  83f903               cmp ecx, 3
// 00714e88  7512                 jne 0x714e9c
// 00714e8a  3bc5                 cmp eax, ebp
// 00714e8c  750e                 jne 0x714e9c
// 00714e8e  52                   push edx
// 00714e8f  8bf7                 mov esi, edi
// 00714e91  e8ca7a0100           call 0x72c960
// 00714e96  83c404               add esp, 4
// 00714e99  894760               mov dword ptr [edi + 0x60], eax
// 00714e9c  8b4760               mov eax, dword ptr [edi + 0x60]
// 00714e9f  83f805               cmp eax, 5
// 00714ea2  771e                 ja 0x714ec2
// 00714ea4  39af88000000         cmp dword ptr [edi + 0x88], ebp
// 00714eaa  7413                 je 0x714ebf
// 00714eac  83f803               cmp eax, 3
// 00714eaf  7511                 jne 0x714ec2
// 00714eb1  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00714eb4  2b5770               sub edx, dword ptr [edi + 0x70]
// 00714eb7  81fa00100000         cmp edx, 0x1000
// 00714ebd  7603                 jbe 0x714ec2
// 00714ebf  895f60               mov dword ptr [edi + 0x60], ebx
// 00714ec2  8b4778               mov eax, dword ptr [edi + 0x78]
// 00714ec5  83f803               cmp eax, 3
// 00714ec8  0f8270010000         jb 0x71503e
// 00714ece  394760               cmp dword ptr [edi + 0x60], eax
// 00714ed1  0f8767010000         ja 0x71503e
// 00714ed7  668b576c             mov dx, word ptr [edi + 0x6c]
// 00714edb  662b5764             sub dx, word ptr [edi + 0x64]
// 00714edf  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00714ee2  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00714ee5  8b9fa4160000         mov ebx, dword ptr [edi + 0x16a4]
// 00714eeb  8d7408fd             lea esi, [eax + ecx - 3]
// 00714eef  8a4778               mov al, byte ptr [edi + 0x78]
// 00714ef2  662bd5               sub dx, bp
// 00714ef5  0fb7ca               movzx ecx, dx
// 00714ef8  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00714efe  66890c53             mov word ptr [ebx + edx*2], cx
// 00714f02  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 00714f08  8b9fa0160000         mov ebx, dword ptr [edi + 0x16a0]
// 00714f0e  2c03                 sub al, 3
// 00714f10  88041a               mov byte ptr [edx + ebx], al
// 00714f13  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00714f19  0fb6c0               movzx eax, al
// 00714f1c  0fb690e06a7e00       movzx edx, byte ptr [eax + 0x7e6ae0]
// 00714f23  6601ac9798040000     add word ptr [edi + edx*4 + 0x498], bp
// 00714f2b  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 00714f32  81c1ffff0000         add ecx, 0xffff
// 00714f38  6681f90001           cmp cx, 0x100
// 00714f3d  730c                 jae 0x714f4b
// 00714f3f  0fb7c1               movzx eax, cx
// 00714f42  0fb680e0687e00       movzx eax, byte ptr [eax + 0x7e68e0]
// 00714f49  eb0d                 jmp 0x714f58
// 00714f4b  0fb7c9               movzx ecx, cx
// 00714f4e  c1e907               shr ecx, 7
// 00714f51  0fb681e0697e00       movzx eax, byte ptr [ecx + 0x7e69e0]
// 00714f58  6601ac8788090000     add word ptr [edi + eax*4 + 0x988], bp
// 00714f60  8b979c160000         mov edx, dword ptr [edi + 0x169c]
// 00714f66  8b4778               mov eax, dword ptr [edi + 0x78]
// 00714f69  2bd5                 sub edx, ebp
// 00714f6b  33db                 xor ebx, ebx
// 00714f6d  3997a0160000         cmp dword ptr [edi + 0x16a0], edx
// 00714f73  8bcd                 mov ecx, ebp
// 00714f75  0f94c3               sete bl
// 00714f78  2bc8                 sub ecx, eax
// 00714f7a  014f74               add dword ptr [edi + 0x74], ecx
// 00714f7d  83c0fe               add eax, -2
// 00714f80  894778               mov dword ptr [edi + 0x78], eax
// 00714f83  016f6c               add dword ptr [edi + 0x6c], ebp
// 00714f86  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00714f89  3bd6                 cmp edx, esi
// 00714f8b  774f                 ja 0x714fdc
// 00714f8d  8b4748               mov eax, dword ptr [edi + 0x48]
// 00714f90  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 00714f93  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 00714f96  d3e0                 shl eax, cl
// 00714f98  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00714f9b  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 00714fa0  33c1                 xor eax, ecx
// 00714fa2  234754               and eax, dword ptr [edi + 0x54]
// 00714fa5  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00714fa8  894748               mov dword ptr [edi + 0x48], eax
// 00714fab  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 00714faf  23ea                 and ebp, edx
// 00714fb1  8b5740               mov edx, dword ptr [edi + 0x40]
// 00714fb4  6689046a             mov word ptr [edx + ebp*2], ax
// 00714fb8  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00714fbb  234f34               and ecx, dword ptr [edi + 0x34]
// 00714fbe  8b5740               mov edx, dword ptr [edi + 0x40]
// 00714fc1  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 00714fc5  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00714fc8  8b5744               mov edx, dword ptr [edi + 0x44]
// 00714fcb  89442410             mov dword ptr [esp + 0x10], eax
// 00714fcf  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 00714fd3  6689044a             mov word ptr [edx + ecx*2], ax
// 00714fd7  bd01000000           mov ebp, 1
// 00714fdc  834778ff             add dword ptr [edi + 0x78], -1
// 00714fe0  75a1                 jne 0x714f83
// 00714fe2  016f6c               add dword ptr [edi + 0x6c], ebp
// 00714fe5  85db                 test ebx, ebx
// 00714fe7  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00714fea  c7476800000000       mov dword ptr [edi + 0x68], 0
// 00714ff1  c7476002000000       mov dword ptr [edi + 0x60], 2
// 00714ff8  0f84b8fdffff         je 0x714db6
// 00714ffe  8b575c               mov edx, dword ptr [edi + 0x5c]
// 00715001  85d2                 test edx, edx
// 00715003  7c07                 jl 0x71500c
// 00715005  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00715008  03ca                 add ecx, edx
// 0071500a  eb02                 jmp 0x71500e
// 0071500c  33c9                 xor ecx, ecx
// 0071500e  6a00                 push 0
// 00715010  2bc2                 sub eax, edx
// 00715012  50                   push eax
// 00715013  51                   push ecx
// 00715014  57                   push edi
// 00715015  e8560e0100           call 0x725e70
// 0071501a  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0071501d  8b07                 mov eax, dword ptr [edi]
// 0071501f  83c410               add esp, 0x10
// 00715022  894f5c               mov dword ptr [edi + 0x5c], ecx
// 00715025  e8266e0100           call 0x72be50
// 0071502a  8b17                 mov edx, dword ptr [edi]
// 0071502c  837a1000             cmp dword ptr [edx + 0x10], 0
// 00715030  0f8580fdffff         jne 0x714db6
// 00715036  5f                   pop edi
// 00715037  5e                   pop esi
// 00715038  5d                   pop ebp
// 00715039  33c0                 xor eax, eax
// 0071503b  5b                   pop ebx
// 0071503c  59                   pop ecx
// 0071503d  c3                   ret 
// 0071503e  837f6800             cmp dword ptr [edi + 0x68], 0
// 00715042  0f8494000000         je 0x7150dc
// 00715048  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071504b  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071504e  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 00715052  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00715058  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 0071505e  66c704510000         mov word ptr [ecx + edx*2], 0
// 00715064  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 0071506a  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 00715070  88040a               mov byte ptr [edx + ecx], al
// 00715073  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00715079  0fb6d0               movzx edx, al
// 0071507c  6601ac9794000000     add word ptr [edi + edx*4 + 0x94], bp
// 00715084  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 0071508b  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 00715091  2bc5                 sub eax, ebp
// 00715093  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 00715099  752f                 jne 0x7150ca
// 0071509b  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0071509e  85c9                 test ecx, ecx
// 007150a0  7c07                 jl 0x7150a9
// 007150a2  8b4738               mov eax, dword ptr [edi + 0x38]
// 007150a5  03c1                 add eax, ecx
// 007150a7  eb02                 jmp 0x7150ab
// 007150a9  33c0                 xor eax, eax
// 007150ab  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007150ae  6a00                 push 0
// 007150b0  2bd1                 sub edx, ecx
// 007150b2  52                   push edx
// 007150b3  50                   push eax
// 007150b4  57                   push edi
// 007150b5  e8b60d0100           call 0x725e70
// 007150ba  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007150bd  89475c               mov dword ptr [edi + 0x5c], eax
// 007150c0  8b07                 mov eax, dword ptr [edi]
// 007150c2  83c410               add esp, 0x10
// 007150c5  e8866d0100           call 0x72be50
// 007150ca  8b0f                 mov ecx, dword ptr [edi]
// 007150cc  016f6c               add dword ptr [edi + 0x6c], ebp
// 007150cf  834774ff             add dword ptr [edi + 0x74], -1
// 007150d3  83791000             cmp dword ptr [ecx + 0x10], 0
// 007150d7  e954ffffff           jmp 0x715030
// 007150dc  016f6c               add dword ptr [edi + 0x6c], ebp
// 007150df  834774ff             add dword ptr [edi + 0x74], -1
// 007150e3  896f68               mov dword ptr [edi + 0x68], ebp
// 007150e6  e9cbfcffff           jmp 0x714db6
// 007150eb  837f6800             cmp dword ptr [edi + 0x68], 0
// 007150ef  744a                 je 0x71513b
// 007150f1  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007150f4  8b4738               mov eax, dword ptr [edi + 0x38]
// 007150f7  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 007150fb  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 00715101  8b97a4160000         mov edx, dword ptr [edi + 0x16a4]
// 00715107  66c7044a0000         mov word ptr [edx + ecx*2], 0
// 0071510d  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00715113  8b8f98160000         mov ecx, dword ptr [edi + 0x1698]
// 00715119  880411               mov byte ptr [ecx + edx], al
// 0071511c  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00715122  0fb6c0               movzx eax, al
// 00715125  6601ac8794000000     add word ptr [edi + eax*4 + 0x94], bp
// 0071512d  8d848794000000       lea eax, [edi + eax*4 + 0x94]
// 00715134  c7476800000000       mov dword ptr [edi + 0x68], 0
// 0071513b  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0071513e  85c9                 test ecx, ecx
// 00715140  7c07                 jl 0x715149
// 00715142  8b4738               mov eax, dword ptr [edi + 0x38]
// 00715145  03c1                 add eax, ecx
// 00715147  eb02                 jmp 0x71514b
// 00715149  33c0                 xor eax, eax
// 0071514b  33d2                 xor edx, edx
// 0071514d  83fe04               cmp esi, 4
// 00715150  0f94c2               sete dl
// 00715153  52                   push edx
// 00715154  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00715157  2bd1                 sub edx, ecx
// 00715159  52                   push edx
// 0071515a  50                   push eax
// 0071515b  57                   push edi
// 0071515c  e80f0d0100           call 0x725e70
// 00715161  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00715164  89475c               mov dword ptr [edi + 0x5c], eax
// 00715167  8b07                 mov eax, dword ptr [edi]
// 00715169  83c410               add esp, 0x10
// 0071516c  e8df6c0100           call 0x72be50
// 00715171  8b0f                 mov ecx, dword ptr [edi]
// 00715173  33c0                 xor eax, eax
// 00715175  394110               cmp dword ptr [ecx + 0x10], eax
// 00715178  7512                 jne 0x71518c
// 0071517a  83fe04               cmp esi, 4
// 0071517d  0f95c0               setne al
// 00715180  5f                   pop edi
// 00715181  5e                   pop esi
// 00715182  5d                   pop ebp
// 00715183  5b                   pop ebx
// 00715184  83e801               sub eax, 1
// 00715187  83e002               and eax, 2
// 0071518a  59                   pop ecx
// 0071518b  c3                   ret 
// 0071518c  83fe04               cmp esi, 4
// 0071518f  0f94c0               sete al
// 00715192  5f                   pop edi
// 00715193  5e                   pop esi
// 00715194  5d                   pop ebp
// 00715195  5b                   pop ebx
// 00715196  8d440001             lea eax, [eax + eax + 1]
// 0071519a  59                   pop ecx
// 0071519b  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
