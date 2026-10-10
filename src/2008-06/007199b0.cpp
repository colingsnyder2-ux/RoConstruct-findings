// roc 2008-06 007199b0  unit: CSelectionCaption  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007199b0
//
// 007199b0  83ec10               sub esp, 0x10
// 007199b3  56                   push esi
// 007199b4  8bf1                 mov esi, ecx
// 007199b6  e8ad72f8ff           call 0x6a0c68
// 007199bb  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007199c1  50                   push eax
// 007199c2  ff15502d8000         call dword ptr [0x802d50]
// 007199c8  85c0                 test eax, eax
// 007199ca  7433                 je 0x7199ff
// 007199cc  8b16                 mov edx, dword ptr [esi]
// 007199ce  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 007199d4  57                   push edi
// 007199d5  8d442408             lea eax, [esp + 8]
// 007199d9  50                   push eax
// 007199da  8bce                 mov ecx, esi
// 007199dc  ffd2                 call edx
// 007199de  8b4804               mov ecx, dword ptr [eax + 4]
// 007199e1  8b780c               mov edi, dword ptr [eax + 0xc]
// 007199e4  8b10                 mov edx, dword ptr [eax]
// 007199e6  8b4008               mov eax, dword ptr [eax + 8]
// 007199e9  6a01                 push 1
// 007199eb  2bf9                 sub edi, ecx
// 007199ed  57                   push edi
// 007199ee  2bc2                 sub eax, edx
// 007199f0  50                   push eax
// 007199f1  51                   push ecx
// 007199f2  52                   push edx
// 007199f3  8d8edc000000         lea ecx, [esi + 0xdc]
// 007199f9  e84e70f8ff           call 0x6a0a4c
// 007199fe  5f                   pop edi
// 007199ff  5e                   pop esi
// 00719a00  83c410               add esp, 0x10
// 00719a03  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?OnWindowPosChanged@CXTCaption@@IAEXPAUtagWINDOWPOS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
