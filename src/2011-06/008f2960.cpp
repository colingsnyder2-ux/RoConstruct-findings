// roc 2011-06 008f2960  unit: CXTColorSelectorCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2960
//
// 008f2960  8b442404             mov eax, dword ptr [esp + 4]
// 008f2964  56                   push esi
// 008f2965  50                   push eax
// 008f2966  8bf1                 mov esi, ecx
// 008f2968  e85585f1ff           call 0x80aec2
// 008f296d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f2970  6a00                 push 0
// 008f2972  6a00                 push 0
// 008f2974  51                   push ecx
// 008f2975  ff15ec19a400         call dword ptr [0xa419ec]
// 008f297b  5e                   pop esi
// 008f297c  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnSetFocus@CXTButton@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
