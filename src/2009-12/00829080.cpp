// roc 2009-12 00829080  unit: CXTPReportHeader  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829080
//
// 00829080  8b442408             mov eax, dword ptr [esp + 8]
// 00829084  83ec14               sub esp, 0x14
// 00829087  53                   push ebx
// 00829088  56                   push esi
// 00829089  8bd9                 mov ebx, ecx
// 0082908b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082908f  50                   push eax
// 00829090  51                   push ecx
// 00829091  8d7350               lea esi, [ebx + 0x50]
// 00829094  56                   push esi
// 00829095  ff155cca9800         call dword ptr [0x98ca5c]
// 0082909b  85c0                 test eax, eax
// 0082909d  0f8432010000         je 0x8291d5
// 008290a3  55                   push ebp
// 008290a4  57                   push edi
// 008290a5  8bcb                 mov ecx, ebx
// 008290a7  e874f2ffff           call 0x828320
// 008290ac  8b10                 mov edx, dword ptr [eax]
// 008290ae  8bc8                 mov ecx, eax
// 008290b0  8b4268               mov eax, dword ptr [edx + 0x68]
// 008290b3  ffd0                 call eax
// 008290b5  837c243000           cmp dword ptr [esp + 0x30], 0
// 008290ba  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008290bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008290c0  89442410             mov dword ptr [esp + 0x10], eax
// 008290c4  0f8495000000         je 0x82915f
// 008290ca  8b3e                 mov edi, dword ptr [esi]
// 008290cc  8b7354               mov esi, dword ptr [ebx + 0x54]
// 008290cf  83c709               add edi, 9
// 008290d2  83c607               add esi, 7
// 008290d5  e896c7caff           call 0x4d5870
// 008290da  33ed                 xor ebp, ebp
// 008290dc  89442430             mov dword ptr [esp + 0x30], eax
// 008290e0  85c0                 test eax, eax
// 008290e2  7e71                 jle 0x829155
// 008290e4  8b5320               mov edx, dword ptr [ebx + 0x20]
// 008290e7  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 008290ea  55                   push ebp
// 008290eb  e8c0440400           call 0x86d5b0
// 008290f0  85c0                 test eax, eax
// 008290f2  7456                 je 0x82914a
// 008290f4  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 008290fa  2b487c               sub ecx, dword ptr [eax + 0x7c]
// 008290fd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00829101  03cf                 add ecx, edi
// 00829103  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00829107  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082910b  8d4416fd             lea eax, [esi + edx - 3]
// 0082910f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00829113  51                   push ecx
// 00829114  89442424             mov dword ptr [esp + 0x24], eax
// 00829118  52                   push edx
// 00829119  8d44241c             lea eax, [esp + 0x1c]
// 0082911d  50                   push eax
// 0082911e  897c2420             mov dword ptr [esp + 0x20], edi
// 00829122  89742424             mov dword ptr [esp + 0x24], esi
// 00829126  ff155cca9800         call dword ptr [0x98ca5c]
// 0082912c  85c0                 test eax, eax
// 0082912e  7574                 jne 0x8291a4
// 00829130  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00829134  8b442420             mov eax, dword ptr [esp + 0x20]
// 00829138  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0082913c  2bc1                 sub eax, ecx
// 0082913e  99                   cdq 
// 0082913f  2bc2                 sub eax, edx
// 00829141  8bf0                 mov esi, eax
// 00829143  d1fe                 sar esi, 1
// 00829145  83c705               add edi, 5
// 00829148  03f1                 add esi, ecx
// 0082914a  45                   inc ebp
// 0082914b  3b6c2430             cmp ebp, dword ptr [esp + 0x30]
// 0082914f  7c93                 jl 0x8290e4
// 00829151  8b442430             mov eax, dword ptr [esp + 0x30]
// 00829155  5f                   pop edi
// 00829156  5d                   pop ebp
// 00829157  5e                   pop esi
// 00829158  5b                   pop ebx
// 00829159  83c414               add esp, 0x14
// 0082915c  c20c00               ret 0xc
// 0082915f  8b36                 mov esi, dword ptr [esi]
// 00829161  83c609               add esi, 9
// 00829164  e807c7caff           call 0x4d5870
// 00829169  8be8                 mov ebp, eax
// 0082916b  33ff                 xor edi, edi
// 0082916d  896c2430             mov dword ptr [esp + 0x30], ebp
// 00829171  85ed                 test ebp, ebp
// 00829173  7e2f                 jle 0x8291a4
// 00829175  8b5320               mov edx, dword ptr [ebx + 0x20]
// 00829178  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0082917b  57                   push edi
// 0082917c  e82f440400           call 0x86d5b0
// 00829181  85c0                 test eax, eax
// 00829183  741a                 je 0x82919f
// 00829185  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 0082918b  2b487c               sub ecx, dword ptr [eax + 0x7c]
// 0082918e  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00829192  03ce                 add ecx, esi
// 00829194  3be9                 cmp ebp, ecx
// 00829196  7e18                 jle 0x8291b0
// 00829198  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0082919c  8d7105               lea esi, [ecx + 5]
// 0082919f  47                   inc edi
// 008291a0  3bfd                 cmp edi, ebp
// 008291a2  7cd1                 jl 0x829175
// 008291a4  5f                   pop edi
// 008291a5  8bc5                 mov eax, ebp
// 008291a7  5d                   pop ebp
// 008291a8  5e                   pop esi
// 008291a9  5b                   pop ebx
// 008291aa  83c414               add esp, 0x14
// 008291ad  c20c00               ret 0xc
// 008291b0  8d0431               lea eax, [ecx + esi]
// 008291b3  99                   cdq 
// 008291b4  2bc2                 sub eax, edx
// 008291b6  d1f8                 sar eax, 1
// 008291b8  3be8                 cmp ebp, eax
// 008291ba  7f0c                 jg 0x8291c8
// 008291bc  8bc7                 mov eax, edi
// 008291be  5f                   pop edi
// 008291bf  5d                   pop ebp
// 008291c0  5e                   pop esi
// 008291c1  5b                   pop ebx
// 008291c2  83c414               add esp, 0x14
// 008291c5  c20c00               ret 0xc
// 008291c8  8d4701               lea eax, [edi + 1]
// 008291cb  5f                   pop edi
// 008291cc  5d                   pop ebp
// 008291cd  5e                   pop esi
// 008291ce  5b                   pop ebx
// 008291cf  83c414               add esp, 0x14
// 008291d2  c20c00               ret 0xc
// 008291d5  5e                   pop esi
// 008291d6  83c8ff               or eax, 0xffffffff
// 008291d9  5b                   pop ebx
// 008291da  83c414               add esp, 0x14
// 008291dd  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindGroupByColumn@CXTPReportHeader@@UBEHVCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp