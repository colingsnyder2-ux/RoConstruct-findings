// roc 2007-08 006b3070  unit: CXTPResourceManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3070
//
// 006b3070  51                   push ecx
// 006b3071  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b3075  8d0424               lea eax, [esp]
// 006b3078  50                   push eax
// 006b3079  68c02f6b00           push 0x6b2fc0
// 006b307e  51                   push ecx
// 006b307f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006b3087  ff157cd17700         call dword ptr [0x77d17c]
// 006b308d  668b0424             mov ax, word ptr [esp]
// 006b3091  59                   pop ecx
// 006b3092  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ?GetResourceLanguage@CXTPResourceManager@@SAGPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp
