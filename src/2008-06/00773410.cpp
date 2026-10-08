// from server: 100% by auto
// roc 2008-06 00773410  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773410
//
// 00773410  33c0                 xor eax, eax
// 00773412  394128               cmp dword ptr [ecx + 0x28], eax
// 00773415  7e18                 jle 0x77342f
// 00773417  85c0                 test eax, eax
// 00773419  7c15                 jl 0x773430
// 0077341b  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0077341e  7d10                 jge 0x773430
// 00773420  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00773423  8b1482               mov edx, dword ptr [edx + eax*4]
// 00773426  894224               mov dword ptr [edx + 0x24], eax
// 00773429  40                   inc eax
// 0077342a  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0077342d  7ce8                 jl 0x773417
// 0077342f  c3                   ret 
// 00773430  e90fd5f2ff           jmp 0x6a0944
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?UpdateIndexes@CXTPPropertyGridInplaceButtons@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
