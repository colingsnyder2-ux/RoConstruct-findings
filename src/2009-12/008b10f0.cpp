// roc 2009-12 008b10f0  unit: CXTPDockingPaneTabbedContainer  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b10f0
//
// 008b10f0  8d442404             lea eax, [esp + 4]
// 008b10f4  50                   push eax
// 008b10f5  e8a6a8f8ff           call 0x83b9a0
// 008b10fa  85c0                 test eax, eax
// 008b10fc  740d                 je 0x8b110b
// 008b10fe  83f8ff               cmp eax, -1
// 008b1101  7408                 je 0x8b110b
// 008b1103  b857000780           mov eax, 0x80070057
// 008b1108  c21400               ret 0x14
// 008b110b  683874a000           push 0xa07438
// 008b1110  ff1550ba9800         call dword ptr [0x98ba50]
// 008b1116  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b111a  8901                 mov dword ptr [ecx], eax
// 008b111c  33c0                 xor eax, eax
// 008b111e  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetAccessibleName@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
