// roc 2011-06 008c25c0  unit: CXTPDockingPaneTabbedContainer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c25c0
//
// 008c25c0  53                   push ebx
// 008c25c1  55                   push ebp
// 008c25c2  56                   push esi
// 008c25c3  8bf1                 mov esi, ecx
// 008c25c5  57                   push edi
// 008c25c6  8d4e54               lea ecx, [esi + 0x54]
// 008c25c9  e892f7ffff           call 0x8c1d60
// 008c25ce  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008c25d2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008c25d6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008c25da  85c0                 test eax, eax
// 008c25dc  740f                 je 0x8c25ed
// 008c25de  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 008c25e4  57                   push edi
// 008c25e5  53                   push ebx
// 008c25e6  55                   push ebp
// 008c25e7  56                   push esi
// 008c25e8  e8c326fbff           call 0x874cb0
// 008c25ed  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c25f1  50                   push eax
// 008c25f2  57                   push edi
// 008c25f3  53                   push ebx
// 008c25f4  55                   push ebp
// 008c25f5  8bce                 mov ecx, esi
// 008c25f7  e8dc7bf4ff           call 0x80a1d8
// 008c25fc  5f                   pop edi
// 008c25fd  5e                   pop esi
// 008c25fe  5d                   pop ebp
// 008c25ff  5b                   pop ebx
// 008c2600  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
