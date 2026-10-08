// roc 2007-03 00528290  unit: seg_00520000  size: 1027 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00528290
//
// 00528290  81ec18010000         sub esp, 0x118
// 00528296  8b84241c010000       mov eax, dword ptr [esp + 0x11c]
// 0052829d  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 005282a3  8b4808               mov ecx, dword ptr [eax + 8]
// 005282a6  8b942420010000       mov edx, dword ptr [esp + 0x120]
// 005282ad  894c240c             mov dword ptr [esp + 0xc], ecx
// 005282b1  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 005282b4  8b44880c             mov eax, dword ptr [eax + ecx*4 + 0xc]
// 005282b8  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 005282bf  85c9                 test ecx, ecx
// 005282c1  0f86c5030000         jbe 0x52868c
// 005282c7  8b94242c010000       mov edx, dword ptr [esp + 0x12c]
// 005282ce  53                   push ebx
// 005282cf  8b9c2434010000       mov ebx, dword ptr [esp + 0x134]
// 005282d6  55                   push ebp
// 005282d7  56                   push esi
// 005282d8  8bb42430010000       mov esi, dword ptr [esp + 0x130]
// 005282df  8d549608             lea edx, [esi + edx*4 + 8]
// 005282e3  89542420             mov dword ptr [esp + 0x20], edx
// 005282e7  8d5008               lea edx, [eax + 8]
// 005282ea  89542410             mov dword ptr [esp + 0x10], edx
// 005282ee  8d542424             lea edx, [esp + 0x24]
// 005282f2  2bd0                 sub edx, eax
// 005282f4  89542414             mov dword ptr [esp + 0x14], edx
// 005282f8  57                   push edi
// 005282f9  8bbc2438010000       mov edi, dword ptr [esp + 0x138]
// 00528300  8d54242c             lea edx, [esp + 0x2c]
// 00528304  2bd0                 sub edx, eax
// 00528306  89542420             mov dword ptr [esp + 0x20], edx
// 0052830a  83c704               add edi, 4
// 0052830d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00528311  8b542424             mov edx, dword ptr [esp + 0x24]
// 00528315  8d442428             lea eax, [esp + 0x28]
// 00528319  be02000000           mov esi, 2
// 0052831e  8bff                 mov edi, edi
// 00528320  8b4af8               mov ecx, dword ptr [edx - 8]
// 00528323  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00528327  81ed80000000         sub ebp, 0x80
// 0052832d  8928                 mov dword ptr [eax], ebp
// 0052832f  03cb                 add ecx, ebx
// 00528331  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528335  83c101               add ecx, 1
// 00528338  81ed80000000         sub ebp, 0x80
// 0052833e  896804               mov dword ptr [eax + 4], ebp
// 00528341  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528345  83c101               add ecx, 1
// 00528348  81ed80000000         sub ebp, 0x80
// 0052834e  83c004               add eax, 4
// 00528351  896804               mov dword ptr [eax + 4], ebp
// 00528354  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528358  83c101               add ecx, 1
// 0052835b  83c004               add eax, 4
// 0052835e  81ed80000000         sub ebp, 0x80
// 00528364  896804               mov dword ptr [eax + 4], ebp
// 00528367  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0052836b  83c101               add ecx, 1
// 0052836e  83c004               add eax, 4
// 00528371  81ed80000000         sub ebp, 0x80
// 00528377  896804               mov dword ptr [eax + 4], ebp
// 0052837a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0052837e  83c101               add ecx, 1
// 00528381  83c004               add eax, 4
// 00528384  81ed80000000         sub ebp, 0x80
// 0052838a  896804               mov dword ptr [eax + 4], ebp
// 0052838d  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528391  83c101               add ecx, 1
// 00528394  83c004               add eax, 4
// 00528397  81ed80000000         sub ebp, 0x80
// 0052839d  896804               mov dword ptr [eax + 4], ebp
// 005283a0  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005283a4  83c004               add eax, 4
// 005283a7  81e980000000         sub ecx, 0x80
// 005283ad  894804               mov dword ptr [eax + 4], ecx
// 005283b0  8b4afc               mov ecx, dword ptr [edx - 4]
// 005283b3  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005283b7  83c004               add eax, 4
// 005283ba  03cb                 add ecx, ebx
// 005283bc  81ed80000000         sub ebp, 0x80
// 005283c2  896804               mov dword ptr [eax + 4], ebp
// 005283c5  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005283c9  83c004               add eax, 4
// 005283cc  83c101               add ecx, 1
// 005283cf  81ed80000000         sub ebp, 0x80
// 005283d5  896804               mov dword ptr [eax + 4], ebp
// 005283d8  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005283dc  83c004               add eax, 4
// 005283df  83c101               add ecx, 1
// 005283e2  81ed80000000         sub ebp, 0x80
// 005283e8  896804               mov dword ptr [eax + 4], ebp
// 005283eb  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005283ef  83c004               add eax, 4
// 005283f2  83c101               add ecx, 1
// 005283f5  81ed80000000         sub ebp, 0x80
// 005283fb  896804               mov dword ptr [eax + 4], ebp
// 005283fe  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528402  83c004               add eax, 4
// 00528405  83c101               add ecx, 1
// 00528408  81ed80000000         sub ebp, 0x80
// 0052840e  896804               mov dword ptr [eax + 4], ebp
// 00528411  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528415  83c004               add eax, 4
// 00528418  83c101               add ecx, 1
// 0052841b  83c004               add eax, 4
// 0052841e  81ed80000000         sub ebp, 0x80
// 00528424  8928                 mov dword ptr [eax], ebp
// 00528426  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0052842a  83c101               add ecx, 1
// 0052842d  83c004               add eax, 4
// 00528430  81ed80000000         sub ebp, 0x80
// 00528436  8928                 mov dword ptr [eax], ebp
// 00528438  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 0052843c  81e980000000         sub ecx, 0x80
// 00528442  83c004               add eax, 4
// 00528445  8908                 mov dword ptr [eax], ecx
// 00528447  8b0a                 mov ecx, dword ptr [edx]
// 00528449  83c004               add eax, 4
// 0052844c  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 00528450  81ed80000000         sub ebp, 0x80
// 00528456  8928                 mov dword ptr [eax], ebp
// 00528458  03cb                 add ecx, ebx
// 0052845a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0052845e  81ed80000000         sub ebp, 0x80
// 00528464  896804               mov dword ptr [eax + 4], ebp
// 00528467  83c101               add ecx, 1
// 0052846a  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0052846e  83c004               add eax, 4
// 00528471  83c101               add ecx, 1
// 00528474  81ed80000000         sub ebp, 0x80
// 0052847a  896804               mov dword ptr [eax + 4], ebp
// 0052847d  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528481  83c004               add eax, 4
// 00528484  83c101               add ecx, 1
// 00528487  81ed80000000         sub ebp, 0x80
// 0052848d  896804               mov dword ptr [eax + 4], ebp
// 00528490  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528494  83c004               add eax, 4
// 00528497  83c101               add ecx, 1
// 0052849a  81ed80000000         sub ebp, 0x80
// 005284a0  896804               mov dword ptr [eax + 4], ebp
// 005284a3  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005284a7  83c004               add eax, 4
// 005284aa  83c101               add ecx, 1
// 005284ad  81ed80000000         sub ebp, 0x80
// 005284b3  896804               mov dword ptr [eax + 4], ebp
// 005284b6  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005284ba  83c004               add eax, 4
// 005284bd  83c101               add ecx, 1
// 005284c0  81ed80000000         sub ebp, 0x80
// 005284c6  896804               mov dword ptr [eax + 4], ebp
// 005284c9  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 005284cd  83c004               add eax, 4
// 005284d0  81e980000000         sub ecx, 0x80
// 005284d6  894804               mov dword ptr [eax + 4], ecx
// 005284d9  8b4a04               mov ecx, dword ptr [edx + 4]
// 005284dc  0fb62c19             movzx ebp, byte ptr [ecx + ebx]
// 005284e0  83c004               add eax, 4
// 005284e3  03cb                 add ecx, ebx
// 005284e5  81ed80000000         sub ebp, 0x80
// 005284eb  896804               mov dword ptr [eax + 4], ebp
// 005284ee  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 005284f2  83c004               add eax, 4
// 005284f5  83c101               add ecx, 1
// 005284f8  81ed80000000         sub ebp, 0x80
// 005284fe  896804               mov dword ptr [eax + 4], ebp
// 00528501  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528505  83c004               add eax, 4
// 00528508  83c101               add ecx, 1
// 0052850b  81ed80000000         sub ebp, 0x80
// 00528511  896804               mov dword ptr [eax + 4], ebp
// 00528514  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528518  83c004               add eax, 4
// 0052851b  83c101               add ecx, 1
// 0052851e  81ed80000000         sub ebp, 0x80
// 00528524  896804               mov dword ptr [eax + 4], ebp
// 00528527  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 0052852b  83c004               add eax, 4
// 0052852e  83c101               add ecx, 1
// 00528531  83c004               add eax, 4
// 00528534  81ed80000000         sub ebp, 0x80
// 0052853a  8928                 mov dword ptr [eax], ebp
// 0052853c  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528540  83c101               add ecx, 1
// 00528543  83c004               add eax, 4
// 00528546  81ed80000000         sub ebp, 0x80
// 0052854c  8928                 mov dword ptr [eax], ebp
// 0052854e  0fb66901             movzx ebp, byte ptr [ecx + 1]
// 00528552  83c101               add ecx, 1
// 00528555  83c004               add eax, 4
// 00528558  81ed80000000         sub ebp, 0x80
// 0052855e  8928                 mov dword ptr [eax], ebp
// 00528560  0fb64901             movzx ecx, byte ptr [ecx + 1]
// 00528564  83c004               add eax, 4
// 00528567  81e980000000         sub ecx, 0x80
// 0052856d  8908                 mov dword ptr [eax], ecx
// 0052856f  83c004               add eax, 4
// 00528572  83c210               add edx, 0x10
// 00528575  83ee01               sub esi, 1
// 00528578  0f85a2fdffff         jne 0x528320
// 0052857e  8d542428             lea edx, [esp + 0x28]
// 00528582  52                   push edx
// 00528583  ff542420             call dword ptr [esp + 0x20]
// 00528587  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052858b  83c404               add esp, 4
// 0052858e  33ed                 xor ebp, ebp
// 00528590  8b4ef8               mov ecx, dword ptr [esi - 8]
// 00528593  8b44ac28             mov eax, dword ptr [esp + ebp*4 + 0x28]
// 00528597  8bd1                 mov edx, ecx
// 00528599  d1fa                 sar edx, 1
// 0052859b  85c0                 test eax, eax
// 0052859d  7d15                 jge 0x5285b4
// 0052859f  2bd0                 sub edx, eax
// 005285a1  3bd1                 cmp edx, ecx
// 005285a3  7c09                 jl 0x5285ae
// 005285a5  8bc2                 mov eax, edx
// 005285a7  99                   cdq 
// 005285a8  f7f9                 idiv ecx
// 005285aa  f7d8                 neg eax
// 005285ac  eb13                 jmp 0x5285c1
// 005285ae  33c0                 xor eax, eax
// 005285b0  f7d8                 neg eax
// 005285b2  eb0d                 jmp 0x5285c1
// 005285b4  03c2                 add eax, edx
// 005285b6  3bc1                 cmp eax, ecx
// 005285b8  7c05                 jl 0x5285bf
// 005285ba  99                   cdq 
// 005285bb  f7f9                 idiv ecx
// 005285bd  eb02                 jmp 0x5285c1
// 005285bf  33c0                 xor eax, eax
// 005285c1  668947fc             mov word ptr [edi - 4], ax
// 005285c5  8b4efc               mov ecx, dword ptr [esi - 4]
// 005285c8  8b44ac2c             mov eax, dword ptr [esp + ebp*4 + 0x2c]
// 005285cc  8bd1                 mov edx, ecx
// 005285ce  d1fa                 sar edx, 1
// 005285d0  85c0                 test eax, eax
// 005285d2  7d15                 jge 0x5285e9
// 005285d4  2bd0                 sub edx, eax
// 005285d6  3bd1                 cmp edx, ecx
// 005285d8  7c09                 jl 0x5285e3
// 005285da  8bc2                 mov eax, edx
// 005285dc  99                   cdq 
// 005285dd  f7f9                 idiv ecx
// 005285df  f7d8                 neg eax
// 005285e1  eb13                 jmp 0x5285f6
// 005285e3  33c0                 xor eax, eax
// 005285e5  f7d8                 neg eax
// 005285e7  eb0d                 jmp 0x5285f6
// 005285e9  03c2                 add eax, edx
// 005285eb  3bc1                 cmp eax, ecx
// 005285ed  7c05                 jl 0x5285f4
// 005285ef  99                   cdq 
// 005285f0  f7f9                 idiv ecx
// 005285f2  eb02                 jmp 0x5285f6
// 005285f4  33c0                 xor eax, eax
// 005285f6  668947fe             mov word ptr [edi - 2], ax
// 005285fa  8b0e                 mov ecx, dword ptr [esi]
// 005285fc  8b442418             mov eax, dword ptr [esp + 0x18]
// 00528600  8b0406               mov eax, dword ptr [esi + eax]
// 00528603  8bd1                 mov edx, ecx
// 00528605  d1fa                 sar edx, 1
// 00528607  85c0                 test eax, eax
// 00528609  7d15                 jge 0x528620
// 0052860b  2bd0                 sub edx, eax
// 0052860d  3bd1                 cmp edx, ecx
// 0052860f  7c09                 jl 0x52861a
// 00528611  8bc2                 mov eax, edx
// 00528613  99                   cdq 
// 00528614  f7f9                 idiv ecx
// 00528616  f7d8                 neg eax
// 00528618  eb13                 jmp 0x52862d
// 0052861a  33c0                 xor eax, eax
// 0052861c  f7d8                 neg eax
// 0052861e  eb0d                 jmp 0x52862d
// 00528620  03c2                 add eax, edx
// 00528622  3bc1                 cmp eax, ecx
// 00528624  7c05                 jl 0x52862b
// 00528626  99                   cdq 
// 00528627  f7f9                 idiv ecx
// 00528629  eb02                 jmp 0x52862d
// 0052862b  33c0                 xor eax, eax
// 0052862d  668907               mov word ptr [edi], ax
// 00528630  8b4e04               mov ecx, dword ptr [esi + 4]
// 00528633  8b442420             mov eax, dword ptr [esp + 0x20]
// 00528637  8b0406               mov eax, dword ptr [esi + eax]
// 0052863a  8bd1                 mov edx, ecx
// 0052863c  d1fa                 sar edx, 1
// 0052863e  85c0                 test eax, eax
// 00528640  7d15                 jge 0x528657
// 00528642  2bd0                 sub edx, eax
// 00528644  3bd1                 cmp edx, ecx
// 00528646  7c09                 jl 0x528651
// 00528648  8bc2                 mov eax, edx
// 0052864a  99                   cdq 
// 0052864b  f7f9                 idiv ecx
// 0052864d  f7d8                 neg eax
// 0052864f  eb13                 jmp 0x528664
// 00528651  33c0                 xor eax, eax
// 00528653  f7d8                 neg eax
// 00528655  eb0d                 jmp 0x528664
// 00528657  03c2                 add eax, edx
// 00528659  3bc1                 cmp eax, ecx
// 0052865b  7c05                 jl 0x528662
// 0052865d  99                   cdq 
// 0052865e  f7f9                 idiv ecx
// 00528660  eb02                 jmp 0x528664
// 00528662  33c0                 xor eax, eax
// 00528664  66894702             mov word ptr [edi + 2], ax
// 00528668  83c504               add ebp, 4
// 0052866b  83c708               add edi, 8
// 0052866e  83c610               add esi, 0x10
// 00528671  83fd40               cmp ebp, 0x40
// 00528674  0f8c16ffffff         jl 0x528590
// 0052867a  83c308               add ebx, 8
// 0052867d  836c241001           sub dword ptr [esp + 0x10], 1
// 00528682  0f8589fcffff         jne 0x528311
// 00528688  5f                   pop edi
// 00528689  5e                   pop esi
// 0052868a  5d                   pop ebp
// 0052868b  5b                   pop ebx
// 0052868c  81c418010000         add esp, 0x118
// 00528692  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _forward_DCT)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
