// from server: 100% by auto
// roc 2007-08 0069cb00  unit: CXTPPropertyGridView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069cb00
//
// 0069cb00  56                   push esi
// 0069cb01  8b742408             mov esi, dword ptr [esp + 8]
// 0069cb05  85f6                 test esi, esi
// 0069cb07  7509                 jne 0x69cb12
// 0069cb09  b857000780           mov eax, 0x80070057
// 0069cb0e  5e                   pop esi
// 0069cb0f  c20400               ret 4
// 0069cb12  8b41cc               mov eax, dword ptr [ecx - 0x34]
// 0069cb15  6a00                 push 0
// 0069cb17  6a00                 push 0
// 0069cb19  688b010000           push 0x18b
// 0069cb1e  50                   push eax
// 0069cb1f  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0069cb25  8906                 mov dword ptr [esi], eax
// 0069cb27  33c0                 xor eax, eax
// 0069cb29  5e                   pop esi
// 0069cb2a  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChildCount@CXTPPropertyGridView@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
