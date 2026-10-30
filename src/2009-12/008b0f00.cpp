// roc 2009-12 008b0f00  unit: CXTPDockingPaneTabbedContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0f00
//
// 008b0f00  56                   push esi
// 008b0f01  8bf1                 mov esi, ecx
// 008b0f03  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 008b0f0a  741d                 je 0x8b0f29
// 008b0f0c  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 008b0f12  8b01                 mov eax, dword ptr [ecx]
// 008b0f14  8b5058               mov edx, dword ptr [eax + 0x58]
// 008b0f17  ffd2                 call edx
// 008b0f19  8d4e54               lea ecx, [esi + 0x54]
// 008b0f1c  e81ff9ffff           call 0x8b0840
// 008b0f21  8bc8                 mov ecx, eax
// 008b0f23  5e                   pop esi
// 008b0f24  e9877af8ff           jmp 0x8389b0
// 008b0f29  e8d42cf4ff           call 0x7f3c02
// 008b0f2e  8d4e54               lea ecx, [esi + 0x54]
// 008b0f31  e80af9ffff           call 0x8b0840
// 008b0f36  8bc8                 mov ecx, eax
// 008b0f38  5e                   pop esi
// 008b0f39  e9727af8ff           jmp 0x8389b0
// copied from an identical function in another client (function ?_RestoreFocus@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp