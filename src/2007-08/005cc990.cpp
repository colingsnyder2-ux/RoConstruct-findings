// roc 2007-08 005cc990  unit: seg_005c0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cc990
//
// 005cc990  8b01                 mov eax, dword ptr [ecx]
// 005cc992  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005cc996  8b11                 mov edx, dword ptr [ecx]
// 005cc998  8910                 mov dword ptr [eax], edx
// 005cc99a  8b542408             mov edx, dword ptr [esp + 8]
// 005cc99e  2b11                 sub edx, dword ptr [ecx]
// 005cc9a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cc9a4  895004               mov dword ptr [eax + 4], edx
// 005cc9a7  8b11                 mov edx, dword ptr [ecx]
// 005cc9a9  89500c               mov dword ptr [eax + 0xc], edx
// 005cc9ac  8b542410             mov edx, dword ptr [esp + 0x10]
// 005cc9b0  2b11                 sub edx, dword ptr [ecx]
// 005cc9b2  895010               mov dword ptr [eax + 0x10], edx
// 005cc9b5  c21000               ret 0x10
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?before@zlib_base@detail@iostreams@boost@@IAEXAAPBDPBDAAPADPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
