// roc 2009-12 008501b0  unit: CXTPPropExchange  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008501b0
//
// 008501b0  8b01                 mov eax, dword ptr [ecx]
// 008501b2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008501b5  8d54240c             lea edx, [esp + 0xc]
// 008501b9  52                   push edx
// 008501ba  8d54240c             lea edx, [esp + 0xc]
// 008501be  52                   push edx
// 008501bf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008501c3  52                   push edx
// 008501c4  ffd0                 call eax
// 008501c6  f7d8                 neg eax
// 008501c8  1bc0                 sbb eax, eax
// 008501ca  2344240c             and eax, dword ptr [esp + 0xc]
// 008501ce  c20c00               ret 0xc
// copied from an identical function in another client (function ?Read@CXTPPropExchange@@UAEIPBDPAXI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp