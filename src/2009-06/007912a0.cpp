// roc 2009-06 007912a0  unit: CSelectionCaption  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007912a0
//
// 007912a0  56                   push esi
// 007912a1  8bf1                 mov esi, ecx
// 007912a3  e8c8feffff           call 0x791170
// 007912a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007912ac  8b10                 mov edx, dword ptr [eax]
// 007912ae  8b5210               mov edx, dword ptr [edx + 0x10]
// 007912b1  51                   push ecx
// 007912b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007912b6  56                   push esi
// 007912b7  51                   push ecx
// 007912b8  8bc8                 mov ecx, eax
// 007912ba  ffd2                 call edx
// 007912bc  5e                   pop esi
// 007912bd  c20800               ret 8
// copied from an identical function in another client (function ?DrawCaptionBack@CXTCaption@@MAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp