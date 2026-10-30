// roc 2009-12 008390c0  unit: CXTPDockingPaneManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008390c0
//
// 008390c0  56                   push esi
// 008390c1  8b742408             mov esi, dword ptr [esp + 8]
// 008390c5  57                   push edi
// 008390c6  8bf9                 mov edi, ecx
// 008390c8  85f6                 test esi, esi
// 008390ca  7439                 je 0x839105
// 008390cc  8d4604               lea eax, [esi + 4]
// 008390cf  50                   push eax
// 008390d0  ff150cb29800         call dword ptr [0x98b20c]
// 008390d6  8b17                 mov edx, dword ptr [edi]
// 008390d8  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008390de  56                   push esi
// 008390df  6a03                 push 3
// 008390e1  8bcf                 mov ecx, edi
// 008390e3  ffd0                 call eax
// 008390e5  83f8ff               cmp eax, -1
// 008390e8  7414                 je 0x8390fe
// 008390ea  837e3000             cmp dword ptr [esi + 0x30], 0
// 008390ee  740e                 je 0x8390fe
// 008390f0  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008390f3  8b11                 mov edx, dword ptr [ecx]
// 008390f5  8d4620               lea eax, [esi + 0x20]
// 008390f8  50                   push eax
// 008390f9  8b4248               mov eax, dword ptr [edx + 0x48]
// 008390fc  ffd0                 call eax
// 008390fe  8bce                 mov ecx, esi
// 00839100  e8d7acfbff           call 0x7f3ddc
// 00839105  5f                   pop edi
// 00839106  5e                   pop esi
// 00839107  c20400               ret 4
// copied from an identical function in another client (function ?ClosePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPane@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp