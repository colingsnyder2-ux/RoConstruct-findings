// roc 2007-08 006db080  unit: CXTPDockingPaneAutoHidePanel  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006db080
//
// 006db080  56                   push esi
// 006db081  8bf1                 mov esi, ecx
// 006db083  837e5400             cmp dword ptr [esi + 0x54], 0
// 006db087  744b                 je 0x6db0d4
// 006db089  833d90888b0000       cmp dword ptr [0x8b8890], 0
// 006db090  752e                 jne 0x6db0c0
// 006db092  8d46ac               lea eax, [esi - 0x54]
// 006db095  f7d8                 neg eax
// 006db097  1bc0                 sbb eax, eax
// 006db099  23c6                 and eax, esi
// 006db09b  6a00                 push 0
// 006db09d  50                   push eax
// 006db09e  e89d540000           call 0x6e0540
// 006db0a3  8bc8                 mov ecx, eax
// 006db0a5  e8763cf9ff           call 0x66ed20
// 006db0aa  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 006db0ad  8b01                 mov eax, dword ptr [ecx]
// 006db0af  5e                   pop esi
// 006db0b0  c744240401000000     mov dword ptr [esp + 4], 1
// 006db0b8  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006db0be  ffe2                 jmp edx
// 006db0c0  e87b540000           call 0x6e0540
// 006db0c5  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 006db0cb  50                   push eax
// 006db0cc  8d4eac               lea ecx, [esi - 0x54]
// 006db0cf  e8acfdffff           call 0x6dae80
// 006db0d4  5e                   pop esi
// 006db0d5  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnChildContainerChanged@CXTPDockingPaneAutoHidePanel@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
