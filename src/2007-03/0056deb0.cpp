// roc 2007-03 0056deb0  unit: seg_00560000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056deb0
//
// 0056deb0  8b442404             mov eax, dword ptr [esp + 4]
// 0056deb4  56                   push esi
// 0056deb5  8bf1                 mov esi, ecx
// 0056deb7  50                   push eax
// 0056deb8  8d4c240c             lea ecx, [esp + 0xc]
// 0056debc  e86ff8ffff           call 0x56d730
// 0056dec1  8b08                 mov ecx, dword ptr [eax]
// 0056dec3  8b16                 mov edx, dword ptr [esi]
// 0056dec5  8910                 mov dword ptr [eax], edx
// 0056dec7  890e                 mov dword ptr [esi], ecx
// 0056dec9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056decd  85c9                 test ecx, ecx
// 0056decf  7408                 je 0x56ded9
// 0056ded1  8b01                 mov eax, dword ptr [ecx]
// 0056ded3  8b10                 mov edx, dword ptr [eax]
// 0056ded5  6a01                 push 1
// 0056ded7  ffd2                 call edx
// 0056ded9  8bc6                 mov eax, esi
// 0056dedb  5e                   pop esi
// 0056dedc  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@any@boost@@QAEAAV01@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
