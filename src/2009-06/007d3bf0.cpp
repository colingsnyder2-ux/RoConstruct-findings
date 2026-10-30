// roc 2009-06 007d3bf0  unit: CXTPDockingPaneMiniWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3bf0
//
// 007d3bf0  53                   push ebx
// 007d3bf1  55                   push ebp
// 007d3bf2  56                   push esi
// 007d3bf3  8bf1                 mov esi, ecx
// 007d3bf5  57                   push edi
// 007d3bf6  8d8ef8000000         lea ecx, [esi + 0xf8]
// 007d3bfc  e8ff200000           call 0x7d5d00
// 007d3c01  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007d3c05  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007d3c09  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007d3c0d  85c0                 test eax, eax
// 007d3c0f  740f                 je 0x7d3c20
// 007d3c11  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 007d3c17  57                   push edi
// 007d3c18  53                   push ebx
// 007d3c19  55                   push ebp
// 007d3c1a  56                   push esi
// 007d3c1b  e85048fbff           call 0x788470
// 007d3c20  8b442420             mov eax, dword ptr [esp + 0x20]
// 007d3c24  50                   push eax
// 007d3c25  57                   push edi
// 007d3c26  53                   push ebx
// 007d3c27  55                   push ebp
// 007d3c28  8bce                 mov ecx, esi
// 007d3c2a  e8834ff4ff           call 0x718bb2
// 007d3c2f  5f                   pop edi
// 007d3c30  5e                   pop esi
// 007d3c31  5d                   pop ebp
// 007d3c32  5b                   pop ebx
// 007d3c33  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
