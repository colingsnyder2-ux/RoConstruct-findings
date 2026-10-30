// roc 2009-12 00804560  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804560
//
// 00804560  56                   push esi
// 00804561  8bf1                 mov esi, ecx
// 00804563  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 00804569  85c9                 test ecx, ecx
// 0080456b  7405                 je 0x804572
// 0080456d  e86af8feff           call 0x7f3ddc
// 00804572  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00804576  898e64010000         mov dword ptr [esi + 0x164], ecx
// 0080457c  5e                   pop esi
// 0080457d  85c9                 test ecx, ecx
// 0080457f  740a                 je 0x80458b
// 00804581  8b01                 mov eax, dword ptr [ecx]
// 00804583  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 00804589  ffd2                 call edx
// 0080458b  c20400               ret 4
// copied from an identical function in another client (function ?SetPaintManager@CXTPCommandBar@@QAEXPAVCXTPPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp