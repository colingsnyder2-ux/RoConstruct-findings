// roc 2011-06 008f7ff0  unit: CXTPRibbonTab  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7ff0
//
// 008f7ff0  53                   push ebx
// 008f7ff1  56                   push esi
// 008f7ff2  57                   push edi
// 008f7ff3  8bf9                 mov edi, ecx
// 008f7ff5  33f6                 xor esi, esi
// 008f7ff7  e8c470feff           call 0x8df0c0
// 008f7ffc  85c0                 test eax, eax
// 008f7ffe  7e35                 jle 0x8f8035
// 008f8000  8b1d101ca400         mov ebx, dword ptr [0xa41c10]
// 008f8006  85f6                 test esi, esi
// 008f8008  7c44                 jl 0x8f804e
// 008f800a  3b7708               cmp esi, dword ptr [edi + 8]
// 008f800d  7d3f                 jge 0x8f804e
// 008f800f  8b4704               mov eax, dword ptr [edi + 4]
// 008f8012  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f8016  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008f8019  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f801d  51                   push ecx
// 008f801e  83c010               add eax, 0x10
// 008f8021  52                   push edx
// 008f8022  50                   push eax
// 008f8023  ffd3                 call ebx
// 008f8025  85c0                 test eax, eax
// 008f8027  7514                 jne 0x8f803d
// 008f8029  8bcf                 mov ecx, edi
// 008f802b  46                   inc esi
// 008f802c  e88f70feff           call 0x8df0c0
// 008f8031  3bf0                 cmp esi, eax
// 008f8033  7cd1                 jl 0x8f8006
// 008f8035  5f                   pop edi
// 008f8036  5e                   pop esi
// 008f8037  33c0                 xor eax, eax
// 008f8039  5b                   pop ebx
// 008f803a  c20800               ret 8
// 008f803d  3b7708               cmp esi, dword ptr [edi + 8]
// 008f8040  7d0c                 jge 0x8f804e
// 008f8042  8b4704               mov eax, dword ptr [edi + 4]
// 008f8045  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008f8048  5f                   pop edi
// 008f8049  5e                   pop esi
// 008f804a  5b                   pop ebx
// 008f804b  c20800               ret 8
// 008f804e  e8b722f1ff           call 0x80a30a
// copied from an identical function in another client (function ?HitTest@CXTPRibbonTabContextHeaders@@QBEPAVCXTPRibbonTabContextHeader@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp