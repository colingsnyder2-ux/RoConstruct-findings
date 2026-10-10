// from server: 100% by tester
// roc 2008-06 00774400  unit: VCEdit::?$CXTMaskEditT  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00774400
//
// 00774400  56                   push esi
// 00774401  8bf1                 mov esi, ecx
// 00774403  8d8e84000000         lea ecx, [esi + 0x84]
// 00774409  ff15143f8000         call dword ptr [0x803f14]
// 0077440f  8d8e80000000         lea ecx, [esi + 0x80]
// 00774415  ff15143f8000         call dword ptr [0x803f14]
// 0077441b  8d4e7c               lea ecx, [esi + 0x7c]
// 0077441e  ff15143f8000         call dword ptr [0x803f14]
// 00774424  8d4e78               lea ecx, [esi + 0x78]
// 00774427  ff15143f8000         call dword ptr [0x803f14]
// 0077442d  8d4e74               lea ecx, [esi + 0x74]
// 00774430  ff15143f8000         call dword ptr [0x803f14]
// 00774436  8d4e70               lea ecx, [esi + 0x70]
// 00774439  ff15143f8000         call dword ptr [0x803f14]
// 0077443f  8bce                 mov ecx, esi
// 00774441  e8a67b0400           call 0x7bbfec
// 00774446  f644240801           test byte ptr [esp + 8], 1
// 0077444b  7409                 je 0x774456
// 0077444d  56                   push esi
// 0077444e  e827c2f2ff           call 0x6a067a
// 00774453  83c404               add esp, 4
// 00774456  8bc6                 mov eax, esi
// 00774458  5e                   pop esi
// 00774459  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTMaskEdit.cpp (function ??_G?$CXTMaskEditT@VCEdit@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTMaskEdit.cpp
