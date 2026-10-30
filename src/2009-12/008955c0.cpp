// roc 2009-12 008955c0  unit: CXTPRibbonBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008955c0
//
// 008955c0  56                   push esi
// 008955c1  8bf1                 mov esi, ecx
// 008955c3  8b06                 mov eax, dword ptr [esi]
// 008955c5  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 008955cb  ffd2                 call edx
// 008955cd  85c0                 test eax, eax
// 008955cf  7410                 je 0x8955e1
// 008955d1  8b442408             mov eax, dword ptr [esp + 8]
// 008955d5  50                   push eax
// 008955d6  8bce                 mov ecx, esi
// 008955d8  e81320faff           call 0x8375f0
// 008955dd  5e                   pop esi
// 008955de  c20400               ret 4
// 008955e1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008955e5  51                   push ecx
// 008955e6  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 008955ec  e8af05faff           call 0x835ba0
// 008955f1  5e                   pop esi
// 008955f2  c20400               ret 4
// copied from an identical function in another client (function ?RestoreCommandBarList@CXTPRibbonBar@@MAEXPAVCXTPCommandBarList@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp