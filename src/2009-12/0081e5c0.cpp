// roc 2009-12 0081e5c0  unit: CXTPReportControl  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e5c0
//
// 0081e5c0  8b442408             mov eax, dword ptr [esp + 8]
// 0081e5c4  53                   push ebx
// 0081e5c5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0081e5c9  56                   push esi
// 0081e5ca  53                   push ebx
// 0081e5cb  8bf1                 mov esi, ecx
// 0081e5cd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081e5d1  50                   push eax
// 0081e5d2  51                   push ecx
// 0081e5d3  8bce                 mov ecx, esi
// 0081e5d5  e82253fdff           call 0x7f38fc
// 0081e5da  83f8ff               cmp eax, -1
// 0081e5dd  7554                 jne 0x81e633
// 0081e5df  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081e5e3  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 0081e5e9  8b11                 mov edx, dword ptr [ecx]
// 0081e5eb  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0081e5f1  57                   push edi
// 0081e5f2  53                   push ebx
// 0081e5f3  50                   push eax
// 0081e5f4  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081e5f8  50                   push eax
// 0081e5f9  ffd2                 call edx
// 0081e5fb  8bf8                 mov edi, eax
// 0081e5fd  83ffff               cmp edi, -1
// 0081e600  7530                 jne 0x81e632
// 0081e602  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081e606  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081e60a  50                   push eax
// 0081e60b  51                   push ecx
// 0081e60c  8bce                 mov ecx, esi
// 0081e60e  e8cdefffff           call 0x81d5e0
// 0081e613  85c0                 test eax, eax
// 0081e615  7419                 je 0x81e630
// 0081e617  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081e61b  8b10                 mov edx, dword ptr [eax]
// 0081e61d  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 0081e623  53                   push ebx
// 0081e624  51                   push ecx
// 0081e625  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081e629  51                   push ecx
// 0081e62a  8bc8                 mov ecx, eax
// 0081e62c  ffd2                 call edx
// 0081e62e  8bf8                 mov edi, eax
// 0081e630  8bc7                 mov eax, edi
// 0081e632  5f                   pop edi
// 0081e633  5e                   pop esi
// 0081e634  5b                   pop ebx
// 0081e635  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportControl@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp