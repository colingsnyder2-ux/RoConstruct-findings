// roc 2009-12 008391e0  unit: CXTPDockingPaneManager  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008391e0
//
// 008391e0  56                   push esi
// 008391e1  8b742408             mov esi, dword ptr [esp + 8]
// 008391e5  85f6                 test esi, esi
// 008391e7  7450                 je 0x839239
// 008391e9  837e1800             cmp dword ptr [esi + 0x18], 0
// 008391ed  750e                 jne 0x8391fd
// 008391ef  8d46e0               lea eax, [esi - 0x20]
// 008391f2  6a00                 push 0
// 008391f4  50                   push eax
// 008391f5  e846feffff           call 0x839040
// 008391fa  8b7610               mov esi, dword ptr [esi + 0x10]
// 008391fd  837e1801             cmp dword ptr [esi + 0x18], 1
// 00839201  750a                 jne 0x83920d
// 00839203  8d4eac               lea ecx, [esi - 0x54]
// 00839206  6a00                 push 0
// 00839208  e8937d0700           call 0x8b0fa0
// 0083920d  8b06                 mov eax, dword ptr [esi]
// 0083920f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00839212  8bce                 mov ecx, esi
// 00839214  ffd2                 call edx
// 00839216  8bf0                 mov esi, eax
// 00839218  56                   push esi
// 00839219  e8a2520700           call 0x8ae4c0
// 0083921e  50                   push eax
// 0083921f  e81aaafbff           call 0x7f3c3e
// 00839224  83c408               add esp, 8
// 00839227  85c0                 test eax, eax
// 00839229  740e                 je 0x839239
// 0083922b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0083922e  5e                   pop esi
// 0083922f  89442404             mov dword ptr [esp + 4], eax
// 00839233  ff2544cb9800         jmp dword ptr [0x98cb44]
// 00839239  5e                   pop esi
// 0083923a  c20400               ret 4
// copied from an identical function in another client (function ?EnsureVisible@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp