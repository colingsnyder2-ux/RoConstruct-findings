// roc 2008-06 00745ed0  unit: CXTPDockContext  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745ed0
//
// 00745ed0  83ec18               sub esp, 0x18
// 00745ed3  53                   push ebx
// 00745ed4  56                   push esi
// 00745ed5  8bf1                 mov esi, ecx
// 00745ed7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745eda  57                   push edi
// 00745edb  e830eff6ff           call 0x6b4e10
// 00745ee0  8bd8                 mov ebx, eax
// 00745ee2  8b4604               mov eax, dword ptr [esi + 4]
// 00745ee5  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 00745eec  756c                 jne 0x745f5a
// 00745eee  f680ec0000000f       test byte ptr [eax + 0xec], 0xf
// 00745ef5  7509                 jne 0x745f00
// 00745ef7  5f                   pop edi
// 00745ef8  5e                   pop esi
// 00745ef9  33c0                 xor eax, eax
// 00745efb  5b                   pop ebx
// 00745efc  83c418               add esp, 0x18
// 00745eff  c3                   ret 
// 00745f00  8b4618               mov eax, dword ptr [esi + 0x18]
// 00745f03  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00745f06  8b5620               mov edx, dword ptr [esi + 0x20]
// 00745f09  89442414             mov dword ptr [esp + 0x14], eax
// 00745f0d  8b4624               mov eax, dword ptr [esi + 0x24]
// 00745f10  89442420             mov dword ptr [esp + 0x20], eax
// 00745f14  8b4614               mov eax, dword ptr [esi + 0x14]
// 00745f17  894c2418             mov dword ptr [esp + 0x18], ecx
// 00745f1b  8954241c             mov dword ptr [esp + 0x1c], edx
// 00745f1f  83f803               cmp eax, 3
// 00745f22  7709                 ja 0x745f2d
// 00745f24  8bbc8390000000       mov edi, dword ptr [ebx + eax*4 + 0x90]
// 00745f2b  eb02                 jmp 0x745f2f
// 00745f2d  33ff                 xor edi, edi
// 00745f2f  8d4c2414             lea ecx, [esp + 0x14]
// 00745f33  51                   push ecx
// 00745f34  8bcf                 mov ecx, edi
// 00745f36  e8f7acf5ff           call 0x6a0c32
// 00745f3b  8b4604               mov eax, dword ptr [esi + 4]
// 00745f3e  57                   push edi
// 00745f3f  8d542418             lea edx, [esp + 0x18]
// 00745f43  52                   push edx
// 00745f44  50                   push eax
// 00745f45  8bcb                 mov ecx, ebx
// 00745f47  e8b4caf5ff           call 0x6a2a00
// 00745f4c  6a00                 push 0
// 00745f4e  8bcb                 mov ecx, ebx
// 00745f50  e89bd4f5ff           call 0x6a33f0
// 00745f55  e99c000000           jmp 0x745ff6
// 00745f5a  f680ec00000010       test byte ptr [eax + 0xec], 0x10
// 00745f61  7494                 je 0x745ef7
// 00745f63  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 00745f66  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 00745f6a  748b                 je 0x745ef7
// 00745f6c  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00745f6f  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00745f72  894c240c             mov dword ptr [esp + 0xc], ecx
// 00745f76  89542410             mov dword ptr [esp + 0x10], edx
// 00745f7a  85c9                 test ecx, ecx
// 00745f7c  7e04                 jle 0x745f82
// 00745f7e  85d2                 test edx, edx
// 00745f80  7f2d                 jg 0x745faf
// 00745f82  8b5618               mov edx, dword ptr [esi + 0x18]
// 00745f85  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00745f88  8954240c             mov dword ptr [esp + 0xc], edx
// 00745f8c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00745f90  8b5020               mov edx, dword ptr [eax + 0x20]
// 00745f93  52                   push edx
// 00745f94  ff15f82d8000         call dword ptr [0x802df8]
// 00745f9a  50                   push eax
// 00745f9b  e83eacf5ff           call 0x6a0bde
// 00745fa0  8b5020               mov edx, dword ptr [eax + 0x20]
// 00745fa3  8d4c240c             lea ecx, [esp + 0xc]
// 00745fa7  51                   push ecx
// 00745fa8  52                   push edx
// 00745fa9  ff15802d8000         call dword ptr [0x802d80]
// 00745faf  8b4604               mov eax, dword ptr [esi + 4]
// 00745fb2  50                   push eax
// 00745fb3  8bcb                 mov ecx, ebx
// 00745fb5  e8e6caf5ff           call 0x6a2aa0
// 00745fba  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745fbd  8b11                 mov edx, dword ptr [ecx]
// 00745fbf  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 00745fc5  6a46                 push 0x46
// 00745fc7  6a00                 push 0
// 00745fc9  8d44241c             lea eax, [esp + 0x1c]
// 00745fcd  50                   push eax
// 00745fce  ffd2                 call edx
// 00745fd0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00745fd4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00745fd8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00745fdc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00745fe0  03cf                 add ecx, edi
// 00745fe2  6a01                 push 1
// 00745fe4  2bcf                 sub ecx, edi
// 00745fe6  51                   push ecx
// 00745fe7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745fea  03c2                 add eax, edx
// 00745fec  2bc2                 sub eax, edx
// 00745fee  50                   push eax
// 00745fef  57                   push edi
// 00745ff0  52                   push edx
// 00745ff1  e856aaf5ff           call 0x6a0a4c
// 00745ff6  8b5374               mov edx, dword ptr [ebx + 0x74]
// 00745ff9  5f                   pop edi
// 00745ffa  5e                   pop esi
// 00745ffb  c7424c01000000       mov dword ptr [edx + 0x4c], 1
// 00746002  b801000000           mov eax, 1
// 00746007  5b                   pop ebx
// 00746008  83c418               add esp, 0x18
// 0074600b  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockContext.cpp (function ?ToggleDocking@CXTPDockContext@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp
