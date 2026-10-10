// roc 2008-06 006c9190  unit: CXTPReportControl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9190
//
// 006c9190  51                   push ecx
// 006c9191  56                   push esi
// 006c9192  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c9196  8b06                 mov eax, dword ptr [esi]
// 006c9198  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 006c919e  894c2404             mov dword ptr [esp + 4], ecx
// 006c91a2  8bce                 mov ecx, esi
// 006c91a4  ffd2                 call edx
// 006c91a6  85c0                 test eax, eax
// 006c91a8  7505                 jne 0x6c91af
// 006c91aa  5e                   pop esi
// 006c91ab  59                   pop ecx
// 006c91ac  c20800               ret 8
// 006c91af  8b06                 mov eax, dword ptr [esi]
// 006c91b1  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006c91b7  53                   push ebx
// 006c91b8  55                   push ebp
// 006c91b9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006c91bd  8bce                 mov ecx, esi
// 006c91bf  896c2418             mov dword ptr [esp + 0x18], ebp
// 006c91c3  33db                 xor ebx, ebx
// 006c91c5  ffd2                 call edx
// 006c91c7  8bc8                 mov ecx, eax
// 006c91c9  e8820e0100           call 0x6da050
// 006c91ce  85c0                 test eax, eax
// 006c91d0  7e66                 jle 0x6c9238
// 006c91d2  57                   push edi
// 006c91d3  8b06                 mov eax, dword ptr [esi]
// 006c91d5  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006c91db  8bce                 mov ecx, esi
// 006c91dd  ffd2                 call edx
// 006c91df  8b10                 mov edx, dword ptr [eax]
// 006c91e1  8bc8                 mov ecx, eax
// 006c91e3  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006c91e6  53                   push ebx
// 006c91e7  ffd0                 call eax
// 006c91e9  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 006c91ec  8bf8                 mov edi, eax
// 006c91ee  41                   inc ecx
// 006c91ef  894f54               mov dword ptr [edi + 0x54], ecx
// 006c91f2  8b16                 mov edx, dword ptr [esi]
// 006c91f4  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 006c91fa  8bce                 mov ecx, esi
// 006c91fc  ffd0                 call eax
// 006c91fe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c9202  f7d8                 neg eax
// 006c9204  1bc0                 sbb eax, eax
// 006c9206  f7d8                 neg eax
// 006c9208  034658               add eax, dword ptr [esi + 0x58]
// 006c920b  57                   push edi
// 006c920c  894758               mov dword ptr [edi + 0x58], eax
// 006c920f  8b11                 mov edx, dword ptr [ecx]
// 006c9211  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 006c9217  8d4501               lea eax, [ebp + 1]
// 006c921a  50                   push eax
// 006c921b  ffd2                 call edx
// 006c921d  03e8                 add ebp, eax
// 006c921f  8b06                 mov eax, dword ptr [esi]
// 006c9221  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006c9227  8bce                 mov ecx, esi
// 006c9229  43                   inc ebx
// 006c922a  ffd2                 call edx
// 006c922c  8bc8                 mov ecx, eax
// 006c922e  e81d0e0100           call 0x6da050
// 006c9233  3bd8                 cmp ebx, eax
// 006c9235  7c9c                 jl 0x6c91d3
// 006c9237  5f                   pop edi
// 006c9238  8bc5                 mov eax, ebp
// 006c923a  2b442418             sub eax, dword ptr [esp + 0x18]
// 006c923e  5d                   pop ebp
// 006c923f  5b                   pop ebx
// 006c9240  5e                   pop esi
// 006c9241  59                   pop ecx
// 006c9242  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?_DoExpand@CXTPReportControl@@MAEHHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
