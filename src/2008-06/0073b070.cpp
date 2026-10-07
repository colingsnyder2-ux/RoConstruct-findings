// roc 2008-06 0073b070  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073b070
//
// 0073b070  837c242800           cmp dword ptr [esp + 0x28], 0
// 0073b075  53                   push ebx
// 0073b076  55                   push ebp
// 0073b077  56                   push esi
// 0073b078  57                   push edi
// 0073b079  8bf1                 mov esi, ecx
// 0073b07b  7454                 je 0x73b0d1
// 0073b07d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0073b081  6a00                 push 0
// 0073b083  6a00                 push 0
// 0073b085  8d86fc040000         lea eax, [esi + 0x4fc]
// 0073b08b  50                   push eax
// 0073b08c  8d4c2424             lea ecx, [esp + 0x24]
// 0073b090  51                   push ecx
// 0073b091  57                   push edi
// 0073b092  e839ebfbff           call 0x6f9bd0
// 0073b097  8bc8                 mov ecx, eax
// 0073b099  e852eefbff           call 0x6f9ef0
// 0073b09e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073b0a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073b0a6  6a2b                 push 0x2b
// 0073b0a8  6a2b                 push 0x2b
// 0073b0aa  83ec10               sub esp, 0x10
// 0073b0ad  8bc4                 mov eax, esp
// 0073b0af  8910                 mov dword ptr [eax], edx
// 0073b0b1  8b542438             mov edx, dword ptr [esp + 0x38]
// 0073b0b5  894804               mov dword ptr [eax + 4], ecx
// 0073b0b8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073b0bc  895008               mov dword ptr [eax + 8], edx
// 0073b0bf  89480c               mov dword ptr [eax + 0xc], ecx
// 0073b0c2  57                   push edi
// 0073b0c3  8bce                 mov ecx, esi
// 0073b0c5  e8a631f7ff           call 0x6ae270
// 0073b0ca  5f                   pop edi
// 0073b0cb  5e                   pop esi
// 0073b0cc  5d                   pop ebp
// 0073b0cd  5b                   pop ebx
// 0073b0ce  c23000               ret 0x30
// 0073b0d1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 0073b0d8  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073b0dc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073b0e0  0f84be010000         je 0x73b2a4
// 0073b0e6  83f902               cmp ecx, 2
// 0073b0e9  0f84b5010000         je 0x73b2a4
// 0073b0ef  83f802               cmp eax, 2
// 0073b0f2  7425                 je 0x73b119
// 0073b0f4  85c0                 test eax, eax
// 0073b0f6  7413                 je 0x73b10b
// 0073b0f8  83f803               cmp eax, 3
// 0073b0fb  741c                 je 0x73b119
// 0073b0fd  83f801               cmp eax, 1
// 0073b100  7409                 je 0x73b10b
// 0073b102  83f804               cmp eax, 4
// 0073b105  0f8599010000         jne 0x73b2a4
// 0073b10b  83f803               cmp eax, 3
// 0073b10e  7409                 je 0x73b119
// 0073b110  83f805               cmp eax, 5
// 0073b113  7404                 je 0x73b119
// 0073b115  33ff                 xor edi, edi
// 0073b117  eb05                 jmp 0x73b11e
// 0073b119  bf01000000           mov edi, 1
// 0073b11e  837c243000           cmp dword ptr [esp + 0x30], 0
// 0073b123  7575                 jne 0x73b19a
// 0073b125  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073b129  52                   push edx
// 0073b12a  e831fcf6ff           call 0x6aad60
// 0073b12f  83c404               add esp, 4
// 0073b132  85c0                 test eax, eax
// 0073b134  741c                 je 0x73b152
// 0073b136  837c243400           cmp dword ptr [esp + 0x34], 0
// 0073b13b  8d8670050000         lea eax, [esi + 0x570]
// 0073b141  0f8513010000         jne 0x73b25a
// 0073b147  8d8690050000         lea eax, [esi + 0x590]
// 0073b14d  e908010000           jmp 0x73b25a
// 0073b152  837c243400           cmp dword ptr [esp + 0x34], 0
// 0073b157  0f848b010000         je 0x73b2e8
// 0073b15d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073b161  8d8e50050000         lea ecx, [esi + 0x550]
// 0073b167  51                   push ecx
// 0073b168  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073b16c  57                   push edi
// 0073b16d  6a3a                 push 0x3a
// 0073b16f  83ec10               sub esp, 0x10
// 0073b172  8bc4                 mov eax, esp
// 0073b174  8910                 mov dword ptr [eax], edx
// 0073b176  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0073b17a  894804               mov dword ptr [eax + 4], ecx
// 0073b17d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0073b181  895008               mov dword ptr [eax + 8], edx
// 0073b184  8b542430             mov edx, dword ptr [esp + 0x30]
// 0073b188  89480c               mov dword ptr [eax + 0xc], ecx
// 0073b18b  52                   push edx
// 0073b18c  8bce                 mov ecx, esi
// 0073b18e  e86dfeffff           call 0x73b000
// 0073b193  5f                   pop edi
// 0073b194  5e                   pop esi
// 0073b195  5d                   pop ebp
// 0073b196  5b                   pop ebx
// 0073b197  c23000               ret 0x30
// 0073b19a  8b442434             mov eax, dword ptr [esp + 0x34]
// 0073b19e  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0073b1a2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0073b1a6  83f802               cmp eax, 2
// 0073b1a9  7547                 jne 0x73b1f2
// 0073b1ab  85ed                 test ebp, ebp
// 0073b1ad  0f8588000000         jne 0x73b23b
// 0073b1b3  85db                 test ebx, ebx
// 0073b1b5  0f8584000000         jne 0x73b23f
// 0073b1bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073b1bf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073b1c3  6a33                 push 0x33
// 0073b1c5  6a32                 push 0x32
// 0073b1c7  83ec10               sub esp, 0x10
// 0073b1ca  8bc4                 mov eax, esp
// 0073b1cc  8908                 mov dword ptr [eax], ecx
// 0073b1ce  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073b1d2  895004               mov dword ptr [eax + 4], edx
// 0073b1d5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0073b1d9  894808               mov dword ptr [eax + 8], ecx
// 0073b1dc  89500c               mov dword ptr [eax + 0xc], edx
// 0073b1df  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0073b1e3  50                   push eax
// 0073b1e4  8bce                 mov ecx, esi
// 0073b1e6  e8e53ef7ff           call 0x6af0d0
// 0073b1eb  5f                   pop edi
// 0073b1ec  5e                   pop esi
// 0073b1ed  5d                   pop ebp
// 0073b1ee  5b                   pop ebx
// 0073b1ef  c23000               ret 0x30
// 0073b1f2  85c0                 test eax, eax
// 0073b1f4  7449                 je 0x73b23f
// 0073b1f6  85ed                 test ebp, ebp
// 0073b1f8  7541                 jne 0x73b23b
// 0073b1fa  85db                 test ebx, ebx
// 0073b1fc  7541                 jne 0x73b23f
// 0073b1fe  8d8e50050000         lea ecx, [esi + 0x550]
// 0073b204  51                   push ecx
// 0073b205  57                   push edi
// 0073b206  6a25                 push 0x25
// 0073b208  8b542424             mov edx, dword ptr [esp + 0x24]
// 0073b20c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073b210  83ec10               sub esp, 0x10
// 0073b213  8bc4                 mov eax, esp
// 0073b215  8910                 mov dword ptr [eax], edx
// 0073b217  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0073b21b  894804               mov dword ptr [eax + 4], ecx
// 0073b21e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0073b222  895008               mov dword ptr [eax + 8], edx
// 0073b225  8b542430             mov edx, dword ptr [esp + 0x30]
// 0073b229  89480c               mov dword ptr [eax + 0xc], ecx
// 0073b22c  52                   push edx
// 0073b22d  8bce                 mov ecx, esi
// 0073b22f  e8ccfdffff           call 0x73b000
// 0073b234  5f                   pop edi
// 0073b235  5e                   pop esi
// 0073b236  5d                   pop ebp
// 0073b237  5b                   pop ebx
// 0073b238  c23000               ret 0x30
// 0073b23b  85db                 test ebx, ebx
// 0073b23d  7415                 je 0x73b254
// 0073b23f  53                   push ebx
// 0073b240  e81bfbf6ff           call 0x6aad60
// 0073b245  83c404               add esp, 4
// 0073b248  85c0                 test eax, eax
// 0073b24a  7508                 jne 0x73b254
// 0073b24c  85ed                 test ebp, ebp
// 0073b24e  7441                 je 0x73b291
// 0073b250  85db                 test ebx, ebx
// 0073b252  7441                 je 0x73b295
// 0073b254  8d8670050000         lea eax, [esi + 0x570]
// 0073b25a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073b25e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073b262  50                   push eax
// 0073b263  57                   push edi
// 0073b264  6a32                 push 0x32
// 0073b266  83ec10               sub esp, 0x10
// 0073b269  8bc4                 mov eax, esp
// 0073b26b  8908                 mov dword ptr [eax], ecx
// 0073b26d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073b271  895004               mov dword ptr [eax + 4], edx
// 0073b274  8b542440             mov edx, dword ptr [esp + 0x40]
// 0073b278  894808               mov dword ptr [eax + 8], ecx
// 0073b27b  89500c               mov dword ptr [eax + 0xc], edx
// 0073b27e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0073b282  50                   push eax
// 0073b283  8bce                 mov ecx, esi
// 0073b285  e876fdffff           call 0x73b000
// 0073b28a  5f                   pop edi
// 0073b28b  5e                   pop esi
// 0073b28c  5d                   pop ebp
// 0073b28d  5b                   pop ebx
// 0073b28e  c23000               ret 0x30
// 0073b291  85db                 test ebx, ebx
// 0073b293  7453                 je 0x73b2e8
// 0073b295  8d8e90050000         lea ecx, [esi + 0x590]
// 0073b29b  51                   push ecx
// 0073b29c  57                   push edi
// 0073b29d  6a20                 push 0x20
// 0073b29f  e964ffffff           jmp 0x73b208
// 0073b2a4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0073b2a8  50                   push eax
// 0073b2a9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0073b2ad  51                   push ecx
// 0073b2ae  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073b2b2  6a00                 push 0
// 0073b2b4  51                   push ecx
// 0073b2b5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073b2b9  52                   push edx
// 0073b2ba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0073b2be  50                   push eax
// 0073b2bf  51                   push ecx
// 0073b2c0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073b2c4  83ec10               sub esp, 0x10
// 0073b2c7  8bc4                 mov eax, esp
// 0073b2c9  8910                 mov dword ptr [eax], edx
// 0073b2cb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0073b2cf  894804               mov dword ptr [eax + 4], ecx
// 0073b2d2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0073b2d6  895008               mov dword ptr [eax + 8], edx
// 0073b2d9  8b542440             mov edx, dword ptr [esp + 0x40]
// 0073b2dd  89480c               mov dword ptr [eax + 0xc], ecx
// 0073b2e0  52                   push edx
// 0073b2e1  8bce                 mov ecx, esi
// 0073b2e3  e848380000           call 0x73eb30
// 0073b2e8  5f                   pop edi
// 0073b2e9  5e                   pop esi
// 0073b2ea  5d                   pop ebp
// 0073b2eb  5b                   pop ebx
// 0073b2ec  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawRectangle@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
