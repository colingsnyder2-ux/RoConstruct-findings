// roc 2009-12 008a3120  unit: CXTPReportHyperlinks  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3120
//
// 008a3120  56                   push esi
// 008a3121  57                   push edi
// 008a3122  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a3126  8bf1                 mov esi, ecx
// 008a3128  85ff                 test edi, edi
// 008a312a  7c2b                 jl 0x8a3157
// 008a312c  8b06                 mov eax, dword ptr [esi]
// 008a312e  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a3131  ffd2                 call edx
// 008a3133  3bf8                 cmp edi, eax
// 008a3135  7d20                 jge 0x8a3157
// 008a3137  8b06                 mov eax, dword ptr [esi]
// 008a3139  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a313c  57                   push edi
// 008a313d  8bce                 mov ecx, esi
// 008a313f  ffd2                 call edx
// 008a3141  85c0                 test eax, eax
// 008a3143  7407                 je 0x8a314c
// 008a3145  8bc8                 mov ecx, eax
// 008a3147  e8900cf5ff           call 0x7f3ddc
// 008a314c  6a01                 push 1
// 008a314e  57                   push edi
// 008a314f  8d4e20               lea ecx, [esi + 0x20]
// 008a3152  e829a1f8ff           call 0x82d280
// 008a3157  5f                   pop edi
// 008a3158  5e                   pop esi
// 008a3159  c20400               ret 4
// copied from an identical function in another client (function ?RemoveAt@CXTPReportHyperlinks@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHyperlink.cpp