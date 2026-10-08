// from server: 100% by auto
// roc 2011-06 008de540  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de540
//
// 008de540  33c0                 xor eax, eax
// 008de542  394128               cmp dword ptr [ecx + 0x28], eax
// 008de545  7e18                 jle 0x8de55f
// 008de547  85c0                 test eax, eax
// 008de549  7c15                 jl 0x8de560
// 008de54b  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008de54e  7d10                 jge 0x8de560
// 008de550  8b5124               mov edx, dword ptr [ecx + 0x24]
// 008de553  8b1482               mov edx, dword ptr [edx + eax*4]
// 008de556  894224               mov dword ptr [edx + 0x24], eax
// 008de559  40                   inc eax
// 008de55a  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008de55d  7ce8                 jl 0x8de547
// 008de55f  c3                   ret 
// 008de560  e9a5bdf2ff           jmp 0x80a30a
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?UpdateIndexes@CXTPPropertyGridInplaceButtons@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
