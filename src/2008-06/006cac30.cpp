// roc 2008-06 006cac30  unit: CXTPReportControl  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cac30
//
// 006cac30  83ec34               sub esp, 0x34
// 006cac33  56                   push esi
// 006cac34  8bf1                 mov esi, ecx
// 006cac36  57                   push edi
// 006cac37  8dbe44020000         lea edi, [esi + 0x244]
// 006cac3d  8bcf                 mov ecx, edi
// 006cac3f  e80cf40000           call 0x6da050
// 006cac44  85c0                 test eax, eax
// 006cac46  7514                 jne 0x6cac5c
// 006cac48  8b06                 mov eax, dword ptr [esi]
// 006cac4a  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 006cac50  8bce                 mov ecx, esi
// 006cac52  ffd2                 call edx
// 006cac54  5f                   pop edi
// 006cac55  5e                   pop esi
// 006cac56  83c434               add esp, 0x34
// 006cac59  c21000               ret 0x10
// 006cac5c  8b07                 mov eax, dword ptr [edi]
// 006cac5e  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006cac61  53                   push ebx
// 006cac62  55                   push ebp
// 006cac63  6a00                 push 0
// 006cac65  8bcf                 mov ecx, edi
// 006cac67  ffd2                 call edx
// 006cac69  8b2f                 mov ebp, dword ptr [edi]
// 006cac6b  8bcf                 mov ecx, edi
// 006cac6d  8bd8                 mov ebx, eax
// 006cac6f  e8dcf30000           call 0x6da050
// 006cac74  48                   dec eax
// 006cac75  50                   push eax
// 006cac76  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 006cac79  8bcf                 mov ecx, edi
// 006cac7b  ffd0                 call eax
// 006cac7d  89442410             mov dword ptr [esp + 0x10], eax
// 006cac81  85db                 test ebx, ebx
// 006cac83  0f84eb000000         je 0x6cad74
// 006cac89  85c0                 test eax, eax
// 006cac8b  0f84e3000000         je 0x6cad74
// 006cac91  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 006cac97  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 006cac9d  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 006caca3  8b3d2c2d8000         mov edi, dword ptr [0x802d2c]
// 006caca9  894c2414             mov dword ptr [esp + 0x14], ecx
// 006cacad  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 006cacb3  89542418             mov dword ptr [esp + 0x18], edx
// 006cacb7  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 006cacbd  894c2420             mov dword ptr [esp + 0x20], ecx
// 006cacc1  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 006cacc7  8944241c             mov dword ptr [esp + 0x1c], eax
// 006caccb  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 006cacd1  89542424             mov dword ptr [esp + 0x24], edx
// 006cacd5  8b969c000000         mov edx, dword ptr [esi + 0x9c]
// 006cacdb  89442428             mov dword ptr [esp + 0x28], eax
// 006cacdf  894c242c             mov dword ptr [esp + 0x2c], ecx
// 006cace3  83c014               add eax, 0x14
// 006cace6  8bca                 mov ecx, edx
// 006cace8  89542430             mov dword ptr [esp + 0x30], edx
// 006cacec  8b542454             mov edx, dword ptr [esp + 0x54]
// 006cacf0  83e914               sub ecx, 0x14
// 006cacf3  89442420             mov dword ptr [esp + 0x20], eax
// 006cacf7  8b442450             mov eax, dword ptr [esp + 0x50]
// 006cacfb  52                   push edx
// 006cacfc  894c242c             mov dword ptr [esp + 0x2c], ecx
// 006cad00  50                   push eax
// 006cad01  8d4c241c             lea ecx, [esp + 0x1c]
// 006cad05  51                   push ecx
// 006cad06  ffd7                 call edi
// 006cad08  85c0                 test eax, eax
// 006cad0a  7405                 je 0x6cad11
// 006cad0c  83cfff               or edi, 0xffffffff
// 006cad0f  eb1a                 jmp 0x6cad2b
// 006cad11  8b542454             mov edx, dword ptr [esp + 0x54]
// 006cad15  8b442450             mov eax, dword ptr [esp + 0x50]
// 006cad19  52                   push edx
// 006cad1a  50                   push eax
// 006cad1b  8d4c242c             lea ecx, [esp + 0x2c]
// 006cad1f  51                   push ecx
// 006cad20  ffd7                 call edi
// 006cad22  85c0                 test eax, eax
// 006cad24  744e                 je 0x6cad74
// 006cad26  bf01000000           mov edi, 1
// 006cad2b  83be9802000000       cmp dword ptr [esi + 0x298], 0
// 006cad32  7424                 je 0x6cad58
// 006cad34  83ff01               cmp edi, 1
// 006cad37  750d                 jne 0x6cad46
// 006cad39  8b542454             mov edx, dword ptr [esp + 0x54]
// 006cad3d  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 006cad41  83fa03               cmp edx, 3
// 006cad44  eb10                 jmp 0x6cad56
// 006cad46  83ffff               cmp edi, -1
// 006cad49  750d                 jne 0x6cad58
// 006cad4b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006cad4f  2b442454             sub eax, dword ptr [esp + 0x54]
// 006cad53  83f803               cmp eax, 3
// 006cad56  7c1c                 jl 0x6cad74
// 006cad58  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 006cad5e  8b9e08010000         mov ebx, dword ptr [esi + 0x108]
// 006cad64  e8e7f20000           call 0x6da050
// 006cad69  8be8                 mov ebp, eax
// 006cad6b  83ffff               cmp edi, -1
// 006cad6e  751a                 jne 0x6cad8a
// 006cad70  85db                 test ebx, ebx
// 006cad72  7f48                 jg 0x6cadbc
// 006cad74  8b16                 mov edx, dword ptr [esi]
// 006cad76  8b8214020000         mov eax, dword ptr [edx + 0x214]
// 006cad7c  8bce                 mov ecx, esi
// 006cad7e  ffd0                 call eax
// 006cad80  5d                   pop ebp
// 006cad81  5b                   pop ebx
// 006cad82  5f                   pop edi
// 006cad83  5e                   pop esi
// 006cad84  83c434               add esp, 0x34
// 006cad87  c21000               ret 0x10
// 006cad8a  83ff01               cmp edi, 1
// 006cad8d  75e5                 jne 0x6cad74
// 006cad8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cad93  8b11                 mov edx, dword ptr [ecx]
// 006cad95  8b426c               mov eax, dword ptr [edx + 0x6c]
// 006cad98  ffd0                 call eax
// 006cad9a  3bc5                 cmp eax, ebp
// 006cad9c  7c1e                 jl 0x6cadbc
// 006cad9e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cada2  8b11                 mov edx, dword ptr [ecx]
// 006cada4  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 006cadaa  8d442434             lea eax, [esp + 0x34]
// 006cadae  50                   push eax
// 006cadaf  ffd2                 call edx
// 006cadb1  8b400c               mov eax, dword ptr [eax + 0xc]
// 006cadb4  3b869c000000         cmp eax, dword ptr [esi + 0x9c]
// 006cadba  7eb8                 jle 0x6cad74
// 006cadbc  03df                 add ebx, edi
// 006cadbe  53                   push ebx
// 006cadbf  8bce                 mov ecx, esi
// 006cadc1  e82af3ffff           call 0x6ca0f0
// 006cadc6  8b16                 mov edx, dword ptr [esi]
// 006cadc8  8b8210020000         mov eax, dword ptr [edx + 0x210]
// 006cadce  8bce                 mov ecx, esi
// 006cadd0  ffd0                 call eax
// 006cadd2  5d                   pop ebp
// 006cadd3  5b                   pop ebx
// 006cadd4  5f                   pop edi
// 006cadd5  5e                   pop esi
// 006cadd6  83c434               add esp, 0x34
// 006cadd9  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?DoAutoVertScrollIfNeed@CXTPReportControl@@MAEXVCPoint@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
