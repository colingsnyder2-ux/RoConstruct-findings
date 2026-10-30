// roc 2009-12 00885a50  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00885a50
//
// 00885a50  83ec30               sub esp, 0x30
// 00885a53  837c245000           cmp dword ptr [esp + 0x50], 0
// 00885a58  53                   push ebx
// 00885a59  55                   push ebp
// 00885a5a  56                   push esi
// 00885a5b  57                   push edi
// 00885a5c  8bf9                 mov edi, ecx
// 00885a5e  0f8452010000         je 0x885bb6
// 00885a64  8b542458             mov edx, dword ptr [esp + 0x58]
// 00885a68  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00885a6c  2b542450             sub edx, dword ptr [esp + 0x50]
// 00885a70  b801000000           mov eax, 1
// 00885a75  41                   inc ecx
// 00885a76  894c2418             mov dword ptr [esp + 0x18], ecx
// 00885a7a  03d0                 add edx, eax
// 00885a7c  6a29                 push 0x29
// 00885a7e  8bcf                 mov ecx, edi
// 00885a80  89442414             mov dword ptr [esp + 0x14], eax
// 00885a84  89442418             mov dword ptr [esp + 0x18], eax
// 00885a88  89542420             mov dword ptr [esp + 0x20], edx
// 00885a8c  e8af7bf7ff           call 0x7fd640
// 00885a91  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00885a95  50                   push eax
// 00885a96  8d442414             lea eax, [esp + 0x14]
// 00885a9a  50                   push eax
// 00885a9b  8bcb                 mov ecx, ebx
// 00885a9d  e85cebf6ff           call 0x7f45fe
// 00885aa2  6aff                 push -1
// 00885aa4  6aff                 push -1
// 00885aa6  8d4c2418             lea ecx, [esp + 0x18]
// 00885aaa  51                   push ecx
// 00885aab  ff1558ca9800         call dword ptr [0x98ca58]
// 00885ab1  8b442454             mov eax, dword ptr [esp + 0x54]
// 00885ab5  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00885ab9  bd20000000           mov ebp, 0x20
// 00885abe  99                   cdq 
// 00885abf  2bc2                 sub eax, edx
// 00885ac1  d1f8                 sar eax, 1
// 00885ac3  8d48f6               lea ecx, [eax - 0xa]
// 00885ac6  83f920               cmp ecx, 0x20
// 00885ac9  7f02                 jg 0x885acd
// 00885acb  8be9                 mov ebp, ecx
// 00885acd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00885ad1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00885ad5  03c2                 add eax, edx
// 00885ad7  99                   cdq 
// 00885ad8  2bc2                 sub eax, edx
// 00885ada  d1f8                 sar eax, 1
// 00885adc  8bf0                 mov esi, eax
// 00885ade  2bf5                 sub esi, ebp
// 00885ae0  83f920               cmp ecx, 0x20
// 00885ae3  7e05                 jle 0x885aea
// 00885ae5  b920000000           mov ecx, 0x20
// 00885aea  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 00885aef  8d2c08               lea ebp, [eax + ecx]
// 00885af2  742e                 je 0x885b22
// 00885af4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00885af8  8b542414             mov edx, dword ptr [esp + 0x14]
// 00885afc  6a1f                 push 0x1f
// 00885afe  6a20                 push 0x20
// 00885b00  83ec10               sub esp, 0x10
// 00885b03  8bc4                 mov eax, esp
// 00885b05  8908                 mov dword ptr [eax], ecx
// 00885b07  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00885b0b  895004               mov dword ptr [eax + 4], edx
// 00885b0e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00885b12  894808               mov dword ptr [eax + 8], ecx
// 00885b15  53                   push ebx
// 00885b16  8bcf                 mov ecx, edi
// 00885b18  89500c               mov dword ptr [eax + 0xc], edx
// 00885b1b  e8408cf7ff           call 0x7fe760
// 00885b20  eb1e                 jmp 0x885b40
// 00885b22  8b873c050000         mov eax, dword ptr [edi + 0x53c]
// 00885b28  83f8ff               cmp eax, -1
// 00885b2b  7506                 jne 0x885b33
// 00885b2d  8b8738050000         mov eax, dword ptr [edi + 0x538]
// 00885b33  50                   push eax
// 00885b34  8d442414             lea eax, [esp + 0x14]
// 00885b38  50                   push eax
// 00885b39  8bcb                 mov ecx, ebx
// 00885b3b  e8beeaf6ff           call 0x7f45fe
// 00885b40  3bf5                 cmp esi, ebp
// 00885b42  7d72                 jge 0x885bb6
// 00885b44  83c603               add esi, 3
// 00885b47  8d4efe               lea ecx, [esi - 2]
// 00885b4a  894c2420             mov dword ptr [esp + 0x20], ecx
// 00885b4e  6a14                 push 0x14
// 00885b50  8bcf                 mov ecx, edi
// 00885b52  c744242805000000     mov dword ptr [esp + 0x28], 5
// 00885b5a  8974242c             mov dword ptr [esp + 0x2c], esi
// 00885b5e  c744243007000000     mov dword ptr [esp + 0x30], 7
// 00885b66  e8d57af7ff           call 0x7fd640
// 00885b6b  50                   push eax
// 00885b6c  8d542424             lea edx, [esp + 0x24]
// 00885b70  52                   push edx
// 00885b71  8bcb                 mov ecx, ebx
// 00885b73  e886eaf6ff           call 0x7f45fe
// 00885b78  8d4eff               lea ecx, [esi - 1]
// 00885b7b  8d46fd               lea eax, [esi - 3]
// 00885b7e  894c2438             mov dword ptr [esp + 0x38], ecx
// 00885b82  6a26                 push 0x26
// 00885b84  8bcf                 mov ecx, edi
// 00885b86  89442434             mov dword ptr [esp + 0x34], eax
// 00885b8a  c744243804000000     mov dword ptr [esp + 0x38], 4
// 00885b92  c744244006000000     mov dword ptr [esp + 0x40], 6
// 00885b9a  e8a17af7ff           call 0x7fd640
// 00885b9f  50                   push eax
// 00885ba0  8d542434             lea edx, [esp + 0x34]
// 00885ba4  52                   push edx
// 00885ba5  8bcb                 mov ecx, ebx
// 00885ba7  e852eaf6ff           call 0x7f45fe
// 00885bac  83c604               add esi, 4
// 00885baf  8d46fd               lea eax, [esi - 3]
// 00885bb2  3bc5                 cmp eax, ebp
// 00885bb4  7c91                 jl 0x885b47
// 00885bb6  8b442444             mov eax, dword ptr [esp + 0x44]
// 00885bba  5f                   pop edi
// 00885bbb  5e                   pop esi
// 00885bbc  5d                   pop ebp
// 00885bbd  c70000000000         mov dword ptr [eax], 0
// 00885bc3  c7400409000000       mov dword ptr [eax + 4], 9
// 00885bca  5b                   pop ebx
// 00885bcb  83c430               add esp, 0x30
// 00885bce  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawTearOffGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
