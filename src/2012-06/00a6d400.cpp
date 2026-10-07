// roc 2012-06 00a6d400  unit: CXTPTabPaintManager::CColorSetDefault  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6d400
//
// 00a6d400  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a6d404  8b4004               mov eax, dword ptr [eax + 4]
// 00a6d407  56                   push esi
// 00a6d408  85c0                 test eax, eax
// 00a6d40a  741f                 je 0xa6d42b
// 00a6d40c  8b11                 mov edx, dword ptr [ecx]
// 00a6d40e  50                   push eax
// 00a6d40f  8b4224               mov eax, dword ptr [edx + 0x24]
// 00a6d412  ffd0                 call eax
// 00a6d414  8bf0                 mov esi, eax
// 00a6d416  56                   push esi
// 00a6d417  8d4c2410             lea ecx, [esp + 0x10]
// 00a6d41b  51                   push ecx
// 00a6d41c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6d420  e8875af1ff           call 0x982eac
// 00a6d425  8bc6                 mov eax, esi
// 00a6d427  5e                   pop esi
// 00a6d428  c21800               ret 0x18
// 00a6d42b  8b717c               mov esi, dword ptr [ecx + 0x7c]
// 00a6d42e  83feff               cmp esi, -1
// 00a6d431  7503                 jne 0xa6d436
// 00a6d433  8b7178               mov esi, dword ptr [ecx + 0x78]
// 00a6d436  56                   push esi
// 00a6d437  8d4c2410             lea ecx, [esp + 0x10]
// 00a6d43b  51                   push ecx
// 00a6d43c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6d440  e8675af1ff           call 0x982eac
// 00a6d445  8bc6                 mov eax, esi
// 00a6d447  5e                   pop esi
// 00a6d448  c21800               ret 0x18
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CXTPTabPaintManagerColorSet@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
