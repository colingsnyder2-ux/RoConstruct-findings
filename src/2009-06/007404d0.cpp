// roc 2009-06 007404d0  unit: CInstanceRecord::CNameItem  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007404d0
//
// 007404d0  51                   push ecx
// 007404d1  53                   push ebx
// 007404d2  55                   push ebp
// 007404d3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007404d7  8b9d28020000         mov ebx, dword ptr [ebp + 0x228]
// 007404dd  8b4308               mov eax, dword ptr [ebx + 8]
// 007404e0  56                   push esi
// 007404e1  57                   push edi
// 007404e2  33ff                 xor edi, edi
// 007404e4  894c2410             mov dword ptr [esp + 0x10], ecx
// 007404e8  85c0                 test eax, eax
// 007404ea  7e38                 jle 0x740524
// 007404ec  8d642400             lea esp, [esp]
// 007404f0  85ff                 test edi, edi
// 007404f2  0f8ca1000000         jl 0x740599
// 007404f8  3bf8                 cmp edi, eax
// 007404fa  0f8d99000000         jge 0x740599
// 00740500  8b4304               mov eax, dword ptr [ebx + 4]
// 00740503  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00740506  8b16                 mov edx, dword ptr [esi]
// 00740508  8b4268               mov eax, dword ptr [edx + 0x68]
// 0074050b  8bce                 mov ecx, esi
// 0074050d  ffd0                 call eax
// 0074050f  8b5654               mov edx, dword ptr [esi + 0x54]
// 00740512  8b4204               mov eax, dword ptr [edx + 4]
// 00740515  8d4e54               lea ecx, [esi + 0x54]
// 00740518  6a00                 push 0
// 0074051a  ffd0                 call eax
// 0074051c  8b4308               mov eax, dword ptr [ebx + 8]
// 0074051f  47                   inc edi
// 00740520  3bf8                 cmp edi, eax
// 00740522  7ccc                 jl 0x7404f0
// 00740524  6aff                 push -1
// 00740526  6a00                 push 0
// 00740528  8bcb                 mov ecx, ebx
// 0074052a  e8e11f0100           call 0x752510
// 0074052f  8b8d2c020000         mov ecx, dword ptr [ebp + 0x22c]
// 00740535  85c9                 test ecx, ecx
// 00740537  740d                 je 0x740546
// 00740539  83792000             cmp dword ptr [ecx + 0x20], 0
// 0074053d  7407                 je 0x740546
// 0074053f  8b11                 mov edx, dword ptr [ecx]
// 00740541  8b4268               mov eax, dword ptr [edx + 0x68]
// 00740544  ffd0                 call eax
// 00740546  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0074054b  8bb524020000         mov esi, dword ptr [ebp + 0x224]
// 00740551  7421                 je 0x740574
// 00740553  85f6                 test esi, esi
// 00740555  741d                 je 0x740574
// 00740557  837e2000             cmp dword ptr [esi + 0x20], 0
// 0074055b  7417                 je 0x740574
// 0074055d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00740561  394e64               cmp dword ptr [esi + 0x64], ecx
// 00740564  750e                 jne 0x740574
// 00740566  8b11                 mov edx, dword ptr [ecx]
// 00740568  8d4654               lea eax, [esi + 0x54]
// 0074056b  50                   push eax
// 0074056c  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 00740572  ffd0                 call eax
// 00740574  8bce                 mov ecx, esi
// 00740576  e8b55f0800           call 0x7c6530
// 0074057b  8b5654               mov edx, dword ptr [esi + 0x54]
// 0074057e  8b4204               mov eax, dword ptr [edx + 4]
// 00740581  8d4e54               lea ecx, [esi + 0x54]
// 00740584  6a00                 push 0
// 00740586  ffd0                 call eax
// 00740588  8b16                 mov edx, dword ptr [esi]
// 0074058a  8b4268               mov eax, dword ptr [edx + 0x68]
// 0074058d  8bce                 mov ecx, esi
// 0074058f  ffd0                 call eax
// 00740591  5f                   pop edi
// 00740592  5e                   pop esi
// 00740593  5d                   pop ebp
// 00740594  5b                   pop ebx
// 00740595  59                   pop ecx
// 00740596  c20800               ret 8
// 00740599  e84687fdff           call 0x718ce4
// copied from an identical function in another client (function ?OnCancelEdit@CXTPReportRecordItem@@MAEXPAVCXTPReportControl@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp