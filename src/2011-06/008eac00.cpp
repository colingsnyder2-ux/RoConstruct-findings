// roc 2011-06 008eac00  unit: CXTColorWnd  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eac00
//
// 008eac00  8b442404             mov eax, dword ptr [esp + 4]
// 008eac04  56                   push esi
// 008eac05  50                   push eax
// 008eac06  8bf1                 mov esi, ecx
// 008eac08  e8b502f2ff           call 0x80aec2
// 008eac0d  6a00                 push 0
// 008eac0f  c7053c92d10001000000 mov dword ptr [0xd1923c], 1
// 008eac19  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008eac1c  6a00                 push 0
// 008eac1e  51                   push ecx
// 008eac1f  ff15ec19a400         call dword ptr [0xa419ec]
// 008eac25  5e                   pop esi
// 008eac26  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnSetFocus@CXTPColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
