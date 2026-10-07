// roc 2007-08 00596520  unit: RBX::LaserTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596520
//
// 00596520  8b01                 mov eax, dword ptr [ecx]
// 00596522  8b542404             mov edx, dword ptr [esp + 4]
// 00596526  8902                 mov dword ptr [edx], eax
// 00596528  8b4104               mov eax, dword ptr [ecx + 4]
// 0059652b  8b542408             mov edx, dword ptr [esp + 8]
// 0059652f  8902                 mov dword ptr [edx], eax
// 00596531  8b4108               mov eax, dword ptr [ecx + 8]
// 00596534  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00596538  8902                 mov dword ptr [edx], eax
// 0059653a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0059653d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00596541  8901                 mov dword ptr [ecx], eax
// 00596543  c21000               ret 0x10
// library rbxgs/script\LuaMemory.cpp (function ?getHeapStats@LuaAllocator@@QBEXAAI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
