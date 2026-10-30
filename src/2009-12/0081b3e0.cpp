// roc 2009-12 0081b3e0  unit: CInstanceRecord::CNameItem  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b3e0
//
// 0081b3e0  51                   push ecx
// 0081b3e1  53                   push ebx
// 0081b3e2  55                   push ebp
// 0081b3e3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0081b3e7  8b9d28020000         mov ebx, dword ptr [ebp + 0x228]
// 0081b3ed  8b4308               mov eax, dword ptr [ebx + 8]
// 0081b3f0  56                   push esi
// 0081b3f1  57                   push edi
// 0081b3f2  33ff                 xor edi, edi
// 0081b3f4  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081b3f8  85c0                 test eax, eax
// 0081b3fa  7e38                 jle 0x81b434
// 0081b3fc  8d642400             lea esp, [esp]
// 0081b400  85ff                 test edi, edi
// 0081b402  0f8ca1000000         jl 0x81b4a9
// 0081b408  3bf8                 cmp edi, eax
// 0081b40a  0f8d99000000         jge 0x81b4a9
// 0081b410  8b4304               mov eax, dword ptr [ebx + 4]
// 0081b413  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0081b416  8b16                 mov edx, dword ptr [esi]
// 0081b418  8b4268               mov eax, dword ptr [edx + 0x68]
// 0081b41b  8bce                 mov ecx, esi
// 0081b41d  ffd0                 call eax
// 0081b41f  8b5654               mov edx, dword ptr [esi + 0x54]
// 0081b422  8b4204               mov eax, dword ptr [edx + 4]
// 0081b425  8d4e54               lea ecx, [esi + 0x54]
// 0081b428  6a00                 push 0
// 0081b42a  ffd0                 call eax
// 0081b42c  8b4308               mov eax, dword ptr [ebx + 8]
// 0081b42f  47                   inc edi
// 0081b430  3bf8                 cmp edi, eax
// 0081b432  7ccc                 jl 0x81b400
// 0081b434  6aff                 push -1
// 0081b436  6a00                 push 0
// 0081b438  8bcb                 mov ecx, ebx
// 0081b43a  e8619f0300           call 0x8553a0
// 0081b43f  8b8d2c020000         mov ecx, dword ptr [ebp + 0x22c]
// 0081b445  85c9                 test ecx, ecx
// 0081b447  740d                 je 0x81b456
// 0081b449  83792000             cmp dword ptr [ecx + 0x20], 0
// 0081b44d  7407                 je 0x81b456
// 0081b44f  8b11                 mov edx, dword ptr [ecx]
// 0081b451  8b4268               mov eax, dword ptr [edx + 0x68]
// 0081b454  ffd0                 call eax
// 0081b456  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0081b45b  8bb524020000         mov esi, dword ptr [ebp + 0x224]
// 0081b461  7421                 je 0x81b484
// 0081b463  85f6                 test esi, esi
// 0081b465  741d                 je 0x81b484
// 0081b467  837e2000             cmp dword ptr [esi + 0x20], 0
// 0081b46b  7417                 je 0x81b484
// 0081b46d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081b471  394e64               cmp dword ptr [esi + 0x64], ecx
// 0081b474  750e                 jne 0x81b484
// 0081b476  8b11                 mov edx, dword ptr [ecx]
// 0081b478  8d4654               lea eax, [esi + 0x54]
// 0081b47b  50                   push eax
// 0081b47c  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 0081b482  ffd0                 call eax
// 0081b484  8bce                 mov ecx, esi
// 0081b486  e8b55e0800           call 0x8a1340
// 0081b48b  8b5654               mov edx, dword ptr [esi + 0x54]
// 0081b48e  8b4204               mov eax, dword ptr [edx + 4]
// 0081b491  8d4e54               lea ecx, [esi + 0x54]
// 0081b494  6a00                 push 0
// 0081b496  ffd0                 call eax
// 0081b498  8b16                 mov edx, dword ptr [esi]
// 0081b49a  8b4268               mov eax, dword ptr [edx + 0x68]
// 0081b49d  8bce                 mov ecx, esi
// 0081b49f  ffd0                 call eax
// 0081b4a1  5f                   pop edi
// 0081b4a2  5e                   pop esi
// 0081b4a3  5d                   pop ebp
// 0081b4a4  5b                   pop ebx
// 0081b4a5  59                   pop ecx
// 0081b4a6  c20800               ret 8
// 0081b4a9  e85e86fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnCancelEdit@CXTPReportRecordItem@@MAEXPAVCXTPReportControl@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp