// roc 2012-06 009ee6a0  unit: CListBox  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee6a0
//
// 009ee6a0  56                   push esi
// 009ee6a1  8bf1                 mov esi, ecx
// 009ee6a3  e81e43f9ff           call 0x9829c6
// 009ee6a8  33c0                 xor eax, eax
// 009ee6aa  c706848dc100         mov dword ptr [esi], 0xc18d84
// 009ee6b0  89465c               mov dword ptr [esi + 0x5c], eax
// 009ee6b3  c746585007b600       mov dword ptr [esi + 0x58], 0xb60750
// 009ee6ba  894654               mov dword ptr [esi + 0x54], eax
// 009ee6bd  8bc6                 mov eax, esi
// 009ee6bf  5e                   pop esi
// 009ee6c0  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ??0CXTPPropertyGridToolTip@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
