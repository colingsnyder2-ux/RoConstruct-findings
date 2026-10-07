// roc 2012-06 00a37730  unit: CXTPDockingPaneWindowSelect  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a37730
//
// 00a37730  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a37734  56                   push esi
// 00a37735  8bf1                 mov esi, ecx
// 00a37737  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a3773b  50                   push eax
// 00a3773c  51                   push ecx
// 00a3773d  8bce                 mov ecx, esi
// 00a3773f  e8fcedffff           call 0xa36540
// 00a37744  85c0                 test eax, eax
// 00a37746  7411                 je 0xa37759
// 00a37748  8bb628010000         mov esi, dword ptr [esi + 0x128]
// 00a3774e  56                   push esi
// 00a3774f  ff15783bb200         call dword ptr [0xb23b78]
// 00a37755  5e                   pop esi
// 00a37756  c20c00               ret 0xc
// 00a37759  8bb62c010000         mov esi, dword ptr [esi + 0x12c]
// 00a3775f  56                   push esi
// 00a37760  ff15783bb200         call dword ptr [0xb23b78]
// 00a37766  5e                   pop esi
// 00a37767  c20c00               ret 0xc
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnMouseMove@CXTPDockingPaneWindowSelect@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
