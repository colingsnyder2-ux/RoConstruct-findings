// roc 2009-12 008a3160  unit: CXTPReportHyperlinks  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3160
//
// 008a3160  56                   push esi
// 008a3161  8bf1                 mov esi, ecx
// 008a3163  8b06                 mov eax, dword ptr [esi]
// 008a3165  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a3168  57                   push edi
// 008a3169  ffd2                 call edx
// 008a316b  8bf8                 mov edi, eax
// 008a316d  83ef01               sub edi, 1
// 008a3170  781a                 js 0x8a318c
// 008a3172  8b06                 mov eax, dword ptr [esi]
// 008a3174  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a3177  57                   push edi
// 008a3178  8bce                 mov ecx, esi
// 008a317a  ffd2                 call edx
// 008a317c  85c0                 test eax, eax
// 008a317e  7407                 je 0x8a3187
// 008a3180  8bc8                 mov ecx, eax
// 008a3182  e8550cf5ff           call 0x7f3ddc
// 008a3187  83ef01               sub edi, 1
// 008a318a  79e6                 jns 0x8a3172
// 008a318c  6aff                 push -1
// 008a318e  6a00                 push 0
// 008a3190  8d4e20               lea ecx, [esi + 0x20]
// 008a3193  e80822fbff           call 0x8553a0
// 008a3198  5f                   pop edi
// 008a3199  5e                   pop esi
// 008a319a  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@CXTPReportHyperlinks@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHyperlink.cpp