// roc 2007-03 00729070  unit: seg_00720000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00729070
//
// 00729070  8bc1                 mov eax, ecx
// 00729072  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00729076  8a5118               mov dl, byte ptr [ecx + 0x18]
// 00729079  885018               mov byte ptr [eax + 0x18], dl
// 0072907c  80781800             cmp byte ptr [eax + 0x18], 0
// 00729080  8b11                 mov edx, dword ptr [ecx]
// 00729082  8910                 mov dword ptr [eax], edx
// 00729084  8b5104               mov edx, dword ptr [ecx + 4]
// 00729087  895004               mov dword ptr [eax + 4], edx
// 0072908a  8b5108               mov edx, dword ptr [ecx + 8]
// 0072908d  895008               mov dword ptr [eax + 8], edx
// 00729090  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00729093  89500c               mov dword ptr [eax + 0xc], edx
// 00729096  740c                 je 0x7290a4
// 00729098  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0072909b  895010               mov dword ptr [eax + 0x10], edx
// 0072909e  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 007290a1  894814               mov dword ptr [eax + 0x14], ecx
// 007290a4  c20400               ret 4
// library rbxgs/humanoid\FallingDown.cpp (function ??4named_slot_map_iterator@detail@signals@boost@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
