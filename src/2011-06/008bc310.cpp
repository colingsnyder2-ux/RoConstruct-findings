// roc 2011-06 008bc310  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc310
//
// 008bc310  833d3093c90000       cmp dword ptr [0xc99330], 0
// 008bc317  56                   push esi
// 008bc318  8bf1                 mov esi, ecx
// 008bc31a  0f84f5000000         je 0x8bc415
// 008bc320  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008bc326  85c0                 test eax, eax
// 008bc328  0f84e7000000         je 0x8bc415
// 008bc32e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008bc334  57                   push edi
// 008bc335  85c0                 test eax, eax
// 008bc337  744d                 je 0x8bc386
// 008bc339  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 008bc33f  6a00                 push 0
// 008bc341  6a00                 push 0
// 008bc343  50                   push eax
// 008bc344  8d7e54               lea edi, [esi + 0x54]
// 008bc347  6a0a                 push 0xa
// 008bc349  8bcf                 mov ecx, edi
// 008bc34b  e8105a0000           call 0x8c1d60
// 008bc350  8bc8                 mov ecx, eax
// 008bc352  e8091cf9ff           call 0x84df60
// 008bc357  85c0                 test eax, eax
// 008bc359  0f85b5000000         jne 0x8bc414
// 008bc35f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008bc365  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008bc36b  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 008bc371  6a00                 push 0
// 008bc373  6a00                 push 0
// 008bc375  50                   push eax
// 008bc376  6a0b                 push 0xb
// 008bc378  8bcf                 mov ecx, edi
// 008bc37a  e8e1590000           call 0x8c1d60
// 008bc37f  8bc8                 mov ecx, eax
// 008bc381  e8da1bf9ff           call 0x84df60
// 008bc386  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008bc38b  7472                 je 0x8bc3ff
// 008bc38d  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 008bc393  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 008bc399  85c9                 test ecx, ecx
// 008bc39b  743d                 je 0x8bc3da
// 008bc39d  6a00                 push 0
// 008bc39f  e8a2dff4ff           call 0x80a346
// 008bc3a4  8d4e54               lea ecx, [esi + 0x54]
// 008bc3a7  e8b4590000           call 0x8c1d60
// 008bc3ac  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008bc3b2  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 008bc3b8  8b5154               mov edx, dword ptr [ecx + 0x54]
// 008bc3bb  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 008bc3c1  8b522c               mov edx, dword ptr [edx + 0x2c]
// 008bc3c4  83c154               add ecx, 0x54
// 008bc3c7  50                   push eax
// 008bc3c8  ffd2                 call edx
// 008bc3ca  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008bc3d0  c780f800000000000000 mov dword ptr [eax + 0xf8], 0
// 008bc3da  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008bc3e0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008bc3e3  6a00                 push 0
// 008bc3e5  6a32                 push 0x32
// 008bc3e7  6a04                 push 4
// 008bc3e9  52                   push edx
// 008bc3ea  ff15741ca400         call dword ptr [0xa41c74]
// 008bc3f0  5f                   pop edi
// 008bc3f1  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 008bc3fb  5e                   pop esi
// 008bc3fc  c20400               ret 4
// 008bc3ff  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 008bc405  e846efffff           call 0x8bb350
// 008bc40a  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 008bc414  5f                   pop edi
// 008bc415  5e                   pop esi
// 008bc416  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindow@CXTPDockingPaneAutoHidePanel@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
