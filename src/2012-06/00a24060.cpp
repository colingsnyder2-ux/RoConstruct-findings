// roc 2012-06 00a24060  unit: CXTPReportPaintManager  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a24060
//
// 00a24060  83ec08               sub esp, 8
// 00a24063  56                   push esi
// 00a24064  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a24068  85f6                 test esi, esi
// 00a2406a  0f840a010000         je 0xa2417a
// 00a24070  8b06                 mov eax, dword ptr [esi]
// 00a24072  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00a24078  8bce                 mov ecx, esi
// 00a2407a  ffd2                 call edx
// 00a2407c  33c9                 xor ecx, ecx
// 00a2407e  89442408             mov dword ptr [esp + 8], eax
// 00a24082  894c2404             mov dword ptr [esp + 4], ecx
// 00a24086  85c0                 test eax, eax
// 00a24088  0f8eec000000         jle 0xa2417a
// 00a2408e  53                   push ebx
// 00a2408f  55                   push ebp
// 00a24090  57                   push edi
// 00a24091  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a24095  8b06                 mov eax, dword ptr [esi]
// 00a24097  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 00a2409d  51                   push ecx
// 00a2409e  8bce                 mov ecx, esi
// 00a240a0  ffd2                 call edx
// 00a240a2  8bd8                 mov ebx, eax
// 00a240a4  85db                 test ebx, ebx
// 00a240a6  0f84b8000000         je 0xa24164
// 00a240ac  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00a240af  8bcf                 mov ecx, edi
// 00a240b1  ff155846b200         call dword ptr [0xb24658]
// 00a240b7  48                   dec eax
// 00a240b8  3bf0                 cmp esi, eax
// 00a240ba  7d04                 jge 0xa240c0
// 00a240bc  8bc6                 mov eax, esi
// 00a240be  eb09                 jmp 0xa240c9
// 00a240c0  8bcf                 mov ecx, edi
// 00a240c2  ff155846b200         call dword ptr [0xb24658]
// 00a240c8  48                   dec eax
// 00a240c9  85c0                 test eax, eax
// 00a240cb  7d04                 jge 0xa240d1
// 00a240cd  33f6                 xor esi, esi
// 00a240cf  eb1b                 jmp 0xa240ec
// 00a240d1  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00a240d4  8bcf                 mov ecx, edi
// 00a240d6  ff155846b200         call dword ptr [0xb24658]
// 00a240dc  48                   dec eax
// 00a240dd  3bf0                 cmp esi, eax
// 00a240df  7c0b                 jl 0xa240ec
// 00a240e1  8bcf                 mov ecx, edi
// 00a240e3  ff155846b200         call dword ptr [0xb24658]
// 00a240e9  8bf0                 mov esi, eax
// 00a240eb  4e                   dec esi
// 00a240ec  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00a240ef  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00a240f2  8d2c08               lea ebp, [eax + ecx]
// 00a240f5  8bcf                 mov ecx, edi
// 00a240f7  ff155846b200         call dword ptr [0xb24658]
// 00a240fd  3be8                 cmp ebp, eax
// 00a240ff  7d04                 jge 0xa24105
// 00a24101  8bc5                 mov eax, ebp
// 00a24103  eb08                 jmp 0xa2410d
// 00a24105  8bcf                 mov ecx, edi
// 00a24107  ff155846b200         call dword ptr [0xb24658]
// 00a2410d  85c0                 test eax, eax
// 00a2410f  7d04                 jge 0xa24115
// 00a24111  33db                 xor ebx, ebx
// 00a24113  eb1f                 jmp 0xa24134
// 00a24115  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00a24118  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00a2411b  8bcf                 mov ecx, edi
// 00a2411d  8d1c02               lea ebx, [edx + eax]
// 00a24120  ff155846b200         call dword ptr [0xb24658]
// 00a24126  3bd8                 cmp ebx, eax
// 00a24128  7c0a                 jl 0xa24134
// 00a2412a  8bcf                 mov ecx, edi
// 00a2412c  ff155846b200         call dword ptr [0xb24658]
// 00a24132  8bd8                 mov ebx, eax
// 00a24134  3bf3                 cmp esi, ebx
// 00a24136  7d28                 jge 0xa24160
// 00a24138  eb06                 jmp 0xa24140
// 00a2413a  8d9b00000000         lea ebx, [ebx]
// 00a24140  56                   push esi
// 00a24141  8bcf                 mov ecx, edi
// 00a24143  ff151849b200         call dword ptr [0xb24918]
// 00a24149  3c20                 cmp al, 0x20
// 00a2414b  750e                 jne 0xa2415b
// 00a2414d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a24151  51                   push ecx
// 00a24152  56                   push esi
// 00a24153  8bcf                 mov ecx, edi
// 00a24155  ff15f84cb200         call dword ptr [0xb24cf8]
// 00a2415b  46                   inc esi
// 00a2415c  3bf3                 cmp esi, ebx
// 00a2415e  7ce0                 jl 0xa24140
// 00a24160  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a24164  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a24168  41                   inc ecx
// 00a24169  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00a2416d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a24171  0f8c1effffff         jl 0xa24095
// 00a24177  5f                   pop edi
// 00a24178  5d                   pop ebp
// 00a24179  5b                   pop ebx
// 00a2417a  5e                   pop esi
// 00a2417b  83c408               add esp, 8
// 00a2417e  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReplaceInHyperLinks@CXTPReportPaintManager@@UAEXPAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp