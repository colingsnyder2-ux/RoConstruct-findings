// roc 2007-03 00728e10  unit: seg_00720000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728e10
//
// 00728e10  80790c00             cmp byte ptr [ecx + 0xc], 0
// 00728e14  740f                 je 0x728e25
// 00728e16  8b4104               mov eax, dword ptr [ecx + 4]
// 00728e19  8b11                 mov edx, dword ptr [ecx]
// 00728e1b  50                   push eax
// 00728e1c  8b4108               mov eax, dword ptr [ecx + 8]
// 00728e1f  52                   push edx
// 00728e20  ffd0                 call eax
// 00728e22  83c408               add esp, 8
// 00728e25  c3                   ret 
// library boost-1.34.1/libs\signals\src\slot.cpp (function ??1auto_disconnect_bound_object@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/slot.cpp
