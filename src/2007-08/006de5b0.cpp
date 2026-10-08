// from server: 100% by auto
// roc 2007-08 006de5b0  unit: CXTPDockingPaneMiniWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de5b0
//
// 006de5b0  53                   push ebx
// 006de5b1  55                   push ebp
// 006de5b2  56                   push esi
// 006de5b3  8bf1                 mov esi, ecx
// 006de5b5  57                   push edi
// 006de5b6  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006de5bc  e87f1f0000           call 0x6e0540
// 006de5c1  85c0                 test eax, eax
// 006de5c3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006de5c7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006de5cb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006de5cf  740f                 je 0x6de5e0
// 006de5d1  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 006de5d7  57                   push edi
// 006de5d8  53                   push ebx
// 006de5d9  55                   push ebp
// 006de5da  56                   push esi
// 006de5db  e8b082fbff           call 0x696890
// 006de5e0  8b442420             mov eax, dword ptr [esp + 0x20]
// 006de5e4  50                   push eax
// 006de5e5  57                   push edi
// 006de5e6  53                   push ebx
// 006de5e7  55                   push ebp
// 006de5e8  8bce                 mov ecx, esi
// 006de5ea  e8ed17f5ff           call 0x62fddc
// 006de5ef  5f                   pop edi
// 006de5f0  5e                   pop esi
// 006de5f1  5d                   pop ebp
// 006de5f2  5b                   pop ebx
// 006de5f3  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
