// roc 2010-06 00838fb0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00838fb0
//
// 00838fb0  83ec30               sub esp, 0x30
// 00838fb3  837c245000           cmp dword ptr [esp + 0x50], 0
// 00838fb8  53                   push ebx
// 00838fb9  55                   push ebp
// 00838fba  56                   push esi
// 00838fbb  57                   push edi
// 00838fbc  8bf9                 mov edi, ecx
// 00838fbe  0f8452010000         je 0x839116
// 00838fc4  8b542458             mov edx, dword ptr [esp + 0x58]
// 00838fc8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00838fcc  2b542450             sub edx, dword ptr [esp + 0x50]
// 00838fd0  b801000000           mov eax, 1
// 00838fd5  41                   inc ecx
// 00838fd6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00838fda  03d0                 add edx, eax
// 00838fdc  6a29                 push 0x29
// 00838fde  8bcf                 mov ecx, edi
// 00838fe0  89442414             mov dword ptr [esp + 0x14], eax
// 00838fe4  89442418             mov dword ptr [esp + 0x18], eax
// 00838fe8  89542420             mov dword ptr [esp + 0x20], edx
// 00838fec  e81f41f7ff           call 0x7ad110
// 00838ff1  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00838ff5  50                   push eax
// 00838ff6  8d442414             lea eax, [esp + 0x14]
// 00838ffa  50                   push eax
// 00838ffb  8bcb                 mov ecx, ebx
// 00838ffd  e83cf7f6ff           call 0x7a873e
// 00839002  6aff                 push -1
// 00839004  6aff                 push -1
// 00839006  8d4c2418             lea ecx, [esp + 0x18]
// 0083900a  51                   push ecx
// 0083900b  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00839011  8b442454             mov eax, dword ptr [esp + 0x54]
// 00839015  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00839019  bd20000000           mov ebp, 0x20
// 0083901e  99                   cdq 
// 0083901f  2bc2                 sub eax, edx
// 00839021  d1f8                 sar eax, 1
// 00839023  8d48f6               lea ecx, [eax - 0xa]
// 00839026  83f920               cmp ecx, 0x20
// 00839029  7f02                 jg 0x83902d
// 0083902b  8be9                 mov ebp, ecx
// 0083902d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00839031  8b442418             mov eax, dword ptr [esp + 0x18]
// 00839035  03c2                 add eax, edx
// 00839037  99                   cdq 
// 00839038  2bc2                 sub eax, edx
// 0083903a  d1f8                 sar eax, 1
// 0083903c  8bf0                 mov esi, eax
// 0083903e  2bf5                 sub esi, ebp
// 00839040  83f920               cmp ecx, 0x20
// 00839043  7e05                 jle 0x83904a
// 00839045  b920000000           mov ecx, 0x20
// 0083904a  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0083904f  8d2c08               lea ebp, [eax + ecx]
// 00839052  742e                 je 0x839082
// 00839054  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00839058  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083905c  6a1f                 push 0x1f
// 0083905e  6a20                 push 0x20
// 00839060  83ec10               sub esp, 0x10
// 00839063  8bc4                 mov eax, esp
// 00839065  8908                 mov dword ptr [eax], ecx
// 00839067  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083906b  895004               mov dword ptr [eax + 4], edx
// 0083906e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00839072  894808               mov dword ptr [eax + 8], ecx
// 00839075  53                   push ebx
// 00839076  8bcf                 mov ecx, edi
// 00839078  89500c               mov dword ptr [eax + 0xc], edx
// 0083907b  e8f051f7ff           call 0x7ae270
// 00839080  eb1e                 jmp 0x8390a0
// 00839082  8b873c050000         mov eax, dword ptr [edi + 0x53c]
// 00839088  83f8ff               cmp eax, -1
// 0083908b  7506                 jne 0x839093
// 0083908d  8b8738050000         mov eax, dword ptr [edi + 0x538]
// 00839093  50                   push eax
// 00839094  8d442414             lea eax, [esp + 0x14]
// 00839098  50                   push eax
// 00839099  8bcb                 mov ecx, ebx
// 0083909b  e89ef6f6ff           call 0x7a873e
// 008390a0  3bf5                 cmp esi, ebp
// 008390a2  7d72                 jge 0x839116
// 008390a4  83c603               add esi, 3
// 008390a7  8d4efe               lea ecx, [esi - 2]
// 008390aa  894c2420             mov dword ptr [esp + 0x20], ecx
// 008390ae  6a14                 push 0x14
// 008390b0  8bcf                 mov ecx, edi
// 008390b2  c744242805000000     mov dword ptr [esp + 0x28], 5
// 008390ba  8974242c             mov dword ptr [esp + 0x2c], esi
// 008390be  c744243007000000     mov dword ptr [esp + 0x30], 7
// 008390c6  e84540f7ff           call 0x7ad110
// 008390cb  50                   push eax
// 008390cc  8d542424             lea edx, [esp + 0x24]
// 008390d0  52                   push edx
// 008390d1  8bcb                 mov ecx, ebx
// 008390d3  e866f6f6ff           call 0x7a873e
// 008390d8  8d4eff               lea ecx, [esi - 1]
// 008390db  8d46fd               lea eax, [esi - 3]
// 008390de  894c2438             mov dword ptr [esp + 0x38], ecx
// 008390e2  6a26                 push 0x26
// 008390e4  8bcf                 mov ecx, edi
// 008390e6  89442434             mov dword ptr [esp + 0x34], eax
// 008390ea  c744243804000000     mov dword ptr [esp + 0x38], 4
// 008390f2  c744244006000000     mov dword ptr [esp + 0x40], 6
// 008390fa  e81140f7ff           call 0x7ad110
// 008390ff  50                   push eax
// 00839100  8d542434             lea edx, [esp + 0x34]
// 00839104  52                   push edx
// 00839105  8bcb                 mov ecx, ebx
// 00839107  e832f6f6ff           call 0x7a873e
// 0083910c  83c604               add esi, 4
// 0083910f  8d46fd               lea eax, [esi - 3]
// 00839112  3bc5                 cmp eax, ebp
// 00839114  7c91                 jl 0x8390a7
// 00839116  8b442444             mov eax, dword ptr [esp + 0x44]
// 0083911a  5f                   pop edi
// 0083911b  5e                   pop esi
// 0083911c  5d                   pop ebp
// 0083911d  c70000000000         mov dword ptr [eax], 0
// 00839123  c7400409000000       mov dword ptr [eax + 4], 9
// 0083912a  5b                   pop ebx
// 0083912b  83c430               add esp, 0x30
// 0083912e  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawTearOffGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
