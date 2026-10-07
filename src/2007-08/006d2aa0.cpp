// roc 2007-08 006d2aa0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2aa0
//
// 006d2aa0  53                   push ebx
// 006d2aa1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006d2aa5  56                   push esi
// 006d2aa6  8bf1                 mov esi, ecx
// 006d2aa8  3bf3                 cmp esi, ebx
// 006d2aaa  7505                 jne 0x6d2ab1
// 006d2aac  e86fd4f5ff           call 0x62ff20
// 006d2ab1  8b4308               mov eax, dword ptr [ebx + 8]
// 006d2ab4  57                   push edi
// 006d2ab5  8b7e08               mov edi, dword ptr [esi + 8]
// 006d2ab8  6aff                 push -1
// 006d2aba  03c7                 add eax, edi
// 006d2abc  50                   push eax
// 006d2abd  e8eecf0200           call 0x6ffab0
// 006d2ac2  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006d2ac5  8b5304               mov edx, dword ptr [ebx + 4]
// 006d2ac8  8b4604               mov eax, dword ptr [esi + 4]
// 006d2acb  51                   push ecx
// 006d2acc  52                   push edx
// 006d2acd  8d0cb8               lea ecx, [eax + edi*4]
// 006d2ad0  51                   push ecx
// 006d2ad1  e86afeffff           call 0x6d2940
// 006d2ad6  8bc7                 mov eax, edi
// 006d2ad8  5f                   pop edi
// 006d2ad9  5e                   pop esi
// 006d2ada  5b                   pop ebx
// 006d2adb  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarEventLabel.cpp (function ?Append@?$CArray@II@@QAEHABV1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarEventLabel.cpp
