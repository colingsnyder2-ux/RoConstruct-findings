// from server: 100% by auto
// roc 2008-06 0075b3b0  unit: CXTPDockingPaneMiniWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b3b0
//
// 0075b3b0  53                   push ebx
// 0075b3b1  55                   push ebp
// 0075b3b2  56                   push esi
// 0075b3b3  8bf1                 mov esi, ecx
// 0075b3b5  57                   push edi
// 0075b3b6  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0075b3bc  e8df200000           call 0x75d4a0
// 0075b3c1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0075b3c5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0075b3c9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0075b3cd  85c0                 test eax, eax
// 0075b3cf  740f                 je 0x75b3e0
// 0075b3d1  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 0075b3d7  57                   push edi
// 0075b3d8  53                   push ebx
// 0075b3d9  55                   push ebp
// 0075b3da  56                   push esi
// 0075b3db  e8a01ffbff           call 0x70d380
// 0075b3e0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0075b3e4  50                   push eax
// 0075b3e5  57                   push edi
// 0075b3e6  53                   push ebx
// 0075b3e7  55                   push ebp
// 0075b3e8  8bce                 mov ecx, esi
// 0075b3ea  e81154f4ff           call 0x6a0800
// 0075b3ef  5f                   pop edi
// 0075b3f0  5e                   pop esi
// 0075b3f1  5d                   pop ebp
// 0075b3f2  5b                   pop ebx
// 0075b3f3  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnWndMsg@CXTPDockingPaneMiniWnd@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
