// roc 2010-06 00820fd0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820fd0
//
// 00820fd0  56                   push esi
// 00820fd1  8bf1                 mov esi, ecx
// 00820fd3  e888feffff           call 0x820e60
// 00820fd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00820fdc  8b10                 mov edx, dword ptr [eax]
// 00820fde  8b5218               mov edx, dword ptr [edx + 0x18]
// 00820fe1  51                   push ecx
// 00820fe2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00820fe6  56                   push esi
// 00820fe7  51                   push ecx
// 00820fe8  8bc8                 mov ecx, eax
// 00820fea  ffd2                 call edx
// 00820fec  5e                   pop esi
// 00820fed  c20800               ret 8
// copied from an identical function in another client (function ?DrawCaptionIcon@CXTCaption@@MAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp