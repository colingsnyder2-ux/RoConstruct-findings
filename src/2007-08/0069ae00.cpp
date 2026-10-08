// from server: 100% by auto
// roc 2007-08 0069ae00  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ae00
//
// 0069ae00  56                   push esi
// 0069ae01  8bf1                 mov esi, ecx
// 0069ae03  e8d257f9ff           call 0x6305da
// 0069ae08  33c0                 xor eax, eax
// 0069ae0a  c706fc1b7d00         mov dword ptr [esi], 0x7d1bfc
// 0069ae10  89465c               mov dword ptr [esi + 0x5c], eax
// 0069ae13  c74658084a7900       mov dword ptr [esi + 0x58], 0x794a08
// 0069ae1a  894654               mov dword ptr [esi + 0x54], eax
// 0069ae1d  8bc6                 mov eax, esi
// 0069ae1f  5e                   pop esi
// 0069ae20  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ??0CXTPPropertyGridToolTip@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
