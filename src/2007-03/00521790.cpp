// roc 2007-03 00521790  unit: seg_00520000  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00521790
//
// 00521790  83ec2c               sub esp, 0x2c
// 00521793  53                   push ebx
// 00521794  56                   push esi
// 00521795  57                   push edi
// 00521796  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0052179a  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 005217a1  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 005217a7  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 005217ad  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 005217b3  895c2418             mov dword ptr [esp + 0x18], ebx
// 005217b7  89442414             mov dword ptr [esp + 0x14], eax
// 005217bb  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005217bf  7418                 je 0x5217d9
// 005217c1  837b2800             cmp dword ptr [ebx + 0x28], 0
// 005217c5  7512                 jne 0x5217d9
// 005217c7  8bf7                 mov esi, edi
// 005217c9  e8f2fcffff           call 0x5214c0
// 005217ce  84c0                 test al, al
// 005217d0  7507                 jne 0x5217d9
// 005217d2  5f                   pop edi
// 005217d3  5e                   pop esi
// 005217d4  5b                   pop ebx
// 005217d5  83c42c               add esp, 0x2c
// 005217d8  c3                   ret 
// 005217d9  807b0800             cmp byte ptr [ebx + 8], 0
// 005217dd  55                   push ebp
// 005217de  0f85e3010000         jne 0x5219c7
// 005217e4  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 005217e7  85c9                 test ecx, ecx
// 005217e9  894c2410             mov dword ptr [esp + 0x10], ecx
// 005217ed  7614                 jbe 0x521803
// 005217ef  5d                   pop ebp
// 005217f0  5f                   pop edi
// 005217f1  83e901               sub ecx, 1
// 005217f4  834328ff             add dword ptr [ebx + 0x28], -1
// 005217f8  5e                   pop esi
// 005217f9  894b14               mov dword ptr [ebx + 0x14], ecx
// 005217fc  b001                 mov al, 1
// 005217fe  5b                   pop ebx
// 005217ff  83c42c               add esp, 0x2c
// 00521802  c3                   ret 
// 00521803  8b4718               mov eax, dword ptr [edi + 0x18]
// 00521806  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 0052180c  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00521810  897c2438             mov dword ptr [esp + 0x38], edi
// 00521814  8b10                 mov edx, dword ptr [eax]
// 00521816  89542428             mov dword ptr [esp + 0x28], edx
// 0052181a  8b542444             mov edx, dword ptr [esp + 0x44]
// 0052181e  8b4004               mov eax, dword ptr [eax + 4]
// 00521821  8b12                 mov edx, dword ptr [edx]
// 00521823  8944242c             mov dword ptr [esp + 0x2c], eax
// 00521827  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0052182a  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0052182d  89542424             mov dword ptr [esp + 0x24], edx
// 00521831  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 00521834  89542414             mov dword ptr [esp + 0x14], edx
// 00521838  0f8f6d010000         jg 0x5219ab
// 0052183e  8bff                 mov edi, edi
// 00521840  83f808               cmp eax, 8
// 00521843  7d31                 jge 0x521876
// 00521845  6a00                 push 0
// 00521847  50                   push eax
// 00521848  8d442430             lea eax, [esp + 0x30]
// 0052184c  56                   push esi
// 0052184d  50                   push eax
// 0052184e  e80df4ffff           call 0x520c60
// 00521853  83c410               add esp, 0x10
// 00521856  84c0                 test al, al
// 00521858  0f8419010000         je 0x521977
// 0052185e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00521862  83f808               cmp eax, 8
// 00521865  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521869  7d0b                 jge 0x521876
// 0052186b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052186f  b901000000           mov ecx, 1
// 00521874  eb2d                 jmp 0x5218a3
// 00521876  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052187a  8d48f8               lea ecx, [eax - 8]
// 0052187d  8bd6                 mov edx, esi
// 0052187f  d3fa                 sar edx, cl
// 00521881  81e2ff000000         and edx, 0xff
// 00521887  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 0052188e  85c9                 test ecx, ecx
// 00521890  740c                 je 0x52189e
// 00521892  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0052189a  2bc1                 sub eax, ecx
// 0052189c  eb28                 jmp 0x5218c6
// 0052189e  b909000000           mov ecx, 9
// 005218a3  51                   push ecx
// 005218a4  57                   push edi
// 005218a5  50                   push eax
// 005218a6  8d4c2434             lea ecx, [esp + 0x34]
// 005218aa  56                   push esi
// 005218ab  51                   push ecx
// 005218ac  e8dff4ffff           call 0x520d90
// 005218b1  8bf8                 mov edi, eax
// 005218b3  83c414               add esp, 0x14
// 005218b6  85ff                 test edi, edi
// 005218b8  0f8cb9000000         jl 0x521977
// 005218be  8b742430             mov esi, dword ptr [esp + 0x30]
// 005218c2  8b442434             mov eax, dword ptr [esp + 0x34]
// 005218c6  8bdf                 mov ebx, edi
// 005218c8  c1fb04               sar ebx, 4
// 005218cb  83e70f               and edi, 0xf
// 005218ce  7469                 je 0x521939
// 005218d0  03eb                 add ebp, ebx
// 005218d2  3bc7                 cmp eax, edi
// 005218d4  7d20                 jge 0x5218f6
// 005218d6  57                   push edi
// 005218d7  50                   push eax
// 005218d8  8d542430             lea edx, [esp + 0x30]
// 005218dc  56                   push esi
// 005218dd  52                   push edx
// 005218de  e87df3ffff           call 0x520c60
// 005218e3  83c410               add esp, 0x10
// 005218e6  84c0                 test al, al
// 005218e8  0f8489000000         je 0x521977
// 005218ee  8b742430             mov esi, dword ptr [esp + 0x30]
// 005218f2  8b442434             mov eax, dword ptr [esp + 0x34]
// 005218f6  8bcf                 mov ecx, edi
// 005218f8  2bc7                 sub eax, edi
// 005218fa  ba01000000           mov edx, 1
// 005218ff  d3e2                 shl edx, cl
// 00521901  8bde                 mov ebx, esi
// 00521903  8bc8                 mov ecx, eax
// 00521905  d3fb                 sar ebx, cl
// 00521907  83ea01               sub edx, 1
// 0052190a  23d3                 and edx, ebx
// 0052190c  3b14bd18457a00       cmp edx, dword ptr [edi*4 + 0x7a4518]
// 00521913  7d0b                 jge 0x521920
// 00521915  8b3cbd58457a00       mov edi, dword ptr [edi*4 + 0x7a4558]
// 0052191c  03fa                 add edi, edx
// 0052191e  eb02                 jmp 0x521922
// 00521920  8bfa                 mov edi, edx
// 00521922  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00521926  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052192a  d3e7                 shl edi, cl
// 0052192c  8b0cad202c7a00       mov ecx, dword ptr [ebp*4 + 0x7a2c20]
// 00521933  66893c4a             mov word ptr [edx + ecx*2], di
// 00521937  eb08                 jmp 0x521941
// 00521939  83fb0f               cmp ebx, 0xf
// 0052193c  7512                 jne 0x521950
// 0052193e  83c50f               add ebp, 0xf
// 00521941  83c501               add ebp, 1
// 00521944  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00521948  0f8ef2feffff         jle 0x521840
// 0052194e  eb4f                 jmp 0x52199f
// 00521950  bf01000000           mov edi, 1
// 00521955  8bcb                 mov ecx, ebx
// 00521957  d3e7                 shl edi, cl
// 00521959  85db                 test ebx, ebx
// 0052195b  8bef                 mov ebp, edi
// 0052195d  7439                 je 0x521998
// 0052195f  3bc3                 cmp eax, ebx
// 00521961  7d26                 jge 0x521989
// 00521963  53                   push ebx
// 00521964  50                   push eax
// 00521965  8d442430             lea eax, [esp + 0x30]
// 00521969  56                   push esi
// 0052196a  50                   push eax
// 0052196b  e8f0f2ffff           call 0x520c60
// 00521970  83c410               add esp, 0x10
// 00521973  84c0                 test al, al
// 00521975  750a                 jne 0x521981
// 00521977  5d                   pop ebp
// 00521978  5f                   pop edi
// 00521979  5e                   pop esi
// 0052197a  32c0                 xor al, al
// 0052197c  5b                   pop ebx
// 0052197d  83c42c               add esp, 0x2c
// 00521980  c3                   ret 
// 00521981  8b742430             mov esi, dword ptr [esp + 0x30]
// 00521985  8b442434             mov eax, dword ptr [esp + 0x34]
// 00521989  2bc3                 sub eax, ebx
// 0052198b  8bd6                 mov edx, esi
// 0052198d  8bc8                 mov ecx, eax
// 0052198f  d3fa                 sar edx, cl
// 00521991  83c7ff               add edi, -1
// 00521994  23d7                 and edx, edi
// 00521996  03ea                 add ebp, edx
// 00521998  83ed01               sub ebp, 1
// 0052199b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052199f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005219a3  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005219a7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005219ab  8b5718               mov edx, dword ptr [edi + 0x18]
// 005219ae  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005219b2  892a                 mov dword ptr [edx], ebp
// 005219b4  8b5718               mov edx, dword ptr [edi + 0x18]
// 005219b7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005219bb  897a04               mov dword ptr [edx + 4], edi
// 005219be  89730c               mov dword ptr [ebx + 0xc], esi
// 005219c1  894310               mov dword ptr [ebx + 0x10], eax
// 005219c4  894b14               mov dword ptr [ebx + 0x14], ecx
// 005219c7  834328ff             add dword ptr [ebx + 0x28], -1
// 005219cb  5d                   pop ebp
// 005219cc  5f                   pop edi
// 005219cd  5e                   pop esi
// 005219ce  b001                 mov al, 1
// 005219d0  5b                   pop ebx
// 005219d1  83c42c               add esp, 0x2c
// 005219d4  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
