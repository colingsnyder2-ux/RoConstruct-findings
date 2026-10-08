// from server: 100% by auto
// roc 2008-06 00714430  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714430
//
// 00714430  56                   push esi
// 00714431  8bf1                 mov esi, ecx
// 00714433  e858caf8ff           call 0x6a0e90
// 00714438  33c0                 xor eax, eax
// 0071443a  c7069cda8500         mov dword ptr [esi], 0x85da9c
// 00714440  89465c               mov dword ptr [esi + 0x5c], eax
// 00714443  c7465828b28100       mov dword ptr [esi + 0x58], 0x81b228
// 0071444a  894654               mov dword ptr [esi + 0x54], eax
// 0071444d  8bc6                 mov eax, esi
// 0071444f  5e                   pop esi
// 00714450  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ??0CXTPPropertyGridToolTip@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
