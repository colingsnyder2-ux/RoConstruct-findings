// roc 2012-06 009f84a0  unit: CXTPResourceManager  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f84a0
//
// 009f84a0  56                   push esi
// 009f84a1  8b742410             mov esi, dword ptr [esp + 0x10]
// 009f84a5  85f6                 test esi, esi
// 009f84a7  7506                 jne 0x9f84af
// 009f84a9  33c0                 xor eax, eax
// 009f84ab  5e                   pop esi
// 009f84ac  c20c00               ret 0xc
// 009f84af  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f84b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009f84b7  56                   push esi
// 009f84b8  68b0839f00           push 0x9f83b0
// 009f84bd  50                   push eax
// 009f84be  51                   push ecx
// 009f84bf  ff156823b200         call dword ptr [0xb22368]
// 009f84c5  0fb706               movzx eax, word ptr [esi]
// 009f84c8  6685c0               test ax, ax
// 009f84cb  7509                 jne 0x9f84d6
// 009f84cd  b801000000           mov eax, 1
// 009f84d2  5e                   pop esi
// 009f84d3  c20c00               ret 0xc
// 009f84d6  33c9                 xor ecx, ecx
// 009f84d8  ba09040000           mov edx, 0x409
// 009f84dd  663bc2               cmp ax, dx
// 009f84e0  0f94c1               sete cl
// 009f84e3  5e                   pop esi
// 009f84e4  8bc1                 mov eax, ecx
// 009f84e6  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?EnumResTypeProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
