// roc 2012-06 00a3a9f0  unit: CXTPDockingPaneTabbedContainer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a9f0
//
// 00a3a9f0  53                   push ebx
// 00a3a9f1  55                   push ebp
// 00a3a9f2  56                   push esi
// 00a3a9f3  8bf1                 mov esi, ecx
// 00a3a9f5  57                   push edi
// 00a3a9f6  8d4e54               lea ecx, [esi + 0x54]
// 00a3a9f9  e872f7ffff           call 0xa3a170
// 00a3a9fe  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a3aa02  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a3aa06  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00a3aa0a  85c0                 test eax, eax
// 00a3aa0c  740f                 je 0xa3aa1d
// 00a3aa0e  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 00a3aa14  57                   push edi
// 00a3aa15  53                   push ebx
// 00a3aa16  55                   push ebp
// 00a3aa17  56                   push esi
// 00a3aa18  e8c327fbff           call 0x9ed1e0
// 00a3aa1d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a3aa21  50                   push eax
// 00a3aa22  57                   push edi
// 00a3aa23  53                   push ebx
// 00a3aa24  55                   push ebp
// 00a3aa25  8bce                 mov ecx, esi
// 00a3aa27  e86878f4ff           call 0x982294
// 00a3aa2c  5f                   pop edi
// 00a3aa2d  5e                   pop esi
// 00a3aa2e  5d                   pop ebp
// 00a3aa2f  5b                   pop ebx
// 00a3aa30  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
