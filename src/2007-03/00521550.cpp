// roc 2007-03 00521550  unit: seg_00520000  size: 567 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00521550
//
// 00521550  83ec3c               sub esp, 0x3c
// 00521553  56                   push esi
// 00521554  8b742444             mov esi, dword ptr [esp + 0x44]
// 00521558  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0052155f  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00521565  57                   push edi
// 00521566  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0052156c  89442414             mov dword ptr [esp + 0x14], eax
// 00521570  7415                 je 0x521587
// 00521572  837f2800             cmp dword ptr [edi + 0x28], 0
// 00521576  750f                 jne 0x521587
// 00521578  e843ffffff           call 0x5214c0
// 0052157d  84c0                 test al, al
// 0052157f  7506                 jne 0x521587
// 00521581  5f                   pop edi
// 00521582  5e                   pop esi
// 00521583  83c43c               add esp, 0x3c
// 00521586  c3                   ret 
// 00521587  807f0800             cmp byte ptr [edi + 8], 0
// 0052158b  53                   push ebx
// 0052158c  55                   push ebp
// 0052158d  0f85dc010000         jne 0x52176f
// 00521593  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0052159a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052159d  89742434             mov dword ptr [esp + 0x34], esi
// 005215a1  8b08                 mov ecx, dword ptr [eax]
// 005215a3  894c2424             mov dword ptr [esp + 0x24], ecx
// 005215a7  8b5004               mov edx, dword ptr [eax + 4]
// 005215aa  89542428             mov dword ptr [esp + 0x28], edx
// 005215ae  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005215b1  8b5718               mov edx, dword ptr [edi + 0x18]
// 005215b4  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 005215b7  8b4710               mov eax, dword ptr [edi + 0x10]
// 005215ba  894c2438             mov dword ptr [esp + 0x38], ecx
// 005215be  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005215c1  8954243c             mov dword ptr [esp + 0x3c], edx
// 005215c5  8b5720               mov edx, dword ptr [edi + 0x20]
// 005215c8  894c2440             mov dword ptr [esp + 0x40], ecx
// 005215cc  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 005215cf  896c2450             mov dword ptr [esp + 0x50], ebp
// 005215d3  89542444             mov dword ptr [esp + 0x44], edx
// 005215d7  894c2448             mov dword ptr [esp + 0x48], ecx
// 005215db  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005215e3  0f8e4a010000         jle 0x521733
// 005215e9  8d9644010000         lea edx, [esi + 0x144]
// 005215ef  89542414             mov dword ptr [esp + 0x14], edx
// 005215f3  83f808               cmp eax, 8
// 005215f6  8b542410             mov edx, dword ptr [esp + 0x10]
// 005215fa  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005215fe  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00521601  8b542414             mov edx, dword ptr [esp + 0x14]
// 00521605  894c2420             mov dword ptr [esp + 0x20], ecx
// 00521609  8b0a                 mov ecx, dword ptr [edx]
// 0052160b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052160f  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 00521616  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00521619  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 0052161d  7d31                 jge 0x521650
// 0052161f  6a00                 push 0
// 00521621  50                   push eax
// 00521622  8d44242c             lea eax, [esp + 0x2c]
// 00521626  55                   push ebp
// 00521627  50                   push eax
// 00521628  e833f6ffff           call 0x520c60
// 0052162d  83c410               add esp, 0x10
// 00521630  84c0                 test al, al
// 00521632  0f8445010000         je 0x52177d
// 00521638  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052163c  83f808               cmp eax, 8
// 0052163f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00521643  896c2450             mov dword ptr [esp + 0x50], ebp
// 00521647  7d07                 jge 0x521650
// 00521649  b901000000           mov ecx, 1
// 0052164e  eb29                 jmp 0x521679
// 00521650  8d48f8               lea ecx, [eax - 8]
// 00521653  8bd5                 mov edx, ebp
// 00521655  d3fa                 sar edx, cl
// 00521657  81e2ff000000         and edx, 0xff
// 0052165d  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 00521664  85c9                 test ecx, ecx
// 00521666  740c                 je 0x521674
// 00521668  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 00521670  2bc1                 sub eax, ecx
// 00521672  eb2c                 jmp 0x5216a0
// 00521674  b909000000           mov ecx, 9
// 00521679  51                   push ecx
// 0052167a  53                   push ebx
// 0052167b  50                   push eax
// 0052167c  8d4c2430             lea ecx, [esp + 0x30]
// 00521680  55                   push ebp
// 00521681  51                   push ecx
// 00521682  e809f7ffff           call 0x520d90
// 00521687  8bd8                 mov ebx, eax
// 00521689  83c414               add esp, 0x14
// 0052168c  85db                 test ebx, ebx
// 0052168e  0f8ce9000000         jl 0x52177d
// 00521694  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00521698  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052169c  896c2450             mov dword ptr [esp + 0x50], ebp
// 005216a0  85db                 test ebx, ebx
// 005216a2  7456                 je 0x5216fa
// 005216a4  3bc3                 cmp eax, ebx
// 005216a6  7d24                 jge 0x5216cc
// 005216a8  53                   push ebx
// 005216a9  50                   push eax
// 005216aa  8d54242c             lea edx, [esp + 0x2c]
// 005216ae  55                   push ebp
// 005216af  52                   push edx
// 005216b0  e8abf5ffff           call 0x520c60
// 005216b5  83c410               add esp, 0x10
// 005216b8  84c0                 test al, al
// 005216ba  0f84bd000000         je 0x52177d
// 005216c0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005216c4  8b442430             mov eax, dword ptr [esp + 0x30]
// 005216c8  896c2450             mov dword ptr [esp + 0x50], ebp
// 005216cc  8bcb                 mov ecx, ebx
// 005216ce  2bc3                 sub eax, ebx
// 005216d0  ba01000000           mov edx, 1
// 005216d5  d3e2                 shl edx, cl
// 005216d7  8bc8                 mov ecx, eax
// 005216d9  d3fd                 sar ebp, cl
// 005216db  83ea01               sub edx, 1
// 005216de  23d5                 and edx, ebp
// 005216e0  3b149d18457a00       cmp edx, dword ptr [ebx*4 + 0x7a4518]
// 005216e7  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 005216eb  7d0b                 jge 0x5216f8
// 005216ed  8b1c9d58457a00       mov ebx, dword ptr [ebx*4 + 0x7a4558]
// 005216f4  03da                 add ebx, edx
// 005216f6  eb02                 jmp 0x5216fa
// 005216f8  8bda                 mov ebx, edx
// 005216fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005216fe  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 00521702  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 00521706  8344241404           add dword ptr [esp + 0x14], 4
// 0052170b  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 0052170f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00521713  d3e2                 shl edx, cl
// 00521715  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00521719  668911               mov word ptr [ecx], dx
// 0052171c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00521720  83c101               add ecx, 1
// 00521723  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 00521729  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052172d  0f8cc0feffff         jl 0x5215f3
// 00521733  8b5618               mov edx, dword ptr [esi + 0x18]
// 00521736  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052173a  890a                 mov dword ptr [edx], ecx
// 0052173c  8b5618               mov edx, dword ptr [esi + 0x18]
// 0052173f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00521743  894a04               mov dword ptr [edx + 4], ecx
// 00521746  8b542438             mov edx, dword ptr [esp + 0x38]
// 0052174a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0052174e  895714               mov dword ptr [edi + 0x14], edx
// 00521751  8b542444             mov edx, dword ptr [esp + 0x44]
// 00521755  894710               mov dword ptr [edi + 0x10], eax
// 00521758  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0052175c  894718               mov dword ptr [edi + 0x18], eax
// 0052175f  8b442448             mov eax, dword ptr [esp + 0x48]
// 00521763  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00521766  895720               mov dword ptr [edi + 0x20], edx
// 00521769  896f0c               mov dword ptr [edi + 0xc], ebp
// 0052176c  894724               mov dword ptr [edi + 0x24], eax
// 0052176f  834728ff             add dword ptr [edi + 0x28], -1
// 00521773  5d                   pop ebp
// 00521774  5b                   pop ebx
// 00521775  5f                   pop edi
// 00521776  b001                 mov al, 1
// 00521778  5e                   pop esi
// 00521779  83c43c               add esp, 0x3c
// 0052177c  c3                   ret 
// 0052177d  5d                   pop ebp
// 0052177e  5b                   pop ebx
// 0052177f  5f                   pop edi
// 00521780  32c0                 xor al, al
// 00521782  5e                   pop esi
// 00521783  83c43c               add esp, 0x3c
// 00521786  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
