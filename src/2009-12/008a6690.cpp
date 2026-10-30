// roc 2009-12 008a6690  unit: CXTPReportTip  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6690
//
// 008a6690  8b442404             mov eax, dword ptr [esp + 4]
// 008a6694  83e800               sub eax, 0
// 008a6697  56                   push esi
// 008a6698  57                   push edi
// 008a6699  8bf1                 mov esi, ecx
// 008a669b  0f84ba000000         je 0x8a675b
// 008a66a1  83e801               sub eax, 1
// 008a66a4  745f                 je 0x8a6705
// 008a66a6  83e801               sub eax, 1
// 008a66a9  0f8528010000         jne 0x8a67d7
// 008a66af  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a66b2  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008a66b8  85c9                 test ecx, ecx
// 008a66ba  0f8417010000         je 0x8a67d7
// 008a66c0  e85b65f8ff           call 0x82cc20
// 008a66c5  85c0                 test eax, eax
// 008a66c7  0f8e0a010000         jle 0x8a67d7
// 008a66cd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a66d0  8b91fc000000         mov edx, dword ptr [ecx + 0xfc]
// 008a66d6  8b3a                 mov edi, dword ptr [edx]
// 008a66d8  8bc1                 mov eax, ecx
// 008a66da  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008a66e0  6a00                 push 0
// 008a66e2  e83965f8ff           call 0x82cc20
// 008a66e7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a66ea  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 008a66f0  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008a66f3  48                   dec eax
// 008a66f4  50                   push eax
// 008a66f5  ffd2                 call edx
// 008a66f7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a66fa  50                   push eax
// 008a66fb  e8a0f2f7ff           call 0x8259a0
// 008a6700  5f                   pop edi
// 008a6701  5e                   pop esi
// 008a6702  c20400               ret 4
// 008a6705  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6708  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008a670e  85c9                 test ecx, ecx
// 008a6710  0f84c1000000         je 0x8a67d7
// 008a6716  e80565f8ff           call 0x82cc20
// 008a671b  85c0                 test eax, eax
// 008a671d  0f8eb4000000         jle 0x8a67d7
// 008a6723  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6726  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 008a672c  8b3a                 mov edi, dword ptr [edx]
// 008a672e  8bc1                 mov eax, ecx
// 008a6730  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008a6736  6a00                 push 0
// 008a6738  e8e364f8ff           call 0x82cc20
// 008a673d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6740  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 008a6746  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008a6749  48                   dec eax
// 008a674a  50                   push eax
// 008a674b  ffd2                 call edx
// 008a674d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6750  50                   push eax
// 008a6751  e84af2f7ff           call 0x8259a0
// 008a6756  5f                   pop edi
// 008a6757  5e                   pop esi
// 008a6758  c20400               ret 4
// 008a675b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a675e  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 008a6764  6a01                 push 1
// 008a6766  50                   push eax
// 008a6767  e81470f7ff           call 0x81d780
// 008a676c  8bf8                 mov edi, eax
// 008a676e  83ffff               cmp edi, -1
// 008a6771  7e64                 jle 0x8a67d7
// 008a6773  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6776  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008a677c  e89f64f8ff           call 0x82cc20
// 008a6781  85c0                 test eax, eax
// 008a6783  7e52                 jle 0x8a67d7
// 008a6785  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a6788  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 008a678e  e88d64f8ff           call 0x82cc20
// 008a6793  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6796  8b9108010000         mov edx, dword ptr [ecx + 0x108]
// 008a679c  48                   dec eax
// 008a679d  03d7                 add edx, edi
// 008a679f  3bd0                 cmp edx, eax
// 008a67a1  7d0c                 jge 0x8a67af
// 008a67a3  8bc1                 mov eax, ecx
// 008a67a5  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 008a67ab  03c7                 add eax, edi
// 008a67ad  eb0c                 jmp 0x8a67bb
// 008a67af  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008a67b5  e86664f8ff           call 0x82cc20
// 008a67ba  48                   dec eax
// 008a67bb  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a67be  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 008a67c4  8b11                 mov edx, dword ptr [ecx]
// 008a67c6  6a00                 push 0
// 008a67c8  50                   push eax
// 008a67c9  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008a67cc  ffd0                 call eax
// 008a67ce  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a67d1  50                   push eax
// 008a67d2  e8c9f1f7ff           call 0x8259a0
// 008a67d7  5f                   pop edi
// 008a67d8  5e                   pop esi
// 008a67d9  c20400               ret 4
// copied from an identical function in another client (function ?MoveLastVisibleRow@CXTPReportNavigator@@IAEXW4XTPReportRowType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp