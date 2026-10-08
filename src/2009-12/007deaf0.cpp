// roc 2009-12 007deaf0  unit: RBX::ContactStage  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007deaf0
//
// 007deaf0  8b01                 mov eax, dword ptr [ecx]
// 007deaf2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007deaf6  8b11                 mov edx, dword ptr [ecx]
// 007deaf8  8910                 mov dword ptr [eax], edx
// 007deafa  8b542408             mov edx, dword ptr [esp + 8]
// 007deafe  2b11                 sub edx, dword ptr [ecx]
// 007deb00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007deb04  895004               mov dword ptr [eax + 4], edx
// 007deb07  8b11                 mov edx, dword ptr [ecx]
// 007deb09  89500c               mov dword ptr [eax + 0xc], edx
// 007deb0c  8b542410             mov edx, dword ptr [esp + 0x10]
// 007deb10  2b11                 sub edx, dword ptr [ecx]
// 007deb12  895010               mov dword ptr [eax + 0x10], edx
// 007deb15  c21000               ret 0x10
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?before@zlib_base@detail@iostreams@boost@@IAEXAAPBDPBDAAPADPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
