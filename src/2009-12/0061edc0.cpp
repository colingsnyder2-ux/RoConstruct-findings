// roc 2009-12 0061edc0  unit: seg_00610000  size: 562 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061edc0
//
// 0061edc0  83ec3c               sub esp, 0x3c
// 0061edc3  56                   push esi
// 0061edc4  8b742444             mov esi, dword ptr [esp + 0x44]
// 0061edc8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0061edcf  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0061edd5  57                   push edi
// 0061edd6  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0061eddc  89442414             mov dword ptr [esp + 0x14], eax
// 0061ede0  7415                 je 0x61edf7
// 0061ede2  837f2800             cmp dword ptr [edi + 0x28], 0
// 0061ede6  750f                 jne 0x61edf7
// 0061ede8  e853ffffff           call 0x61ed40
// 0061eded  84c0                 test al, al
// 0061edef  7506                 jne 0x61edf7
// 0061edf1  5f                   pop edi
// 0061edf2  5e                   pop esi
// 0061edf3  83c43c               add esp, 0x3c
// 0061edf6  c3                   ret 
// 0061edf7  807f0800             cmp byte ptr [edi + 8], 0
// 0061edfb  53                   push ebx
// 0061edfc  55                   push ebp
// 0061edfd  0f85d8010000         jne 0x61efdb
// 0061ee03  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0061ee0a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0061ee0d  89742434             mov dword ptr [esp + 0x34], esi
// 0061ee11  8b08                 mov ecx, dword ptr [eax]
// 0061ee13  894c2424             mov dword ptr [esp + 0x24], ecx
// 0061ee17  8b5004               mov edx, dword ptr [eax + 4]
// 0061ee1a  89542428             mov dword ptr [esp + 0x28], edx
// 0061ee1e  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0061ee21  8b5718               mov edx, dword ptr [edi + 0x18]
// 0061ee24  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0061ee27  8b4710               mov eax, dword ptr [edi + 0x10]
// 0061ee2a  894c2438             mov dword ptr [esp + 0x38], ecx
// 0061ee2e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0061ee31  8954243c             mov dword ptr [esp + 0x3c], edx
// 0061ee35  8b5720               mov edx, dword ptr [edi + 0x20]
// 0061ee38  894c2440             mov dword ptr [esp + 0x40], ecx
// 0061ee3c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0061ee3f  896c2450             mov dword ptr [esp + 0x50], ebp
// 0061ee43  89542444             mov dword ptr [esp + 0x44], edx
// 0061ee47  894c2448             mov dword ptr [esp + 0x48], ecx
// 0061ee4b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061ee53  0f8e46010000         jle 0x61ef9f
// 0061ee59  8d9644010000         lea edx, [esi + 0x144]
// 0061ee5f  89542414             mov dword ptr [esp + 0x14], edx
// 0061ee63  83f808               cmp eax, 8
// 0061ee66  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061ee6a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0061ee6e  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 0061ee71  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061ee75  894c2420             mov dword ptr [esp + 0x20], ecx
// 0061ee79  8b0a                 mov ecx, dword ptr [edx]
// 0061ee7b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061ee7f  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 0061ee86  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0061ee89  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 0061ee8d  7d31                 jge 0x61eec0
// 0061ee8f  6a00                 push 0
// 0061ee91  50                   push eax
// 0061ee92  8d44242c             lea eax, [esp + 0x2c]
// 0061ee96  55                   push ebp
// 0061ee97  50                   push eax
// 0061ee98  e863f6ffff           call 0x61e500
// 0061ee9d  83c410               add esp, 0x10
// 0061eea0  84c0                 test al, al
// 0061eea2  0f8440010000         je 0x61efe8
// 0061eea8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061eeac  83f808               cmp eax, 8
// 0061eeaf  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0061eeb3  896c2450             mov dword ptr [esp + 0x50], ebp
// 0061eeb7  7d07                 jge 0x61eec0
// 0061eeb9  b901000000           mov ecx, 1
// 0061eebe  eb29                 jmp 0x61eee9
// 0061eec0  8d48f8               lea ecx, [eax - 8]
// 0061eec3  8bd5                 mov edx, ebp
// 0061eec5  d3fa                 sar edx, cl
// 0061eec7  81e2ff000000         and edx, 0xff
// 0061eecd  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 0061eed4  85c9                 test ecx, ecx
// 0061eed6  740c                 je 0x61eee4
// 0061eed8  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 0061eee0  2bc1                 sub eax, ecx
// 0061eee2  eb2c                 jmp 0x61ef10
// 0061eee4  b909000000           mov ecx, 9
// 0061eee9  51                   push ecx
// 0061eeea  53                   push ebx
// 0061eeeb  50                   push eax
// 0061eeec  8d4c2430             lea ecx, [esp + 0x30]
// 0061eef0  55                   push ebp
// 0061eef1  51                   push ecx
// 0061eef2  e829f7ffff           call 0x61e620
// 0061eef7  8bd8                 mov ebx, eax
// 0061eef9  83c414               add esp, 0x14
// 0061eefc  85db                 test ebx, ebx
// 0061eefe  0f8ce4000000         jl 0x61efe8
// 0061ef04  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0061ef08  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061ef0c  896c2450             mov dword ptr [esp + 0x50], ebp
// 0061ef10  85db                 test ebx, ebx
// 0061ef12  7454                 je 0x61ef68
// 0061ef14  3bc3                 cmp eax, ebx
// 0061ef16  7d24                 jge 0x61ef3c
// 0061ef18  53                   push ebx
// 0061ef19  50                   push eax
// 0061ef1a  8d54242c             lea edx, [esp + 0x2c]
// 0061ef1e  55                   push ebp
// 0061ef1f  52                   push edx
// 0061ef20  e8dbf5ffff           call 0x61e500
// 0061ef25  83c410               add esp, 0x10
// 0061ef28  84c0                 test al, al
// 0061ef2a  0f84b8000000         je 0x61efe8
// 0061ef30  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0061ef34  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061ef38  896c2450             mov dword ptr [esp + 0x50], ebp
// 0061ef3c  8bcb                 mov ecx, ebx
// 0061ef3e  2bc3                 sub eax, ebx
// 0061ef40  ba01000000           mov edx, 1
// 0061ef45  d3e2                 shl edx, cl
// 0061ef47  8bc8                 mov ecx, eax
// 0061ef49  d3fd                 sar ebp, cl
// 0061ef4b  4a                   dec edx
// 0061ef4c  23d5                 and edx, ebp
// 0061ef4e  3b149d50a99c00       cmp edx, dword ptr [ebx*4 + 0x9ca950]
// 0061ef55  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 0061ef59  7d0b                 jge 0x61ef66
// 0061ef5b  8b1c9d90a99c00       mov ebx, dword ptr [ebx*4 + 0x9ca990]
// 0061ef62  03da                 add ebx, edx
// 0061ef64  eb02                 jmp 0x61ef68
// 0061ef66  8bda                 mov ebx, edx
// 0061ef68  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061ef6c  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 0061ef70  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 0061ef74  8344241404           add dword ptr [esp + 0x14], 4
// 0061ef79  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 0061ef7d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061ef81  d3e2                 shl edx, cl
// 0061ef83  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061ef87  668911               mov word ptr [ecx], dx
// 0061ef8a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061ef8e  41                   inc ecx
// 0061ef8f  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 0061ef95  894c2410             mov dword ptr [esp + 0x10], ecx
// 0061ef99  0f8cc4feffff         jl 0x61ee63
// 0061ef9f  8b5618               mov edx, dword ptr [esi + 0x18]
// 0061efa2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061efa6  890a                 mov dword ptr [edx], ecx
// 0061efa8  8b5618               mov edx, dword ptr [esi + 0x18]
// 0061efab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061efaf  894a04               mov dword ptr [edx + 4], ecx
// 0061efb2  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061efb6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061efba  895714               mov dword ptr [edi + 0x14], edx
// 0061efbd  8b542444             mov edx, dword ptr [esp + 0x44]
// 0061efc1  894710               mov dword ptr [edi + 0x10], eax
// 0061efc4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0061efc8  894718               mov dword ptr [edi + 0x18], eax
// 0061efcb  8b442448             mov eax, dword ptr [esp + 0x48]
// 0061efcf  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0061efd2  895720               mov dword ptr [edi + 0x20], edx
// 0061efd5  896f0c               mov dword ptr [edi + 0xc], ebp
// 0061efd8  894724               mov dword ptr [edi + 0x24], eax
// 0061efdb  ff4f28               dec dword ptr [edi + 0x28]
// 0061efde  5d                   pop ebp
// 0061efdf  5b                   pop ebx
// 0061efe0  5f                   pop edi
// 0061efe1  b001                 mov al, 1
// 0061efe3  5e                   pop esi
// 0061efe4  83c43c               add esp, 0x3c
// 0061efe7  c3                   ret 
// 0061efe8  5d                   pop ebp
// 0061efe9  5b                   pop ebx
// 0061efea  5f                   pop edi
// 0061efeb  32c0                 xor al, al
// 0061efed  5e                   pop esi
// 0061efee  83c43c               add esp, 0x3c
// 0061eff1  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
