// roc 2009-12 008b00e0  unit: CXTPDockingPaneMiniWnd  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b00e0
//
// 008b00e0  56                   push esi
// 008b00e1  8bf1                 mov esi, ecx
// 008b00e3  e8483df4ff           call 0x7f3e30
// 008b00e8  8bce                 mov ecx, esi
// 008b00ea  e811e6ffff           call 0x8ae700
// 008b00ef  85c0                 test eax, eax
// 008b00f1  7441                 je 0x8b0134
// 008b00f3  8d44240c             lea eax, [esp + 0xc]
// 008b00f7  50                   push eax
// 008b00f8  56                   push esi
// 008b00f9  e8b2c0f9ff           call 0x84c1b0
// 008b00fe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b0102  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b0106  83c408               add esp, 8
// 008b0109  51                   push ecx
// 008b010a  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008b0110  52                   push edx
// 008b0111  e87a070000           call 0x8b0890
// 008b0116  85c0                 test eax, eax
// 008b0118  7413                 je 0x8b012d
// 008b011a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b011d  6a00                 push 0
// 008b011f  6a64                 push 0x64
// 008b0121  6829090000           push 0x929
// 008b0126  50                   push eax
// 008b0127  ff1558cc9800         call dword ptr [0x98cc58]
// 008b012d  8bce                 mov ecx, esi
// 008b012f  e8ccfcffff           call 0x8afe00
// 008b0134  5e                   pop esi
// 008b0135  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnNcMouseMove@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp