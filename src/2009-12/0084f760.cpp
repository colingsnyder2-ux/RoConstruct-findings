// roc 2009-12 0084f760  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f760
//
// 0084f760  56                   push esi
// 0084f761  8bf1                 mov esi, ecx
// 0084f763  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 0084f769  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0084f76c  8b11                 mov edx, dword ptr [ecx]
// 0084f76e  8b4258               mov eax, dword ptr [edx + 0x58]
// 0084f771  ffd0                 call eax
// 0084f773  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084f779  8b11                 mov edx, dword ptr [ecx]
// 0084f77b  8b4234               mov eax, dword ptr [edx + 0x34]
// 0084f77e  ffd0                 call eax
// 0084f780  8bce                 mov ecx, esi
// 0084f782  5e                   pop esi
// 0084f783  e948f8ffff           jmp 0x84efd0
// copied from an identical function in another client (function ?SetStandardColors@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp