// roc 2011-06 0087f800  unit: CXTPResourceManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087f800
//
// 0087f800  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087f804  85c9                 test ecx, ecx
// 0087f806  7505                 jne 0x87f80d
// 0087f808  33c0                 xor eax, eax
// 0087f80a  c21400               ret 0x14
// 0087f80d  668b442410           mov ax, word ptr [esp + 0x10]
// 0087f812  6685c0               test ax, ax
// 0087f815  7508                 jne 0x87f81f
// 0087f817  b801000000           mov eax, 1
// 0087f81c  c21400               ret 0x14
// 0087f81f  668901               mov word ptr [ecx], ax
// 0087f822  33d2                 xor edx, edx
// 0087f824  b909040000           mov ecx, 0x409
// 0087f829  663bc1               cmp ax, cx
// 0087f82c  0f94c2               sete dl
// 0087f82f  8bc2                 mov eax, edx
// 0087f831  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?EnumResLangProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBD1GJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
