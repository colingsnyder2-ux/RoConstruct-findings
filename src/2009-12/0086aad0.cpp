// roc 2009-12 0086aad0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086aad0
//
// 0086aad0  56                   push esi
// 0086aad1  8bf1                 mov esi, ecx
// 0086aad3  e85893f8ff           call 0x7f3e30
// 0086aad8  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 0086aadf  750e                 jne 0x86aaef
// 0086aae1  8b06                 mov eax, dword ptr [esi]
// 0086aae3  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0086aae9  6aff                 push -1
// 0086aaeb  8bce                 mov ecx, esi
// 0086aaed  ffd2                 call edx
// 0086aaef  5e                   pop esi
// 0086aaf0  c20400               ret 4
// copied from an identical function in another client (function ?OnKillFocus@CXTColorPopup@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPopup.cpp