// roc 2008-06 0078a310  unit: CXTColorBase  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a310
//
// 0078a310  56                   push esi
// 0078a311  8bf1                 mov esi, ecx
// 0078a313  e85069f1ff           call 0x6a0c68
// 0078a318  83f8ff               cmp eax, -1
// 0078a31b  7506                 jne 0x78a323
// 0078a31d  0bc0                 or eax, eax
// 0078a31f  5e                   pop esi
// 0078a320  c20400               ret 4
// 0078a323  8b06                 mov eax, dword ptr [esi]
// 0078a325  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0078a32b  8bce                 mov ecx, esi
// 0078a32d  ffd2                 call edx
// 0078a32f  33c0                 xor eax, eax
// 0078a331  5e                   pop esi
// 0078a332  c20400               ret 4
// library xtp-11.2.2/Source\SyntaxEdit\XTPSyntaxEditColorComboBox.cpp (function ?OnCreate@CXTPSyntaxEditColorComboBox@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SyntaxEdit/XTPSyntaxEditColorComboBox.cpp
