// roc 2012-06 009ebc70  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ebc70
//
// 009ebc70  53                   push ebx
// 009ebc71  56                   push esi
// 009ebc72  8bd1                 mov edx, ecx
// 009ebc74  57                   push edi
// 009ebc75  8b7a5c               mov edi, dword ptr [edx + 0x5c]
// 009ebc78  33c0                 xor eax, eax
// 009ebc7a  85ff                 test edi, edi
// 009ebc7c  7e27                 jle 0x9ebca5
// 009ebc7e  8b742414             mov esi, dword ptr [esp + 0x14]
// 009ebc82  85c0                 test eax, eax
// 009ebc84  7c5d                 jl 0x9ebce3
// 009ebc86  3bc7                 cmp eax, edi
// 009ebc88  7d59                 jge 0x9ebce3
// 009ebc8a  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 009ebc8d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 009ebc90  8b5924               mov ebx, dword ptr [ecx + 0x24]
// 009ebc93  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 009ebc96  7508                 jne 0x9ebca0
// 009ebc98  8b5920               mov ebx, dword ptr [ecx + 0x20]
// 009ebc9b  3b5e08               cmp ebx, dword ptr [esi + 8]
// 009ebc9e  740d                 je 0x9ebcad
// 009ebca0  40                   inc eax
// 009ebca1  3bc7                 cmp eax, edi
// 009ebca3  7cdd                 jl 0x9ebc82
// 009ebca5  5f                   pop edi
// 009ebca6  5e                   pop esi
// 009ebca7  33c0                 xor eax, eax
// 009ebca9  5b                   pop ebx
// 009ebcaa  c20800               ret 8
// 009ebcad  33c0                 xor eax, eax
// 009ebcaf  837e24ff             cmp dword ptr [esi + 0x24], -1
// 009ebcb3  0f94c0               sete al
// 009ebcb6  894104               mov dword ptr [ecx + 4], eax
// 009ebcb9  85c0                 test eax, eax
// 009ebcbb  7414                 je 0x9ebcd1
// 009ebcbd  bee83bb400           mov esi, 0xb43be8
// 009ebcc2  56                   push esi
// 009ebcc3  ff157847b200         call dword ptr [0xb24778]
// 009ebcc9  5f                   pop edi
// 009ebcca  5e                   pop esi
// 009ebccb  33c0                 xor eax, eax
// 009ebccd  5b                   pop ebx
// 009ebcce  c20800               ret 8
// 009ebcd1  8b7624               mov esi, dword ptr [esi + 0x24]
// 009ebcd4  56                   push esi
// 009ebcd5  ff157847b200         call dword ptr [0xb24778]
// 009ebcdb  5f                   pop edi
// 009ebcdc  5e                   pop esi
// 009ebcdd  33c0                 xor eax, eax
// 009ebcdf  5b                   pop ebx
// 009ebce0  c20800               ret 8
// 009ebce3  e8d866f9ff           call 0x9823c0
// copied from an identical function in another client (function ?OnUpdateTipText@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp