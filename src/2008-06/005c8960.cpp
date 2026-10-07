// roc 2008-06 005c8960  unit: RBX::LaserTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8960
//
// 005c8960  8b01                 mov eax, dword ptr [ecx]
// 005c8962  8b542404             mov edx, dword ptr [esp + 4]
// 005c8966  8902                 mov dword ptr [edx], eax
// 005c8968  8b4104               mov eax, dword ptr [ecx + 4]
// 005c896b  8b542408             mov edx, dword ptr [esp + 8]
// 005c896f  8902                 mov dword ptr [edx], eax
// 005c8971  8b4108               mov eax, dword ptr [ecx + 8]
// 005c8974  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005c8978  8902                 mov dword ptr [edx], eax
// 005c897a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005c897d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c8981  8901                 mov dword ptr [ecx], eax
// 005c8983  c21000               ret 0x10
// library rbxgs/script\LuaMemory.cpp (function ?getHeapStats@LuaAllocator@@QBEXAAI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
