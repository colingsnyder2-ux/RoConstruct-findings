// from server: 100% by tester
// roc 2008-06 0079a750  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a750
//
// 0079a750  56                   push esi
// 0079a751  8bf1                 mov esi, ecx
// 0079a753  e8e80af1ff           call 0x6ab240
// 0079a758  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079a75c  8b10                 mov edx, dword ptr [eax]
// 0079a75e  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0079a761  6a00                 push 0
// 0079a763  56                   push esi
// 0079a764  8b742410             mov esi, dword ptr [esp + 0x10]
// 0079a768  51                   push ecx
// 0079a769  56                   push esi
// 0079a76a  8bc8                 mov ecx, eax
// 0079a76c  ffd2                 call edx
// 0079a76e  8bc6                 mov eax, esi
// 0079a770  5e                   pop esi
// 0079a771  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetSize@CXTPRibbonControlSystemPopupBarButton@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp
