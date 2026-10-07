// roc 2011-06 00679690  unit: RBX::SpecialShape  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679690
//
// 00679690  8b01                 mov eax, dword ptr [ecx]
// 00679692  8b542404             mov edx, dword ptr [esp + 4]
// 00679696  8902                 mov dword ptr [edx], eax
// 00679698  8b4104               mov eax, dword ptr [ecx + 4]
// 0067969b  8b542408             mov edx, dword ptr [esp + 8]
// 0067969f  8902                 mov dword ptr [edx], eax
// 006796a1  8b4108               mov eax, dword ptr [ecx + 8]
// 006796a4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006796a8  8902                 mov dword ptr [edx], eax
// 006796aa  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006796ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006796b1  8901                 mov dword ptr [ecx], eax
// 006796b3  c21000               ret 0x10
// library rbxgs/script\LuaMemory.cpp (function ?getHeapStats@LuaAllocator@@QBEXAAI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
