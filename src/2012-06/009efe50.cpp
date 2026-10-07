// roc 2012-06 009efe50  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009efe50
//
// 009efe50  56                   push esi
// 009efe51  8bf1                 mov esi, ecx
// 009efe53  e88628f9ff           call 0x9826de
// 009efe58  8bce                 mov ecx, esi
// 009efe5a  e8e1feffff           call 0x9efd40
// 009efe5f  8b4620               mov eax, dword ptr [esi + 0x20]
// 009efe62  6a00                 push 0
// 009efe64  6a00                 push 0
// 009efe66  50                   push eax
// 009efe67  ff15ec3bb200         call dword ptr [0xb23bec]
// 009efe6d  5e                   pop esi
// 009efe6e  c20c00               ret 0xc
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSize@CXTPPropertyGridView@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
