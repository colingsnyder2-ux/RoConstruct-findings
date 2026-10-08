// roc 2012-06 00a0d170  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0d170
//
// 00a0d170  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a0d175  53                   push ebx
// 00a0d176  55                   push ebp
// 00a0d177  56                   push esi
// 00a0d178  57                   push edi
// 00a0d179  8bf1                 mov esi, ecx
// 00a0d17b  7454                 je 0xa0d1d1
// 00a0d17d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a0d181  6a00                 push 0
// 00a0d183  6a00                 push 0
// 00a0d185  8d86fc040000         lea eax, [esi + 0x4fc]
// 00a0d18b  50                   push eax
// 00a0d18c  8d4c2424             lea ecx, [esp + 0x24]
// 00a0d190  51                   push ecx
// 00a0d191  57                   push edi
// 00a0d192  e8f99ffcff           call 0x9d7190
// 00a0d197  8bc8                 mov ecx, eax
// 00a0d199  e812a3fcff           call 0x9d74b0
// 00a0d19e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a0d1a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0d1a6  6a2b                 push 0x2b
// 00a0d1a8  6a2b                 push 0x2b
// 00a0d1aa  83ec10               sub esp, 0x10
// 00a0d1ad  8bc4                 mov eax, esp
// 00a0d1af  8910                 mov dword ptr [eax], edx
// 00a0d1b1  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a0d1b5  894804               mov dword ptr [eax + 4], ecx
// 00a0d1b8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0d1bc  895008               mov dword ptr [eax + 8], edx
// 00a0d1bf  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0d1c2  57                   push edi
// 00a0d1c3  8bce                 mov ecx, esi
// 00a0d1c5  e8c6a8f7ff           call 0x987a90
// 00a0d1ca  5f                   pop edi
// 00a0d1cb  5e                   pop esi
// 00a0d1cc  5d                   pop ebp
// 00a0d1cd  5b                   pop ebx
// 00a0d1ce  c23000               ret 0x30
// 00a0d1d1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 00a0d1d8  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a0d1dc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0d1e0  0f84be010000         je 0xa0d3a4
// 00a0d1e6  83f902               cmp ecx, 2
// 00a0d1e9  0f84b5010000         je 0xa0d3a4
// 00a0d1ef  83f802               cmp eax, 2
// 00a0d1f2  7425                 je 0xa0d219
// 00a0d1f4  85c0                 test eax, eax
// 00a0d1f6  7413                 je 0xa0d20b
// 00a0d1f8  83f803               cmp eax, 3
// 00a0d1fb  741c                 je 0xa0d219
// 00a0d1fd  83f801               cmp eax, 1
// 00a0d200  7409                 je 0xa0d20b
// 00a0d202  83f804               cmp eax, 4
// 00a0d205  0f8599010000         jne 0xa0d3a4
// 00a0d20b  83f803               cmp eax, 3
// 00a0d20e  7409                 je 0xa0d219
// 00a0d210  83f805               cmp eax, 5
// 00a0d213  7404                 je 0xa0d219
// 00a0d215  33ff                 xor edi, edi
// 00a0d217  eb05                 jmp 0xa0d21e
// 00a0d219  bf01000000           mov edi, 1
// 00a0d21e  837c243000           cmp dword ptr [esp + 0x30], 0
// 00a0d223  7575                 jne 0xa0d29a
// 00a0d225  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a0d229  52                   push edx
// 00a0d22a  e8c172f7ff           call 0x9844f0
// 00a0d22f  83c404               add esp, 4
// 00a0d232  85c0                 test eax, eax
// 00a0d234  741c                 je 0xa0d252
// 00a0d236  837c243400           cmp dword ptr [esp + 0x34], 0
// 00a0d23b  8d8670050000         lea eax, [esi + 0x570]
// 00a0d241  0f8513010000         jne 0xa0d35a
// 00a0d247  8d8690050000         lea eax, [esi + 0x590]
// 00a0d24d  e908010000           jmp 0xa0d35a
// 00a0d252  837c243400           cmp dword ptr [esp + 0x34], 0
// 00a0d257  0f848b010000         je 0xa0d3e8
// 00a0d25d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a0d261  8d8e50050000         lea ecx, [esi + 0x550]
// 00a0d267  51                   push ecx
// 00a0d268  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0d26c  57                   push edi
// 00a0d26d  6a3a                 push 0x3a
// 00a0d26f  83ec10               sub esp, 0x10
// 00a0d272  8bc4                 mov eax, esp
// 00a0d274  8910                 mov dword ptr [eax], edx
// 00a0d276  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a0d27a  894804               mov dword ptr [eax + 4], ecx
// 00a0d27d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a0d281  895008               mov dword ptr [eax + 8], edx
// 00a0d284  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a0d288  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0d28b  52                   push edx
// 00a0d28c  8bce                 mov ecx, esi
// 00a0d28e  e86dfeffff           call 0xa0d100
// 00a0d293  5f                   pop edi
// 00a0d294  5e                   pop esi
// 00a0d295  5d                   pop ebp
// 00a0d296  5b                   pop ebx
// 00a0d297  c23000               ret 0x30
// 00a0d29a  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0d29e  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00a0d2a2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a0d2a6  83f802               cmp eax, 2
// 00a0d2a9  7547                 jne 0xa0d2f2
// 00a0d2ab  85ed                 test ebp, ebp
// 00a0d2ad  0f8588000000         jne 0xa0d33b
// 00a0d2b3  85db                 test ebx, ebx
// 00a0d2b5  0f8584000000         jne 0xa0d33f
// 00a0d2bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0d2bf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a0d2c3  6a33                 push 0x33
// 00a0d2c5  6a32                 push 0x32
// 00a0d2c7  83ec10               sub esp, 0x10
// 00a0d2ca  8bc4                 mov eax, esp
// 00a0d2cc  8908                 mov dword ptr [eax], ecx
// 00a0d2ce  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0d2d2  895004               mov dword ptr [eax + 4], edx
// 00a0d2d5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a0d2d9  894808               mov dword ptr [eax + 8], ecx
// 00a0d2dc  89500c               mov dword ptr [eax + 0xc], edx
// 00a0d2df  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a0d2e3  50                   push eax
// 00a0d2e4  8bce                 mov ecx, esi
// 00a0d2e6  e885b6f7ff           call 0x988970
// 00a0d2eb  5f                   pop edi
// 00a0d2ec  5e                   pop esi
// 00a0d2ed  5d                   pop ebp
// 00a0d2ee  5b                   pop ebx
// 00a0d2ef  c23000               ret 0x30
// 00a0d2f2  85c0                 test eax, eax
// 00a0d2f4  7449                 je 0xa0d33f
// 00a0d2f6  85ed                 test ebp, ebp
// 00a0d2f8  7541                 jne 0xa0d33b
// 00a0d2fa  85db                 test ebx, ebx
// 00a0d2fc  7541                 jne 0xa0d33f
// 00a0d2fe  8d8e50050000         lea ecx, [esi + 0x550]
// 00a0d304  51                   push ecx
// 00a0d305  57                   push edi
// 00a0d306  6a25                 push 0x25
// 00a0d308  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0d30c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a0d310  83ec10               sub esp, 0x10
// 00a0d313  8bc4                 mov eax, esp
// 00a0d315  8910                 mov dword ptr [eax], edx
// 00a0d317  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a0d31b  894804               mov dword ptr [eax + 4], ecx
// 00a0d31e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a0d322  895008               mov dword ptr [eax + 8], edx
// 00a0d325  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a0d329  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0d32c  52                   push edx
// 00a0d32d  8bce                 mov ecx, esi
// 00a0d32f  e8ccfdffff           call 0xa0d100
// 00a0d334  5f                   pop edi
// 00a0d335  5e                   pop esi
// 00a0d336  5d                   pop ebp
// 00a0d337  5b                   pop ebx
// 00a0d338  c23000               ret 0x30
// 00a0d33b  85db                 test ebx, ebx
// 00a0d33d  7415                 je 0xa0d354
// 00a0d33f  53                   push ebx
// 00a0d340  e8ab71f7ff           call 0x9844f0
// 00a0d345  83c404               add esp, 4
// 00a0d348  85c0                 test eax, eax
// 00a0d34a  7508                 jne 0xa0d354
// 00a0d34c  85ed                 test ebp, ebp
// 00a0d34e  7441                 je 0xa0d391
// 00a0d350  85db                 test ebx, ebx
// 00a0d352  7441                 je 0xa0d395
// 00a0d354  8d8670050000         lea eax, [esi + 0x570]
// 00a0d35a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0d35e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a0d362  50                   push eax
// 00a0d363  57                   push edi
// 00a0d364  6a32                 push 0x32
// 00a0d366  83ec10               sub esp, 0x10
// 00a0d369  8bc4                 mov eax, esp
// 00a0d36b  8908                 mov dword ptr [eax], ecx
// 00a0d36d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0d371  895004               mov dword ptr [eax + 4], edx
// 00a0d374  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a0d378  894808               mov dword ptr [eax + 8], ecx
// 00a0d37b  89500c               mov dword ptr [eax + 0xc], edx
// 00a0d37e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a0d382  50                   push eax
// 00a0d383  8bce                 mov ecx, esi
// 00a0d385  e876fdffff           call 0xa0d100
// 00a0d38a  5f                   pop edi
// 00a0d38b  5e                   pop esi
// 00a0d38c  5d                   pop ebp
// 00a0d38d  5b                   pop ebx
// 00a0d38e  c23000               ret 0x30
// 00a0d391  85db                 test ebx, ebx
// 00a0d393  7453                 je 0xa0d3e8
// 00a0d395  8d8e90050000         lea ecx, [esi + 0x590]
// 00a0d39b  51                   push ecx
// 00a0d39c  57                   push edi
// 00a0d39d  6a20                 push 0x20
// 00a0d39f  e964ffffff           jmp 0xa0d308
// 00a0d3a4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a0d3a8  50                   push eax
// 00a0d3a9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a0d3ad  51                   push ecx
// 00a0d3ae  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0d3b2  6a00                 push 0
// 00a0d3b4  51                   push ecx
// 00a0d3b5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0d3b9  52                   push edx
// 00a0d3ba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a0d3be  50                   push eax
// 00a0d3bf  51                   push ecx
// 00a0d3c0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0d3c4  83ec10               sub esp, 0x10
// 00a0d3c7  8bc4                 mov eax, esp
// 00a0d3c9  8910                 mov dword ptr [eax], edx
// 00a0d3cb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a0d3cf  894804               mov dword ptr [eax + 4], ecx
// 00a0d3d2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a0d3d6  895008               mov dword ptr [eax + 8], edx
// 00a0d3d9  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a0d3dd  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0d3e0  52                   push edx
// 00a0d3e1  8bce                 mov ecx, esi
// 00a0d3e3  e848380000           call 0xa10c30
// 00a0d3e8  5f                   pop edi
// 00a0d3e9  5e                   pop esi
// 00a0d3ea  5d                   pop ebp
// 00a0d3eb  5b                   pop ebx
// 00a0d3ec  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawRectangle@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
