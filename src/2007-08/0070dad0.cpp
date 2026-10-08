// from server: 100% by auto
// roc 2007-08 0070dad0  unit: CXTColorLum  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070dad0
//
// 0070dad0  8b442404             mov eax, dword ptr [esp + 4]
// 0070dad4  56                   push esi
// 0070dad5  50                   push eax
// 0070dad6  8bf1                 mov esi, ecx
// 0070dad8  e8452ef2ff           call 0x630922
// 0070dadd  6a00                 push 0
// 0070dadf  c70550978c0002000000 mov dword ptr [0x8c9750], 2
// 0070dae9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0070daec  6a00                 push 0
// 0070daee  51                   push ecx
// 0070daef  ff15dcec7700         call dword ptr [0x77ecdc]
// 0070daf5  5e                   pop esi
// 0070daf6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?OnSetFocus@CXTColorLum@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
