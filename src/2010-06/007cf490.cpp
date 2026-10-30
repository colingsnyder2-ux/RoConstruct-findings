// roc 2010-06 007cf490  unit: CInstanceRecord::CNameItem  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cf490
//
// 007cf490  51                   push ecx
// 007cf491  53                   push ebx
// 007cf492  55                   push ebp
// 007cf493  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007cf497  8b9d28020000         mov ebx, dword ptr [ebp + 0x228]
// 007cf49d  8b4308               mov eax, dword ptr [ebx + 8]
// 007cf4a0  56                   push esi
// 007cf4a1  57                   push edi
// 007cf4a2  33ff                 xor edi, edi
// 007cf4a4  894c2410             mov dword ptr [esp + 0x10], ecx
// 007cf4a8  85c0                 test eax, eax
// 007cf4aa  7e38                 jle 0x7cf4e4
// 007cf4ac  8d642400             lea esp, [esp]
// 007cf4b0  85ff                 test edi, edi
// 007cf4b2  0f8ca1000000         jl 0x7cf559
// 007cf4b8  3bf8                 cmp edi, eax
// 007cf4ba  0f8d99000000         jge 0x7cf559
// 007cf4c0  8b4304               mov eax, dword ptr [ebx + 4]
// 007cf4c3  8b34b8               mov esi, dword ptr [eax + edi*4]
// 007cf4c6  8b16                 mov edx, dword ptr [esi]
// 007cf4c8  8b4268               mov eax, dword ptr [edx + 0x68]
// 007cf4cb  8bce                 mov ecx, esi
// 007cf4cd  ffd0                 call eax
// 007cf4cf  8b5654               mov edx, dword ptr [esi + 0x54]
// 007cf4d2  8b4204               mov eax, dword ptr [edx + 4]
// 007cf4d5  8d4e54               lea ecx, [esi + 0x54]
// 007cf4d8  6a00                 push 0
// 007cf4da  ffd0                 call eax
// 007cf4dc  8b4308               mov eax, dword ptr [ebx + 8]
// 007cf4df  47                   inc edi
// 007cf4e0  3bf8                 cmp edi, eax
// 007cf4e2  7ccc                 jl 0x7cf4b0
// 007cf4e4  6aff                 push -1
// 007cf4e6  6a00                 push 0
// 007cf4e8  8bcb                 mov ecx, ebx
// 007cf4ea  e8111e0100           call 0x7e1300
// 007cf4ef  8b8d2c020000         mov ecx, dword ptr [ebp + 0x22c]
// 007cf4f5  85c9                 test ecx, ecx
// 007cf4f7  740d                 je 0x7cf506
// 007cf4f9  83792000             cmp dword ptr [ecx + 0x20], 0
// 007cf4fd  7407                 je 0x7cf506
// 007cf4ff  8b11                 mov edx, dword ptr [ecx]
// 007cf501  8b4268               mov eax, dword ptr [edx + 0x68]
// 007cf504  ffd0                 call eax
// 007cf506  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007cf50b  8bb524020000         mov esi, dword ptr [ebp + 0x224]
// 007cf511  7421                 je 0x7cf534
// 007cf513  85f6                 test esi, esi
// 007cf515  741d                 je 0x7cf534
// 007cf517  837e2000             cmp dword ptr [esi + 0x20], 0
// 007cf51b  7417                 je 0x7cf534
// 007cf51d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007cf521  394e64               cmp dword ptr [esi + 0x64], ecx
// 007cf524  750e                 jne 0x7cf534
// 007cf526  8b11                 mov edx, dword ptr [ecx]
// 007cf528  8d4654               lea eax, [esi + 0x54]
// 007cf52b  50                   push eax
// 007cf52c  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 007cf532  ffd0                 call eax
// 007cf534  8bce                 mov ecx, esi
// 007cf536  e8855f0800           call 0x8554c0
// 007cf53b  8b5654               mov edx, dword ptr [esi + 0x54]
// 007cf53e  8b4204               mov eax, dword ptr [edx + 4]
// 007cf541  8d4e54               lea ecx, [esi + 0x54]
// 007cf544  6a00                 push 0
// 007cf546  ffd0                 call eax
// 007cf548  8b16                 mov edx, dword ptr [esi]
// 007cf54a  8b4268               mov eax, dword ptr [edx + 0x68]
// 007cf54d  8bce                 mov ecx, esi
// 007cf54f  ffd0                 call eax
// 007cf551  5f                   pop edi
// 007cf552  5e                   pop esi
// 007cf553  5d                   pop ebp
// 007cf554  5b                   pop ebx
// 007cf555  59                   pop ecx
// 007cf556  c20800               ret 8
// 007cf559  e8ee86fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnCancelEdit@CXTPReportRecordItem@@MAEXPAVCXTPReportControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp