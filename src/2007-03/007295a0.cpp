// roc 2007-03 007295a0  unit: seg_00720000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007295a0
//
// 007295a0  8bc1                 mov eax, ecx
// 007295a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007295a6  8b11                 mov edx, dword ptr [ecx]
// 007295a8  8910                 mov dword ptr [eax], edx
// 007295aa  8b5104               mov edx, dword ptr [ecx + 4]
// 007295ad  895004               mov dword ptr [eax + 4], edx
// 007295b0  8b5108               mov edx, dword ptr [ecx + 8]
// 007295b3  895008               mov dword ptr [eax + 8], edx
// 007295b6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 007295b9  89500c               mov dword ptr [eax + 0xc], edx
// 007295bc  c7401000000000       mov dword ptr [eax + 0x10], 0
// 007295c3  c7401400000000       mov dword ptr [eax + 0x14], 0
// 007295ca  8a5118               mov dl, byte ptr [ecx + 0x18]
// 007295cd  84d2                 test dl, dl
// 007295cf  885018               mov byte ptr [eax + 0x18], dl
// 007295d2  740c                 je 0x7295e0
// 007295d4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007295d7  895010               mov dword ptr [eax + 0x10], edx
// 007295da  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 007295dd  894814               mov dword ptr [eax + 0x14], ecx
// 007295e0  c20400               ret 4
// library rbxgs/humanoid\FallingDown.cpp (function ??0named_slot_map_iterator@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
