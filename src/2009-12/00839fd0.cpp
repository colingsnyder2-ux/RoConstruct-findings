// roc 2009-12 00839fd0  unit: CXTPDockingPaneManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839fd0
//
// 00839fd0  837c240400           cmp dword ptr [esp + 4], 0
// 00839fd5  56                   push esi
// 00839fd6  8bf1                 mov esi, ecx
// 00839fd8  7423                 je 0x839ffd
// 00839fda  8b06                 mov eax, dword ptr [esi]
// 00839fdc  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00839fe2  ffd2                 call edx
// 00839fe4  50                   push eax
// 00839fe5  8bce                 mov ecx, esi
// 00839fe7  898628010000         mov dword ptr [esi + 0x128], eax
// 00839fed  e82ee6ffff           call 0x838620
// 00839ff2  8bce                 mov ecx, esi
// 00839ff4  e8b7f1ffff           call 0x8391b0
// 00839ff9  5e                   pop esi
// 00839ffa  c20400               ret 4
// 00839ffd  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0083a003  50                   push eax
// 0083a004  e887ffffff           call 0x839f90
// 0083a009  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0083a00f  85c9                 test ecx, ecx
// 0083a011  740f                 je 0x83a022
// 0083a013  e8c49dfbff           call 0x7f3ddc
// 0083a018  c7862801000000000000 mov dword ptr [esi + 0x128], 0
// 0083a022  5e                   pop esi
// 0083a023  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPreviewMode@CXTPDockingPaneManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp