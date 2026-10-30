// roc 2012-06 009e3760  unit: CXTPPropertyGrid  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3760
//
// 009e3760  8b542408             mov edx, dword ptr [esp + 8]
// 009e3764  56                   push esi
// 009e3765  8b742408             mov esi, dword ptr [esp + 8]
// 009e3769  57                   push edi
// 009e376a  6a00                 push 0
// 009e376c  8bf9                 mov edi, ecx
// 009e376e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e3772  8b07                 mov eax, dword ptr [edi]
// 009e3774  8b4060               mov eax, dword ptr [eax + 0x60]
// 009e3777  51                   push ecx
// 009e3778  52                   push edx
// 009e3779  56                   push esi
// 009e377a  6800000346           push 0x46030000
// 009e377f  68e83bb400           push 0xb43be8
// 009e3784  68cc6dc100           push 0xc16dcc
// 009e3789  6a00                 push 0
// 009e378b  8bcf                 mov ecx, edi
// 009e378d  ffd0                 call eax
// 009e378f  85c0                 test eax, eax
// 009e3791  7507                 jne 0x9e379a
// 009e3793  5f                   pop edi
// 009e3794  33c0                 xor eax, eax
// 009e3796  5e                   pop esi
// 009e3797  c21000               ret 0x10
// 009e379a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e379e  51                   push ecx
// 009e379f  8bcf                 mov ecx, edi
// 009e37a1  e81affffff           call 0x9e36c0
// 009e37a6  85c0                 test eax, eax
// 009e37a8  74e9                 je 0x9e3793
// 009e37aa  8b460c               mov eax, dword ptr [esi + 0xc]
// 009e37ad  2b4604               sub eax, dword ptr [esi + 4]
// 009e37b0  8b4e08               mov ecx, dword ptr [esi + 8]
// 009e37b3  2b0e                 sub ecx, dword ptr [esi]
// 009e37b5  8b17                 mov edx, dword ptr [edi]
// 009e37b7  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 009e37bd  50                   push eax
// 009e37be  51                   push ecx
// 009e37bf  8bcf                 mov ecx, edi
// 009e37c1  ffd2                 call edx
// 009e37c3  8b4604               mov eax, dword ptr [esi + 4]
// 009e37c6  8b560c               mov edx, dword ptr [esi + 0xc]
// 009e37c9  8b0e                 mov ecx, dword ptr [esi]
// 009e37cb  6a44                 push 0x44
// 009e37cd  2bd0                 sub edx, eax
// 009e37cf  52                   push edx
// 009e37d0  8b5608               mov edx, dword ptr [esi + 8]
// 009e37d3  2bd1                 sub edx, ecx
// 009e37d5  52                   push edx
// 009e37d6  50                   push eax
// 009e37d7  51                   push ecx
// 009e37d8  6a00                 push 0
// 009e37da  8bcf                 mov ecx, edi
// 009e37dc  e8f3ecf9ff           call 0x9824d4
// 009e37e1  5f                   pop edi
// 009e37e2  b801000000           mov eax, 1
// 009e37e7  5e                   pop esi
// 009e37e8  c21000               ret 0x10
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?Create@CXTPPropertyGrid@@UAEHABUtagRECT@@PAVCWnd@@IK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
