// roc 2010-06 0087aaa0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087aaa0
//
// 0087aaa0  56                   push esi
// 0087aaa1  8b742408             mov esi, dword ptr [esp + 8]
// 0087aaa5  85f6                 test esi, esi
// 0087aaa7  7420                 je 0x87aac9
// 0087aaa9  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0087aaac  33c0                 xor eax, eax
// 0087aaae  85d2                 test edx, edx
// 0087aab0  7e17                 jle 0x87aac9
// 0087aab2  57                   push edi
// 0087aab3  85c0                 test eax, eax
// 0087aab5  7c21                 jl 0x87aad8
// 0087aab7  3bc2                 cmp eax, edx
// 0087aab9  7d1d                 jge 0x87aad8
// 0087aabb  8b7924               mov edi, dword ptr [ecx + 0x24]
// 0087aabe  393487               cmp dword ptr [edi + eax*4], esi
// 0087aac1  740a                 je 0x87aacd
// 0087aac3  40                   inc eax
// 0087aac4  3bc2                 cmp eax, edx
// 0087aac6  7ceb                 jl 0x87aab3
// 0087aac8  5f                   pop edi
// 0087aac9  5e                   pop esi
// 0087aaca  c20400               ret 4
// 0087aacd  5f                   pop edi
// 0087aace  5e                   pop esi
// 0087aacf  89442404             mov dword ptr [esp + 4], eax
// 0087aad3  e9d8fdffff           jmp 0x87a8b0
// 0087aad8  e86fd1f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp