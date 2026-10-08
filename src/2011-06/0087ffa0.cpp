// from server: 100% by auto
// roc 2011-06 0087ffa0  unit: CXTPResourceManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087ffa0
//
// 0087ffa0  51                   push ecx
// 0087ffa1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087ffa5  8d0424               lea eax, [esp]
// 0087ffa8  50                   push eax
// 0087ffa9  68f0fe8700           push 0x87fef0
// 0087ffae  51                   push ecx
// 0087ffaf  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0087ffb7  ff153402a400         call dword ptr [0xa40234]
// 0087ffbd  668b0424             mov ax, word ptr [esp]
// 0087ffc1  59                   pop ecx
// 0087ffc2  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?GetResourceLanguage@CXTPResourceManager@@SAGPAUHINSTANCE__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
