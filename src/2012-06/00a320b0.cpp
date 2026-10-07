// roc 2012-06 00a320b0  unit: UXTP_DOCKINGPANE_INFO::?$CList  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a320b0
//
// 00a320b0  56                   push esi
// 00a320b1  8bf1                 mov esi, ecx
// 00a320b3  8b4604               mov eax, dword ptr [esi + 4]
// 00a320b6  50                   push eax
// 00a320b7  6a00                 push 0
// 00a320b9  e852520100           call 0xa47310
// 00a320be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a320c2  894808               mov dword ptr [eax + 8], ecx
// 00a320c5  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a320c8  85c9                 test ecx, ecx
// 00a320ca  740a                 je 0xa320d6
// 00a320cc  894104               mov dword ptr [ecx + 4], eax
// 00a320cf  894604               mov dword ptr [esi + 4], eax
// 00a320d2  5e                   pop esi
// 00a320d3  c20400               ret 4
// 00a320d6  894608               mov dword ptr [esi + 8], eax
// 00a320d9  894604               mov dword ptr [esi + 4], eax
// 00a320dc  5e                   pop esi
// 00a320dd  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTOutBarCtrl.cpp (function ?AddHead@?$CList@PAVCXTOutBarItem@@PAV1@@@QAEPAU__POSITION@@PAVCXTOutBarItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp
