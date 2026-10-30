// roc 2009-12 008b6580  unit: CXTPDockingPanePaintManager  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6580
//
// 008b6580  6aff                 push -1
// 008b6582  6858539600           push 0x965358
// 008b6587  64a100000000         mov eax, dword ptr fs:[0]
// 008b658d  50                   push eax
// 008b658e  83ec1c               sub esp, 0x1c
// 008b6591  56                   push esi
// 008b6592  a10052b600           mov eax, dword ptr [0xb65200]
// 008b6597  33c4                 xor eax, esp
// 008b6599  50                   push eax
// 008b659a  8d442424             lea eax, [esp + 0x24]
// 008b659e  64a300000000         mov dword ptr fs:[0], eax
// 008b65a4  8b742434             mov esi, dword ptr [esp + 0x34]
// 008b65a8  85f6                 test esi, esi
// 008b65aa  7504                 jne 0x8b65b0
// 008b65ac  33d2                 xor edx, edx
// 008b65ae  eb03                 jmp 0x8b65b3
// 008b65b0  8b5604               mov edx, dword ptr [esi + 4]
// 008b65b3  8b442448             mov eax, dword ptr [esp + 0x48]
// 008b65b7  50                   push eax
// 008b65b8  e843f3ffff           call 0x8b5900
// 008b65bd  50                   push eax
// 008b65be  52                   push edx
// 008b65bf  8d4c2418             lea ecx, [esp + 0x18]
// 008b65c3  e83851f9ff           call 0x84b700
// 008b65c8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008b65cc  8b542438             mov edx, dword ptr [esp + 0x38]
// 008b65d0  51                   push ecx
// 008b65d1  52                   push edx
// 008b65d2  8d442410             lea eax, [esp + 0x10]
// 008b65d6  50                   push eax
// 008b65d7  8bce                 mov ecx, esi
// 008b65d9  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008b65e1  e85ce1f3ff           call 0x7f4742
// 008b65e6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b65ea  8b542440             mov edx, dword ptr [esp + 0x40]
// 008b65ee  51                   push ecx
// 008b65ef  52                   push edx
// 008b65f0  8bce                 mov ecx, esi
// 008b65f2  e845e1f3ff           call 0x7f473c
// 008b65f7  8d4c2410             lea ecx, [esp + 0x10]
// 008b65fb  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008b6603  e88851f9ff           call 0x84b790
// 008b6608  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b660c  64890d00000000       mov dword ptr fs:[0], ecx
// 008b6613  59                   pop ecx
// 008b6614  5e                   pop esi
// 008b6615  83c428               add esp, 0x28
// 008b6618  c21800               ret 0x18
// copied from an identical function in another client (function ?Line@CXTPPaintManager@@QAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp