// roc 2009-12 008c76d0  unit: VCEdit::?$CXTMaskEditT  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c76d0
//
// 008c76d0  56                   push esi
// 008c76d1  8bf1                 mov esi, ecx
// 008c76d3  8d8e84000000         lea ecx, [esi + 0x84]
// 008c76d9  ff15c0de9800         call dword ptr [0x98dec0]
// 008c76df  8d8e80000000         lea ecx, [esi + 0x80]
// 008c76e5  ff15c0de9800         call dword ptr [0x98dec0]
// 008c76eb  8d4e7c               lea ecx, [esi + 0x7c]
// 008c76ee  ff15c0de9800         call dword ptr [0x98dec0]
// 008c76f4  8d4e78               lea ecx, [esi + 0x78]
// 008c76f7  ff15c0de9800         call dword ptr [0x98dec0]
// 008c76fd  8d4e74               lea ecx, [esi + 0x74]
// 008c7700  ff15c0de9800         call dword ptr [0x98dec0]
// 008c7706  8d4e70               lea ecx, [esi + 0x70]
// 008c7709  ff15c0de9800         call dword ptr [0x98dec0]
// 008c770f  8bce                 mov ecx, esi
// 008c7711  e83eed0500           call 0x926454
// 008c7716  f644240801           test byte ptr [esp + 8], 1
// 008c771b  7409                 je 0x8c7726
// 008c771d  56                   push esi
// 008c771e  e837c1f2ff           call 0x7f385a
// 008c7723  83c404               add esp, 4
// 008c7726  8bc6                 mov eax, esi
// 008c7728  5e                   pop esi
// 008c7729  c20400               ret 4
// copied from an identical function in another client (function ??_G?$CXTMaskEditT@VCEdit@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp