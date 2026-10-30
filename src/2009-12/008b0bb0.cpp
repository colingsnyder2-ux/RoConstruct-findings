// roc 2009-12 008b0bb0  unit: CXTPDockingPaneBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0bb0
//
// 008b0bb0  56                   push esi
// 008b0bb1  57                   push edi
// 008b0bb2  8bf1                 mov esi, ecx
// 008b0bb4  e887fcffff           call 0x8b0840
// 008b0bb9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008b0bbc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b0bc0  8b10                 mov edx, dword ptr [eax]
// 008b0bc2  57                   push edi
// 008b0bc3  51                   push ecx
// 008b0bc4  8bc8                 mov ecx, eax
// 008b0bc6  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008b0bcc  ffd0                 call eax
// 008b0bce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b0bd2  8bf8                 mov edi, eax
// 008b0bd4  85c9                 test ecx, ecx
// 008b0bd6  740a                 je 0x8b0be2
// 008b0bd8  56                   push esi
// 008b0bd9  e8a235feff           call 0x894180
// 008b0bde  8938                 mov dword ptr [eax], edi
// 008b0be0  8bc7                 mov eax, edi
// 008b0be2  5f                   pop edi
// 008b0be3  5e                   pop esi
// 008b0be4  c20c00               ret 0xc
// copied from an identical function in another client (function ?Clone@CXTPDockingPaneBase@@MAEPAV1@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneBase.cpp