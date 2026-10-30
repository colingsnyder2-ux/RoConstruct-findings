// from server: 100% by auto
// roc 2007-08 006b2fc0  unit: CXTPResourceManager  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2fc0
//
// 006b2fc0  56                   push esi
// 006b2fc1  8b742410             mov esi, dword ptr [esp + 0x10]
// 006b2fc5  85f6                 test esi, esi
// 006b2fc7  7506                 jne 0x6b2fcf
// 006b2fc9  33c0                 xor eax, eax
// 006b2fcb  5e                   pop esi
// 006b2fcc  c20c00               ret 0xc
// 006b2fcf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b2fd3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b2fd7  56                   push esi
// 006b2fd8  68302f6b00           push 0x6b2f30
// 006b2fdd  50                   push eax
// 006b2fde  51                   push ecx
// 006b2fdf  ff1580d17700         call dword ptr [0x77d180]
// 006b2fe5  0fb706               movzx eax, word ptr [esi]
// 006b2fe8  6685c0               test ax, ax
// 006b2feb  7509                 jne 0x6b2ff6
// 006b2fed  b801000000           mov eax, 1
// 006b2ff2  5e                   pop esi
// 006b2ff3  c20c00               ret 0xc
// 006b2ff6  33d2                 xor edx, edx
// 006b2ff8  663d0904             cmp ax, 0x409
// 006b2ffc  0f94c2               sete dl
// 006b2fff  5e                   pop esi
// 006b3000  8bc2                 mov eax, edx
// 006b3002  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ?EnumResTypeProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PADJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp
