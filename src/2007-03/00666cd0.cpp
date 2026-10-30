// roc 2007-03 00666cd0  unit: seg_00660000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666cd0
//
// 00666cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00666cd4  894154               mov dword ptr [ecx + 0x54], eax
// 00666cd7  c20400               ret 4
// library mfc-8.0/atlmfc\src\mfc\barcore.cpp (function ?SetInPlaceOwner@CControlBar@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/barcore.cpp
