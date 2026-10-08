// roc 2012-06 009fec40  unit: XTPPaintThemes::CXTPDefaultTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fec40
//
// 009fec40  837c242400           cmp dword ptr [esp + 0x24], 0
// 009fec45  53                   push ebx
// 009fec46  55                   push ebp
// 009fec47  56                   push esi
// 009fec48  57                   push edi
// 009fec49  8bf1                 mov esi, ecx
// 009fec4b  0f85e9000000         jne 0x9fed3a
// 009fec51  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 009fec58  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009fec5c  7574                 jne 0x9fecd2
// 009fec5e  8bcf                 mov ecx, edi
// 009fec60  e8ab8df9ff           call 0x997a10
// 009fec65  85c0                 test eax, eax
// 009fec67  7569                 jne 0x9fecd2
// 009fec69  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009fec6d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009fec71  6a14                 push 0x14
// 009fec73  8bce                 mov ecx, esi
// 009fec75  43                   inc ebx
// 009fec76  45                   inc ebp
// 009fec77  e8148cf8ff           call 0x987890
// 009fec7c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009fec80  50                   push eax
// 009fec81  8b442428             mov eax, dword ptr [esp + 0x28]
// 009fec85  50                   push eax
// 009fec86  51                   push ecx
// 009fec87  8bcf                 mov ecx, edi
// 009fec89  e8a28df9ff           call 0x997a30
// 009fec8e  50                   push eax
// 009fec8f  55                   push ebp
// 009fec90  53                   push ebx
// 009fec91  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 009fec95  53                   push ebx
// 009fec96  8bcf                 mov ecx, edi
// 009fec98  e87304faff           call 0x99f110
// 009fec9d  6a10                 push 0x10
// 009fec9f  8bce                 mov ecx, esi
// 009feca1  e8ea8bf8ff           call 0x987890
// 009feca6  8b542424             mov edx, dword ptr [esp + 0x24]
// 009fecaa  50                   push eax
// 009fecab  8b442424             mov eax, dword ptr [esp + 0x24]
// 009fecaf  52                   push edx
// 009fecb0  50                   push eax
// 009fecb1  8bcf                 mov ecx, edi
// 009fecb3  e8788df9ff           call 0x997a30
// 009fecb8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009fecbc  8b542424             mov edx, dword ptr [esp + 0x24]
// 009fecc0  50                   push eax
// 009fecc1  51                   push ecx
// 009fecc2  52                   push edx
// 009fecc3  53                   push ebx
// 009fecc4  8bcf                 mov ecx, edi
// 009fecc6  e84504faff           call 0x99f110
// 009feccb  5f                   pop edi
// 009feccc  5e                   pop esi
// 009feccd  5d                   pop ebp
// 009fecce  5b                   pop ebx
// 009feccf  c23000               ret 0x30
// 009fecd2  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 009fecd9  742e                 je 0x9fed09
// 009fecdb  8bcf                 mov ecx, edi
// 009fecdd  e84ea7f9ff           call 0x999430
// 009fece2  85c0                 test eax, eax
// 009fece4  7523                 jne 0x9fed09
// 009fece6  8b4640               mov eax, dword ptr [esi + 0x40]
// 009fece9  83f8ff               cmp eax, -1
// 009fecec  7505                 jne 0x9fecf3
// 009fecee  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 009fecf1  eb02                 jmp 0x9fecf5
// 009fecf3  8bc8                 mov ecx, eax
// 009fecf5  8b4634               mov eax, dword ptr [esi + 0x34]
// 009fecf8  83f8ff               cmp eax, -1
// 009fecfb  7503                 jne 0x9fed00
// 009fecfd  8b4630               mov eax, dword ptr [esi + 0x30]
// 009fed00  51                   push ecx
// 009fed01  50                   push eax
// 009fed02  8bcf                 mov ecx, edi
// 009fed04  e8b7ddf9ff           call 0x99cac0
// 009fed09  8b442424             mov eax, dword ptr [esp + 0x24]
// 009fed0d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009fed11  50                   push eax
// 009fed12  51                   push ecx
// 009fed13  6a01                 push 1
// 009fed15  8bcf                 mov ecx, edi
// 009fed17  e844f9f9ff           call 0x99e660
// 009fed1c  8b542424             mov edx, dword ptr [esp + 0x24]
// 009fed20  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009fed24  50                   push eax
// 009fed25  8b442424             mov eax, dword ptr [esp + 0x24]
// 009fed29  52                   push edx
// 009fed2a  50                   push eax
// 009fed2b  51                   push ecx
// 009fed2c  8bcf                 mov ecx, edi
// 009fed2e  e86d03faff           call 0x99f0a0
// 009fed33  5f                   pop edi
// 009fed34  5e                   pop esi
// 009fed35  5d                   pop ebp
// 009fed36  5b                   pop ebx
// 009fed37  c23000               ret 0x30
// 009fed3a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009fed3e  8b442430             mov eax, dword ptr [esp + 0x30]
// 009fed42  83f902               cmp ecx, 2
// 009fed45  0f85b8000000         jne 0x9fee03
// 009fed4b  85c0                 test eax, eax
// 009fed4d  0f85b0000000         jne 0x9fee03
// 009fed53  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009fed57  8bcf                 mov ecx, edi
// 009fed59  e8b28cf9ff           call 0x997a10
// 009fed5e  85c0                 test eax, eax
// 009fed60  7539                 jne 0x9fed9b
// 009fed62  6a10                 push 0x10
// 009fed64  8bce                 mov ecx, esi
// 009fed66  e8258bf8ff           call 0x987890
// 009fed6b  8b542424             mov edx, dword ptr [esp + 0x24]
// 009fed6f  50                   push eax
// 009fed70  8b442424             mov eax, dword ptr [esp + 0x24]
// 009fed74  52                   push edx
// 009fed75  50                   push eax
// 009fed76  8bcf                 mov ecx, edi
// 009fed78  e873a6f9ff           call 0x9993f0
// 009fed7d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009fed81  8b542424             mov edx, dword ptr [esp + 0x24]
// 009fed85  50                   push eax
// 009fed86  8b442424             mov eax, dword ptr [esp + 0x24]
// 009fed8a  51                   push ecx
// 009fed8b  52                   push edx
// 009fed8c  50                   push eax
// 009fed8d  8bcf                 mov ecx, edi
// 009fed8f  e87c03faff           call 0x99f110
// 009fed94  5f                   pop edi
// 009fed95  5e                   pop esi
// 009fed96  5d                   pop ebp
// 009fed97  5b                   pop ebx
// 009fed98  c23000               ret 0x30
// 009fed9b  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 009feda2  742e                 je 0x9fedd2
// 009feda4  8bcf                 mov ecx, edi
// 009feda6  e885a6f9ff           call 0x999430
// 009fedab  85c0                 test eax, eax
// 009fedad  7523                 jne 0x9fedd2
// 009fedaf  8b4640               mov eax, dword ptr [esi + 0x40]
// 009fedb2  83f8ff               cmp eax, -1
// 009fedb5  7505                 jne 0x9fedbc
// 009fedb7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 009fedba  eb02                 jmp 0x9fedbe
// 009fedbc  8bc8                 mov ecx, eax
// 009fedbe  8b4634               mov eax, dword ptr [esi + 0x34]
// 009fedc1  83f8ff               cmp eax, -1
// 009fedc4  7503                 jne 0x9fedc9
// 009fedc6  8b4630               mov eax, dword ptr [esi + 0x30]
// 009fedc9  51                   push ecx
// 009fedca  50                   push eax
// 009fedcb  8bcf                 mov ecx, edi
// 009fedcd  e8eedcf9ff           call 0x99cac0
// 009fedd2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009fedd6  8b542420             mov edx, dword ptr [esp + 0x20]
// 009fedda  51                   push ecx
// 009feddb  52                   push edx
// 009feddc  6a01                 push 1
// 009fedde  8bcf                 mov ecx, edi
// 009fede0  e87bf8f9ff           call 0x99e660
// 009fede5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009fede9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009feded  50                   push eax
// 009fedee  8b442428             mov eax, dword ptr [esp + 0x28]
// 009fedf2  50                   push eax
// 009fedf3  51                   push ecx
// 009fedf4  8bcf                 mov ecx, edi
// 009fedf6  52                   push edx
// 009fedf7  e8a402faff           call 0x99f0a0
// 009fedfc  5f                   pop edi
// 009fedfd  5e                   pop esi
// 009fedfe  5d                   pop ebp
// 009fedff  5b                   pop ebx
// 009fee00  c23000               ret 0x30
// 009fee03  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 009fee08  0f850b010000         jne 0x9fef19
// 009fee0e  85c9                 test ecx, ecx
// 009fee10  0f8507010000         jne 0x9fef1d
// 009fee16  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 009fee1a  7520                 jne 0x9fee3c
// 009fee1c  85c0                 test eax, eax
// 009fee1e  7525                 jne 0x9fee45
// 009fee20  398648010000         cmp dword ptr [esi + 0x148], eax
// 009fee26  8b742428             mov esi, dword ptr [esp + 0x28]
// 009fee2a  8bce                 mov ecx, esi
// 009fee2c  0f84fe000000         je 0x9fef30
// 009fee32  e8d9f7f9ff           call 0x99e610
// 009fee37  e9f9000000           jmp 0x9fef35
// 009fee3c  85c0                 test eax, eax
// 009fee3e  740e                 je 0x9fee4e
// 009fee40  e99f000000           jmp 0x9feee4
// 009fee45  83f801               cmp eax, 1
// 009fee48  0f8589000000         jne 0x9feed7
// 009fee4e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 009fee55  8b742428             mov esi, dword ptr [esp + 0x28]
// 009fee59  7469                 je 0x9feec4
// 009fee5b  8bce                 mov ecx, esi
// 009fee5d  e8def7f9ff           call 0x99e640
// 009fee62  8bc8                 mov ecx, eax
// 009fee64  e8b7a2f9ff           call 0x999120
// 009fee69  85c0                 test eax, eax
// 009fee6b  7557                 jne 0x9feec4
// 009fee6d  8b442424             mov eax, dword ptr [esp + 0x24]
// 009fee71  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009fee75  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009fee79  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 009fee7d  50                   push eax
// 009fee7e  51                   push ecx
// 009fee7f  8bce                 mov ecx, esi
// 009fee81  47                   inc edi
// 009fee82  43                   inc ebx
// 009fee83  e8b8f7f9ff           call 0x99e640
// 009fee88  50                   push eax
// 009fee89  53                   push ebx
// 009fee8a  57                   push edi
// 009fee8b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009fee8f  57                   push edi
// 009fee90  8bce                 mov ecx, esi
// 009fee92  e80902faff           call 0x99f0a0
// 009fee97  8b542424             mov edx, dword ptr [esp + 0x24]
// 009fee9b  8b442420             mov eax, dword ptr [esp + 0x20]
// 009fee9f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009feea3  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009feea7  52                   push edx
// 009feea8  50                   push eax
// 009feea9  8bce                 mov ecx, esi
// 009feeab  4b                   dec ebx
// 009feeac  4d                   dec ebp
// 009feead  e81ea5f9ff           call 0x9993d0
// 009feeb2  50                   push eax
// 009feeb3  55                   push ebp
// 009feeb4  53                   push ebx
// 009feeb5  57                   push edi
// 009feeb6  8bce                 mov ecx, esi
// 009feeb8  e8e301faff           call 0x99f0a0
// 009feebd  5f                   pop edi
// 009feebe  5e                   pop esi
// 009feebf  5d                   pop ebp
// 009feec0  5b                   pop ebx
// 009feec1  c23000               ret 0x30
// 009feec4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009feec8  8b542420             mov edx, dword ptr [esp + 0x20]
// 009feecc  51                   push ecx
// 009feecd  52                   push edx
// 009feece  8bce                 mov ecx, esi
// 009feed0  e8fba4f9ff           call 0x9993d0
// 009feed5  eb68                 jmp 0x9fef3f
// 009feed7  50                   push eax
// 009feed8  e81356f8ff           call 0x9844f0
// 009feedd  83c404               add esp, 4
// 009feee0  85c0                 test eax, eax
// 009feee2  7472                 je 0x9fef56
// 009feee4  8b442424             mov eax, dword ptr [esp + 0x24]
// 009feee8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009feeec  8b742418             mov esi, dword ptr [esp + 0x18]
// 009feef0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009feef4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009feef8  50                   push eax
// 009feef9  51                   push ecx
// 009feefa  8bcb                 mov ecx, ebx
// 009feefc  46                   inc esi
// 009feefd  47                   inc edi
// 009feefe  e80da5f9ff           call 0x999410
// 009fef03  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009fef07  50                   push eax
// 009fef08  57                   push edi
// 009fef09  56                   push esi
// 009fef0a  8bcb                 mov ecx, ebx
// 009fef0c  52                   push edx
// 009fef0d  e88e01faff           call 0x99f0a0
// 009fef12  5f                   pop edi
// 009fef13  5e                   pop esi
// 009fef14  5d                   pop ebp
// 009fef15  5b                   pop ebx
// 009fef16  c23000               ret 0x30
// 009fef19  85c9                 test ecx, ecx
// 009fef1b  740d                 je 0x9fef2a
// 009fef1d  8b742428             mov esi, dword ptr [esp + 0x28]
// 009fef21  8bce                 mov ecx, esi
// 009fef23  e8c8a4f9ff           call 0x9993f0
// 009fef28  eb0b                 jmp 0x9fef35
// 009fef2a  8b742428             mov esi, dword ptr [esp + 0x28]
// 009fef2e  8bce                 mov ecx, esi
// 009fef30  e8fb8af9ff           call 0x997a30
// 009fef35  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009fef39  8b542420             mov edx, dword ptr [esp + 0x20]
// 009fef3d  51                   push ecx
// 009fef3e  52                   push edx
// 009fef3f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009fef43  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009fef47  50                   push eax
// 009fef48  8b442428             mov eax, dword ptr [esp + 0x28]
// 009fef4c  50                   push eax
// 009fef4d  51                   push ecx
// 009fef4e  8bce                 mov ecx, esi
// 009fef50  52                   push edx
// 009fef51  e84a01faff           call 0x99f0a0
// 009fef56  5f                   pop edi
// 009fef57  5e                   pop esi
// 009fef58  5d                   pop ebp
// 009fef59  5b                   pop ebx
// 009fef5a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawImage@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
