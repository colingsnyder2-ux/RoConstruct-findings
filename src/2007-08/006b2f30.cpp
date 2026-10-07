// roc 2007-08 006b2f30  unit: CXTPResourceManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2f30
//
// 006b2f30  56                   push esi
// 006b2f31  8b742414             mov esi, dword ptr [esp + 0x14]
// 006b2f35  85f6                 test esi, esi
// 006b2f37  7506                 jne 0x6b2f3f
// 006b2f39  33c0                 xor eax, eax
// 006b2f3b  5e                   pop esi
// 006b2f3c  c21000               ret 0x10
// 006b2f3f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b2f43  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b2f47  8b542408             mov edx, dword ptr [esp + 8]
// 006b2f4b  56                   push esi
// 006b2f4c  68202c6b00           push 0x6b2c20
// 006b2f51  50                   push eax
// 006b2f52  51                   push ecx
// 006b2f53  52                   push edx
// 006b2f54  ff1584d17700         call dword ptr [0x77d184]
// 006b2f5a  0fb706               movzx eax, word ptr [esi]
// 006b2f5d  6685c0               test ax, ax
// 006b2f60  7509                 jne 0x6b2f6b
// 006b2f62  b801000000           mov eax, 1
// 006b2f67  5e                   pop esi
// 006b2f68  c21000               ret 0x10
// 006b2f6b  33c9                 xor ecx, ecx
// 006b2f6d  663d0904             cmp ax, 0x409
// 006b2f71  0f94c1               sete cl
// 006b2f74  5e                   pop esi
// 006b2f75  8bc1                 mov eax, ecx
// 006b2f77  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ?EnumResNameProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBDPADJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp
