// roc 2009-06 007d6550  unit: CXTPDockingPaneTabbedContainer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6550
//
// 007d6550  53                   push ebx
// 007d6551  55                   push ebp
// 007d6552  56                   push esi
// 007d6553  8bf1                 mov esi, ecx
// 007d6555  57                   push edi
// 007d6556  8d4e54               lea ecx, [esi + 0x54]
// 007d6559  e8a2f7ffff           call 0x7d5d00
// 007d655e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007d6562  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007d6566  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007d656a  85c0                 test eax, eax
// 007d656c  740f                 je 0x7d657d
// 007d656e  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 007d6574  57                   push edi
// 007d6575  53                   push ebx
// 007d6576  55                   push ebp
// 007d6577  56                   push esi
// 007d6578  e8f31efbff           call 0x788470
// 007d657d  8b442420             mov eax, dword ptr [esp + 0x20]
// 007d6581  50                   push eax
// 007d6582  57                   push edi
// 007d6583  53                   push ebx
// 007d6584  55                   push ebp
// 007d6585  8bce                 mov ecx, esi
// 007d6587  e82626f4ff           call 0x718bb2
// 007d658c  5f                   pop edi
// 007d658d  5e                   pop esi
// 007d658e  5d                   pop ebp
// 007d658f  5b                   pop ebx
// 007d6590  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
