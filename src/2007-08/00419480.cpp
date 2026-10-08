// roc 2007-08 00419480  unit: VDHTMLWindow::?$SignalDesc  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00419480
//
// 00419480  c7014c757800         mov dword ptr [ecx], 0x78754c
// 00419486  c7410444757800       mov dword ptr [ecx + 4], 0x787544
// 0041948d  c741103c757800       mov dword ptr [ecx + 0x10], 0x78753c
// 00419494  c741142c757800       mov dword ptr [ecx + 0x14], 0x78752c
// 0041949b  c7412c1c757800       mov dword ptr [ecx + 0x2c], 0x78751c
// 004194a2  c741440c757800       mov dword ptr [ecx + 0x44], 0x78750c
// 004194a9  c7415cfc747800       mov dword ptr [ecx + 0x5c], 0x7874fc
// 004194b0  c74174ec747800       mov dword ptr [ecx + 0x74], 0x7874ec
// 004194b7  c7818c000000dc747800 mov dword ptr [ecx + 0x8c], 0x7874dc
// 004194c1  e9ea6d1200           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
