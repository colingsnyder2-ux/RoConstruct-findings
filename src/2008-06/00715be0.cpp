// from server: 100% by auto
// roc 2008-06 00715be0  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715be0
//
// 00715be0  56                   push esi
// 00715be1  8bf1                 mov esi, ecx
// 00715be3  e880b0f8ff           call 0x6a0c68
// 00715be8  8bce                 mov ecx, esi
// 00715bea  e8e1feffff           call 0x715ad0
// 00715bef  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715bf2  6a00                 push 0
// 00715bf4  6a00                 push 0
// 00715bf6  50                   push eax
// 00715bf7  ff15182e8000         call dword ptr [0x802e18]
// 00715bfd  5e                   pop esi
// 00715bfe  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSize@CXTPPropertyGridView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
