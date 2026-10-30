// roc 2009-12 00894a00  unit: CXTPRibbonBar::CControlQuickAccessCommand  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894a00
//
// 00894a00  56                   push esi
// 00894a01  8bf1                 mov esi, ecx
// 00894a03  e8f83bf6ff           call 0x7f8600
// 00894a08  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00894a0e  85c0                 test eax, eax
// 00894a10  7410                 je 0x894a22
// 00894a12  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00894a18  8b11                 mov edx, dword ptr [ecx]
// 00894a1a  50                   push eax
// 00894a1b  8b4258               mov eax, dword ptr [edx + 0x58]
// 00894a1e  ffd0                 call eax
// 00894a20  eb2c                 jmp 0x894a4e
// 00894a22  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00894a28  6a01                 push 1
// 00894a2a  6aff                 push -1
// 00894a2c  51                   push ecx
// 00894a2d  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00894a33  e87828fbff           call 0x8472b0
// 00894a38  8b88d0000000         mov ecx, dword ptr [eax + 0xd0]
// 00894a3e  8b10                 mov edx, dword ptr [eax]
// 00894a40  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00894a46  83e1ef               and ecx, 0xffffffef
// 00894a49  51                   push ecx
// 00894a4a  8bc8                 mov ecx, eax
// 00894a4c  ffd2                 call edx
// 00894a4e  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00894a54  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00894a57  8b11                 mov edx, dword ptr [ecx]
// 00894a59  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00894a5f  5e                   pop esi
// 00894a60  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnExecute@CControlQuickAccessCommand@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp