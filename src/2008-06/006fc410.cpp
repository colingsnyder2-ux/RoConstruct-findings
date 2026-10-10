// roc 2008-06 006fc410  unit: CXTPPropertyGrid  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc410
//
// 006fc410  8b542408             mov edx, dword ptr [esp + 8]
// 006fc414  56                   push esi
// 006fc415  8b742408             mov esi, dword ptr [esp + 8]
// 006fc419  57                   push edi
// 006fc41a  6a00                 push 0
// 006fc41c  8bf9                 mov edi, ecx
// 006fc41e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fc422  8b07                 mov eax, dword ptr [edi]
// 006fc424  8b4060               mov eax, dword ptr [eax + 0x60]
// 006fc427  51                   push ecx
// 006fc428  52                   push edx
// 006fc429  56                   push esi
// 006fc42a  6800000346           push 0x46030000
// 006fc42f  6816b78000           push 0x80b716
// 006fc434  6878a78500           push 0x85a778
// 006fc439  6a00                 push 0
// 006fc43b  8bcf                 mov ecx, edi
// 006fc43d  ffd0                 call eax
// 006fc43f  85c0                 test eax, eax
// 006fc441  7507                 jne 0x6fc44a
// 006fc443  5f                   pop edi
// 006fc444  33c0                 xor eax, eax
// 006fc446  5e                   pop esi
// 006fc447  c21000               ret 0x10
// 006fc44a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006fc44e  51                   push ecx
// 006fc44f  8bcf                 mov ecx, edi
// 006fc451  e81affffff           call 0x6fc370
// 006fc456  85c0                 test eax, eax
// 006fc458  74e9                 je 0x6fc443
// 006fc45a  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fc45d  2b4604               sub eax, dword ptr [esi + 4]
// 006fc460  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fc463  2b0e                 sub ecx, dword ptr [esi]
// 006fc465  8b17                 mov edx, dword ptr [edi]
// 006fc467  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 006fc46d  50                   push eax
// 006fc46e  51                   push ecx
// 006fc46f  8bcf                 mov ecx, edi
// 006fc471  ffd2                 call edx
// 006fc473  8b4604               mov eax, dword ptr [esi + 4]
// 006fc476  8b560c               mov edx, dword ptr [esi + 0xc]
// 006fc479  8b0e                 mov ecx, dword ptr [esi]
// 006fc47b  6a44                 push 0x44
// 006fc47d  2bd0                 sub edx, eax
// 006fc47f  52                   push edx
// 006fc480  8b5608               mov edx, dword ptr [esi + 8]
// 006fc483  2bd1                 sub edx, ecx
// 006fc485  52                   push edx
// 006fc486  50                   push eax
// 006fc487  51                   push ecx
// 006fc488  6a00                 push 0
// 006fc48a  8bcf                 mov ecx, edi
// 006fc48c  e8b545faff           call 0x6a0a46
// 006fc491  5f                   pop edi
// 006fc492  b801000000           mov eax, 1
// 006fc497  5e                   pop esi
// 006fc498  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Create@CXTPPropertyGrid@@UAEHABUtagRECT@@PAVCWnd@@IK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
