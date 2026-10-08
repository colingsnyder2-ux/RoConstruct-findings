// from server: 100% by auto
// roc 2007-08 0071f5e0  unit: CXTPDialogBar  size: 1020 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071f5e0
//
// 0071f5e0  51                   push ecx
// 0071f5e1  53                   push ebx
// 0071f5e2  55                   push ebp
// 0071f5e3  56                   push esi
// 0071f5e4  57                   push edi
// 0071f5e5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0071f5e9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0071f5f1  bd01000000           mov ebp, 1
// 0071f5f6  8b4774               mov eax, dword ptr [edi + 0x74]
// 0071f5f9  3d06010000           cmp eax, 0x106
// 0071f5fe  7323                 jae 0x71f623
// 0071f600  e8abfaffff           call 0x71f0b0
// 0071f605  8b4774               mov eax, dword ptr [edi + 0x74]
// 0071f608  3d06010000           cmp eax, 0x106
// 0071f60d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0071f611  7308                 jae 0x71f61b
// 0071f613  85f6                 test esi, esi
// 0071f615  0f845b020000         je 0x71f876
// 0071f61b  85c0                 test eax, eax
// 0071f61d  0f8408030000         je 0x71f92b
// 0071f623  83f803               cmp eax, 3
// 0071f626  724d                 jb 0x71f675
// 0071f628  8b4748               mov eax, dword ptr [edi + 0x48]
// 0071f62b  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0071f62e  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f631  8b7734               mov esi, dword ptr [edi + 0x34]
// 0071f634  d3e0                 shl eax, cl
// 0071f636  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071f639  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0071f63e  33c1                 xor eax, ecx
// 0071f640  234754               and eax, dword ptr [edi + 0x54]
// 0071f643  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0071f646  894748               mov dword ptr [edi + 0x48], eax
// 0071f649  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0071f64d  23f2                 and esi, edx
// 0071f64f  8b5740               mov edx, dword ptr [edi + 0x40]
// 0071f652  66890472             mov word ptr [edx + esi*2], ax
// 0071f656  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0071f659  234f34               and ecx, dword ptr [edi + 0x34]
// 0071f65c  8b5740               mov edx, dword ptr [edi + 0x40]
// 0071f65f  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 0071f663  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0071f666  8b5744               mov edx, dword ptr [edi + 0x44]
// 0071f669  89442410             mov dword ptr [esp + 0x10], eax
// 0071f66d  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 0071f671  6689044a             mov word ptr [edx + ecx*2], ax
// 0071f675  8b5770               mov edx, dword ptr [edi + 0x70]
// 0071f678  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0071f67b  895764               mov dword ptr [edi + 0x64], edx
// 0071f67e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0071f682  85d2                 test edx, edx
// 0071f684  bb02000000           mov ebx, 2
// 0071f689  894f78               mov dword ptr [edi + 0x78], ecx
// 0071f68c  895f60               mov dword ptr [edi + 0x60], ebx
// 0071f68f  7471                 je 0x71f702
// 0071f691  8bc1                 mov eax, ecx
// 0071f693  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 0071f699  7367                 jae 0x71f702
// 0071f69b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f69e  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0071f6a1  2bc2                 sub eax, edx
// 0071f6a3  81e906010000         sub ecx, 0x106
// 0071f6a9  3bc1                 cmp eax, ecx
// 0071f6ab  7755                 ja 0x71f702
// 0071f6ad  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 0071f6b3  3bcb                 cmp ecx, ebx
// 0071f6b5  740e                 je 0x71f6c5
// 0071f6b7  83f903               cmp ecx, 3
// 0071f6ba  740e                 je 0x71f6ca
// 0071f6bc  8bc2                 mov eax, edx
// 0071f6be  e89df7ffff           call 0x71ee60
// 0071f6c3  eb14                 jmp 0x71f6d9
// 0071f6c5  83f903               cmp ecx, 3
// 0071f6c8  7512                 jne 0x71f6dc
// 0071f6ca  3bc5                 cmp eax, ebp
// 0071f6cc  750e                 jne 0x71f6dc
// 0071f6ce  52                   push edx
// 0071f6cf  8bf7                 mov esi, edi
// 0071f6d1  e80af9ffff           call 0x71efe0
// 0071f6d6  83c404               add esp, 4
// 0071f6d9  894760               mov dword ptr [edi + 0x60], eax
// 0071f6dc  8b4760               mov eax, dword ptr [edi + 0x60]
// 0071f6df  83f805               cmp eax, 5
// 0071f6e2  771e                 ja 0x71f702
// 0071f6e4  39af88000000         cmp dword ptr [edi + 0x88], ebp
// 0071f6ea  7413                 je 0x71f6ff
// 0071f6ec  83f803               cmp eax, 3
// 0071f6ef  7511                 jne 0x71f702
// 0071f6f1  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f6f4  2b5770               sub edx, dword ptr [edi + 0x70]
// 0071f6f7  81fa00100000         cmp edx, 0x1000
// 0071f6fd  7603                 jbe 0x71f702
// 0071f6ff  895f60               mov dword ptr [edi + 0x60], ebx
// 0071f702  8b4778               mov eax, dword ptr [edi + 0x78]
// 0071f705  83f803               cmp eax, 3
// 0071f708  0f8270010000         jb 0x71f87e
// 0071f70e  394760               cmp dword ptr [edi + 0x60], eax
// 0071f711  0f8767010000         ja 0x71f87e
// 0071f717  668b576c             mov dx, word ptr [edi + 0x6c]
// 0071f71b  662b5764             sub dx, word ptr [edi + 0x64]
// 0071f71f  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f722  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0071f725  8b9fa4160000         mov ebx, dword ptr [edi + 0x16a4]
// 0071f72b  8d7408fd             lea esi, [eax + ecx - 3]
// 0071f72f  8a4778               mov al, byte ptr [edi + 0x78]
// 0071f732  662bd5               sub dx, bp
// 0071f735  0fb7ca               movzx ecx, dx
// 0071f738  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 0071f73e  66890c53             mov word ptr [ebx + edx*2], cx
// 0071f742  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 0071f748  8b9fa0160000         mov ebx, dword ptr [edi + 0x16a0]
// 0071f74e  2c03                 sub al, 3
// 0071f750  88041a               mov byte ptr [edx + ebx], al
// 0071f753  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 0071f759  0fb6c0               movzx eax, al
// 0071f75c  0fb690c04e7e00       movzx edx, byte ptr [eax + 0x7e4ec0]
// 0071f763  6601ac9798040000     add word ptr [edi + edx*4 + 0x498], bp
// 0071f76b  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 0071f772  81c1ffff0000         add ecx, 0xffff
// 0071f778  6681f90001           cmp cx, 0x100
// 0071f77d  730c                 jae 0x71f78b
// 0071f77f  0fb7c1               movzx eax, cx
// 0071f782  0fb680c04c7e00       movzx eax, byte ptr [eax + 0x7e4cc0]
// 0071f789  eb0d                 jmp 0x71f798
// 0071f78b  0fb7c9               movzx ecx, cx
// 0071f78e  c1e907               shr ecx, 7
// 0071f791  0fb681c04d7e00       movzx eax, byte ptr [ecx + 0x7e4dc0]
// 0071f798  6601ac8788090000     add word ptr [edi + eax*4 + 0x988], bp
// 0071f7a0  8b979c160000         mov edx, dword ptr [edi + 0x169c]
// 0071f7a6  8b4778               mov eax, dword ptr [edi + 0x78]
// 0071f7a9  2bd5                 sub edx, ebp
// 0071f7ab  33db                 xor ebx, ebx
// 0071f7ad  3997a0160000         cmp dword ptr [edi + 0x16a0], edx
// 0071f7b3  8bcd                 mov ecx, ebp
// 0071f7b5  0f94c3               sete bl
// 0071f7b8  2bc8                 sub ecx, eax
// 0071f7ba  014f74               add dword ptr [edi + 0x74], ecx
// 0071f7bd  83c0fe               add eax, -2
// 0071f7c0  894778               mov dword ptr [edi + 0x78], eax
// 0071f7c3  016f6c               add dword ptr [edi + 0x6c], ebp
// 0071f7c6  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f7c9  3bd6                 cmp edx, esi
// 0071f7cb  774f                 ja 0x71f81c
// 0071f7cd  8b4748               mov eax, dword ptr [edi + 0x48]
// 0071f7d0  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 0071f7d3  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 0071f7d6  d3e0                 shl eax, cl
// 0071f7d8  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071f7db  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0071f7e0  33c1                 xor eax, ecx
// 0071f7e2  234754               and eax, dword ptr [edi + 0x54]
// 0071f7e5  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0071f7e8  894748               mov dword ptr [edi + 0x48], eax
// 0071f7eb  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0071f7ef  23ea                 and ebp, edx
// 0071f7f1  8b5740               mov edx, dword ptr [edi + 0x40]
// 0071f7f4  6689046a             mov word ptr [edx + ebp*2], ax
// 0071f7f8  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0071f7fb  234f34               and ecx, dword ptr [edi + 0x34]
// 0071f7fe  8b5740               mov edx, dword ptr [edi + 0x40]
// 0071f801  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 0071f805  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0071f808  8b5744               mov edx, dword ptr [edi + 0x44]
// 0071f80b  89442410             mov dword ptr [esp + 0x10], eax
// 0071f80f  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 0071f813  6689044a             mov word ptr [edx + ecx*2], ax
// 0071f817  bd01000000           mov ebp, 1
// 0071f81c  834778ff             add dword ptr [edi + 0x78], -1
// 0071f820  75a1                 jne 0x71f7c3
// 0071f822  016f6c               add dword ptr [edi + 0x6c], ebp
// 0071f825  85db                 test ebx, ebx
// 0071f827  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f82a  c7476800000000       mov dword ptr [edi + 0x68], 0
// 0071f831  c7476002000000       mov dword ptr [edi + 0x60], 2
// 0071f838  0f84b8fdffff         je 0x71f5f6
// 0071f83e  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0071f841  85d2                 test edx, edx
// 0071f843  7c07                 jl 0x71f84c
// 0071f845  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071f848  03ca                 add ecx, edx
// 0071f84a  eb02                 jmp 0x71f84e
// 0071f84c  33c9                 xor ecx, ecx
// 0071f84e  6a00                 push 0
// 0071f850  2bc2                 sub eax, edx
// 0071f852  50                   push eax
// 0071f853  51                   push ecx
// 0071f854  57                   push edi
// 0071f855  e836530000           call 0x724b90
// 0071f85a  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0071f85d  8b07                 mov eax, dword ptr [edi]
// 0071f85f  83c410               add esp, 0x10
// 0071f862  894f5c               mov dword ptr [edi + 0x5c], ecx
// 0071f865  e836f5ffff           call 0x71eda0
// 0071f86a  8b17                 mov edx, dword ptr [edi]
// 0071f86c  837a1000             cmp dword ptr [edx + 0x10], 0
// 0071f870  0f8580fdffff         jne 0x71f5f6
// 0071f876  5f                   pop edi
// 0071f877  5e                   pop esi
// 0071f878  5d                   pop ebp
// 0071f879  33c0                 xor eax, eax
// 0071f87b  5b                   pop ebx
// 0071f87c  59                   pop ecx
// 0071f87d  c3                   ret 
// 0071f87e  837f6800             cmp dword ptr [edi + 0x68], 0
// 0071f882  0f8494000000         je 0x71f91c
// 0071f888  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f88b  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071f88e  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 0071f892  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 0071f898  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 0071f89e  66c704510000         mov word ptr [ecx + edx*2], 0
// 0071f8a4  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 0071f8aa  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 0071f8b0  88040a               mov byte ptr [edx + ecx], al
// 0071f8b3  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 0071f8b9  0fb6d0               movzx edx, al
// 0071f8bc  6601ac9794000000     add word ptr [edi + edx*4 + 0x94], bp
// 0071f8c4  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 0071f8cb  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 0071f8d1  2bc5                 sub eax, ebp
// 0071f8d3  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 0071f8d9  752f                 jne 0x71f90a
// 0071f8db  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0071f8de  85c9                 test ecx, ecx
// 0071f8e0  7c07                 jl 0x71f8e9
// 0071f8e2  8b4738               mov eax, dword ptr [edi + 0x38]
// 0071f8e5  03c1                 add eax, ecx
// 0071f8e7  eb02                 jmp 0x71f8eb
// 0071f8e9  33c0                 xor eax, eax
// 0071f8eb  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f8ee  6a00                 push 0
// 0071f8f0  2bd1                 sub edx, ecx
// 0071f8f2  52                   push edx
// 0071f8f3  50                   push eax
// 0071f8f4  57                   push edi
// 0071f8f5  e896520000           call 0x724b90
// 0071f8fa  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f8fd  89475c               mov dword ptr [edi + 0x5c], eax
// 0071f900  8b07                 mov eax, dword ptr [edi]
// 0071f902  83c410               add esp, 0x10
// 0071f905  e896f4ffff           call 0x71eda0
// 0071f90a  8b0f                 mov ecx, dword ptr [edi]
// 0071f90c  016f6c               add dword ptr [edi + 0x6c], ebp
// 0071f90f  834774ff             add dword ptr [edi + 0x74], -1
// 0071f913  83791000             cmp dword ptr [ecx + 0x10], 0
// 0071f917  e954ffffff           jmp 0x71f870
// 0071f91c  016f6c               add dword ptr [edi + 0x6c], ebp
// 0071f91f  834774ff             add dword ptr [edi + 0x74], -1
// 0071f923  896f68               mov dword ptr [edi + 0x68], ebp
// 0071f926  e9cbfcffff           jmp 0x71f5f6
// 0071f92b  837f6800             cmp dword ptr [edi + 0x68], 0
// 0071f92f  744a                 je 0x71f97b
// 0071f931  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f934  8b4738               mov eax, dword ptr [edi + 0x38]
// 0071f937  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 0071f93b  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 0071f941  8b97a4160000         mov edx, dword ptr [edi + 0x16a4]
// 0071f947  66c7044a0000         mov word ptr [edx + ecx*2], 0
// 0071f94d  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 0071f953  8b8f98160000         mov ecx, dword ptr [edi + 0x1698]
// 0071f959  880411               mov byte ptr [ecx + edx], al
// 0071f95c  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 0071f962  0fb6c0               movzx eax, al
// 0071f965  6601ac8794000000     add word ptr [edi + eax*4 + 0x94], bp
// 0071f96d  8d848794000000       lea eax, [edi + eax*4 + 0x94]
// 0071f974  c7476800000000       mov dword ptr [edi + 0x68], 0
// 0071f97b  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0071f97e  85c9                 test ecx, ecx
// 0071f980  7c07                 jl 0x71f989
// 0071f982  8b4738               mov eax, dword ptr [edi + 0x38]
// 0071f985  03c1                 add eax, ecx
// 0071f987  eb02                 jmp 0x71f98b
// 0071f989  33c0                 xor eax, eax
// 0071f98b  33d2                 xor edx, edx
// 0071f98d  83fe04               cmp esi, 4
// 0071f990  0f94c2               sete dl
// 0071f993  52                   push edx
// 0071f994  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f997  2bd1                 sub edx, ecx
// 0071f999  52                   push edx
// 0071f99a  50                   push eax
// 0071f99b  57                   push edi
// 0071f99c  e8ef510000           call 0x724b90
// 0071f9a1  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f9a4  89475c               mov dword ptr [edi + 0x5c], eax
// 0071f9a7  8b07                 mov eax, dword ptr [edi]
// 0071f9a9  83c410               add esp, 0x10
// 0071f9ac  e8eff3ffff           call 0x71eda0
// 0071f9b1  8b0f                 mov ecx, dword ptr [edi]
// 0071f9b3  33c0                 xor eax, eax
// 0071f9b5  394110               cmp dword ptr [ecx + 0x10], eax
// 0071f9b8  7512                 jne 0x71f9cc
// 0071f9ba  83fe04               cmp esi, 4
// 0071f9bd  0f95c0               setne al
// 0071f9c0  5f                   pop edi
// 0071f9c1  5e                   pop esi
// 0071f9c2  5d                   pop ebp
// 0071f9c3  5b                   pop ebx
// 0071f9c4  83e801               sub eax, 1
// 0071f9c7  83e002               and eax, 2
// 0071f9ca  59                   pop ecx
// 0071f9cb  c3                   ret 
// 0071f9cc  83fe04               cmp esi, 4
// 0071f9cf  0f94c0               sete al
// 0071f9d2  5f                   pop edi
// 0071f9d3  5e                   pop esi
// 0071f9d4  5d                   pop ebp
// 0071f9d5  5b                   pop ebx
// 0071f9d6  8d440001             lea eax, [eax + eax + 1]
// 0071f9da  59                   pop ecx
// 0071f9db  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
