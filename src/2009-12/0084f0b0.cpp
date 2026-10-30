// roc 2009-12 0084f0b0  unit: CXTPPropertyGrid  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f0b0
//
// 0084f0b0  56                   push esi
// 0084f0b1  8bf1                 mov esi, ecx
// 0084f0b3  e8f4750d00           call 0x9266ac
// 0084f0b8  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084f0be  8b01                 mov eax, dword ptr [ecx]
// 0084f0c0  8b5034               mov edx, dword ptr [eax + 0x34]
// 0084f0c3  ffd2                 call edx
// 0084f0c5  8bce                 mov ecx, esi
// 0084f0c7  5e                   pop esi
// 0084f0c8  e903ffffff           jmp 0x84efd0
// copied from an identical function in another client (function ?OnSysColorChange@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp