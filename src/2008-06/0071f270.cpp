// from server: 100% by auto
// roc 2008-06 0071f270  unit: CXTPResourceManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f270
//
// 0071f270  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071f274  85c9                 test ecx, ecx
// 0071f276  7505                 jne 0x71f27d
// 0071f278  33c0                 xor eax, eax
// 0071f27a  c21400               ret 0x14
// 0071f27d  668b442410           mov ax, word ptr [esp + 0x10]
// 0071f282  6685c0               test ax, ax
// 0071f285  7508                 jne 0x71f28f
// 0071f287  b801000000           mov eax, 1
// 0071f28c  c21400               ret 0x14
// 0071f28f  668901               mov word ptr [ecx], ax
// 0071f292  33d2                 xor edx, edx
// 0071f294  b909040000           mov ecx, 0x409
// 0071f299  663bc1               cmp ax, cx
// 0071f29c  0f94c2               sete dl
// 0071f29f  8bc2                 mov eax, edx
// 0071f2a1  c21400               ret 0x14
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?EnumResLangProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBD1GJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
