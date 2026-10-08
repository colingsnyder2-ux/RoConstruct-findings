// from server: 100% by auto
// roc 2008-06 0073c4c0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073c4c0
//
// 0073c4c0  83ec30               sub esp, 0x30
// 0073c4c3  837c245000           cmp dword ptr [esp + 0x50], 0
// 0073c4c8  53                   push ebx
// 0073c4c9  55                   push ebp
// 0073c4ca  56                   push esi
// 0073c4cb  57                   push edi
// 0073c4cc  8bf9                 mov edi, ecx
// 0073c4ce  0f8452010000         je 0x73c626
// 0073c4d4  8b542458             mov edx, dword ptr [esp + 0x58]
// 0073c4d8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0073c4dc  2b542450             sub edx, dword ptr [esp + 0x50]
// 0073c4e0  b801000000           mov eax, 1
// 0073c4e5  41                   inc ecx
// 0073c4e6  894c2418             mov dword ptr [esp + 0x18], ecx
// 0073c4ea  03d0                 add edx, eax
// 0073c4ec  6a29                 push 0x29
// 0073c4ee  8bcf                 mov ecx, edi
// 0073c4f0  89442414             mov dword ptr [esp + 0x14], eax
// 0073c4f4  89442418             mov dword ptr [esp + 0x18], eax
// 0073c4f8  89542420             mov dword ptr [esp + 0x20], edx
// 0073c4fc  e86f1bf7ff           call 0x6ae070
// 0073c501  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0073c505  50                   push eax
// 0073c506  8d442414             lea eax, [esp + 0x14]
// 0073c50a  50                   push eax
// 0073c50b  8bcb                 mov ecx, ebx
// 0073c50d  e84c4ef6ff           call 0x6a135e
// 0073c512  6aff                 push -1
// 0073c514  6aff                 push -1
// 0073c516  8d4c2418             lea ecx, [esp + 0x18]
// 0073c51a  51                   push ecx
// 0073c51b  ff15282d8000         call dword ptr [0x802d28]
// 0073c521  8b442454             mov eax, dword ptr [esp + 0x54]
// 0073c525  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 0073c529  bd20000000           mov ebp, 0x20
// 0073c52e  99                   cdq 
// 0073c52f  2bc2                 sub eax, edx
// 0073c531  d1f8                 sar eax, 1
// 0073c533  8d48f6               lea ecx, [eax - 0xa]
// 0073c536  83f920               cmp ecx, 0x20
// 0073c539  7f02                 jg 0x73c53d
// 0073c53b  8be9                 mov ebp, ecx
// 0073c53d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073c541  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073c545  03c2                 add eax, edx
// 0073c547  99                   cdq 
// 0073c548  2bc2                 sub eax, edx
// 0073c54a  d1f8                 sar eax, 1
// 0073c54c  8bf0                 mov esi, eax
// 0073c54e  2bf5                 sub esi, ebp
// 0073c550  83f920               cmp ecx, 0x20
// 0073c553  7e05                 jle 0x73c55a
// 0073c555  b920000000           mov ecx, 0x20
// 0073c55a  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0073c55f  8d2c08               lea ebp, [eax + ecx]
// 0073c562  742e                 je 0x73c592
// 0073c564  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073c568  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073c56c  6a1f                 push 0x1f
// 0073c56e  6a20                 push 0x20
// 0073c570  83ec10               sub esp, 0x10
// 0073c573  8bc4                 mov eax, esp
// 0073c575  8908                 mov dword ptr [eax], ecx
// 0073c577  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0073c57b  895004               mov dword ptr [eax + 4], edx
// 0073c57e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073c582  894808               mov dword ptr [eax + 8], ecx
// 0073c585  53                   push ebx
// 0073c586  8bcf                 mov ecx, edi
// 0073c588  89500c               mov dword ptr [eax + 0xc], edx
// 0073c58b  e8402bf7ff           call 0x6af0d0
// 0073c590  eb1e                 jmp 0x73c5b0
// 0073c592  8b873c050000         mov eax, dword ptr [edi + 0x53c]
// 0073c598  83f8ff               cmp eax, -1
// 0073c59b  7506                 jne 0x73c5a3
// 0073c59d  8b8738050000         mov eax, dword ptr [edi + 0x538]
// 0073c5a3  50                   push eax
// 0073c5a4  8d442414             lea eax, [esp + 0x14]
// 0073c5a8  50                   push eax
// 0073c5a9  8bcb                 mov ecx, ebx
// 0073c5ab  e8ae4df6ff           call 0x6a135e
// 0073c5b0  3bf5                 cmp esi, ebp
// 0073c5b2  7d72                 jge 0x73c626
// 0073c5b4  83c603               add esi, 3
// 0073c5b7  8d4efe               lea ecx, [esi - 2]
// 0073c5ba  894c2420             mov dword ptr [esp + 0x20], ecx
// 0073c5be  6a14                 push 0x14
// 0073c5c0  8bcf                 mov ecx, edi
// 0073c5c2  c744242805000000     mov dword ptr [esp + 0x28], 5
// 0073c5ca  8974242c             mov dword ptr [esp + 0x2c], esi
// 0073c5ce  c744243007000000     mov dword ptr [esp + 0x30], 7
// 0073c5d6  e8951af7ff           call 0x6ae070
// 0073c5db  50                   push eax
// 0073c5dc  8d542424             lea edx, [esp + 0x24]
// 0073c5e0  52                   push edx
// 0073c5e1  8bcb                 mov ecx, ebx
// 0073c5e3  e8764df6ff           call 0x6a135e
// 0073c5e8  8d4eff               lea ecx, [esi - 1]
// 0073c5eb  8d46fd               lea eax, [esi - 3]
// 0073c5ee  894c2438             mov dword ptr [esp + 0x38], ecx
// 0073c5f2  6a26                 push 0x26
// 0073c5f4  8bcf                 mov ecx, edi
// 0073c5f6  89442434             mov dword ptr [esp + 0x34], eax
// 0073c5fa  c744243804000000     mov dword ptr [esp + 0x38], 4
// 0073c602  c744244006000000     mov dword ptr [esp + 0x40], 6
// 0073c60a  e8611af7ff           call 0x6ae070
// 0073c60f  50                   push eax
// 0073c610  8d542434             lea edx, [esp + 0x34]
// 0073c614  52                   push edx
// 0073c615  8bcb                 mov ecx, ebx
// 0073c617  e8424df6ff           call 0x6a135e
// 0073c61c  83c604               add esi, 4
// 0073c61f  8d46fd               lea eax, [esi - 3]
// 0073c622  3bc5                 cmp eax, ebp
// 0073c624  7c91                 jl 0x73c5b7
// 0073c626  8b442444             mov eax, dword ptr [esp + 0x44]
// 0073c62a  5f                   pop edi
// 0073c62b  5e                   pop esi
// 0073c62c  5d                   pop ebp
// 0073c62d  c70000000000         mov dword ptr [eax], 0
// 0073c633  c7400409000000       mov dword ptr [eax + 4], 9
// 0073c63a  5b                   pop ebx
// 0073c63b  83c430               add esp, 0x30
// 0073c63e  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawTearOffGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
