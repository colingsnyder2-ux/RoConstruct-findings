// roc 2008-06 006a2aa0  unit: CXTPCommandBars  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2aa0
//
// 006a2aa0  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 006a2aa6  56                   push esi
// 006a2aa7  8b742408             mov esi, dword ptr [esp + 8]
// 006a2aab  8b06                 mov eax, dword ptr [esi]
// 006a2aad  8b900c020000         mov edx, dword ptr [eax + 0x20c]
// 006a2ab3  6a01                 push 1
// 006a2ab5  51                   push ecx
// 006a2ab6  8bce                 mov ecx, esi
// 006a2ab8  ffd2                 call edx
// 006a2aba  85c0                 test eax, eax
// 006a2abc  7504                 jne 0x6a2ac2
// 006a2abe  5e                   pop esi
// 006a2abf  c20400               ret 4
// 006a2ac2  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 006a2ac8  85c9                 test ecx, ecx
// 006a2aca  7412                 je 0x6a2ade
// 006a2acc  6aff                 push -1
// 006a2ace  56                   push esi
// 006a2acf  e8ec930700           call 0x71bec0
// 006a2ad4  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 006a2ade  c7860001000004000000 mov dword ptr [esi + 0x100], 4
// 006a2ae8  b801000000           mov eax, 1
// 006a2aed  5e                   pop esi
// 006a2aee  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?FloatCommandBar@CXTPCommandBars@@IAEHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
