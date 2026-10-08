// roc 2007-03 0057fdd0  unit: seg_00570000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057fdd0
//
// 0057fdd0  8b01                 mov eax, dword ptr [ecx]
// 0057fdd2  8b542404             mov edx, dword ptr [esp + 4]
// 0057fdd6  8902                 mov dword ptr [edx], eax
// 0057fdd8  8b4104               mov eax, dword ptr [ecx + 4]
// 0057fddb  8b542408             mov edx, dword ptr [esp + 8]
// 0057fddf  8902                 mov dword ptr [edx], eax
// 0057fde1  8b4108               mov eax, dword ptr [ecx + 8]
// 0057fde4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057fde8  8902                 mov dword ptr [edx], eax
// 0057fdea  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0057fded  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057fdf1  8901                 mov dword ptr [ecx], eax
// 0057fdf3  c21000               ret 0x10
// library rbxgs/script\LuaMemory.cpp (function ?getHeapStats@LuaAllocator@@QBEXAAI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
