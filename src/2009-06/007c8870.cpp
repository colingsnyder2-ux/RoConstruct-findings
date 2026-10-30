// roc 2009-06 007c8870  unit: CXTPReportHyperlinks  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c8870
//
// 007c8870  53                   push ebx
// 007c8871  8b1d90ee8900         mov ebx, dword ptr [0x89ee90]
// 007c8877  55                   push ebp
// 007c8878  56                   push esi
// 007c8879  57                   push edi
// 007c887a  6a00                 push 0
// 007c887c  6a00                 push 0
// 007c887e  8bf9                 mov edi, ecx
// 007c8880  8b4720               mov eax, dword ptr [edi + 0x20]
// 007c8883  688b010000           push 0x18b
// 007c8888  50                   push eax
// 007c8889  ffd3                 call ebx
// 007c888b  8bf0                 mov esi, eax
// 007c888d  83ee01               sub esi, 1
// 007c8890  781b                 js 0x7c88ad
// 007c8892  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007c8896  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007c8899  6a00                 push 0
// 007c889b  56                   push esi
// 007c889c  6899010000           push 0x199
// 007c88a1  51                   push ecx
// 007c88a2  ffd3                 call ebx
// 007c88a4  3be8                 cmp ebp, eax
// 007c88a6  740f                 je 0x7c88b7
// 007c88a8  83ee01               sub esi, 1
// 007c88ab  79e9                 jns 0x7c8896
// 007c88ad  5f                   pop edi
// 007c88ae  5e                   pop esi
// 007c88af  5d                   pop ebp
// 007c88b0  83c8ff               or eax, 0xffffffff
// 007c88b3  5b                   pop ebx
// 007c88b4  c20400               ret 4
// 007c88b7  5f                   pop edi
// 007c88b8  8bc6                 mov eax, esi
// 007c88ba  5e                   pop esi
// 007c88bb  5d                   pop ebp
// 007c88bc  5b                   pop ebx
// 007c88bd  c20400               ret 4
// copied from an identical function in another client (function ?FindItemData@CXTPReportSubListControl@@IAEHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp