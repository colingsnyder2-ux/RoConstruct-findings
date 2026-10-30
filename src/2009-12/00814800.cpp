// roc 2009-12 00814800  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814800
//
// 00814800  56                   push esi
// 00814801  8bf1                 mov esi, ecx
// 00814803  e83a1c1100           call 0x926442
// 00814808  8d4e24               lea ecx, [esi + 0x24]
// 0081480b  e850ffffff           call 0x814760
// 00814810  8b442408             mov eax, dword ptr [esp + 8]
// 00814814  894620               mov dword ptr [esi + 0x20], eax
// 00814817  c706ac3d9f00         mov dword ptr [esi], 0x9f3dac
// 0081481d  8bc6                 mov eax, esi
// 0081481f  5e                   pop esi
// 00814820  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCommandBarsContextMenus@@QAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp