// roc 2009-12 00804730  unit: CXTPCommandBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804730
//
// 00804730  e89bfdffff           call 0x8044d0
// 00804735  85c0                 test eax, eax
// 00804737  7501                 jne 0x80473a
// 00804739  c3                   ret 
// 0080473a  8b10                 mov edx, dword ptr [eax]
// 0080473c  8bc8                 mov ecx, eax
// 0080473e  8b4264               mov eax, dword ptr [edx + 0x64]
// 00804741  ffe0                 jmp eax
// copied from an identical function in another client (function ?GetActiveDocTemplate@CXTPCommandBar@@IBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp