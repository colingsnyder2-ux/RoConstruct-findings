// roc 2011-06 0086b290  unit: CXTPPropertyGrid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086b290
//
// 0086b290  56                   push esi
// 0086b291  8bf1                 mov esi, ecx
// 0086b293  e82ceef9ff           call 0x80a0c4
// 0086b298  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 0086b29f  7411                 je 0x86b2b2
// 0086b2a1  6a00                 push 0
// 0086b2a3  8bce                 mov ecx, esi
// 0086b2a5  e8b6feffff           call 0x86b160
// 0086b2aa  8bce                 mov ecx, esi
// 0086b2ac  5e                   pop esi
// 0086b2ad  e9aef1ffff           jmp 0x86a460
// 0086b2b2  5e                   pop esi
// 0086b2b3  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreSubclassWindow@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
