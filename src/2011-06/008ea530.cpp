// from server: 100% by auto
// roc 2011-06 008ea530  unit: CXTColorBase  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea530
//
// 008ea530  56                   push esi
// 008ea531  8bf1                 mov esi, ecx
// 008ea533  e8f600f2ff           call 0x80a62e
// 008ea538  83f8ff               cmp eax, -1
// 008ea53b  7506                 jne 0x8ea543
// 008ea53d  0bc0                 or eax, eax
// 008ea53f  5e                   pop esi
// 008ea540  c20400               ret 4
// 008ea543  8b06                 mov eax, dword ptr [esi]
// 008ea545  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008ea54b  8bce                 mov ecx, esi
// 008ea54d  ffd2                 call edx
// 008ea54f  33c0                 xor eax, eax
// 008ea551  5e                   pop esi
// 008ea552  c20400               ret 4
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditColorComboBox.cpp (function ?OnCreate@CXTPSyntaxEditColorComboBox@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditColorComboBox.cpp
