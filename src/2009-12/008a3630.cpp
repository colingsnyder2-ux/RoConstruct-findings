// roc 2009-12 008a3630  unit: CXTPReportHyperlinks  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3630
//
// 008a3630  53                   push ebx
// 008a3631  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008a3637  55                   push ebp
// 008a3638  56                   push esi
// 008a3639  57                   push edi
// 008a363a  6a00                 push 0
// 008a363c  6a00                 push 0
// 008a363e  8bf9                 mov edi, ecx
// 008a3640  8b4720               mov eax, dword ptr [edi + 0x20]
// 008a3643  688b010000           push 0x18b
// 008a3648  50                   push eax
// 008a3649  ffd3                 call ebx
// 008a364b  8bf0                 mov esi, eax
// 008a364d  83ee01               sub esi, 1
// 008a3650  781b                 js 0x8a366d
// 008a3652  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008a3656  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008a3659  6a00                 push 0
// 008a365b  56                   push esi
// 008a365c  6899010000           push 0x199
// 008a3661  51                   push ecx
// 008a3662  ffd3                 call ebx
// 008a3664  3be8                 cmp ebp, eax
// 008a3666  740f                 je 0x8a3677
// 008a3668  83ee01               sub esi, 1
// 008a366b  79e9                 jns 0x8a3656
// 008a366d  5f                   pop edi
// 008a366e  5e                   pop esi
// 008a366f  5d                   pop ebp
// 008a3670  83c8ff               or eax, 0xffffffff
// 008a3673  5b                   pop ebx
// 008a3674  c20400               ret 4
// 008a3677  5f                   pop edi
// 008a3678  8bc6                 mov eax, esi
// 008a367a  5e                   pop esi
// 008a367b  5d                   pop ebp
// 008a367c  5b                   pop ebx
// 008a367d  c20400               ret 4
// copied from an identical function in another client (function ?FindItemData@CXTPReportSubListControl@@IAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp