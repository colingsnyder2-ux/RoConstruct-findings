// roc 2011-06 008eb340  unit: CXTColorLum  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eb340
//
// 008eb340  8b442404             mov eax, dword ptr [esp + 4]
// 008eb344  56                   push esi
// 008eb345  50                   push eax
// 008eb346  8bf1                 mov esi, ecx
// 008eb348  e875fbf1ff           call 0x80aec2
// 008eb34d  6a00                 push 0
// 008eb34f  c7053c92d10002000000 mov dword ptr [0xd1923c], 2
// 008eb359  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008eb35c  6a00                 push 0
// 008eb35e  51                   push ecx
// 008eb35f  ff15ec19a400         call dword ptr [0xa419ec]
// 008eb365  5e                   pop esi
// 008eb366  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnSetFocus@CXTPColorLum@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
