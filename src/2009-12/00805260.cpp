// roc 2009-12 00805260  unit: CXTPCommandBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805260
//
// 00805260  8b542404             mov edx, dword ptr [esp + 4]
// 00805264  85d2                 test edx, edx
// 00805266  7c1d                 jl 0x805285
// 00805268  e8e3ffffff           call 0x805250
// 0080526d  3bd0                 cmp edx, eax
// 0080526f  7d14                 jge 0x805285
// 00805271  8b81fc000000         mov eax, dword ptr [ecx + 0xfc]
// 00805277  3b502c               cmp edx, dword ptr [eax + 0x2c]
// 0080527a  7d09                 jge 0x805285
// 0080527c  8b4028               mov eax, dword ptr [eax + 0x28]
// 0080527f  8b0490               mov eax, dword ptr [eax + edx*4]
// 00805282  c20400               ret 4
// 00805285  33c0                 xor eax, eax
// 00805287  c20400               ret 4
// copied from an identical function in another client (function ?GetControl@CXTPCommandBar@@QBEPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp