// roc 2007-08 006d30d0  unit: CXTPReportRow_Batch  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d30d0
//
// 006d30d0  53                   push ebx
// 006d30d1  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 006d30d7  55                   push ebp
// 006d30d8  56                   push esi
// 006d30d9  57                   push edi
// 006d30da  6a00                 push 0
// 006d30dc  6a00                 push 0
// 006d30de  8bf9                 mov edi, ecx
// 006d30e0  8b4720               mov eax, dword ptr [edi + 0x20]
// 006d30e3  688b010000           push 0x18b
// 006d30e8  50                   push eax
// 006d30e9  ffd3                 call ebx
// 006d30eb  8bf0                 mov esi, eax
// 006d30ed  83ee01               sub esi, 1
// 006d30f0  781b                 js 0x6d310d
// 006d30f2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006d30f6  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006d30f9  6a00                 push 0
// 006d30fb  56                   push esi
// 006d30fc  6899010000           push 0x199
// 006d3101  51                   push ecx
// 006d3102  ffd3                 call ebx
// 006d3104  3be8                 cmp ebp, eax
// 006d3106  740f                 je 0x6d3117
// 006d3108  83ee01               sub esi, 1
// 006d310b  79e9                 jns 0x6d30f6
// 006d310d  5f                   pop edi
// 006d310e  5e                   pop esi
// 006d310f  5d                   pop ebp
// 006d3110  83c8ff               or eax, 0xffffffff
// 006d3113  5b                   pop ebx
// 006d3114  c20400               ret 4
// 006d3117  5f                   pop edi
// 006d3118  8bc6                 mov eax, esi
// 006d311a  5e                   pop esi
// 006d311b  5d                   pop ebp
// 006d311c  5b                   pop ebx
// 006d311d  c20400               ret 4
// copied from an identical function in another client (function ?FindItemData@CXTPReportSubListControl@@IAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp