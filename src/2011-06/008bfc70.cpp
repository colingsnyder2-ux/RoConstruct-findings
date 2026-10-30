// roc 2011-06 008bfc70  unit: CXTPDockingPaneMiniWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bfc70
//
// 008bfc70  53                   push ebx
// 008bfc71  55                   push ebp
// 008bfc72  56                   push esi
// 008bfc73  8bf1                 mov esi, ecx
// 008bfc75  57                   push edi
// 008bfc76  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008bfc7c  e8df200000           call 0x8c1d60
// 008bfc81  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008bfc85  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008bfc89  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008bfc8d  85c0                 test eax, eax
// 008bfc8f  740f                 je 0x8bfca0
// 008bfc91  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 008bfc97  57                   push edi
// 008bfc98  53                   push ebx
// 008bfc99  55                   push ebp
// 008bfc9a  56                   push esi
// 008bfc9b  e81050fbff           call 0x874cb0
// 008bfca0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008bfca4  50                   push eax
// 008bfca5  57                   push edi
// 008bfca6  53                   push ebx
// 008bfca7  55                   push ebp
// 008bfca8  8bce                 mov ecx, esi
// 008bfcaa  e829a5f4ff           call 0x80a1d8
// 008bfcaf  5f                   pop edi
// 008bfcb0  5e                   pop esi
// 008bfcb1  5d                   pop ebp
// 008bfcb2  5b                   pop ebx
// 008bfcb3  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
