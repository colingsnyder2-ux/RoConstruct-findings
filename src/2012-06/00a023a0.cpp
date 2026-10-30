// roc 2012-06 00a023a0  unit: RBX::MovingStage  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a023a0
//
// 00a023a0  83ec10               sub esp, 0x10
// 00a023a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a023a7  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00a023ad  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00a023b3  890c24               mov dword ptr [esp], ecx
// 00a023b6  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00a023bc  894c2408             mov dword ptr [esp + 8], ecx
// 00a023c0  89542404             mov dword ptr [esp + 4], edx
// 00a023c4  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00a023ca  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00a023d0  8d0c24               lea ecx, [esp]
// 00a023d3  51                   push ecx
// 00a023d4  50                   push eax
// 00a023d5  89542414             mov dword ptr [esp + 0x14], edx
// 00a023d9  e812ffffff           call 0xa022f0
// 00a023de  f7d8                 neg eax
// 00a023e0  1bc0                 sbb eax, eax
// 00a023e2  f7d8                 neg eax
// 00a023e4  83c418               add esp, 0x18
// 00a023e7  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetDrawImageFlags@@YAKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
