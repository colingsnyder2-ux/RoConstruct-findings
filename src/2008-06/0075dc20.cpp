// roc 2008-06 0075dc20  unit: CXTPDockingPaneTabbedContainer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dc20
//
// 0075dc20  56                   push esi
// 0075dc21  8bf1                 mov esi, ecx
// 0075dc23  8b96a4010000         mov edx, dword ptr [esi + 0x1a4]
// 0075dc29  85d2                 test edx, edx
// 0075dc2b  741f                 je 0x75dc4c
// 0075dc2d  8b4664               mov eax, dword ptr [esi + 0x64]
// 0075dc30  85c0                 test eax, eax
// 0075dc32  7418                 je 0x75dc4c
// 0075dc34  83781805             cmp dword ptr [eax + 0x18], 5
// 0075dc38  7512                 jne 0x75dc4c
// 0075dc3a  8d48ac               lea ecx, [eax - 0x54]
// 0075dc3d  8b442408             mov eax, dword ptr [esp + 8]
// 0075dc41  50                   push eax
// 0075dc42  52                   push edx
// 0075dc43  e8d8adffff           call 0x758a20
// 0075dc48  5e                   pop esi
// 0075dc49  c20400               ret 4
// 0075dc4c  e8232df4ff           call 0x6a0974
// 0075dc51  50                   push eax
// 0075dc52  e8c9d4ffff           call 0x75b120
// 0075dc57  50                   push eax
// 0075dc58  e8c92ff4ff           call 0x6a0c26
// 0075dc5d  83c408               add esp, 8
// 0075dc60  85c0                 test eax, eax
// 0075dc62  740e                 je 0x75dc72
// 0075dc64  8bce                 mov ecx, esi
// 0075dc66  e8092df4ff           call 0x6a0974
// 0075dc6b  8bc8                 mov ecx, eax
// 0075dc6d  e80eeeffff           call 0x75ca80
// 0075dc72  5e                   pop esi
// 0075dc73  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Show@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
