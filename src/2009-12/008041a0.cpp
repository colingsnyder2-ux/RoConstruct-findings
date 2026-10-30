// roc 2009-12 008041a0  unit: CXTPCommandBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008041a0
//
// 008041a0  56                   push esi
// 008041a1  8bf1                 mov esi, ecx
// 008041a3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008041a9  85c9                 test ecx, ecx
// 008041ab  740f                 je 0x8041bc
// 008041ad  e82afcfeff           call 0x7f3ddc
// 008041b2  c786fc00000000000000 mov dword ptr [esi + 0xfc], 0
// 008041bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008041c0  898efc000000         mov dword ptr [esi + 0xfc], ecx
// 008041c6  85c9                 test ecx, ecx
// 008041c8  7406                 je 0x8041d0
// 008041ca  56                   push esi
// 008041cb  e8f0100400           call 0x8452c0
// 008041d0  5e                   pop esi
// 008041d1  c20400               ret 4
// copied from an identical function in another client (function ?SetControls@CXTPCommandBar@@QAEXPAVCXTPControls@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp