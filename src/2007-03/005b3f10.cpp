// roc 2007-03 005b3f10  unit: seg_005b0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3f10
//
// 005b3f10  8b542408             mov edx, dword ptr [esp + 8]
// 005b3f14  8bc1                 mov eax, ecx
// 005b3f16  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b3f1a  8908                 mov dword ptr [eax], ecx
// 005b3f1c  895004               mov dword ptr [eax + 4], edx
// 005b3f1f  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0Function@Reflection@RBX@@QAE@ABVFunctionDescriptor@12@PBVDescribedBase@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
