// roc 2012-06 00662520  unit: seg_00660000  size: 572 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662520
//
// 00662520  83ec2c               sub esp, 0x2c
// 00662523  53                   push ebx
// 00662524  56                   push esi
// 00662525  57                   push edi
// 00662526  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0066252a  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 00662531  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 00662537  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 0066253d  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 00662543  895c2418             mov dword ptr [esp + 0x18], ebx
// 00662547  89442414             mov dword ptr [esp + 0x14], eax
// 0066254b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066254f  7418                 je 0x662569
// 00662551  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00662555  7512                 jne 0x662569
// 00662557  8bf7                 mov esi, edi
// 00662559  e802fdffff           call 0x662260
// 0066255e  84c0                 test al, al
// 00662560  7507                 jne 0x662569
// 00662562  5f                   pop edi
// 00662563  5e                   pop esi
// 00662564  5b                   pop ebx
// 00662565  83c42c               add esp, 0x2c
// 00662568  c3                   ret 
// 00662569  807b0800             cmp byte ptr [ebx + 8], 0
// 0066256d  55                   push ebp
// 0066256e  0f85db010000         jne 0x66274f
// 00662574  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00662577  894c2410             mov dword ptr [esp + 0x10], ecx
// 0066257b  85c9                 test ecx, ecx
// 0066257d  7611                 jbe 0x662590
// 0066257f  5d                   pop ebp
// 00662580  5f                   pop edi
// 00662581  49                   dec ecx
// 00662582  ff4b28               dec dword ptr [ebx + 0x28]
// 00662585  5e                   pop esi
// 00662586  894b14               mov dword ptr [ebx + 0x14], ecx
// 00662589  b001                 mov al, 1
// 0066258b  5b                   pop ebx
// 0066258c  83c42c               add esp, 0x2c
// 0066258f  c3                   ret 
// 00662590  8b4718               mov eax, dword ptr [edi + 0x18]
// 00662593  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 00662599  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0066259d  897c2438             mov dword ptr [esp + 0x38], edi
// 006625a1  8b10                 mov edx, dword ptr [eax]
// 006625a3  89542428             mov dword ptr [esp + 0x28], edx
// 006625a7  8b542444             mov edx, dword ptr [esp + 0x44]
// 006625ab  8b4004               mov eax, dword ptr [eax + 4]
// 006625ae  8b12                 mov edx, dword ptr [edx]
// 006625b0  8944242c             mov dword ptr [esp + 0x2c], eax
// 006625b4  8b730c               mov esi, dword ptr [ebx + 0xc]
// 006625b7  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006625ba  89542424             mov dword ptr [esp + 0x24], edx
// 006625be  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 006625c1  89542414             mov dword ptr [esp + 0x14], edx
// 006625c5  0f8f68010000         jg 0x662733
// 006625cb  eb03                 jmp 0x6625d0
// 006625cd  8d4900               lea ecx, [ecx]
// 006625d0  83f808               cmp eax, 8
// 006625d3  7d31                 jge 0x662606
// 006625d5  6a00                 push 0
// 006625d7  50                   push eax
// 006625d8  8d442430             lea eax, [esp + 0x30]
// 006625dc  56                   push esi
// 006625dd  50                   push eax
// 006625de  e83df4ffff           call 0x661a20
// 006625e3  83c410               add esp, 0x10
// 006625e6  84c0                 test al, al
// 006625e8  0f8415010000         je 0x662703
// 006625ee  8b442434             mov eax, dword ptr [esp + 0x34]
// 006625f2  83f808               cmp eax, 8
// 006625f5  8b742430             mov esi, dword ptr [esp + 0x30]
// 006625f9  7d0b                 jge 0x662606
// 006625fb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006625ff  b901000000           mov ecx, 1
// 00662604  eb2d                 jmp 0x662633
// 00662606  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066260a  8d48f8               lea ecx, [eax - 8]
// 0066260d  8bd6                 mov edx, esi
// 0066260f  d3fa                 sar edx, cl
// 00662611  81e2ff000000         and edx, 0xff
// 00662617  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 0066261e  85c9                 test ecx, ecx
// 00662620  740c                 je 0x66262e
// 00662622  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0066262a  2bc1                 sub eax, ecx
// 0066262c  eb28                 jmp 0x662656
// 0066262e  b909000000           mov ecx, 9
// 00662633  51                   push ecx
// 00662634  57                   push edi
// 00662635  50                   push eax
// 00662636  8d4c2434             lea ecx, [esp + 0x34]
// 0066263a  56                   push esi
// 0066263b  51                   push ecx
// 0066263c  e8fff4ffff           call 0x661b40
// 00662641  8bf8                 mov edi, eax
// 00662643  83c414               add esp, 0x14
// 00662646  85ff                 test edi, edi
// 00662648  0f8cb5000000         jl 0x662703
// 0066264e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00662652  8b442434             mov eax, dword ptr [esp + 0x34]
// 00662656  8bdf                 mov ebx, edi
// 00662658  c1fb04               sar ebx, 4
// 0066265b  83e70f               and edi, 0xf
// 0066265e  7467                 je 0x6626c7
// 00662660  03eb                 add ebp, ebx
// 00662662  3bc7                 cmp eax, edi
// 00662664  7d20                 jge 0x662686
// 00662666  57                   push edi
// 00662667  50                   push eax
// 00662668  8d542430             lea edx, [esp + 0x30]
// 0066266c  56                   push esi
// 0066266d  52                   push edx
// 0066266e  e8adf3ffff           call 0x661a20
// 00662673  83c410               add esp, 0x10
// 00662676  84c0                 test al, al
// 00662678  0f8485000000         je 0x662703
// 0066267e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00662682  8b442434             mov eax, dword ptr [esp + 0x34]
// 00662686  8bcf                 mov ecx, edi
// 00662688  2bc7                 sub eax, edi
// 0066268a  ba01000000           mov edx, 1
// 0066268f  d3e2                 shl edx, cl
// 00662691  8bde                 mov ebx, esi
// 00662693  8bc8                 mov ecx, eax
// 00662695  d3fb                 sar ebx, cl
// 00662697  4a                   dec edx
// 00662698  23d3                 and edx, ebx
// 0066269a  3b14bd58beb800       cmp edx, dword ptr [edi*4 + 0xb8be58]
// 006626a1  7d0b                 jge 0x6626ae
// 006626a3  8b3cbd98beb800       mov edi, dword ptr [edi*4 + 0xb8be98]
// 006626aa  03fa                 add edi, edx
// 006626ac  eb02                 jmp 0x6626b0
// 006626ae  8bfa                 mov edi, edx
// 006626b0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006626b4  8b542424             mov edx, dword ptr [esp + 0x24]
// 006626b8  d3e7                 shl edi, cl
// 006626ba  8b0cad4097b800       mov ecx, dword ptr [ebp*4 + 0xb89740]
// 006626c1  66893c4a             mov word ptr [edx + ecx*2], di
// 006626c5  eb08                 jmp 0x6626cf
// 006626c7  83fb0f               cmp ebx, 0xf
// 006626ca  7510                 jne 0x6626dc
// 006626cc  83c50f               add ebp, 0xf
// 006626cf  45                   inc ebp
// 006626d0  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 006626d4  0f8ef6feffff         jle 0x6625d0
// 006626da  eb4b                 jmp 0x662727
// 006626dc  bf01000000           mov edi, 1
// 006626e1  8bcb                 mov ecx, ebx
// 006626e3  d3e7                 shl edi, cl
// 006626e5  8bef                 mov ebp, edi
// 006626e7  85db                 test ebx, ebx
// 006626e9  7437                 je 0x662722
// 006626eb  3bc3                 cmp eax, ebx
// 006626ed  7d26                 jge 0x662715
// 006626ef  53                   push ebx
// 006626f0  50                   push eax
// 006626f1  8d442430             lea eax, [esp + 0x30]
// 006626f5  56                   push esi
// 006626f6  50                   push eax
// 006626f7  e824f3ffff           call 0x661a20
// 006626fc  83c410               add esp, 0x10
// 006626ff  84c0                 test al, al
// 00662701  750a                 jne 0x66270d
// 00662703  5d                   pop ebp
// 00662704  5f                   pop edi
// 00662705  5e                   pop esi
// 00662706  32c0                 xor al, al
// 00662708  5b                   pop ebx
// 00662709  83c42c               add esp, 0x2c
// 0066270c  c3                   ret 
// 0066270d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00662711  8b442434             mov eax, dword ptr [esp + 0x34]
// 00662715  2bc3                 sub eax, ebx
// 00662717  8bd6                 mov edx, esi
// 00662719  8bc8                 mov ecx, eax
// 0066271b  d3fa                 sar edx, cl
// 0066271d  4f                   dec edi
// 0066271e  23d7                 and edx, edi
// 00662720  03ea                 add ebp, edx
// 00662722  4d                   dec ebp
// 00662723  896c2410             mov dword ptr [esp + 0x10], ebp
// 00662727  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066272b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0066272f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00662733  8b5718               mov edx, dword ptr [edi + 0x18]
// 00662736  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0066273a  892a                 mov dword ptr [edx], ebp
// 0066273c  8b5718               mov edx, dword ptr [edi + 0x18]
// 0066273f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00662743  897a04               mov dword ptr [edx + 4], edi
// 00662746  89730c               mov dword ptr [ebx + 0xc], esi
// 00662749  894310               mov dword ptr [ebx + 0x10], eax
// 0066274c  894b14               mov dword ptr [ebx + 0x14], ecx
// 0066274f  ff4b28               dec dword ptr [ebx + 0x28]
// 00662752  5d                   pop ebp
// 00662753  5f                   pop edi
// 00662754  5e                   pop esi
// 00662755  b001                 mov al, 1
// 00662757  5b                   pop ebx
// 00662758  83c42c               add esp, 0x2c
// 0066275b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
