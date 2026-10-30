// roc 2010-06 007e10b0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e10b0
//
// 007e10b0  6aff                 push -1
// 007e10b2  6898fd9a00           push 0x9afd98
// 007e10b7  64a100000000         mov eax, dword ptr fs:[0]
// 007e10bd  50                   push eax
// 007e10be  83ec10               sub esp, 0x10
// 007e10c1  53                   push ebx
// 007e10c2  55                   push ebp
// 007e10c3  56                   push esi
// 007e10c4  57                   push edi
// 007e10c5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e10ca  33c4                 xor eax, esp
// 007e10cc  50                   push eax
// 007e10cd  8d442424             lea eax, [esp + 0x24]
// 007e10d1  64a300000000         mov dword ptr fs:[0], eax
// 007e10d7  8bf9                 mov edi, ecx
// 007e10d9  897c2414             mov dword ptr [esp + 0x14], edi
// 007e10dd  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007e10e1  8b03                 mov eax, dword ptr [ebx]
// 007e10e3  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007e10e9  684893a500           push 0xa59348
// 007e10ee  8bcb                 mov ecx, ebx
// 007e10f0  ffd2                 call edx
// 007e10f2  8bf0                 mov esi, eax
// 007e10f4  8974241c             mov dword ptr [esp + 0x1c], esi
// 007e10f8  33ed                 xor ebp, ebp
// 007e10fa  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007e10fe  8bcf                 mov ecx, edi
// 007e1100  396b28               cmp dword ptr [ebx + 0x28], ebp
// 007e1103  0f85aa000000         jne 0x7e11b3
// 007e1109  e872060000           call 0x7e1780
// 007e110e  8bd8                 mov ebx, eax
// 007e1110  8b06                 mov eax, dword ptr [esi]
// 007e1112  8b5004               mov edx, dword ptr [eax + 4]
// 007e1115  6a01                 push 1
// 007e1117  53                   push ebx
// 007e1118  8bce                 mov ecx, esi
// 007e111a  ffd2                 call edx
// 007e111c  3bdd                 cmp ebx, ebp
// 007e111e  89442418             mov dword ptr [esp + 0x18], eax
// 007e1122  7f30                 jg 0x7e1154
// 007e1124  8b06                 mov eax, dword ptr [esi]
// 007e1126  8b10                 mov edx, dword ptr [eax]
// 007e1128  6a01                 push 1
// 007e112a  8bce                 mov ecx, esi
// 007e112c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 007e1134  ffd2                 call edx
// 007e1136  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e113a  64890d00000000       mov dword ptr fs:[0], ecx
// 007e1141  59                   pop ecx
// 007e1142  5f                   pop edi
// 007e1143  5e                   pop esi
// 007e1144  5d                   pop ebp
// 007e1145  5b                   pop ebx
// 007e1146  83c41c               add esp, 0x1c
// 007e1149  c20400               ret 4
// 007e114c  8d642400             lea esp, [esp]
// 007e1150  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007e1154  55                   push ebp
// 007e1155  8bcf                 mov ecx, edi
// 007e1157  e854fbffff           call 0x7e0cb0
// 007e115c  89442434             mov dword ptr [esp + 0x34], eax
// 007e1160  8b06                 mov eax, dword ptr [esi]
// 007e1162  8b5008               mov edx, dword ptr [eax + 8]
// 007e1165  8d4c2418             lea ecx, [esp + 0x18]
// 007e1169  51                   push ecx
// 007e116a  8bce                 mov ecx, esi
// 007e116c  ffd2                 call edx
// 007e116e  8bf8                 mov edi, eax
// 007e1170  897c2420             mov dword ptr [esp + 0x20], edi
// 007e1174  c644242c01           mov byte ptr [esp + 0x2c], 1
// 007e1179  e802dcffff           call 0x7ded80
// 007e117e  8b17                 mov edx, dword ptr [edi]
// 007e1180  8b5264               mov edx, dword ptr [edx + 0x64]
// 007e1183  50                   push eax
// 007e1184  8d442438             lea eax, [esp + 0x38]
// 007e1188  50                   push eax
// 007e1189  8bcf                 mov ecx, edi
// 007e118b  ffd2                 call edx
// 007e118d  85c0                 test eax, eax
// 007e118f  740c                 je 0x7e119d
// 007e1191  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007e1195  8b01                 mov eax, dword ptr [ecx]
// 007e1197  8b5060               mov edx, dword ptr [eax + 0x60]
// 007e119a  57                   push edi
// 007e119b  ffd2                 call edx
// 007e119d  8bcf                 mov ecx, edi
// 007e119f  c644242c00           mov byte ptr [esp + 0x2c], 0
// 007e11a4  e8736dfcff           call 0x7a7f1c
// 007e11a9  45                   inc ebp
// 007e11aa  3beb                 cmp ebp, ebx
// 007e11ac  7ca2                 jl 0x7e1150
// 007e11ae  e971ffffff           jmp 0x7e1124
// 007e11b3  e828faffff           call 0x7e0be0
// 007e11b8  8b06                 mov eax, dword ptr [esi]
// 007e11ba  8b5004               mov edx, dword ptr [eax + 4]
// 007e11bd  6a01                 push 1
// 007e11bf  55                   push ebp
// 007e11c0  8bce                 mov ecx, esi
// 007e11c2  ffd2                 call edx
// 007e11c4  89442418             mov dword ptr [esp + 0x18], eax
// 007e11c8  3bc5                 cmp eax, ebp
// 007e11ca  0f8454ffffff         je 0x7e1124
// 007e11d0  b302                 mov bl, 2
// 007e11d2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007e11da  8b06                 mov eax, dword ptr [esi]
// 007e11dc  8b5008               mov edx, dword ptr [eax + 8]
// 007e11df  8d4c2418             lea ecx, [esp + 0x18]
// 007e11e3  51                   push ecx
// 007e11e4  8bce                 mov ecx, esi
// 007e11e6  ffd2                 call edx
// 007e11e8  8bf8                 mov edi, eax
// 007e11ea  897c2420             mov dword ptr [esp + 0x20], edi
// 007e11ee  885c242c             mov byte ptr [esp + 0x2c], bl
// 007e11f2  e889dbffff           call 0x7ded80
// 007e11f7  8b17                 mov edx, dword ptr [edi]
// 007e11f9  8b5264               mov edx, dword ptr [edx + 0x64]
// 007e11fc  50                   push eax
// 007e11fd  8d442438             lea eax, [esp + 0x38]
// 007e1201  50                   push eax
// 007e1202  8bcf                 mov ecx, edi
// 007e1204  ffd2                 call edx
// 007e1206  85c0                 test eax, eax
// 007e1208  740c                 je 0x7e1216
// 007e120a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007e120e  8b01                 mov eax, dword ptr [ecx]
// 007e1210  8b5060               mov edx, dword ptr [eax + 0x60]
// 007e1213  57                   push edi
// 007e1214  ffd2                 call edx
// 007e1216  8b442434             mov eax, dword ptr [esp + 0x34]
// 007e121a  85c0                 test eax, eax
// 007e121c  7422                 je 0x7e1240
// 007e121e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e1222  50                   push eax
// 007e1223  e808feffff           call 0x7e1030
// 007e1228  8bcf                 mov ecx, edi
// 007e122a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 007e122f  e8e86cfcff           call 0x7a7f1c
// 007e1234  837c241800           cmp dword ptr [esp + 0x18], 0
// 007e1239  7597                 jne 0x7e11d2
// 007e123b  e9e4feffff           jmp 0x7e1124
// 007e1240  6a00                 push 0
// 007e1242  6a06                 push 6
// 007e1244  e8c772fcff           call 0x7a8510
// copied from an identical function in another client (function ?_DoPropExchange@CXTPReportRecords@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp