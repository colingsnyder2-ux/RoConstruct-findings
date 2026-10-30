// roc 2009-12 00864de0  unit: CXTPPropertyGridItemConstraint  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864de0
//
// 00864de0  8b442408             mov eax, dword ptr [esp + 8]
// 00864de4  8b08                 mov ecx, dword ptr [eax]
// 00864de6  83c120               add ecx, 0x20
// 00864de9  ff1580de9800         call dword ptr [0x98de80]
// 00864def  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00864df3  8b09                 mov ecx, dword ptr [ecx]
// 00864df5  50                   push eax
// 00864df6  83c120               add ecx, 0x20
// 00864df9  ff1584de9800         call dword ptr [0x98de84]
// 00864dff  c3                   ret 
// copied from an identical function in another client (function ?CompareFunc@CXTPPropertyGridItemConstraints@@CAHPAPBVCXTPPropertyGridItemConstraint@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp