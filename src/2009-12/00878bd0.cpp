// roc 2009-12 00878bd0  unit: CXTPControlGallery  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878bd0
//
// 00878bd0  8b542404             mov edx, dword ptr [esp + 4]
// 00878bd4  85d2                 test edx, edx
// 00878bd6  7508                 jne 0x878be0
// 00878bd8  b857000780           mov eax, 0x80070057
// 00878bdd  c20400               ret 4
// 00878be0  83c1e0               add ecx, -0x20
// 00878be3  e8f8f5ffff           call 0x8781e0
// 00878be8  8902                 mov dword ptr [edx], eax
// 00878bea  33c0                 xor eax, eax
// 00878bec  c20400               ret 4
// copied from an identical function in another client (function ?GetAccessibleChildCount@CXTPControlGallery@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp