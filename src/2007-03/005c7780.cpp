// roc 2007-03 005c7780  unit: seg_005c0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c7780
//
// 005c7780  8b01                 mov eax, dword ptr [ecx]
// 005c7782  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c7786  8b11                 mov edx, dword ptr [ecx]
// 005c7788  8910                 mov dword ptr [eax], edx
// 005c778a  8b542408             mov edx, dword ptr [esp + 8]
// 005c778e  2b11                 sub edx, dword ptr [ecx]
// 005c7790  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c7794  895004               mov dword ptr [eax + 4], edx
// 005c7797  8b11                 mov edx, dword ptr [ecx]
// 005c7799  89500c               mov dword ptr [eax + 0xc], edx
// 005c779c  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c77a0  2b11                 sub edx, dword ptr [ecx]
// 005c77a2  895010               mov dword ptr [eax + 0x10], edx
// 005c77a5  c21000               ret 0x10
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?before@zlib_base@detail@iostreams@boost@@IAEXAAPBDPBDAAPADPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
