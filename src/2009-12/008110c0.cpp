// roc 2009-12 008110c0  unit: CXTPImageManager  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008110c0
//
// 008110c0  83ec08               sub esp, 8
// 008110c3  8bc4                 mov eax, esp
// 008110c5  c70000000000         mov dword ptr [eax], 0
// 008110cb  c7400400000000       mov dword ptr [eax + 4], 0
// 008110d2  e86980ffff           call 0x809140
// 008110d7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008110db  50                   push eax
// 008110dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 008110e0  50                   push eax
// 008110e1  8b442414             mov eax, dword ptr [esp + 0x14]
// 008110e5  52                   push edx
// 008110e6  50                   push eax
// 008110e7  e8c4fdffff           call 0x810eb0
// 008110ec  c20c00               ret 0xc
// copied from an identical function in another client (function ?Draw@CXTPImageManagerIcon@@QAEXPAVCDC@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp