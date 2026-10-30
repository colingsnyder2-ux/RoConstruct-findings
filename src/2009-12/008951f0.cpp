// roc 2009-12 008951f0  unit: CXTPRibbonBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008951f0
//
// 008951f0  56                   push esi
// 008951f1  8bf1                 mov esi, ecx
// 008951f3  e8b4140900           call 0x9266ac
// 008951f8  8bce                 mov ecx, esi
// 008951fa  e871faffff           call 0x894c70
// 008951ff  8b10                 mov edx, dword ptr [eax]
// 00895201  8bc8                 mov ecx, eax
// 00895203  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00895209  ffd0                 call eax
// 0089520b  8bb668020000         mov esi, dword ptr [esi + 0x268]
// 00895211  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 00895217  8b4204               mov eax, dword ptr [edx + 4]
// 0089521a  8d8e84010000         lea ecx, [esi + 0x184]
// 00895220  5e                   pop esi
// 00895221  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnSysColorChange@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp