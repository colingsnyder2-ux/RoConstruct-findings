// from server: 100% by auto
// roc 2008-06 0075dd10  unit: CXTPDockingPaneTabbedContainer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dd10
//
// 0075dd10  53                   push ebx
// 0075dd11  55                   push ebp
// 0075dd12  56                   push esi
// 0075dd13  8bf1                 mov esi, ecx
// 0075dd15  57                   push edi
// 0075dd16  8d4e54               lea ecx, [esi + 0x54]
// 0075dd19  e882f7ffff           call 0x75d4a0
// 0075dd1e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0075dd22  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0075dd26  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0075dd2a  85c0                 test eax, eax
// 0075dd2c  740f                 je 0x75dd3d
// 0075dd2e  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 0075dd34  57                   push edi
// 0075dd35  53                   push ebx
// 0075dd36  55                   push ebp
// 0075dd37  56                   push esi
// 0075dd38  e843f6faff           call 0x70d380
// 0075dd3d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0075dd41  50                   push eax
// 0075dd42  57                   push edi
// 0075dd43  53                   push ebx
// 0075dd44  55                   push ebp
// 0075dd45  8bce                 mov ecx, esi
// 0075dd47  e8b42af4ff           call 0x6a0800
// 0075dd4c  5f                   pop edi
// 0075dd4d  5e                   pop esi
// 0075dd4e  5d                   pop ebp
// 0075dd4f  5b                   pop ebx
// 0075dd50  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
