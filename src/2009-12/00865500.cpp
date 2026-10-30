// roc 2009-12 00865500  unit: CXTPPropertyGridItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865500
//
// 00865500  56                   push esi
// 00865501  8bf1                 mov esi, ecx
// 00865503  8d8ea4000000         lea ecx, [esi + 0xa4]
// 00865509  ff1580de9800         call dword ptr [0x98de80]
// 0086550f  50                   push eax
// 00865510  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00865516  ff1584de9800         call dword ptr [0x98de84]
// 0086551c  f7d8                 neg eax
// 0086551e  1bc0                 sbb eax, eax
// 00865520  f7d8                 neg eax
// 00865522  5e                   pop esi
// 00865523  c3                   ret 
// copied from an identical function in another client (function ?IsValueChanged@CXTPPropertyGridItem@@UBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp