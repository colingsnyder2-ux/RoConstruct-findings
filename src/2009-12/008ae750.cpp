// roc 2009-12 008ae750  unit: CXTPDockingPaneMiniWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae750
//
// 008ae750  53                   push ebx
// 008ae751  55                   push ebp
// 008ae752  56                   push esi
// 008ae753  8bf1                 mov esi, ecx
// 008ae755  57                   push edi
// 008ae756  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008ae75c  e8df200000           call 0x8b0840
// 008ae761  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008ae765  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008ae769  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008ae76d  85c0                 test eax, eax
// 008ae76f  740f                 je 0x8ae780
// 008ae771  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 008ae777  57                   push edi
// 008ae778  53                   push ebx
// 008ae779  55                   push ebp
// 008ae77a  56                   push esi
// 008ae77b  e8204dfbff           call 0x8634a0
// 008ae780  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ae784  50                   push eax
// 008ae785  57                   push edi
// 008ae786  53                   push ebx
// 008ae787  55                   push ebp
// 008ae788  8bce                 mov ecx, esi
// 008ae78a  e84b52f4ff           call 0x7f39da
// 008ae78f  5f                   pop edi
// 008ae790  5e                   pop esi
// 008ae791  5d                   pop ebp
// 008ae792  5b                   pop ebx
// 008ae793  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
