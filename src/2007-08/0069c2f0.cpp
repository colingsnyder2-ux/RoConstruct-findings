// roc 2007-08 0069c2f0  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069c2f0
//
// 0069c2f0  56                   push esi
// 0069c2f1  8bf1                 mov esi, ecx
// 0069c2f3  e8463ff9ff           call 0x63023e
// 0069c2f8  8bce                 mov ecx, esi
// 0069c2fa  e8e1feffff           call 0x69c1e0
// 0069c2ff  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069c302  6a00                 push 0
// 0069c304  6a00                 push 0
// 0069c306  50                   push eax
// 0069c307  ff15dcec7700         call dword ptr [0x77ecdc]
// 0069c30d  5e                   pop esi
// 0069c30e  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSize@CXTPPropertyGridView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
