// roc 2009-12 008d32f0  unit: CXTPTabPaintManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d32f0
//
// 008d32f0  56                   push esi
// 008d32f1  57                   push edi
// 008d32f2  8bf9                 mov edi, ecx
// 008d32f4  33f6                 xor esi, esi
// 008d32f6  39b7f0000000         cmp dword ptr [edi + 0xf0], esi
// 008d32fc  7e26                 jle 0x8d3324
// 008d32fe  8bff                 mov edi, edi
// 008d3300  85f6                 test esi, esi
// 008d3302  7c23                 jl 0x8d3327
// 008d3304  3bb7f0000000         cmp esi, dword ptr [edi + 0xf0]
// 008d330a  7d1b                 jge 0x8d3327
// 008d330c  8b87ec000000         mov eax, dword ptr [edi + 0xec]
// 008d3312  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008d3315  8b11                 mov edx, dword ptr [ecx]
// 008d3317  8b02                 mov eax, dword ptr [edx]
// 008d3319  ffd0                 call eax
// 008d331b  46                   inc esi
// 008d331c  3bb7f0000000         cmp esi, dword ptr [edi + 0xf0]
// 008d3322  7cdc                 jl 0x8d3300
// 008d3324  5f                   pop edi
// 008d3325  5e                   pop esi
// 008d3326  c3                   ret 
// 008d3327  e8e007f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnPropertyChanged@CXTPTabPaintManager@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp