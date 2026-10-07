// roc 2007-08 006f6040  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6040
//
// 006f6040  33c0                 xor eax, eax
// 006f6042  394128               cmp dword ptr [ecx + 0x28], eax
// 006f6045  7e1a                 jle 0x6f6061
// 006f6047  85c0                 test eax, eax
// 006f6049  7c17                 jl 0x6f6062
// 006f604b  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 006f604e  7d12                 jge 0x6f6062
// 006f6050  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006f6053  8b1482               mov edx, dword ptr [edx + eax*4]
// 006f6056  894224               mov dword ptr [edx + 0x24], eax
// 006f6059  83c001               add eax, 1
// 006f605c  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 006f605f  7ce6                 jl 0x6f6047
// 006f6061  c3                   ret 
// 006f6062  e9b99ef3ff           jmp 0x62ff20
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?UpdateIndexes@CXTPPropertyGridInplaceButtons@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
