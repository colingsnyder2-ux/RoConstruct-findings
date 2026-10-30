// roc 2012-06 00a56a70  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56a70
//
// 00a56a70  56                   push esi
// 00a56a71  8b742408             mov esi, dword ptr [esp + 8]
// 00a56a75  85f6                 test esi, esi
// 00a56a77  7420                 je 0xa56a99
// 00a56a79  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a56a7c  33c0                 xor eax, eax
// 00a56a7e  85d2                 test edx, edx
// 00a56a80  7e17                 jle 0xa56a99
// 00a56a82  57                   push edi
// 00a56a83  85c0                 test eax, eax
// 00a56a85  7c21                 jl 0xa56aa8
// 00a56a87  3bc2                 cmp eax, edx
// 00a56a89  7d1d                 jge 0xa56aa8
// 00a56a8b  8b7924               mov edi, dword ptr [ecx + 0x24]
// 00a56a8e  393487               cmp dword ptr [edi + eax*4], esi
// 00a56a91  740a                 je 0xa56a9d
// 00a56a93  40                   inc eax
// 00a56a94  3bc2                 cmp eax, edx
// 00a56a96  7ceb                 jl 0xa56a83
// 00a56a98  5f                   pop edi
// 00a56a99  5e                   pop esi
// 00a56a9a  c20400               ret 4
// 00a56a9d  5f                   pop edi
// 00a56a9e  5e                   pop esi
// 00a56a9f  89442404             mov dword ptr [esp + 4], eax
// 00a56aa3  e9d8fdffff           jmp 0xa56880
// 00a56aa8  e813b9f2ff           call 0x9823c0
// copied from an identical function in another client (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp