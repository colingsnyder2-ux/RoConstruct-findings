// roc 2007-08 006e0d20  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0d20
//
// 006e0d20  8d442404             lea eax, [esp + 4]
// 006e0d24  50                   push eax
// 006e0d25  e8a606f9ff           call 0x6713d0
// 006e0d2a  85c0                 test eax, eax
// 006e0d2c  740d                 je 0x6e0d3b
// 006e0d2e  83f8ff               cmp eax, -1
// 006e0d31  7408                 je 0x6e0d3b
// 006e0d33  b857000780           mov eax, 0x80070057
// 006e0d38  c21400               ret 0x14
// 006e0d3b  68f09c7d00           push 0x7d9cf0
// 006e0d40  ff15f4e97700         call dword ptr [0x77e9f4]
// 006e0d46  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e0d4a  8901                 mov dword ptr [ecx], eax
// 006e0d4c  33c0                 xor eax, eax
// 006e0d4e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
