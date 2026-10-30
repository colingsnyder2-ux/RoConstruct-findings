// from server: 100% by auto
// roc 2011-06 00876120  unit: CListBox  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00876120
//
// 00876120  56                   push esi
// 00876121  8bf1                 mov esi, ecx
// 00876123  e81e48f9ff           call 0x80a946
// 00876128  33c0                 xor eax, eax
// 0087612a  c706acd6ac00         mov dword ptr [esi], 0xacd6ac
// 00876130  89465c               mov dword ptr [esi + 0x5c], eax
// 00876133  c746589041a700       mov dword ptr [esi + 0x58], 0xa74190
// 0087613a  894654               mov dword ptr [esi + 0x54], eax
// 0087613d  8bc6                 mov eax, esi
// 0087613f  5e                   pop esi
// 00876140  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ??0CXTPPropertyGridToolTip@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
