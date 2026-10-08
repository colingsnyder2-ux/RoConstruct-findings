// from server: 100% by auto
// roc 2011-06 008778d0  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008778d0
//
// 008778d0  56                   push esi
// 008778d1  8bf1                 mov esi, ecx
// 008778d3  e8562df9ff           call 0x80a62e
// 008778d8  8bce                 mov ecx, esi
// 008778da  e8e1feffff           call 0x8777c0
// 008778df  8b4620               mov eax, dword ptr [esi + 0x20]
// 008778e2  6a00                 push 0
// 008778e4  6a00                 push 0
// 008778e6  50                   push eax
// 008778e7  ff15ec19a400         call dword ptr [0xa419ec]
// 008778ed  5e                   pop esi
// 008778ee  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSize@CXTPPropertyGridView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
