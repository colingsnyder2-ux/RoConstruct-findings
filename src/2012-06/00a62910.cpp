// from server: 100% by auto
// roc 2012-06 00a62910  unit: CXTColorBase  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62910
//
// 00a62910  56                   push esi
// 00a62911  8bf1                 mov esi, ecx
// 00a62913  e8c6fdf1ff           call 0x9826de
// 00a62918  83f8ff               cmp eax, -1
// 00a6291b  7506                 jne 0xa62923
// 00a6291d  0bc0                 or eax, eax
// 00a6291f  5e                   pop esi
// 00a62920  c20400               ret 4
// 00a62923  8b06                 mov eax, dword ptr [esi]
// 00a62925  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00a6292b  8bce                 mov ecx, esi
// 00a6292d  ffd2                 call edx
// 00a6292f  33c0                 xor eax, eax
// 00a62931  5e                   pop esi
// 00a62932  c20400               ret 4
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditColorComboBox.cpp (function ?OnCreate@CXTPSyntaxEditColorComboBox@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditColorComboBox.cpp
