// roc 2011-06 00895fe0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00895fe0
//
// 00895fe0  83ec30               sub esp, 0x30
// 00895fe3  837c245000           cmp dword ptr [esp + 0x50], 0
// 00895fe8  53                   push ebx
// 00895fe9  55                   push ebp
// 00895fea  56                   push esi
// 00895feb  57                   push edi
// 00895fec  8bf9                 mov edi, ecx
// 00895fee  0f8452010000         je 0x896146
// 00895ff4  8b542458             mov edx, dword ptr [esp + 0x58]
// 00895ff8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00895ffc  2b542450             sub edx, dword ptr [esp + 0x50]
// 00896000  b801000000           mov eax, 1
// 00896005  41                   inc ecx
// 00896006  894c2418             mov dword ptr [esp + 0x18], ecx
// 0089600a  03d0                 add edx, eax
// 0089600c  6a29                 push 0x29
// 0089600e  8bcf                 mov ecx, edi
// 00896010  89442414             mov dword ptr [esp + 0x14], eax
// 00896014  89442418             mov dword ptr [esp + 0x18], eax
// 00896018  89542420             mov dword ptr [esp + 0x20], edx
// 0089601c  e88f95f7ff           call 0x80f5b0
// 00896021  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00896025  50                   push eax
// 00896026  8d442414             lea eax, [esp + 0x14]
// 0089602a  50                   push eax
// 0089602b  8bcb                 mov ecx, ebx
// 0089602d  e8ee4df7ff           call 0x80ae20
// 00896032  6aff                 push -1
// 00896034  6aff                 push -1
// 00896036  8d4c2418             lea ecx, [esp + 0x18]
// 0089603a  51                   push ecx
// 0089603b  ff15e41ba400         call dword ptr [0xa41be4]
// 00896041  8b442454             mov eax, dword ptr [esp + 0x54]
// 00896045  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00896049  bd20000000           mov ebp, 0x20
// 0089604e  99                   cdq 
// 0089604f  2bc2                 sub eax, edx
// 00896051  d1f8                 sar eax, 1
// 00896053  8d48f6               lea ecx, [eax - 0xa]
// 00896056  83f920               cmp ecx, 0x20
// 00896059  7f02                 jg 0x89605d
// 0089605b  8be9                 mov ebp, ecx
// 0089605d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00896061  8b442418             mov eax, dword ptr [esp + 0x18]
// 00896065  03c2                 add eax, edx
// 00896067  99                   cdq 
// 00896068  2bc2                 sub eax, edx
// 0089606a  d1f8                 sar eax, 1
// 0089606c  8bf0                 mov esi, eax
// 0089606e  2bf5                 sub esi, ebp
// 00896070  83f920               cmp ecx, 0x20
// 00896073  7e05                 jle 0x89607a
// 00896075  b920000000           mov ecx, 0x20
// 0089607a  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0089607f  8d2c08               lea ebp, [eax + ecx]
// 00896082  742e                 je 0x8960b2
// 00896084  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00896088  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089608c  6a1f                 push 0x1f
// 0089608e  6a20                 push 0x20
// 00896090  83ec10               sub esp, 0x10
// 00896093  8bc4                 mov eax, esp
// 00896095  8908                 mov dword ptr [eax], ecx
// 00896097  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089609b  895004               mov dword ptr [eax + 4], edx
// 0089609e  8b542434             mov edx, dword ptr [esp + 0x34]
// 008960a2  894808               mov dword ptr [eax + 8], ecx
// 008960a5  53                   push ebx
// 008960a6  8bcf                 mov ecx, edi
// 008960a8  89500c               mov dword ptr [eax + 0xc], edx
// 008960ab  e8d0a5f7ff           call 0x810680
// 008960b0  eb1e                 jmp 0x8960d0
// 008960b2  8b873c050000         mov eax, dword ptr [edi + 0x53c]
// 008960b8  83f8ff               cmp eax, -1
// 008960bb  7506                 jne 0x8960c3
// 008960bd  8b8738050000         mov eax, dword ptr [edi + 0x538]
// 008960c3  50                   push eax
// 008960c4  8d442414             lea eax, [esp + 0x14]
// 008960c8  50                   push eax
// 008960c9  8bcb                 mov ecx, ebx
// 008960cb  e8504df7ff           call 0x80ae20
// 008960d0  3bf5                 cmp esi, ebp
// 008960d2  7d72                 jge 0x896146
// 008960d4  83c603               add esi, 3
// 008960d7  8d4efe               lea ecx, [esi - 2]
// 008960da  894c2420             mov dword ptr [esp + 0x20], ecx
// 008960de  6a14                 push 0x14
// 008960e0  8bcf                 mov ecx, edi
// 008960e2  c744242805000000     mov dword ptr [esp + 0x28], 5
// 008960ea  8974242c             mov dword ptr [esp + 0x2c], esi
// 008960ee  c744243007000000     mov dword ptr [esp + 0x30], 7
// 008960f6  e8b594f7ff           call 0x80f5b0
// 008960fb  50                   push eax
// 008960fc  8d542424             lea edx, [esp + 0x24]
// 00896100  52                   push edx
// 00896101  8bcb                 mov ecx, ebx
// 00896103  e8184df7ff           call 0x80ae20
// 00896108  8d4eff               lea ecx, [esi - 1]
// 0089610b  8d46fd               lea eax, [esi - 3]
// 0089610e  894c2438             mov dword ptr [esp + 0x38], ecx
// 00896112  6a26                 push 0x26
// 00896114  8bcf                 mov ecx, edi
// 00896116  89442434             mov dword ptr [esp + 0x34], eax
// 0089611a  c744243804000000     mov dword ptr [esp + 0x38], 4
// 00896122  c744244006000000     mov dword ptr [esp + 0x40], 6
// 0089612a  e88194f7ff           call 0x80f5b0
// 0089612f  50                   push eax
// 00896130  8d542434             lea edx, [esp + 0x34]
// 00896134  52                   push edx
// 00896135  8bcb                 mov ecx, ebx
// 00896137  e8e44cf7ff           call 0x80ae20
// 0089613c  83c604               add esi, 4
// 0089613f  8d46fd               lea eax, [esi - 3]
// 00896142  3bc5                 cmp eax, ebp
// 00896144  7c91                 jl 0x8960d7
// 00896146  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089614a  5f                   pop edi
// 0089614b  5e                   pop esi
// 0089614c  5d                   pop ebp
// 0089614d  c70000000000         mov dword ptr [eax], 0
// 00896153  c7400409000000       mov dword ptr [eax + 4], 9
// 0089615a  5b                   pop ebx
// 0089615b  83c430               add esp, 0x30
// 0089615e  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawTearOffGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
