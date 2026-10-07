// roc 2007-08 00702650  unit: CXTPTabPaintManager  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00702650
//
// 00702650  56                   push esi
// 00702651  57                   push edi
// 00702652  8bf9                 mov edi, ecx
// 00702654  33f6                 xor esi, esi
// 00702656  39b7f0000000         cmp dword ptr [edi + 0xf0], esi
// 0070265c  7e28                 jle 0x702686
// 0070265e  8bff                 mov edi, edi
// 00702660  85f6                 test esi, esi
// 00702662  7c25                 jl 0x702689
// 00702664  3bb7f0000000         cmp esi, dword ptr [edi + 0xf0]
// 0070266a  7d1d                 jge 0x702689
// 0070266c  8b87ec000000         mov eax, dword ptr [edi + 0xec]
// 00702672  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00702675  8b11                 mov edx, dword ptr [ecx]
// 00702677  8b02                 mov eax, dword ptr [edx]
// 00702679  ffd0                 call eax
// 0070267b  83c601               add esi, 1
// 0070267e  3bb7f0000000         cmp esi, dword ptr [edi + 0xf0]
// 00702684  7cda                 jl 0x702660
// 00702686  5f                   pop edi
// 00702687  5e                   pop esi
// 00702688  c3                   ret 
// 00702689  e992d8f2ff           jmp 0x62ff20
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?OnPropertyChanged@CXTPTabPaintManager@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
