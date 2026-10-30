// roc 2010-06 00862820  unit: CXTPDockingPaneMiniWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00862820
//
// 00862820  53                   push ebx
// 00862821  55                   push ebp
// 00862822  56                   push esi
// 00862823  8bf1                 mov esi, ecx
// 00862825  57                   push edi
// 00862826  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0086282c  e8df200000           call 0x864910
// 00862831  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00862835  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00862839  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086283d  85c0                 test eax, eax
// 0086283f  740f                 je 0x862850
// 00862841  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 00862847  57                   push edi
// 00862848  53                   push ebx
// 00862849  55                   push ebp
// 0086284a  56                   push esi
// 0086284b  e8004cfbff           call 0x817450
// 00862850  8b442420             mov eax, dword ptr [esp + 0x20]
// 00862854  50                   push eax
// 00862855  57                   push edi
// 00862856  53                   push ebx
// 00862857  55                   push ebp
// 00862858  8bce                 mov ecx, esi
// 0086285a  e8bb52f4ff           call 0x7a7b1a
// 0086285f  5f                   pop edi
// 00862860  5e                   pop esi
// 00862861  5d                   pop ebp
// 00862862  5b                   pop ebx
// 00862863  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
