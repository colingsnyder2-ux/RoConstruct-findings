// roc 2007-03 00689f40  unit: seg_00680000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00689f40
//
// 00689f40  56                   push esi
// 00689f41  8bf1                 mov esi, ecx
// 00689f43  e8d8830700           call 0x702320
// 00689f48  83780800             cmp dword ptr [eax + 8], 0
// 00689f4c  7418                 je 0x689f66
// 00689f4e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00689f52  830001               add dword ptr [eax], 1
// 00689f55  83400401             add dword ptr [eax + 4], 1
// 00689f59  83c9ff               or ecx, 0xffffffff
// 00689f5c  014808               add dword ptr [eax + 8], ecx
// 00689f5f  01480c               add dword ptr [eax + 0xc], ecx
// 00689f62  5e                   pop esi
// 00689f63  c20800               ret 8
// 00689f66  8bce                 mov ecx, esi
// 00689f68  e86547f9ff           call 0x61e6d2
// 00689f6d  5e                   pop esi
// 00689f6e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTColorPopup.cpp (function ?OnNcCalcSize@CXTColorPopup@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPopup.cpp
