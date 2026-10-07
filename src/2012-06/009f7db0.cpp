// roc 2012-06 009f7db0  unit: CXTPResourceManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7db0
//
// 009f7db0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009f7db4  85c9                 test ecx, ecx
// 009f7db6  7505                 jne 0x9f7dbd
// 009f7db8  33c0                 xor eax, eax
// 009f7dba  c21400               ret 0x14
// 009f7dbd  668b442410           mov ax, word ptr [esp + 0x10]
// 009f7dc2  6685c0               test ax, ax
// 009f7dc5  7508                 jne 0x9f7dcf
// 009f7dc7  b801000000           mov eax, 1
// 009f7dcc  c21400               ret 0x14
// 009f7dcf  668901               mov word ptr [ecx], ax
// 009f7dd2  33d2                 xor edx, edx
// 009f7dd4  b909040000           mov ecx, 0x409
// 009f7dd9  663bc1               cmp ax, cx
// 009f7ddc  0f94c2               sete dl
// 009f7ddf  8bc2                 mov eax, edx
// 009f7de1  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?EnumResLangProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBD1GJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
