// from server: 100% by auto
// roc 2011-06 0087fef0  unit: CXTPResourceManager  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087fef0
//
// 0087fef0  56                   push esi
// 0087fef1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0087fef5  85f6                 test esi, esi
// 0087fef7  7506                 jne 0x87feff
// 0087fef9  33c0                 xor eax, eax
// 0087fefb  5e                   pop esi
// 0087fefc  c20c00               ret 0xc
// 0087feff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087ff03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087ff07  56                   push esi
// 0087ff08  6800fe8700           push 0x87fe00
// 0087ff0d  50                   push eax
// 0087ff0e  51                   push ecx
// 0087ff0f  ff153802a400         call dword ptr [0xa40238]
// 0087ff15  0fb706               movzx eax, word ptr [esi]
// 0087ff18  6685c0               test ax, ax
// 0087ff1b  7509                 jne 0x87ff26
// 0087ff1d  b801000000           mov eax, 1
// 0087ff22  5e                   pop esi
// 0087ff23  c20c00               ret 0xc
// 0087ff26  33c9                 xor ecx, ecx
// 0087ff28  ba09040000           mov edx, 0x409
// 0087ff2d  663bc2               cmp ax, dx
// 0087ff30  0f94c1               sete cl
// 0087ff33  5e                   pop esi
// 0087ff34  8bc1                 mov eax, ecx
// 0087ff36  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?EnumResTypeProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
