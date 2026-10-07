// roc 2008-06 0040a890  unit: VAuthoringSettings::?$FactoryProduct  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a890
//
// 0040a890  8bc1                 mov eax, ecx
// 0040a892  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040a896  8b11                 mov edx, dword ptr [ecx]
// 0040a898  8910                 mov dword ptr [eax], edx
// 0040a89a  8b5104               mov edx, dword ptr [ecx + 4]
// 0040a89d  895004               mov dword ptr [eax + 4], edx
// 0040a8a0  8b5108               mov edx, dword ptr [ecx + 8]
// 0040a8a3  895008               mov dword ptr [eax + 8], edx
// 0040a8a6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0040a8a9  89500c               mov dword ptr [eax + 0xc], edx
// 0040a8ac  c7401000000000       mov dword ptr [eax + 0x10], 0
// 0040a8b3  c7401400000000       mov dword ptr [eax + 0x14], 0
// 0040a8ba  8a5118               mov dl, byte ptr [ecx + 0x18]
// 0040a8bd  885018               mov byte ptr [eax + 0x18], dl
// 0040a8c0  84d2                 test dl, dl
// 0040a8c2  740c                 je 0x40a8d0
// 0040a8c4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0040a8c7  895010               mov dword ptr [eax + 0x10], edx
// 0040a8ca  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0040a8cd  894814               mov dword ptr [eax + 0x14], ecx
// 0040a8d0  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0named_slot_map_iterator@detail@signals@boost@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
