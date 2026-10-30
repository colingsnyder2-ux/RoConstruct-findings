// roc 2011-06 0083fa40  unit: CInstanceRecord::CNameItem  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083fa40
//
// 0083fa40  51                   push ecx
// 0083fa41  53                   push ebx
// 0083fa42  55                   push ebp
// 0083fa43  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0083fa47  8b9d28020000         mov ebx, dword ptr [ebp + 0x228]
// 0083fa4d  8b4308               mov eax, dword ptr [ebx + 8]
// 0083fa50  56                   push esi
// 0083fa51  57                   push edi
// 0083fa52  33ff                 xor edi, edi
// 0083fa54  894c2410             mov dword ptr [esp + 0x10], ecx
// 0083fa58  85c0                 test eax, eax
// 0083fa5a  7e38                 jle 0x83fa94
// 0083fa5c  8d642400             lea esp, [esp]
// 0083fa60  85ff                 test edi, edi
// 0083fa62  0f8ca1000000         jl 0x83fb09
// 0083fa68  3bf8                 cmp edi, eax
// 0083fa6a  0f8d99000000         jge 0x83fb09
// 0083fa70  8b4304               mov eax, dword ptr [ebx + 4]
// 0083fa73  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0083fa76  8b16                 mov edx, dword ptr [esi]
// 0083fa78  8b4268               mov eax, dword ptr [edx + 0x68]
// 0083fa7b  8bce                 mov ecx, esi
// 0083fa7d  ffd0                 call eax
// 0083fa7f  8b5654               mov edx, dword ptr [esi + 0x54]
// 0083fa82  8b4204               mov eax, dword ptr [edx + 4]
// 0083fa85  8d4e54               lea ecx, [esi + 0x54]
// 0083fa88  6a00                 push 0
// 0083fa8a  ffd0                 call eax
// 0083fa8c  8b4308               mov eax, dword ptr [ebx + 8]
// 0083fa8f  47                   inc edi
// 0083fa90  3bf8                 cmp edi, eax
// 0083fa92  7ccc                 jl 0x83fa60
// 0083fa94  6aff                 push -1
// 0083fa96  6a00                 push 0
// 0083fa98  8bcb                 mov ecx, ebx
// 0083fa9a  e8a1f0ffff           call 0x83eb40
// 0083fa9f  8b8d2c020000         mov ecx, dword ptr [ebp + 0x22c]
// 0083faa5  85c9                 test ecx, ecx
// 0083faa7  740d                 je 0x83fab6
// 0083faa9  83792000             cmp dword ptr [ecx + 0x20], 0
// 0083faad  7407                 je 0x83fab6
// 0083faaf  8b11                 mov edx, dword ptr [ecx]
// 0083fab1  8b4268               mov eax, dword ptr [edx + 0x68]
// 0083fab4  ffd0                 call eax
// 0083fab6  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0083fabb  8bb524020000         mov esi, dword ptr [ebp + 0x224]
// 0083fac1  7421                 je 0x83fae4
// 0083fac3  85f6                 test esi, esi
// 0083fac5  741d                 je 0x83fae4
// 0083fac7  837e2000             cmp dword ptr [esi + 0x20], 0
// 0083facb  7417                 je 0x83fae4
// 0083facd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083fad1  394e64               cmp dword ptr [esi + 0x64], ecx
// 0083fad4  750e                 jne 0x83fae4
// 0083fad6  8b11                 mov edx, dword ptr [ecx]
// 0083fad8  8d4654               lea eax, [esi + 0x54]
// 0083fadb  50                   push eax
// 0083fadc  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 0083fae2  ffd0                 call eax
// 0083fae4  8bce                 mov ecx, esi
// 0083fae6  e8d5590700           call 0x8b54c0
// 0083faeb  8b5654               mov edx, dword ptr [esi + 0x54]
// 0083faee  8b4204               mov eax, dword ptr [edx + 4]
// 0083faf1  8d4e54               lea ecx, [esi + 0x54]
// 0083faf4  6a00                 push 0
// 0083faf6  ffd0                 call eax
// 0083faf8  8b16                 mov edx, dword ptr [esi]
// 0083fafa  8b4268               mov eax, dword ptr [edx + 0x68]
// 0083fafd  8bce                 mov ecx, esi
// 0083faff  ffd0                 call eax
// 0083fb01  5f                   pop edi
// 0083fb02  5e                   pop esi
// 0083fb03  5d                   pop ebp
// 0083fb04  5b                   pop ebx
// 0083fb05  59                   pop ecx
// 0083fb06  c20800               ret 8
// 0083fb09  e8fca7fcff           call 0x80a30a
// copied from an identical function in another client (function ?OnCancelEdit@CXTPReportRecordItem@@MAEXPAVCXTPReportControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp