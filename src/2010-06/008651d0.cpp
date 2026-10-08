// roc 2010-06 008651d0  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008651d0
//
// 008651d0  8d442404             lea eax, [esp + 4]
// 008651d4  50                   push eax
// 008651d5  e816a9f8ff           call 0x7efaf0
// 008651da  85c0                 test eax, eax
// 008651dc  740d                 je 0x8651eb
// 008651de  83f8ff               cmp eax, -1
// 008651e1  7408                 je 0x8651eb
// 008651e3  b857000780           mov eax, 0x80070057
// 008651e8  c21400               ret 0x14
// 008651eb  6820b7a600           push 0xa6b720
// 008651f0  ff1580aa9e00         call dword ptr [0x9eaa80]
// 008651f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008651fa  8901                 mov dword ptr [ecx], eax
// 008651fc  33c0                 xor eax, eax
// 008651fe  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
