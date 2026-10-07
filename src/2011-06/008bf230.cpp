// roc 2011-06 008bf230  unit: CXTPDockingPaneWindowSelect  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bf230
//
// 008bf230  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008bf234  56                   push esi
// 008bf235  8bf1                 mov esi, ecx
// 008bf237  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bf23b  50                   push eax
// 008bf23c  51                   push ecx
// 008bf23d  8bce                 mov ecx, esi
// 008bf23f  e8fcedffff           call 0x8be040
// 008bf244  85c0                 test eax, eax
// 008bf246  7411                 je 0x8bf259
// 008bf248  8bb628010000         mov esi, dword ptr [esi + 0x128]
// 008bf24e  56                   push esi
// 008bf24f  ff15f41ba400         call dword ptr [0xa41bf4]
// 008bf255  5e                   pop esi
// 008bf256  c20c00               ret 0xc
// 008bf259  8bb62c010000         mov esi, dword ptr [esi + 0x12c]
// 008bf25f  56                   push esi
// 008bf260  ff15f41ba400         call dword ptr [0xa41bf4]
// 008bf266  5e                   pop esi
// 008bf267  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnMouseMove@CXTPDockingPaneWindowSelect@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
