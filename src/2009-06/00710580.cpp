// roc 2009-06 00710580  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710580
//
// 00710580  8b01                 mov eax, dword ptr [ecx]
// 00710582  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00710586  8b11                 mov edx, dword ptr [ecx]
// 00710588  8910                 mov dword ptr [eax], edx
// 0071058a  8b542408             mov edx, dword ptr [esp + 8]
// 0071058e  2b11                 sub edx, dword ptr [ecx]
// 00710590  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00710594  895004               mov dword ptr [eax + 4], edx
// 00710597  8b11                 mov edx, dword ptr [ecx]
// 00710599  89500c               mov dword ptr [eax + 0xc], edx
// 0071059c  8b542410             mov edx, dword ptr [esp + 0x10]
// 007105a0  2b11                 sub edx, dword ptr [ecx]
// 007105a2  895010               mov dword ptr [eax + 0x10], edx
// 007105a5  c21000               ret 0x10
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?before@zlib_base@detail@iostreams@boost@@IAEXAAPBDPBDAAPADPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
