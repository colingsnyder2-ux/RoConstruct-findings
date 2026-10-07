// roc 2008-06 0064da90  unit: RBX::SimJobStage  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064da90
//
// 0064da90  8b01                 mov eax, dword ptr [ecx]
// 0064da92  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064da96  8b11                 mov edx, dword ptr [ecx]
// 0064da98  8910                 mov dword ptr [eax], edx
// 0064da9a  8b542408             mov edx, dword ptr [esp + 8]
// 0064da9e  2b11                 sub edx, dword ptr [ecx]
// 0064daa0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064daa4  895004               mov dword ptr [eax + 4], edx
// 0064daa7  8b11                 mov edx, dword ptr [ecx]
// 0064daa9  89500c               mov dword ptr [eax + 0xc], edx
// 0064daac  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064dab0  2b11                 sub edx, dword ptr [ecx]
// 0064dab2  895010               mov dword ptr [eax + 0x10], edx
// 0064dab5  c21000               ret 0x10
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?before@zlib_base@detail@iostreams@boost@@IAEXAAPBDPBDAAPADPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
