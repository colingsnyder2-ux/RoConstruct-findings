// roc 2010-06 00649540  unit: RBX::LaserTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00649540
//
// 00649540  8b01                 mov eax, dword ptr [ecx]
// 00649542  8b542404             mov edx, dword ptr [esp + 4]
// 00649546  8902                 mov dword ptr [edx], eax
// 00649548  8b4104               mov eax, dword ptr [ecx + 4]
// 0064954b  8b542408             mov edx, dword ptr [esp + 8]
// 0064954f  8902                 mov dword ptr [edx], eax
// 00649551  8b4108               mov eax, dword ptr [ecx + 8]
// 00649554  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00649558  8902                 mov dword ptr [edx], eax
// 0064955a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0064955d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00649561  8901                 mov dword ptr [ecx], eax
// 00649563  c21000               ret 0x10
// library rbxgs/script\LuaMemory.cpp (function ?getHeapStats@LuaAllocator@@QBEXAAI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
