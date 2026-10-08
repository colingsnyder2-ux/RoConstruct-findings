// from server: 100% by auto
// roc 2011-06 00878120  unit: CXTPPropertyGridView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878120
//
// 00878120  56                   push esi
// 00878121  8b742408             mov esi, dword ptr [esp + 8]
// 00878125  85f6                 test esi, esi
// 00878127  7509                 jne 0x878132
// 00878129  b857000780           mov eax, 0x80070057
// 0087812e  5e                   pop esi
// 0087812f  c20400               ret 4
// 00878132  8b41cc               mov eax, dword ptr [ecx - 0x34]
// 00878135  6a00                 push 0
// 00878137  6a00                 push 0
// 00878139  688b010000           push 0x18b
// 0087813e  50                   push eax
// 0087813f  ff15c019a400         call dword ptr [0xa419c0]
// 00878145  8906                 mov dword ptr [esi], eax
// 00878147  33c0                 xor eax, eax
// 00878149  5e                   pop esi
// 0087814a  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChildCount@CXTPPropertyGridView@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
