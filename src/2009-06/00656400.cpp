// roc 2009-06 00656400  unit: RBX::LaserTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00656400
//
// 00656400  8b01                 mov eax, dword ptr [ecx]
// 00656402  8b542404             mov edx, dword ptr [esp + 4]
// 00656406  8902                 mov dword ptr [edx], eax
// 00656408  8b4104               mov eax, dword ptr [ecx + 4]
// 0065640b  8b542408             mov edx, dword ptr [esp + 8]
// 0065640f  8902                 mov dword ptr [edx], eax
// 00656411  8b4108               mov eax, dword ptr [ecx + 8]
// 00656414  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00656418  8902                 mov dword ptr [edx], eax
// 0065641a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0065641d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00656421  8901                 mov dword ptr [ecx], eax
// 00656423  c21000               ret 0x10
// library rbxgs/script\LuaMemory.cpp (function ?getHeapStats@LuaAllocator@@QBEXAAI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
