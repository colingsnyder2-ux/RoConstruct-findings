// roc 2008-06 007a02f0  unit: CXTPDialogBar  size: 1015 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a02f0
//
// 007a02f0  51                   push ecx
// 007a02f1  53                   push ebx
// 007a02f2  55                   push ebp
// 007a02f3  56                   push esi
// 007a02f4  57                   push edi
// 007a02f5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007a02f9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007a0301  bd01000000           mov ebp, 1
// 007a0306  8b4774               mov eax, dword ptr [edi + 0x74]
// 007a0309  3d06010000           cmp eax, 0x106
// 007a030e  7323                 jae 0x7a0333
// 007a0310  e8abfaffff           call 0x79fdc0
// 007a0315  8b4774               mov eax, dword ptr [edi + 0x74]
// 007a0318  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007a031c  3d06010000           cmp eax, 0x106
// 007a0321  7308                 jae 0x7a032b
// 007a0323  85f6                 test esi, esi
// 007a0325  0f845e020000         je 0x7a0589
// 007a032b  85c0                 test eax, eax
// 007a032d  0f8409030000         je 0x7a063c
// 007a0333  83f803               cmp eax, 3
// 007a0336  724d                 jb 0x7a0385
// 007a0338  8b4748               mov eax, dword ptr [edi + 0x48]
// 007a033b  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007a033e  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a0341  8b7734               mov esi, dword ptr [edi + 0x34]
// 007a0344  d3e0                 shl eax, cl
// 007a0346  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a0349  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 007a034e  33c1                 xor eax, ecx
// 007a0350  234754               and eax, dword ptr [edi + 0x54]
// 007a0353  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007a0356  894748               mov dword ptr [edi + 0x48], eax
// 007a0359  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 007a035d  23f2                 and esi, edx
// 007a035f  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a0362  66890472             mov word ptr [edx + esi*2], ax
// 007a0366  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 007a0369  234f34               and ecx, dword ptr [edi + 0x34]
// 007a036c  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a036f  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 007a0373  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 007a0376  8b5744               mov edx, dword ptr [edi + 0x44]
// 007a0379  89442410             mov dword ptr [esp + 0x10], eax
// 007a037d  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 007a0381  6689044a             mov word ptr [edx + ecx*2], ax
// 007a0385  8b5770               mov edx, dword ptr [edi + 0x70]
// 007a0388  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007a038b  895764               mov dword ptr [edi + 0x64], edx
// 007a038e  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a0392  bb02000000           mov ebx, 2
// 007a0397  894f78               mov dword ptr [edi + 0x78], ecx
// 007a039a  895f60               mov dword ptr [edi + 0x60], ebx
// 007a039d  85d2                 test edx, edx
// 007a039f  7471                 je 0x7a0412
// 007a03a1  8bc1                 mov eax, ecx
// 007a03a3  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 007a03a9  7367                 jae 0x7a0412
// 007a03ab  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a03ae  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 007a03b1  2bc2                 sub eax, edx
// 007a03b3  81e906010000         sub ecx, 0x106
// 007a03b9  3bc1                 cmp eax, ecx
// 007a03bb  7755                 ja 0x7a0412
// 007a03bd  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 007a03c3  3bcb                 cmp ecx, ebx
// 007a03c5  740e                 je 0x7a03d5
// 007a03c7  83f903               cmp ecx, 3
// 007a03ca  740e                 je 0x7a03da
// 007a03cc  8bc2                 mov eax, edx
// 007a03ce  e8edf7ffff           call 0x79fbc0
// 007a03d3  eb14                 jmp 0x7a03e9
// 007a03d5  83f903               cmp ecx, 3
// 007a03d8  7512                 jne 0x7a03ec
// 007a03da  3bc5                 cmp eax, ebp
// 007a03dc  750e                 jne 0x7a03ec
// 007a03de  52                   push edx
// 007a03df  8bf7                 mov esi, edi
// 007a03e1  e83af9ffff           call 0x79fd20
// 007a03e6  83c404               add esp, 4
// 007a03e9  894760               mov dword ptr [edi + 0x60], eax
// 007a03ec  8b4760               mov eax, dword ptr [edi + 0x60]
// 007a03ef  83f805               cmp eax, 5
// 007a03f2  771e                 ja 0x7a0412
// 007a03f4  39af88000000         cmp dword ptr [edi + 0x88], ebp
// 007a03fa  7413                 je 0x7a040f
// 007a03fc  83f803               cmp eax, 3
// 007a03ff  7511                 jne 0x7a0412
// 007a0401  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a0404  2b5770               sub edx, dword ptr [edi + 0x70]
// 007a0407  81fa00100000         cmp edx, 0x1000
// 007a040d  7603                 jbe 0x7a0412
// 007a040f  895f60               mov dword ptr [edi + 0x60], ebx
// 007a0412  8b4778               mov eax, dword ptr [edi + 0x78]
// 007a0415  83f803               cmp eax, 3
// 007a0418  0f8273010000         jb 0x7a0591
// 007a041e  394760               cmp dword ptr [edi + 0x60], eax
// 007a0421  0f876a010000         ja 0x7a0591
// 007a0427  668b576c             mov dx, word ptr [edi + 0x6c]
// 007a042b  662b5764             sub dx, word ptr [edi + 0x64]
// 007a042f  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a0432  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 007a0435  8b9fa4160000         mov ebx, dword ptr [edi + 0x16a4]
// 007a043b  8d7408fd             lea esi, [eax + ecx - 3]
// 007a043f  8a4778               mov al, byte ptr [edi + 0x78]
// 007a0442  662bd5               sub dx, bp
// 007a0445  0fb7ca               movzx ecx, dx
// 007a0448  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 007a044e  66890c53             mov word ptr [ebx + edx*2], cx
// 007a0452  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 007a0458  8b9fa0160000         mov ebx, dword ptr [edi + 0x16a0]
// 007a045e  2c03                 sub al, 3
// 007a0460  88041a               mov byte ptr [edx + ebx], al
// 007a0463  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 007a0469  0fb6c0               movzx eax, al
// 007a046c  0fb690481d8700       movzx edx, byte ptr [eax + 0x871d48]
// 007a0473  6601ac9798040000     add word ptr [edi + edx*4 + 0x498], bp
// 007a047b  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 007a0482  81c1ffff0000         add ecx, 0xffff
// 007a0488  b800010000           mov eax, 0x100
// 007a048d  663bc8               cmp cx, ax
// 007a0490  730c                 jae 0x7a049e
// 007a0492  0fb7c9               movzx ecx, cx
// 007a0495  0fb681481b8700       movzx eax, byte ptr [ecx + 0x871b48]
// 007a049c  eb0d                 jmp 0x7a04ab
// 007a049e  0fb7d1               movzx edx, cx
// 007a04a1  c1ea07               shr edx, 7
// 007a04a4  0fb682481c8700       movzx eax, byte ptr [edx + 0x871c48]
// 007a04ab  6601ac8788090000     add word ptr [edi + eax*4 + 0x988], bp
// 007a04b3  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 007a04b9  2bc5                 sub eax, ebp
// 007a04bb  33db                 xor ebx, ebx
// 007a04bd  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 007a04c3  8b4778               mov eax, dword ptr [edi + 0x78]
// 007a04c6  0f94c3               sete bl
// 007a04c9  8bcd                 mov ecx, ebp
// 007a04cb  2bc8                 sub ecx, eax
// 007a04cd  014f74               add dword ptr [edi + 0x74], ecx
// 007a04d0  83c0fe               add eax, -2
// 007a04d3  894778               mov dword ptr [edi + 0x78], eax
// 007a04d6  016f6c               add dword ptr [edi + 0x6c], ebp
// 007a04d9  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a04dc  3bd6                 cmp edx, esi
// 007a04de  774f                 ja 0x7a052f
// 007a04e0  8b4748               mov eax, dword ptr [edi + 0x48]
// 007a04e3  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007a04e6  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 007a04e9  d3e0                 shl eax, cl
// 007a04eb  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a04ee  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 007a04f3  33c1                 xor eax, ecx
// 007a04f5  234754               and eax, dword ptr [edi + 0x54]
// 007a04f8  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007a04fb  894748               mov dword ptr [edi + 0x48], eax
// 007a04fe  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 007a0502  23ea                 and ebp, edx
// 007a0504  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a0507  6689046a             mov word ptr [edx + ebp*2], ax
// 007a050b  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 007a050e  234f34               and ecx, dword ptr [edi + 0x34]
// 007a0511  8b5740               mov edx, dword ptr [edi + 0x40]
// 007a0514  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 007a0518  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 007a051b  8b5744               mov edx, dword ptr [edi + 0x44]
// 007a051e  89442410             mov dword ptr [esp + 0x10], eax
// 007a0522  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 007a0526  6689044a             mov word ptr [edx + ecx*2], ax
// 007a052a  bd01000000           mov ebp, 1
// 007a052f  834778ff             add dword ptr [edi + 0x78], -1
// 007a0533  75a1                 jne 0x7a04d6
// 007a0535  016f6c               add dword ptr [edi + 0x6c], ebp
// 007a0538  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a053b  c7476800000000       mov dword ptr [edi + 0x68], 0
// 007a0542  c7476002000000       mov dword ptr [edi + 0x60], 2
// 007a0549  85db                 test ebx, ebx
// 007a054b  0f84b5fdffff         je 0x7a0306
// 007a0551  8b575c               mov edx, dword ptr [edi + 0x5c]
// 007a0554  85d2                 test edx, edx
// 007a0556  7c07                 jl 0x7a055f
// 007a0558  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a055b  03ca                 add ecx, edx
// 007a055d  eb02                 jmp 0x7a0561
// 007a055f  33c9                 xor ecx, ecx
// 007a0561  6a00                 push 0
// 007a0563  2bc2                 sub eax, edx
// 007a0565  50                   push eax
// 007a0566  51                   push ecx
// 007a0567  57                   push edi
// 007a0568  e893540000           call 0x7a5a00
// 007a056d  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 007a0570  8b07                 mov eax, dword ptr [edi]
// 007a0572  83c410               add esp, 0x10
// 007a0575  894f5c               mov dword ptr [edi + 0x5c], ecx
// 007a0578  e8235f0000           call 0x7a64a0
// 007a057d  8b17                 mov edx, dword ptr [edi]
// 007a057f  837a1000             cmp dword ptr [edx + 0x10], 0
// 007a0583  0f857dfdffff         jne 0x7a0306
// 007a0589  5f                   pop edi
// 007a058a  5e                   pop esi
// 007a058b  5d                   pop ebp
// 007a058c  33c0                 xor eax, eax
// 007a058e  5b                   pop ebx
// 007a058f  59                   pop ecx
// 007a0590  c3                   ret 
// 007a0591  837f6800             cmp dword ptr [edi + 0x68], 0
// 007a0595  0f8493000000         je 0x7a062e
// 007a059b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a059e  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a05a1  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 007a05a5  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 007a05ab  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 007a05b1  33f6                 xor esi, esi
// 007a05b3  66893451             mov word ptr [ecx + edx*2], si
// 007a05b7  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 007a05bd  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 007a05c3  88040a               mov byte ptr [edx + ecx], al
// 007a05c6  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 007a05cc  0fb6d0               movzx edx, al
// 007a05cf  6601ac9794000000     add word ptr [edi + edx*4 + 0x94], bp
// 007a05d7  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 007a05de  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 007a05e4  2bc5                 sub eax, ebp
// 007a05e6  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 007a05ec  752f                 jne 0x7a061d
// 007a05ee  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 007a05f1  85c9                 test ecx, ecx
// 007a05f3  7c07                 jl 0x7a05fc
// 007a05f5  8b4738               mov eax, dword ptr [edi + 0x38]
// 007a05f8  03c1                 add eax, ecx
// 007a05fa  eb02                 jmp 0x7a05fe
// 007a05fc  33c0                 xor eax, eax
// 007a05fe  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a0601  6a00                 push 0
// 007a0603  2bd1                 sub edx, ecx
// 007a0605  52                   push edx
// 007a0606  50                   push eax
// 007a0607  57                   push edi
// 007a0608  e8f3530000           call 0x7a5a00
// 007a060d  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a0610  89475c               mov dword ptr [edi + 0x5c], eax
// 007a0613  8b07                 mov eax, dword ptr [edi]
// 007a0615  83c410               add esp, 0x10
// 007a0618  e8835e0000           call 0x7a64a0
// 007a061d  8b0f                 mov ecx, dword ptr [edi]
// 007a061f  016f6c               add dword ptr [edi + 0x6c], ebp
// 007a0622  ff4f74               dec dword ptr [edi + 0x74]
// 007a0625  83791000             cmp dword ptr [ecx + 0x10], 0
// 007a0629  e955ffffff           jmp 0x7a0583
// 007a062e  016f6c               add dword ptr [edi + 0x6c], ebp
// 007a0631  ff4f74               dec dword ptr [edi + 0x74]
// 007a0634  896f68               mov dword ptr [edi + 0x68], ebp
// 007a0637  e9cafcffff           jmp 0x7a0306
// 007a063c  837f6800             cmp dword ptr [edi + 0x68], 0
// 007a0640  7446                 je 0x7a0688
// 007a0642  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a0645  8b4738               mov eax, dword ptr [edi + 0x38]
// 007a0648  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 007a064c  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 007a0652  8b97a4160000         mov edx, dword ptr [edi + 0x16a4]
// 007a0658  33db                 xor ebx, ebx
// 007a065a  66891c4a             mov word ptr [edx + ecx*2], bx
// 007a065e  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 007a0664  8b8f98160000         mov ecx, dword ptr [edi + 0x1698]
// 007a066a  880411               mov byte ptr [ecx + edx], al
// 007a066d  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 007a0673  0fb6c0               movzx eax, al
// 007a0676  6601ac8794000000     add word ptr [edi + eax*4 + 0x94], bp
// 007a067e  8d848794000000       lea eax, [edi + eax*4 + 0x94]
// 007a0685  895f68               mov dword ptr [edi + 0x68], ebx
// 007a0688  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 007a068b  85c9                 test ecx, ecx
// 007a068d  7c07                 jl 0x7a0696
// 007a068f  8b4738               mov eax, dword ptr [edi + 0x38]
// 007a0692  03c1                 add eax, ecx
// 007a0694  eb02                 jmp 0x7a0698
// 007a0696  33c0                 xor eax, eax
// 007a0698  33d2                 xor edx, edx
// 007a069a  83fe04               cmp esi, 4
// 007a069d  0f94c2               sete dl
// 007a06a0  52                   push edx
// 007a06a1  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a06a4  2bd1                 sub edx, ecx
// 007a06a6  52                   push edx
// 007a06a7  50                   push eax
// 007a06a8  57                   push edi
// 007a06a9  e852530000           call 0x7a5a00
// 007a06ae  8b476c               mov eax, dword ptr [edi + 0x6c]
// 007a06b1  89475c               mov dword ptr [edi + 0x5c], eax
// 007a06b4  8b07                 mov eax, dword ptr [edi]
// 007a06b6  83c410               add esp, 0x10
// 007a06b9  e8e25d0000           call 0x7a64a0
// 007a06be  8b0f                 mov ecx, dword ptr [edi]
// 007a06c0  33c0                 xor eax, eax
// 007a06c2  394110               cmp dword ptr [ecx + 0x10], eax
// 007a06c5  7510                 jne 0x7a06d7
// 007a06c7  83fe04               cmp esi, 4
// 007a06ca  0f95c0               setne al
// 007a06cd  5f                   pop edi
// 007a06ce  5e                   pop esi
// 007a06cf  5d                   pop ebp
// 007a06d0  5b                   pop ebx
// 007a06d1  48                   dec eax
// 007a06d2  83e002               and eax, 2
// 007a06d5  59                   pop ecx
// 007a06d6  c3                   ret 
// 007a06d7  83fe04               cmp esi, 4
// 007a06da  0f94c0               sete al
// 007a06dd  5f                   pop edi
// 007a06de  5e                   pop esi
// 007a06df  5d                   pop ebp
// 007a06e0  5b                   pop ebx
// 007a06e1  8d440001             lea eax, [eax + eax + 1]
// 007a06e5  59                   pop ecx
// 007a06e6  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
