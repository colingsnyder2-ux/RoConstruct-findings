// roc 2007-08 00648540  unit: CXTPCommandBar  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648540
//
// 00648540  8b442408             mov eax, dword ptr [esp + 8]
// 00648544  56                   push esi
// 00648545  8b742408             mov esi, dword ptr [esp + 8]
// 00648549  6a02                 push 2
// 0064854b  50                   push eax
// 0064854c  56                   push esi
// 0064854d  ff15d0d27700         call dword ptr [0x77d2d0]
// 00648553  85c0                 test eax, eax
// 00648555  7504                 jne 0x64855b
// 00648557  33c0                 xor eax, eax
// 00648559  5e                   pop esi
// 0064855a  c3                   ret 
// 0064855b  50                   push eax
// 0064855c  56                   push esi
// 0064855d  ff15d4d27700         call dword ptr [0x77d2d4]
// 00648563  85c0                 test eax, eax
// 00648565  74f0                 je 0x648557
// 00648567  50                   push eax
// 00648568  ff1568d27700         call dword ptr [0x77d268]
// 0064856e  85c0                 test eax, eax
// 00648570  74e5                 je 0x648557
// 00648572  33c9                 xor ecx, ecx
// 00648574  6683780e20           cmp word ptr [eax + 0xe], 0x20
// 00648579  5e                   pop esi
// 0064857a  0f94c1               sete cl
// 0064857d  8bc1                 mov eax, ecx
// 0064857f  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
