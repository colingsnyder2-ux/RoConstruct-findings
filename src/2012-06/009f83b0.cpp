// roc 2012-06 009f83b0  unit: CXTPResourceManager  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f83b0
//
// 009f83b0  56                   push esi
// 009f83b1  8b742414             mov esi, dword ptr [esp + 0x14]
// 009f83b5  85f6                 test esi, esi
// 009f83b7  7506                 jne 0x9f83bf
// 009f83b9  33c0                 xor eax, eax
// 009f83bb  5e                   pop esi
// 009f83bc  c21000               ret 0x10
// 009f83bf  8b442410             mov eax, dword ptr [esp + 0x10]
// 009f83c3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009f83c7  8b542408             mov edx, dword ptr [esp + 8]
// 009f83cb  56                   push esi
// 009f83cc  68b07d9f00           push 0x9f7db0
// 009f83d1  50                   push eax
// 009f83d2  51                   push ecx
// 009f83d3  52                   push edx
// 009f83d4  ff156423b200         call dword ptr [0xb22364]
// 009f83da  0fb706               movzx eax, word ptr [esi]
// 009f83dd  6685c0               test ax, ax
// 009f83e0  7509                 jne 0x9f83eb
// 009f83e2  b801000000           mov eax, 1
// 009f83e7  5e                   pop esi
// 009f83e8  c21000               ret 0x10
// 009f83eb  33d2                 xor edx, edx
// 009f83ed  b909040000           mov ecx, 0x409
// 009f83f2  663bc1               cmp ax, cx
// 009f83f5  0f94c2               sete dl
// 009f83f8  5e                   pop esi
// 009f83f9  8bc2                 mov eax, edx
// 009f83fb  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?EnumResNameProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBDPADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
