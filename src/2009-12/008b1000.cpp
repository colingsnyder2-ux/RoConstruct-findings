// roc 2009-12 008b1000  unit: CXTPDockingPaneTabbedContainer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1000
//
// 008b1000  56                   push esi
// 008b1001  8bf1                 mov esi, ecx
// 008b1003  8b4664               mov eax, dword ptr [esi + 0x64]
// 008b1006  85c0                 test eax, eax
// 008b1008  740f                 je 0x8b1019
// 008b100a  83781805             cmp dword ptr [eax + 0x18], 5
// 008b100e  7509                 jne 0x8b1019
// 008b1010  8d48ac               lea ecx, [eax - 0x54]
// 008b1013  5e                   pop esi
// 008b1014  e9d7adffff           jmp 0x8abdf0
// 008b1019  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b101d  8b06                 mov eax, dword ptr [esi]
// 008b101f  8b542408             mov edx, dword ptr [esp + 8]
// 008b1023  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 008b1029  6a01                 push 1
// 008b102b  51                   push ecx
// 008b102c  52                   push edx
// 008b102d  8bce                 mov ecx, esi
// 008b102f  ffd0                 call eax
// 008b1031  8bce                 mov ecx, esi
// 008b1033  e8162bf4ff           call 0x7f3b4e
// 008b1038  50                   push eax
// 008b1039  e882d4ffff           call 0x8ae4c0
// 008b103e  50                   push eax
// 008b103f  e8fa2bf4ff           call 0x7f3c3e
// 008b1044  83c408               add esp, 8
// 008b1047  85c0                 test eax, eax
// 008b1049  740e                 je 0x8b1059
// 008b104b  8bce                 mov ecx, esi
// 008b104d  e8fc2af4ff           call 0x7f3b4e
// 008b1052  8bc8                 mov ecx, eax
// 008b1054  e8a7edffff           call 0x8afe00
// 008b1059  5e                   pop esi
// 008b105a  c20800               ret 8
// copied from an identical function in another client (function ?ShowPane@CXTPDockingPaneTabbedContainer@@IAEXPAVCXTPDockingPane@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp