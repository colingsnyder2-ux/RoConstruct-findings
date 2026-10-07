// roc 2007-08 006b2c20  unit: CXTPResourceManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2c20
//
// 006b2c20  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b2c24  85c9                 test ecx, ecx
// 006b2c26  7505                 jne 0x6b2c2d
// 006b2c28  33c0                 xor eax, eax
// 006b2c2a  c21400               ret 0x14
// 006b2c2d  668b442410           mov ax, word ptr [esp + 0x10]
// 006b2c32  6685c0               test ax, ax
// 006b2c35  7508                 jne 0x6b2c3f
// 006b2c37  b801000000           mov eax, 1
// 006b2c3c  c21400               ret 0x14
// 006b2c3f  668901               mov word ptr [ecx], ax
// 006b2c42  33c9                 xor ecx, ecx
// 006b2c44  663d0904             cmp ax, 0x409
// 006b2c48  0f94c1               sete cl
// 006b2c4b  8bc1                 mov eax, ecx
// 006b2c4d  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ?EnumResLangProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBD1GJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp
