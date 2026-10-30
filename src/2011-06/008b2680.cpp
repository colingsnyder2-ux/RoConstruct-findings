// roc 2011-06 008b2680  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b2680
//
// 008b2680  53                   push ebx
// 008b2681  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 008b2687  55                   push ebp
// 008b2688  56                   push esi
// 008b2689  57                   push edi
// 008b268a  6a00                 push 0
// 008b268c  6a00                 push 0
// 008b268e  8bf9                 mov edi, ecx
// 008b2690  8b4720               mov eax, dword ptr [edi + 0x20]
// 008b2693  688b010000           push 0x18b
// 008b2698  50                   push eax
// 008b2699  ffd3                 call ebx
// 008b269b  8bf0                 mov esi, eax
// 008b269d  83ee01               sub esi, 1
// 008b26a0  781b                 js 0x8b26bd
// 008b26a2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008b26a6  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008b26a9  6a00                 push 0
// 008b26ab  56                   push esi
// 008b26ac  6899010000           push 0x199
// 008b26b1  51                   push ecx
// 008b26b2  ffd3                 call ebx
// 008b26b4  3be8                 cmp ebp, eax
// 008b26b6  740f                 je 0x8b26c7
// 008b26b8  83ee01               sub esi, 1
// 008b26bb  79e9                 jns 0x8b26a6
// 008b26bd  5f                   pop edi
// 008b26be  5e                   pop esi
// 008b26bf  5d                   pop ebp
// 008b26c0  83c8ff               or eax, 0xffffffff
// 008b26c3  5b                   pop ebx
// 008b26c4  c20400               ret 4
// 008b26c7  5f                   pop edi
// 008b26c8  8bc6                 mov eax, esi
// 008b26ca  5e                   pop esi
// 008b26cb  5d                   pop ebp
// 008b26cc  5b                   pop ebx
// 008b26cd  c20400               ret 4
// copied from an identical function in another client (function ?FindItemData@CXTPReportSubListControl@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp