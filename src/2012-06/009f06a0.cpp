// from server: 100% by auto
// roc 2012-06 009f06a0  unit: CXTPPropertyGridView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f06a0
//
// 009f06a0  56                   push esi
// 009f06a1  8b742408             mov esi, dword ptr [esp + 8]
// 009f06a5  85f6                 test esi, esi
// 009f06a7  7509                 jne 0x9f06b2
// 009f06a9  b857000780           mov eax, 0x80070057
// 009f06ae  5e                   pop esi
// 009f06af  c20400               ret 4
// 009f06b2  8b41cc               mov eax, dword ptr [ecx - 0x34]
// 009f06b5  6a00                 push 0
// 009f06b7  6a00                 push 0
// 009f06b9  688b010000           push 0x18b
// 009f06be  50                   push eax
// 009f06bf  ff15043cb200         call dword ptr [0xb23c04]
// 009f06c5  8906                 mov dword ptr [esi], eax
// 009f06c7  33c0                 xor eax, eax
// 009f06c9  5e                   pop esi
// 009f06ca  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChildCount@CXTPPropertyGridView@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
