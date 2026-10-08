// roc 2012-06 00a38080  unit: CXTPDockingPaneMiniWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38080
//
// 00a38080  53                   push ebx
// 00a38081  55                   push ebp
// 00a38082  56                   push esi
// 00a38083  8bf1                 mov esi, ecx
// 00a38085  57                   push edi
// 00a38086  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00a3808c  e8df200000           call 0xa3a170
// 00a38091  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a38095  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a38099  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00a3809d  85c0                 test eax, eax
// 00a3809f  740f                 je 0xa380b0
// 00a380a1  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 00a380a7  57                   push edi
// 00a380a8  53                   push ebx
// 00a380a9  55                   push ebp
// 00a380aa  56                   push esi
// 00a380ab  e83051fbff           call 0x9ed1e0
// 00a380b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a380b4  50                   push eax
// 00a380b5  57                   push edi
// 00a380b6  53                   push ebx
// 00a380b7  55                   push ebp
// 00a380b8  8bce                 mov ecx, esi
// 00a380ba  e8d5a1f4ff           call 0x982294
// 00a380bf  5f                   pop edi
// 00a380c0  5e                   pop esi
// 00a380c1  5d                   pop ebp
// 00a380c2  5b                   pop ebx
// 00a380c3  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
