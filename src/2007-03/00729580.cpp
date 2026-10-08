// roc 2007-03 00729580  unit: seg_00720000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00729580
//
// 00729580  8bc1                 mov eax, ecx
// 00729582  33c9                 xor ecx, ecx
// 00729584  8908                 mov dword ptr [eax], ecx
// 00729586  894804               mov dword ptr [eax + 4], ecx
// 00729589  894808               mov dword ptr [eax + 8], ecx
// 0072958c  89480c               mov dword ptr [eax + 0xc], ecx
// 0072958f  894810               mov dword ptr [eax + 0x10], ecx
// 00729592  894814               mov dword ptr [eax + 0x14], ecx
// 00729595  884818               mov byte ptr [eax + 0x18], cl
// 00729598  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0named_slot_map_iterator@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
