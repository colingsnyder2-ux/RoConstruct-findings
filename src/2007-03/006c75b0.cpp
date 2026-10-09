// roc 2007-03 006c75b0  unit: seg_006c0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c75b0
//
// 006c75b0  53                   push ebx
// 006c75b1  55                   push ebp
// 006c75b2  56                   push esi
// 006c75b3  8bf1                 mov esi, ecx
// 006c75b5  57                   push edi
// 006c75b6  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006c75bc  e85f1f0000           call 0x6c9520
// 006c75c1  85c0                 test eax, eax
// 006c75c3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006c75c7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006c75cb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006c75cf  740f                 je 0x6c75e0
// 006c75d1  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 006c75d7  57                   push edi
// 006c75d8  53                   push ebx
// 006c75d9  55                   push ebp
// 006c75da  56                   push esi
// 006c75db  e8f08cfbff           call 0x6802d0
// 006c75e0  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c75e4  50                   push eax
// 006c75e5  57                   push edi
// 006c75e6  53                   push ebx
// 006c75e7  55                   push ebp
// 006c75e8  8bce                 mov ecx, esi
// 006c75ea  e8816cf5ff           call 0x61e270
// 006c75ef  5f                   pop edi
// 006c75f0  5e                   pop esi
// 006c75f1  5d                   pop ebp
// 006c75f2  5b                   pop ebx
// 006c75f3  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
