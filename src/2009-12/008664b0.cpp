// roc 2009-12 008664b0  unit: CXTPPropertyGridItem  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008664b0
//
// 008664b0  56                   push esi
// 008664b1  8bf1                 mov esi, ecx
// 008664b3  e88aff0b00           call 0x926442
// 008664b8  8d4e20               lea ecx, [esi + 0x20]
// 008664bb  c7065cea9f00         mov dword ptr [esi], 0x9fea5c
// 008664c1  e8daf9ffff           call 0x865ea0
// 008664c6  8b442408             mov eax, dword ptr [esp + 8]
// 008664ca  894638               mov dword ptr [esi + 0x38], eax
// 008664cd  c74634ffffffff       mov dword ptr [esi + 0x34], 0xffffffff
// 008664d4  8bc6                 mov eax, esi
// 008664d6  5e                   pop esi
// 008664d7  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPPropertyGridItemConstraints@@IAE@PAVCXTPPropertyGridItem@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp