// roc 2011-06 00881a70  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881a70
//
// 00881a70  53                   push ebx
// 00881a71  55                   push ebp
// 00881a72  56                   push esi
// 00881a73  57                   push edi
// 00881a74  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00881a78  57                   push edi
// 00881a79  8bf1                 mov esi, ecx
// 00881a7b  e870a8fcff           call 0x84c2f0
// 00881a80  6a01                 push 1
// 00881a82  8d8628020000         lea eax, [esi + 0x228]
// 00881a88  50                   push eax
// 00881a89  68ccfaac00           push 0xacfacc
// 00881a8e  57                   push edi
// 00881a8f  e81ce5fdff           call 0x85ffb0
// 00881a94  6a01                 push 1
// 00881a96  8d8e30020000         lea ecx, [esi + 0x230]
// 00881a9c  51                   push ecx
// 00881a9d  68c0faac00           push 0xacfac0
// 00881aa2  57                   push edi
// 00881aa3  e808e5fdff           call 0x85ffb0
// 00881aa8  6a01                 push 1
// 00881aaa  8d962c020000         lea edx, [esi + 0x22c]
// 00881ab0  52                   push edx
// 00881ab1  68b0faac00           push 0xacfab0
// 00881ab6  57                   push edi
// 00881ab7  e8f4e4fdff           call 0x85ffb0
// 00881abc  83c420               add esp, 0x20
// 00881abf  8bc4                 mov eax, esp
// 00881ac1  33c9                 xor ecx, ecx
// 00881ac3  8908                 mov dword ptr [eax], ecx
// 00881ac5  33d2                 xor edx, edx
// 00881ac7  895004               mov dword ptr [eax + 4], edx
// 00881aca  33db                 xor ebx, ebx
// 00881acc  895808               mov dword ptr [eax + 8], ebx
// 00881acf  33ed                 xor ebp, ebp
// 00881ad1  89680c               mov dword ptr [eax + 0xc], ebp
// 00881ad4  8d8634020000         lea eax, [esi + 0x234]
// 00881ada  50                   push eax
// 00881adb  68a0faac00           push 0xacfaa0
// 00881ae0  57                   push edi
// 00881ae1  e8eae5fdff           call 0x8600d0
// 00881ae6  83c41c               add esp, 0x1c
// 00881ae9  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 00881aed  7616                 jbe 0x881b05
// 00881aef  55                   push ebp
// 00881af0  81c648020000         add esi, 0x248
// 00881af6  56                   push esi
// 00881af7  6894faac00           push 0xacfa94
// 00881afc  57                   push edi
// 00881afd  e84ee4fdff           call 0x85ff50
// 00881b02  83c410               add esp, 0x10
// 00881b05  5f                   pop edi
// 00881b06  5e                   pop esi
// 00881b07  5d                   pop ebp
// 00881b08  5b                   pop ebx
// 00881b09  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DoPropExchange@CXTPControlGallery@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
