// roc 2009-12 00804250  unit: CXTPCommandBar::CCommandBarCmdUI  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804250
//
// 00804250  c7412c01000000       mov dword ptr [ecx + 0x2c], 1
// 00804257  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 0080425a  85c9                 test ecx, ecx
// 0080425c  741f                 je 0x80427d
// 0080425e  8b442404             mov eax, dword ptr [esp + 4]
// 00804262  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 00804268  7413                 je 0x80427d
// 0080426a  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00804270  c744240401000000     mov dword ptr [esp + 4], 1
// 00804278  e94324ffff           jmp 0x7f66c0
// 0080427d  c20400               ret 4
// copied from an identical function in another client (function ?SetCheck@CCommandBarCmdUI@CXTPCommandBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp