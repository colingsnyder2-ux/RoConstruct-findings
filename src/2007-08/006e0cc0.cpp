// from server: 100% by auto
// roc 2007-08 006e0cc0  unit: CXTPDockingPaneTabbedContainer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0cc0
//
// 006e0cc0  53                   push ebx
// 006e0cc1  55                   push ebp
// 006e0cc2  56                   push esi
// 006e0cc3  8bf1                 mov esi, ecx
// 006e0cc5  57                   push edi
// 006e0cc6  8d4e54               lea ecx, [esi + 0x54]
// 006e0cc9  e872f8ffff           call 0x6e0540
// 006e0cce  85c0                 test eax, eax
// 006e0cd0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e0cd4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006e0cd8  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006e0cdc  740f                 je 0x6e0ced
// 006e0cde  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 006e0ce4  57                   push edi
// 006e0ce5  53                   push ebx
// 006e0ce6  55                   push ebp
// 006e0ce7  56                   push esi
// 006e0ce8  e8a35bfbff           call 0x696890
// 006e0ced  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e0cf1  50                   push eax
// 006e0cf2  57                   push edi
// 006e0cf3  53                   push ebx
// 006e0cf4  55                   push ebp
// 006e0cf5  8bce                 mov ecx, esi
// 006e0cf7  e8e0f0f4ff           call 0x62fddc
// 006e0cfc  5f                   pop edi
// 006e0cfd  5e                   pop esi
// 006e0cfe  5d                   pop ebp
// 006e0cff  5b                   pop ebx
// 006e0d00  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
