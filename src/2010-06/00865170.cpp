// roc 2010-06 00865170  unit: CXTPDockingPaneTabbedContainer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865170
//
// 00865170  53                   push ebx
// 00865171  55                   push ebp
// 00865172  56                   push esi
// 00865173  8bf1                 mov esi, ecx
// 00865175  57                   push edi
// 00865176  8d4e54               lea ecx, [esi + 0x54]
// 00865179  e892f7ffff           call 0x864910
// 0086517e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00865182  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00865186  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086518a  85c0                 test eax, eax
// 0086518c  740f                 je 0x86519d
// 0086518e  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 00865194  57                   push edi
// 00865195  53                   push ebx
// 00865196  55                   push ebp
// 00865197  56                   push esi
// 00865198  e8b322fbff           call 0x817450
// 0086519d  8b442420             mov eax, dword ptr [esp + 0x20]
// 008651a1  50                   push eax
// 008651a2  57                   push edi
// 008651a3  53                   push ebx
// 008651a4  55                   push ebp
// 008651a5  8bce                 mov ecx, esi
// 008651a7  e86e29f4ff           call 0x7a7b1a
// 008651ac  5f                   pop edi
// 008651ad  5e                   pop esi
// 008651ae  5d                   pop ebp
// 008651af  5b                   pop ebx
// 008651b0  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
