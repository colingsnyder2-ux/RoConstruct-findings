// roc 2010-06 008577a0  unit: CXTPReportHyperlinks  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008577a0
//
// 008577a0  53                   push ebx
// 008577a1  8b1d54ba9e00         mov ebx, dword ptr [0x9eba54]
// 008577a7  55                   push ebp
// 008577a8  56                   push esi
// 008577a9  57                   push edi
// 008577aa  6a00                 push 0
// 008577ac  6a00                 push 0
// 008577ae  8bf9                 mov edi, ecx
// 008577b0  8b4720               mov eax, dword ptr [edi + 0x20]
// 008577b3  688b010000           push 0x18b
// 008577b8  50                   push eax
// 008577b9  ffd3                 call ebx
// 008577bb  8bf0                 mov esi, eax
// 008577bd  83ee01               sub esi, 1
// 008577c0  781b                 js 0x8577dd
// 008577c2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008577c6  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008577c9  6a00                 push 0
// 008577cb  56                   push esi
// 008577cc  6899010000           push 0x199
// 008577d1  51                   push ecx
// 008577d2  ffd3                 call ebx
// 008577d4  3be8                 cmp ebp, eax
// 008577d6  740f                 je 0x8577e7
// 008577d8  83ee01               sub esi, 1
// 008577db  79e9                 jns 0x8577c6
// 008577dd  5f                   pop edi
// 008577de  5e                   pop esi
// 008577df  5d                   pop ebp
// 008577e0  83c8ff               or eax, 0xffffffff
// 008577e3  5b                   pop ebx
// 008577e4  c20400               ret 4
// 008577e7  5f                   pop edi
// 008577e8  8bc6                 mov eax, esi
// 008577ea  5e                   pop esi
// 008577eb  5d                   pop ebp
// 008577ec  5b                   pop ebx
// 008577ed  c20400               ret 4
// copied from an identical function in another client (function ?FindItemData@CXTPReportSubListControl@@IAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp