// roc 2012-06 00a0e5c0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0e5c0
//
// 00a0e5c0  83ec30               sub esp, 0x30
// 00a0e5c3  837c245000           cmp dword ptr [esp + 0x50], 0
// 00a0e5c8  53                   push ebx
// 00a0e5c9  55                   push ebp
// 00a0e5ca  56                   push esi
// 00a0e5cb  57                   push edi
// 00a0e5cc  8bf9                 mov edi, ecx
// 00a0e5ce  0f8452010000         je 0xa0e726
// 00a0e5d4  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a0e5d8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a0e5dc  2b542450             sub edx, dword ptr [esp + 0x50]
// 00a0e5e0  b801000000           mov eax, 1
// 00a0e5e5  41                   inc ecx
// 00a0e5e6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a0e5ea  03d0                 add edx, eax
// 00a0e5ec  6a29                 push 0x29
// 00a0e5ee  8bcf                 mov ecx, edi
// 00a0e5f0  89442414             mov dword ptr [esp + 0x14], eax
// 00a0e5f4  89442418             mov dword ptr [esp + 0x18], eax
// 00a0e5f8  89542420             mov dword ptr [esp + 0x20], edx
// 00a0e5fc  e88f92f7ff           call 0x987890
// 00a0e601  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00a0e605  50                   push eax
// 00a0e606  8d442414             lea eax, [esp + 0x14]
// 00a0e60a  50                   push eax
// 00a0e60b  8bcb                 mov ecx, ebx
// 00a0e60d  e89a48f7ff           call 0x982eac
// 00a0e612  6aff                 push -1
// 00a0e614  6aff                 push -1
// 00a0e616  8d4c2418             lea ecx, [esp + 0x18]
// 00a0e61a  51                   push ecx
// 00a0e61b  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a0e621  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a0e625  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00a0e629  bd20000000           mov ebp, 0x20
// 00a0e62e  99                   cdq 
// 00a0e62f  2bc2                 sub eax, edx
// 00a0e631  d1f8                 sar eax, 1
// 00a0e633  8d48f6               lea ecx, [eax - 0xa]
// 00a0e636  83f920               cmp ecx, 0x20
// 00a0e639  7f02                 jg 0xa0e63d
// 00a0e63b  8be9                 mov ebp, ecx
// 00a0e63d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a0e641  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a0e645  03c2                 add eax, edx
// 00a0e647  99                   cdq 
// 00a0e648  2bc2                 sub eax, edx
// 00a0e64a  d1f8                 sar eax, 1
// 00a0e64c  8bf0                 mov esi, eax
// 00a0e64e  2bf5                 sub esi, ebp
// 00a0e650  83f920               cmp ecx, 0x20
// 00a0e653  7e05                 jle 0xa0e65a
// 00a0e655  b920000000           mov ecx, 0x20
// 00a0e65a  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 00a0e65f  8d2c08               lea ebp, [eax + ecx]
// 00a0e662  742e                 je 0xa0e692
// 00a0e664  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a0e668  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a0e66c  6a1f                 push 0x1f
// 00a0e66e  6a20                 push 0x20
// 00a0e670  83ec10               sub esp, 0x10
// 00a0e673  8bc4                 mov eax, esp
// 00a0e675  8908                 mov dword ptr [eax], ecx
// 00a0e677  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a0e67b  895004               mov dword ptr [eax + 4], edx
// 00a0e67e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a0e682  894808               mov dword ptr [eax + 8], ecx
// 00a0e685  53                   push ebx
// 00a0e686  8bcf                 mov ecx, edi
// 00a0e688  89500c               mov dword ptr [eax + 0xc], edx
// 00a0e68b  e8e0a2f7ff           call 0x988970
// 00a0e690  eb1e                 jmp 0xa0e6b0
// 00a0e692  8b873c050000         mov eax, dword ptr [edi + 0x53c]
// 00a0e698  83f8ff               cmp eax, -1
// 00a0e69b  7506                 jne 0xa0e6a3
// 00a0e69d  8b8738050000         mov eax, dword ptr [edi + 0x538]
// 00a0e6a3  50                   push eax
// 00a0e6a4  8d442414             lea eax, [esp + 0x14]
// 00a0e6a8  50                   push eax
// 00a0e6a9  8bcb                 mov ecx, ebx
// 00a0e6ab  e8fc47f7ff           call 0x982eac
// 00a0e6b0  3bf5                 cmp esi, ebp
// 00a0e6b2  7d72                 jge 0xa0e726
// 00a0e6b4  83c603               add esi, 3
// 00a0e6b7  8d4efe               lea ecx, [esi - 2]
// 00a0e6ba  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a0e6be  6a14                 push 0x14
// 00a0e6c0  8bcf                 mov ecx, edi
// 00a0e6c2  c744242805000000     mov dword ptr [esp + 0x28], 5
// 00a0e6ca  8974242c             mov dword ptr [esp + 0x2c], esi
// 00a0e6ce  c744243007000000     mov dword ptr [esp + 0x30], 7
// 00a0e6d6  e8b591f7ff           call 0x987890
// 00a0e6db  50                   push eax
// 00a0e6dc  8d542424             lea edx, [esp + 0x24]
// 00a0e6e0  52                   push edx
// 00a0e6e1  8bcb                 mov ecx, ebx
// 00a0e6e3  e8c447f7ff           call 0x982eac
// 00a0e6e8  8d4eff               lea ecx, [esi - 1]
// 00a0e6eb  8d46fd               lea eax, [esi - 3]
// 00a0e6ee  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a0e6f2  6a26                 push 0x26
// 00a0e6f4  8bcf                 mov ecx, edi
// 00a0e6f6  89442434             mov dword ptr [esp + 0x34], eax
// 00a0e6fa  c744243804000000     mov dword ptr [esp + 0x38], 4
// 00a0e702  c744244006000000     mov dword ptr [esp + 0x40], 6
// 00a0e70a  e88191f7ff           call 0x987890
// 00a0e70f  50                   push eax
// 00a0e710  8d542434             lea edx, [esp + 0x34]
// 00a0e714  52                   push edx
// 00a0e715  8bcb                 mov ecx, ebx
// 00a0e717  e89047f7ff           call 0x982eac
// 00a0e71c  83c604               add esi, 4
// 00a0e71f  8d46fd               lea eax, [esi - 3]
// 00a0e722  3bc5                 cmp eax, ebp
// 00a0e724  7c91                 jl 0xa0e6b7
// 00a0e726  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a0e72a  5f                   pop edi
// 00a0e72b  5e                   pop esi
// 00a0e72c  5d                   pop ebp
// 00a0e72d  c70000000000         mov dword ptr [eax], 0
// 00a0e733  c7400409000000       mov dword ptr [eax + 4], 9
// 00a0e73a  5b                   pop ebx
// 00a0e73b  83c430               add esp, 0x30
// 00a0e73e  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawTearOffGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
