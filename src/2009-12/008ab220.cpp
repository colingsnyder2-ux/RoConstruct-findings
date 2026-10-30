// roc 2009-12 008ab220  unit: CXTPDockingPaneAutoHidePanel  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab220
//
// 008ab220  56                   push esi
// 008ab221  8bf1                 mov esi, ecx
// 008ab223  837e5400             cmp dword ptr [esi + 0x54], 0
// 008ab227  744b                 je 0x8ab274
// 008ab229  833db88eb60000       cmp dword ptr [0xb68eb8], 0
// 008ab230  752e                 jne 0x8ab260
// 008ab232  8d46ac               lea eax, [esi - 0x54]
// 008ab235  f7d8                 neg eax
// 008ab237  1bc0                 sbb eax, eax
// 008ab239  23c6                 and eax, esi
// 008ab23b  6a00                 push 0
// 008ab23d  50                   push eax
// 008ab23e  e8fd550000           call 0x8b0840
// 008ab243  8bc8                 mov ecx, eax
// 008ab245  e886e0f8ff           call 0x8392d0
// 008ab24a  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008ab24d  8b01                 mov eax, dword ptr [ecx]
// 008ab24f  5e                   pop esi
// 008ab250  c744240401000000     mov dword ptr [esp + 4], 1
// 008ab258  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008ab25e  ffe2                 jmp edx
// 008ab260  e8db550000           call 0x8b0840
// 008ab265  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 008ab26b  50                   push eax
// 008ab26c  8d4eac               lea ecx, [esi - 0x54]
// 008ab26f  e8acfdffff           call 0x8ab020
// 008ab274  5e                   pop esi
// 008ab275  c20400               ret 4
// copied from an identical function in another client (function ?OnChildContainerChanged@CXTPDockingPaneAutoHidePanel@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp