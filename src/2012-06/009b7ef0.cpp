// roc 2012-06 009b7ef0  unit: CInstanceRecord::CNameItem  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7ef0
//
// 009b7ef0  51                   push ecx
// 009b7ef1  53                   push ebx
// 009b7ef2  55                   push ebp
// 009b7ef3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009b7ef7  8b9d28020000         mov ebx, dword ptr [ebp + 0x228]
// 009b7efd  8b4308               mov eax, dword ptr [ebx + 8]
// 009b7f00  56                   push esi
// 009b7f01  57                   push edi
// 009b7f02  33ff                 xor edi, edi
// 009b7f04  894c2410             mov dword ptr [esp + 0x10], ecx
// 009b7f08  85c0                 test eax, eax
// 009b7f0a  7e38                 jle 0x9b7f44
// 009b7f0c  8d642400             lea esp, [esp]
// 009b7f10  85ff                 test edi, edi
// 009b7f12  0f8ca1000000         jl 0x9b7fb9
// 009b7f18  3bf8                 cmp edi, eax
// 009b7f1a  0f8d99000000         jge 0x9b7fb9
// 009b7f20  8b4304               mov eax, dword ptr [ebx + 4]
// 009b7f23  8b34b8               mov esi, dword ptr [eax + edi*4]
// 009b7f26  8b16                 mov edx, dword ptr [esi]
// 009b7f28  8b4268               mov eax, dword ptr [edx + 0x68]
// 009b7f2b  8bce                 mov ecx, esi
// 009b7f2d  ffd0                 call eax
// 009b7f2f  8b5654               mov edx, dword ptr [esi + 0x54]
// 009b7f32  8b4204               mov eax, dword ptr [edx + 4]
// 009b7f35  8d4e54               lea ecx, [esi + 0x54]
// 009b7f38  6a00                 push 0
// 009b7f3a  ffd0                 call eax
// 009b7f3c  8b4308               mov eax, dword ptr [ebx + 8]
// 009b7f3f  47                   inc edi
// 009b7f40  3bf8                 cmp edi, eax
// 009b7f42  7ccc                 jl 0x9b7f10
// 009b7f44  6aff                 push -1
// 009b7f46  6a00                 push 0
// 009b7f48  8bcb                 mov ecx, ebx
// 009b7f4a  e81103feff           call 0x998260
// 009b7f4f  8b8d2c020000         mov ecx, dword ptr [ebp + 0x22c]
// 009b7f55  85c9                 test ecx, ecx
// 009b7f57  740d                 je 0x9b7f66
// 009b7f59  83792000             cmp dword ptr [ecx + 0x20], 0
// 009b7f5d  7407                 je 0x9b7f66
// 009b7f5f  8b11                 mov edx, dword ptr [ecx]
// 009b7f61  8b4268               mov eax, dword ptr [edx + 0x68]
// 009b7f64  ffd0                 call eax
// 009b7f66  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009b7f6b  8bb524020000         mov esi, dword ptr [ebp + 0x224]
// 009b7f71  7421                 je 0x9b7f94
// 009b7f73  85f6                 test esi, esi
// 009b7f75  741d                 je 0x9b7f94
// 009b7f77  837e2000             cmp dword ptr [esi + 0x20], 0
// 009b7f7b  7417                 je 0x9b7f94
// 009b7f7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009b7f81  394e64               cmp dword ptr [esi + 0x64], ecx
// 009b7f84  750e                 jne 0x9b7f94
// 009b7f86  8b11                 mov edx, dword ptr [ecx]
// 009b7f88  8d4654               lea eax, [esi + 0x54]
// 009b7f8b  50                   push eax
// 009b7f8c  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 009b7f92  ffd0                 call eax
// 009b7f94  8bce                 mov ecx, esi
// 009b7f96  e8d5590700           call 0xa2d970
// 009b7f9b  8b5654               mov edx, dword ptr [esi + 0x54]
// 009b7f9e  8b4204               mov eax, dword ptr [edx + 4]
// 009b7fa1  8d4e54               lea ecx, [esi + 0x54]
// 009b7fa4  6a00                 push 0
// 009b7fa6  ffd0                 call eax
// 009b7fa8  8b16                 mov edx, dword ptr [esi]
// 009b7faa  8b4268               mov eax, dword ptr [edx + 0x68]
// 009b7fad  8bce                 mov ecx, esi
// 009b7faf  ffd0                 call eax
// 009b7fb1  5f                   pop edi
// 009b7fb2  5e                   pop esi
// 009b7fb3  5d                   pop ebp
// 009b7fb4  5b                   pop ebx
// 009b7fb5  59                   pop ecx
// 009b7fb6  c20800               ret 8
// 009b7fb9  e802a4fcff           call 0x9823c0
// copied from an identical function in another client (function ?OnCancelEdit@CXTPReportRecordItem@@MAEXPAVCXTPReportControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp