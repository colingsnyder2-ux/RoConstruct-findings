// roc 2008-06 0075dc80  unit: CXTPDockingPaneTabbedContainer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dc80
//
// 0075dc80  56                   push esi
// 0075dc81  8bf1                 mov esi, ecx
// 0075dc83  8b4664               mov eax, dword ptr [esi + 0x64]
// 0075dc86  85c0                 test eax, eax
// 0075dc88  740f                 je 0x75dc99
// 0075dc8a  83781805             cmp dword ptr [eax + 0x18], 5
// 0075dc8e  7509                 jne 0x75dc99
// 0075dc90  8d48ac               lea ecx, [eax - 0x54]
// 0075dc93  5e                   pop esi
// 0075dc94  e987adffff           jmp 0x758a20
// 0075dc99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075dc9d  8b06                 mov eax, dword ptr [esi]
// 0075dc9f  8b542408             mov edx, dword ptr [esp + 8]
// 0075dca3  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 0075dca9  6a01                 push 1
// 0075dcab  51                   push ecx
// 0075dcac  52                   push edx
// 0075dcad  8bce                 mov ecx, esi
// 0075dcaf  ffd0                 call eax
// 0075dcb1  8bce                 mov ecx, esi
// 0075dcb3  e8bc2cf4ff           call 0x6a0974
// 0075dcb8  50                   push eax
// 0075dcb9  e862d4ffff           call 0x75b120
// 0075dcbe  50                   push eax
// 0075dcbf  e8622ff4ff           call 0x6a0c26
// 0075dcc4  83c408               add esp, 8
// 0075dcc7  85c0                 test eax, eax
// 0075dcc9  740e                 je 0x75dcd9
// 0075dccb  8bce                 mov ecx, esi
// 0075dccd  e8a22cf4ff           call 0x6a0974
// 0075dcd2  8bc8                 mov ecx, eax
// 0075dcd4  e8a7edffff           call 0x75ca80
// 0075dcd9  5e                   pop esi
// 0075dcda  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?ShowPane@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
