// roc 2009-12 00850190  unit: CXTPPropExchange  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850190
//
// 00850190  8b01                 mov eax, dword ptr [ecx]
// 00850192  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00850195  8d54240c             lea edx, [esp + 0xc]
// 00850199  52                   push edx
// 0085019a  8d54240c             lea edx, [esp + 0xc]
// 0085019e  52                   push edx
// 0085019f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008501a3  52                   push edx
// 008501a4  ffd0                 call eax
// 008501a6  c20c00               ret 0xc
// copied from an identical function in another client (function ?Write@CXTPPropExchange@@UAEXPBDPBXI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp