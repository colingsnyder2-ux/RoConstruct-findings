// roc 2012-06 00a67210  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a67210
//
// 00a67210  8b5104               mov edx, dword ptr [ecx + 4]
// 00a67213  85d2                 test edx, edx
// 00a67215  7505                 jne 0xa6721c
// 00a67217  e8a4b1f1ff           call 0x9823c0
// 00a6721c  8b02                 mov eax, dword ptr [edx]
// 00a6721e  56                   push esi
// 00a6721f  8b7208               mov esi, dword ptr [edx + 8]
// 00a67222  894104               mov dword ptr [ecx + 4], eax
// 00a67225  85c0                 test eax, eax
// 00a67227  7411                 je 0xa6723a
// 00a67229  52                   push edx
// 00a6722a  c7400400000000       mov dword ptr [eax + 4], 0
// 00a67231  e8eae49eff           call 0x455720
// 00a67236  8bc6                 mov eax, esi
// 00a67238  5e                   pop esi
// 00a67239  c3                   ret 
// 00a6723a  52                   push edx
// 00a6723b  c7410800000000       mov dword ptr [ecx + 8], 0
// 00a67242  e8d9e49eff           call 0x455720
// 00a67247  8bc6                 mov eax, esi
// 00a67249  5e                   pop esi
// 00a6724a  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?RemoveHead@?$CList@PAVCXTPCalendarViewPart@@PAV1@@@QAEPAVCXTPCalendarViewPart@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp
