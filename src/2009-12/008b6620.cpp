// roc 2009-12 008b6620  unit: CXTPDockingPanePaintManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6620
//
// 008b6620  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b6624  56                   push esi
// 008b6625  57                   push edi
// 008b6626  50                   push eax
// 008b6627  8bf1                 mov esi, ecx
// 008b6629  e8d2f2ffff           call 0x8b5900
// 008b662e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b6632  50                   push eax
// 008b6633  8d4c2414             lea ecx, [esp + 0x14]
// 008b6637  51                   push ecx
// 008b6638  8bcf                 mov ecx, edi
// 008b663a  e8bfdff3ff           call 0x7f45fe
// 008b663f  8b542424             mov edx, dword ptr [esp + 0x24]
// 008b6643  52                   push edx
// 008b6644  8bce                 mov ecx, esi
// 008b6646  e8b5f2ffff           call 0x8b5900
// 008b664b  50                   push eax
// 008b664c  50                   push eax
// 008b664d  8d442418             lea eax, [esp + 0x18]
// 008b6651  50                   push eax
// 008b6652  8bcf                 mov ecx, edi
// 008b6654  e89fdff3ff           call 0x7f45f8
// 008b6659  5f                   pop edi
// 008b665a  5e                   pop esi
// 008b665b  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Rectangle@CXTPDockingPanePaintManager@@QAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp