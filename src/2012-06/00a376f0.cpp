// roc 2012-06 00a376f0  unit: CXTPDockingPaneWindowSelect  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a376f0
//
// 00a376f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a376f4  56                   push esi
// 00a376f5  8bf1                 mov esi, ecx
// 00a376f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a376fb  50                   push eax
// 00a376fc  51                   push ecx
// 00a376fd  8bce                 mov ecx, esi
// 00a376ff  e83ceeffff           call 0xa36540
// 00a37704  85c0                 test eax, eax
// 00a37706  7414                 je 0xa3771c
// 00a37708  8b16                 mov edx, dword ptr [esi]
// 00a3770a  898624010000         mov dword ptr [esi + 0x124], eax
// 00a37710  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00a37716  6a01                 push 1
// 00a37718  8bce                 mov ecx, esi
// 00a3771a  ffd0                 call eax
// 00a3771c  8bce                 mov ecx, esi
// 00a3771e  e8bbaff4ff           call 0x9826de
// 00a37723  5e                   pop esi
// 00a37724  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnLButtonUp@CXTPDockingPaneWindowSelect@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
