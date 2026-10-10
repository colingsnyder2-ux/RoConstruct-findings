// roc 2008-06 00753280  unit: CXTPReportTip  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753280
//
// 00753280  8b442404             mov eax, dword ptr [esp + 4]
// 00753284  83e800               sub eax, 0
// 00753287  56                   push esi
// 00753288  57                   push edi
// 00753289  8bf1                 mov esi, ecx
// 0075328b  0f84ba000000         je 0x75334b
// 00753291  83e801               sub eax, 1
// 00753294  745f                 je 0x7532f5
// 00753296  83e801               sub eax, 1
// 00753299  0f8528010000         jne 0x7533c7
// 0075329f  8b4620               mov eax, dword ptr [esi + 0x20]
// 007532a2  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 007532a8  85c9                 test ecx, ecx
// 007532aa  0f8417010000         je 0x7533c7
// 007532b0  e89b6df8ff           call 0x6da050
// 007532b5  85c0                 test eax, eax
// 007532b7  0f8e0a010000         jle 0x7533c7
// 007532bd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007532c0  8b91fc000000         mov edx, dword ptr [ecx + 0xfc]
// 007532c6  8b3a                 mov edi, dword ptr [edx]
// 007532c8  8bc1                 mov eax, ecx
// 007532ca  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 007532d0  6a00                 push 0
// 007532d2  e8796df8ff           call 0x6da050
// 007532d7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007532da  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 007532e0  8b575c               mov edx, dword ptr [edi + 0x5c]
// 007532e3  48                   dec eax
// 007532e4  50                   push eax
// 007532e5  ffd2                 call edx
// 007532e7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007532ea  50                   push eax
// 007532eb  e860f1f7ff           call 0x6d2450
// 007532f0  5f                   pop edi
// 007532f1  5e                   pop esi
// 007532f2  c20400               ret 4
// 007532f5  8b4620               mov eax, dword ptr [esi + 0x20]
// 007532f8  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 007532fe  85c9                 test ecx, ecx
// 00753300  0f84c1000000         je 0x7533c7
// 00753306  e8456df8ff           call 0x6da050
// 0075330b  85c0                 test eax, eax
// 0075330d  0f8eb4000000         jle 0x7533c7
// 00753313  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753316  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 0075331c  8b3a                 mov edi, dword ptr [edx]
// 0075331e  8bc1                 mov eax, ecx
// 00753320  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00753326  6a00                 push 0
// 00753328  e8236df8ff           call 0x6da050
// 0075332d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753330  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00753336  8b575c               mov edx, dword ptr [edi + 0x5c]
// 00753339  48                   dec eax
// 0075333a  50                   push eax
// 0075333b  ffd2                 call edx
// 0075333d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753340  50                   push eax
// 00753341  e80af1f7ff           call 0x6d2450
// 00753346  5f                   pop edi
// 00753347  5e                   pop esi
// 00753348  c20400               ret 4
// 0075334b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075334e  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 00753354  6a01                 push 1
// 00753356  50                   push eax
// 00753357  e8746ff7ff           call 0x6ca2d0
// 0075335c  8bf8                 mov edi, eax
// 0075335e  83ffff               cmp edi, -1
// 00753361  7e64                 jle 0x7533c7
// 00753363  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753366  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 0075336c  e8df6cf8ff           call 0x6da050
// 00753371  85c0                 test eax, eax
// 00753373  7e52                 jle 0x7533c7
// 00753375  8b5620               mov edx, dword ptr [esi + 0x20]
// 00753378  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 0075337e  e8cd6cf8ff           call 0x6da050
// 00753383  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753386  8b9108010000         mov edx, dword ptr [ecx + 0x108]
// 0075338c  48                   dec eax
// 0075338d  03d7                 add edx, edi
// 0075338f  3bd0                 cmp edx, eax
// 00753391  7d0c                 jge 0x75339f
// 00753393  8bc1                 mov eax, ecx
// 00753395  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 0075339b  03c7                 add eax, edi
// 0075339d  eb0c                 jmp 0x7533ab
// 0075339f  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 007533a5  e8a66cf8ff           call 0x6da050
// 007533aa  48                   dec eax
// 007533ab  8b5620               mov edx, dword ptr [esi + 0x20]
// 007533ae  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 007533b4  8b11                 mov edx, dword ptr [ecx]
// 007533b6  6a00                 push 0
// 007533b8  50                   push eax
// 007533b9  8b425c               mov eax, dword ptr [edx + 0x5c]
// 007533bc  ffd0                 call eax
// 007533be  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007533c1  50                   push eax
// 007533c2  e889f0f7ff           call 0x6d2450
// 007533c7  5f                   pop edi
// 007533c8  5e                   pop esi
// 007533c9  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportNavigator.cpp (function ?MoveLastVisibleRow@CXTPReportNavigator@@IAEXW4XTPReportRowType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
