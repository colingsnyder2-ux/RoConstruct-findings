// roc 2010-06 007920b0  unit: RBX::ContactStage  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007920b0
//
// 007920b0  8b01                 mov eax, dword ptr [ecx]
// 007920b2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007920b6  8b11                 mov edx, dword ptr [ecx]
// 007920b8  8910                 mov dword ptr [eax], edx
// 007920ba  8b542408             mov edx, dword ptr [esp + 8]
// 007920be  2b11                 sub edx, dword ptr [ecx]
// 007920c0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007920c4  895004               mov dword ptr [eax + 4], edx
// 007920c7  8b11                 mov edx, dword ptr [ecx]
// 007920c9  89500c               mov dword ptr [eax + 0xc], edx
// 007920cc  8b542410             mov edx, dword ptr [esp + 0x10]
// 007920d0  2b11                 sub edx, dword ptr [ecx]
// 007920d2  895010               mov dword ptr [eax + 0x10], edx
// 007920d5  c21000               ret 0x10
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?before@zlib_base@detail@iostreams@boost@@IAEXAAPBDPBDAAPADPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
