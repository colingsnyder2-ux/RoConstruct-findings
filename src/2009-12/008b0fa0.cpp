// roc 2009-12 008b0fa0  unit: CXTPDockingPaneTabbedContainer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0fa0
//
// 008b0fa0  56                   push esi
// 008b0fa1  8bf1                 mov esi, ecx
// 008b0fa3  8b96a4010000         mov edx, dword ptr [esi + 0x1a4]
// 008b0fa9  85d2                 test edx, edx
// 008b0fab  741f                 je 0x8b0fcc
// 008b0fad  8b4664               mov eax, dword ptr [esi + 0x64]
// 008b0fb0  85c0                 test eax, eax
// 008b0fb2  7418                 je 0x8b0fcc
// 008b0fb4  83781805             cmp dword ptr [eax + 0x18], 5
// 008b0fb8  7512                 jne 0x8b0fcc
// 008b0fba  8d48ac               lea ecx, [eax - 0x54]
// 008b0fbd  8b442408             mov eax, dword ptr [esp + 8]
// 008b0fc1  50                   push eax
// 008b0fc2  52                   push edx
// 008b0fc3  e828aeffff           call 0x8abdf0
// 008b0fc8  5e                   pop esi
// 008b0fc9  c20400               ret 4
// 008b0fcc  e87d2bf4ff           call 0x7f3b4e
// 008b0fd1  50                   push eax
// 008b0fd2  e8e9d4ffff           call 0x8ae4c0
// 008b0fd7  50                   push eax
// 008b0fd8  e8612cf4ff           call 0x7f3c3e
// 008b0fdd  83c408               add esp, 8
// 008b0fe0  85c0                 test eax, eax
// 008b0fe2  740e                 je 0x8b0ff2
// 008b0fe4  8bce                 mov ecx, esi
// 008b0fe6  e8632bf4ff           call 0x7f3b4e
// 008b0feb  8bc8                 mov ecx, eax
// 008b0fed  e80eeeffff           call 0x8afe00
// 008b0ff2  5e                   pop esi
// 008b0ff3  c20400               ret 4
// copied from an identical function in another client (function ?Show@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp