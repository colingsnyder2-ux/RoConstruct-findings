// roc 2012-06 00a56850  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56850
//
// 00a56850  33c0                 xor eax, eax
// 00a56852  394128               cmp dword ptr [ecx + 0x28], eax
// 00a56855  7e18                 jle 0xa5686f
// 00a56857  85c0                 test eax, eax
// 00a56859  7c15                 jl 0xa56870
// 00a5685b  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00a5685e  7d10                 jge 0xa56870
// 00a56860  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00a56863  8b1482               mov edx, dword ptr [edx + eax*4]
// 00a56866  894224               mov dword ptr [edx + 0x24], eax
// 00a56869  40                   inc eax
// 00a5686a  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00a5686d  7ce8                 jl 0xa56857
// 00a5686f  c3                   ret 
// 00a56870  e94bbbf2ff           jmp 0x9823c0
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?UpdateIndexes@CXTPPropertyGridInplaceButtons@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
