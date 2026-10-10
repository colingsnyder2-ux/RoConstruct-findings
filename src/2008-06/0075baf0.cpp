// roc 2008-06 0075baf0  unit: CXTPDockingPaneMiniWnd  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075baf0
//
// 0075baf0  83ec10               sub esp, 0x10
// 0075baf3  56                   push esi
// 0075baf4  8bf1                 mov esi, ecx
// 0075baf6  57                   push edi
// 0075baf7  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0075bafd  e8ae190000           call 0x75d4b0
// 0075bb02  8b7878               mov edi, dword ptr [eax + 0x78]
// 0075bb05  56                   push esi
// 0075bb06  8d4c240c             lea ecx, [esp + 0xc]
// 0075bb0a  83c708               add edi, 8
// 0075bb0d  e8bebff9ff           call 0x6f7ad0
// 0075bb12  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0075bb18  0faf8638010000       imul eax, dword ptr [esi + 0x138]
// 0075bb1f  99                   cdq 
// 0075bb20  f7be3c010000         idiv dword ptr [esi + 0x13c]
// 0075bb26  3bf8                 cmp edi, eax
// 0075bb28  7f02                 jg 0x75bb2c
// 0075bb2a  8bf8                 mov edi, eax
// 0075bb2c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075bb30  33d2                 xor edx, edx
// 0075bb32  3954241c             cmp dword ptr [esp + 0x1c], edx
// 0075bb36  8d040f               lea eax, [edi + ecx]
// 0075bb39  0f94c2               sete dl
// 0075bb3c  89442414             mov dword ptr [esp + 0x14], eax
// 0075bb40  2bc1                 sub eax, ecx
// 0075bb42  8d149510000000       lea edx, [edx*4 + 0x10]
// 0075bb49  52                   push edx
// 0075bb4a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0075bb4e  50                   push eax
// 0075bb4f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075bb53  2bd0                 sub edx, eax
// 0075bb55  52                   push edx
// 0075bb56  51                   push ecx
// 0075bb57  50                   push eax
// 0075bb58  a1443e8000           mov eax, dword ptr [0x803e44]
// 0075bb5d  50                   push eax
// 0075bb5e  8bce                 mov ecx, esi
// 0075bb60  e8e14ef4ff           call 0x6a0a46
// 0075bb65  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075bb68  6a00                 push 0
// 0075bb6a  6a00                 push 0
// 0075bb6c  51                   push ecx
// 0075bb6d  ff15182e8000         call dword ptr [0x802e18]
// 0075bb73  5f                   pop edi
// 0075bb74  5e                   pop esi
// 0075bb75  83c410               add esp, 0x10
// 0075bb78  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?DoSlideStep@CXTPDockingPaneMiniWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
