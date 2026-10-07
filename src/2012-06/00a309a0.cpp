// roc 2012-06 00a309a0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a309a0
//
// 00a309a0  53                   push ebx
// 00a309a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a309a5  56                   push esi
// 00a309a6  8bf1                 mov esi, ecx
// 00a309a8  3bf3                 cmp esi, ebx
// 00a309aa  7505                 jne 0xa309b1
// 00a309ac  e80f1af5ff           call 0x9823c0
// 00a309b1  8b4308               mov eax, dword ptr [ebx + 8]
// 00a309b4  57                   push edi
// 00a309b5  8b7e08               mov edi, dword ptr [esi + 8]
// 00a309b8  6aff                 push -1
// 00a309ba  03c7                 add eax, edi
// 00a309bc  50                   push eax
// 00a309bd  e89e78f6ff           call 0x998260
// 00a309c2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00a309c5  8b5304               mov edx, dword ptr [ebx + 4]
// 00a309c8  8b4604               mov eax, dword ptr [esi + 4]
// 00a309cb  51                   push ecx
// 00a309cc  52                   push edx
// 00a309cd  8d0cb8               lea ecx, [eax + edi*4]
// 00a309d0  51                   push ecx
// 00a309d1  e85afeffff           call 0xa30830
// 00a309d6  8bc7                 mov eax, edi
// 00a309d8  5f                   pop edi
// 00a309d9  5e                   pop esi
// 00a309da  5b                   pop ebx
// 00a309db  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventLabel.cpp (function ?Append@?$CArray@II@@QAEHABV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventLabel.cpp
