// roc 2007-03 006d8d30  unit: seg_006d0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d8d30
//
// 006d8d30  33c0                 xor eax, eax
// 006d8d32  394128               cmp dword ptr [ecx + 0x28], eax
// 006d8d35  7e1a                 jle 0x6d8d51
// 006d8d37  85c0                 test eax, eax
// 006d8d39  7c17                 jl 0x6d8d52
// 006d8d3b  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 006d8d3e  7d12                 jge 0x6d8d52
// 006d8d40  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006d8d43  8b1482               mov edx, dword ptr [edx + eax*4]
// 006d8d46  894224               mov dword ptr [edx + 0x24], eax
// 006d8d49  83c001               add eax, 1
// 006d8d4c  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 006d8d4f  7ce6                 jl 0x6d8d37
// 006d8d51  c3                   ret 
// 006d8d52  e95756f4ff           jmp 0x61e3ae
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?UpdateIndexes@CXTPPropertyGridInplaceButtons@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
