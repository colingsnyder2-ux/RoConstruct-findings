// roc 2009-12 0084fb80  unit: CXTPPropertyGrid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fb80
//
// 0084fb80  56                   push esi
// 0084fb81  8bf1                 mov esi, ecx
// 0084fb83  e83e3dfaff           call 0x7f38c6
// 0084fb88  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 0084fb8f  7411                 je 0x84fba2
// 0084fb91  6a00                 push 0
// 0084fb93  8bce                 mov ecx, esi
// 0084fb95  e8b6feffff           call 0x84fa50
// 0084fb9a  8bce                 mov ecx, esi
// 0084fb9c  5e                   pop esi
// 0084fb9d  e9aef1ffff           jmp 0x84ed50
// 0084fba2  5e                   pop esi
// 0084fba3  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreSubclassWindow@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
