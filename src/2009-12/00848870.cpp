// roc 2009-12 00848870  unit: CXTPControlLabel  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848870
//
// 00848870  837c240400           cmp dword ptr [esp + 4], 0
// 00848875  56                   push esi
// 00848876  8bf1                 mov esi, ecx
// 00848878  7552                 jne 0x8488cc
// 0084887a  e831d6faff           call 0x7f5eb0
// 0084887f  85c0                 test eax, eax
// 00848881  7449                 je 0x8488cc
// 00848883  8b06                 mov eax, dword ptr [esi]
// 00848885  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 0084888b  8bce                 mov ecx, esi
// 0084888d  ffd2                 call edx
// 0084888f  85c0                 test eax, eax
// 00848891  7439                 je 0x8488cc
// 00848893  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00848899  6a00                 push 0
// 0084889b  6aff                 push -1
// 0084889d  e8fedcfbff           call 0x8065a0
// 008488a2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008488a8  8b01                 mov eax, dword ptr [ecx]
// 008488aa  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008488b0  6a00                 push 0
// 008488b2  6aff                 push -1
// 008488b4  ffd2                 call edx
// 008488b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008488ba  8b06                 mov eax, dword ptr [esi]
// 008488bc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008488c0  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 008488c6  51                   push ecx
// 008488c7  52                   push edx
// 008488c8  8bce                 mov ecx, esi
// 008488ca  ffd0                 call eax
// 008488cc  5e                   pop esi
// 008488cd  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnClick@CXTPControlLabel@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlExt.cpp