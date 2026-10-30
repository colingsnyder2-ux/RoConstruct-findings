// from server: 100% by auto
// roc 2012-06 006622e0  unit: seg_00660000  size: 562 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006622e0
//
// 006622e0  83ec3c               sub esp, 0x3c
// 006622e3  56                   push esi
// 006622e4  8b742444             mov esi, dword ptr [esp + 0x44]
// 006622e8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 006622ef  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006622f5  57                   push edi
// 006622f6  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 006622fc  89442414             mov dword ptr [esp + 0x14], eax
// 00662300  7415                 je 0x662317
// 00662302  837f2800             cmp dword ptr [edi + 0x28], 0
// 00662306  750f                 jne 0x662317
// 00662308  e853ffffff           call 0x662260
// 0066230d  84c0                 test al, al
// 0066230f  7506                 jne 0x662317
// 00662311  5f                   pop edi
// 00662312  5e                   pop esi
// 00662313  83c43c               add esp, 0x3c
// 00662316  c3                   ret 
// 00662317  807f0800             cmp byte ptr [edi + 8], 0
// 0066231b  53                   push ebx
// 0066231c  55                   push ebp
// 0066231d  0f85d8010000         jne 0x6624fb
// 00662323  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0066232a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0066232d  89742434             mov dword ptr [esp + 0x34], esi
// 00662331  8b08                 mov ecx, dword ptr [eax]
// 00662333  894c2424             mov dword ptr [esp + 0x24], ecx
// 00662337  8b5004               mov edx, dword ptr [eax + 4]
// 0066233a  89542428             mov dword ptr [esp + 0x28], edx
// 0066233e  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00662341  8b5718               mov edx, dword ptr [edi + 0x18]
// 00662344  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00662347  8b4710               mov eax, dword ptr [edi + 0x10]
// 0066234a  894c2438             mov dword ptr [esp + 0x38], ecx
// 0066234e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00662351  8954243c             mov dword ptr [esp + 0x3c], edx
// 00662355  8b5720               mov edx, dword ptr [edi + 0x20]
// 00662358  894c2440             mov dword ptr [esp + 0x40], ecx
// 0066235c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0066235f  896c2450             mov dword ptr [esp + 0x50], ebp
// 00662363  89542444             mov dword ptr [esp + 0x44], edx
// 00662367  894c2448             mov dword ptr [esp + 0x48], ecx
// 0066236b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00662373  0f8e46010000         jle 0x6624bf
// 00662379  8d9644010000         lea edx, [esi + 0x144]
// 0066237f  89542414             mov dword ptr [esp + 0x14], edx
// 00662383  83f808               cmp eax, 8
// 00662386  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066238a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0066238e  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00662391  8b542414             mov edx, dword ptr [esp + 0x14]
// 00662395  894c2420             mov dword ptr [esp + 0x20], ecx
// 00662399  8b0a                 mov ecx, dword ptr [edx]
// 0066239b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0066239f  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 006623a6  8b5114               mov edx, dword ptr [ecx + 0x14]
// 006623a9  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 006623ad  7d31                 jge 0x6623e0
// 006623af  6a00                 push 0
// 006623b1  50                   push eax
// 006623b2  8d44242c             lea eax, [esp + 0x2c]
// 006623b6  55                   push ebp
// 006623b7  50                   push eax
// 006623b8  e863f6ffff           call 0x661a20
// 006623bd  83c410               add esp, 0x10
// 006623c0  84c0                 test al, al
// 006623c2  0f8440010000         je 0x662508
// 006623c8  8b442430             mov eax, dword ptr [esp + 0x30]
// 006623cc  83f808               cmp eax, 8
// 006623cf  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006623d3  896c2450             mov dword ptr [esp + 0x50], ebp
// 006623d7  7d07                 jge 0x6623e0
// 006623d9  b901000000           mov ecx, 1
// 006623de  eb29                 jmp 0x662409
// 006623e0  8d48f8               lea ecx, [eax - 8]
// 006623e3  8bd5                 mov edx, ebp
// 006623e5  d3fa                 sar edx, cl
// 006623e7  81e2ff000000         and edx, 0xff
// 006623ed  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 006623f4  85c9                 test ecx, ecx
// 006623f6  740c                 je 0x662404
// 006623f8  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 00662400  2bc1                 sub eax, ecx
// 00662402  eb2c                 jmp 0x662430
// 00662404  b909000000           mov ecx, 9
// 00662409  51                   push ecx
// 0066240a  53                   push ebx
// 0066240b  50                   push eax
// 0066240c  8d4c2430             lea ecx, [esp + 0x30]
// 00662410  55                   push ebp
// 00662411  51                   push ecx
// 00662412  e829f7ffff           call 0x661b40
// 00662417  8bd8                 mov ebx, eax
// 00662419  83c414               add esp, 0x14
// 0066241c  85db                 test ebx, ebx
// 0066241e  0f8ce4000000         jl 0x662508
// 00662424  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00662428  8b442430             mov eax, dword ptr [esp + 0x30]
// 0066242c  896c2450             mov dword ptr [esp + 0x50], ebp
// 00662430  85db                 test ebx, ebx
// 00662432  7454                 je 0x662488
// 00662434  3bc3                 cmp eax, ebx
// 00662436  7d24                 jge 0x66245c
// 00662438  53                   push ebx
// 00662439  50                   push eax
// 0066243a  8d54242c             lea edx, [esp + 0x2c]
// 0066243e  55                   push ebp
// 0066243f  52                   push edx
// 00662440  e8dbf5ffff           call 0x661a20
// 00662445  83c410               add esp, 0x10
// 00662448  84c0                 test al, al
// 0066244a  0f84b8000000         je 0x662508
// 00662450  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00662454  8b442430             mov eax, dword ptr [esp + 0x30]
// 00662458  896c2450             mov dword ptr [esp + 0x50], ebp
// 0066245c  8bcb                 mov ecx, ebx
// 0066245e  2bc3                 sub eax, ebx
// 00662460  ba01000000           mov edx, 1
// 00662465  d3e2                 shl edx, cl
// 00662467  8bc8                 mov ecx, eax
// 00662469  d3fd                 sar ebp, cl
// 0066246b  4a                   dec edx
// 0066246c  23d5                 and edx, ebp
// 0066246e  3b149d58beb800       cmp edx, dword ptr [ebx*4 + 0xb8be58]
// 00662475  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00662479  7d0b                 jge 0x662486
// 0066247b  8b1c9d98beb800       mov ebx, dword ptr [ebx*4 + 0xb8be98]
// 00662482  03da                 add ebx, edx
// 00662484  eb02                 jmp 0x662488
// 00662486  8bda                 mov ebx, edx
// 00662488  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066248c  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 00662490  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 00662494  8344241404           add dword ptr [esp + 0x14], 4
// 00662499  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 0066249d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006624a1  d3e2                 shl edx, cl
// 006624a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006624a7  668911               mov word ptr [ecx], dx
// 006624aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006624ae  41                   inc ecx
// 006624af  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 006624b5  894c2410             mov dword ptr [esp + 0x10], ecx
// 006624b9  0f8cc4feffff         jl 0x662383
// 006624bf  8b5618               mov edx, dword ptr [esi + 0x18]
// 006624c2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006624c6  890a                 mov dword ptr [edx], ecx
// 006624c8  8b5618               mov edx, dword ptr [esi + 0x18]
// 006624cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006624cf  894a04               mov dword ptr [edx + 4], ecx
// 006624d2  8b542438             mov edx, dword ptr [esp + 0x38]
// 006624d6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006624da  895714               mov dword ptr [edi + 0x14], edx
// 006624dd  8b542444             mov edx, dword ptr [esp + 0x44]
// 006624e1  894710               mov dword ptr [edi + 0x10], eax
// 006624e4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006624e8  894718               mov dword ptr [edi + 0x18], eax
// 006624eb  8b442448             mov eax, dword ptr [esp + 0x48]
// 006624ef  894f1c               mov dword ptr [edi + 0x1c], ecx
// 006624f2  895720               mov dword ptr [edi + 0x20], edx
// 006624f5  896f0c               mov dword ptr [edi + 0xc], ebp
// 006624f8  894724               mov dword ptr [edi + 0x24], eax
// 006624fb  ff4f28               dec dword ptr [edi + 0x28]
// 006624fe  5d                   pop ebp
// 006624ff  5b                   pop ebx
// 00662500  5f                   pop edi
// 00662501  b001                 mov al, 1
// 00662503  5e                   pop esi
// 00662504  83c43c               add esp, 0x3c
// 00662507  c3                   ret 
// 00662508  5d                   pop ebp
// 00662509  5b                   pop ebx
// 0066250a  5f                   pop edi
// 0066250b  32c0                 xor al, al
// 0066250d  5e                   pop esi
// 0066250e  83c43c               add esp, 0x3c
// 00662511  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
