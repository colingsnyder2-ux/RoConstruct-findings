// from server: 100% by auto
// roc 2007-08 0070c650  unit: CXTColorBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c650
//
// 0070c650  8b442404             mov eax, dword ptr [esp + 4]
// 0070c654  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070c658  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070c65c  51                   push ecx
// 0070c65d  89442408             mov dword ptr [esp + 8], eax
// 0070c661  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070c665  52                   push edx
// 0070c666  50                   push eax
// 0070c667  8d4c2410             lea ecx, [esp + 0x10]
// 0070c66b  e820350100           call 0x71fb90
// 0070c670  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?RGBtoHSL@CXTColorBase@@SAXKPAN00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
