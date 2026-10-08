// roc 2007-08 00576a70  unit: RBX::PartInstance  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576a70
//
// 00576a70  51                   push ecx
// 00576a71  8b8144ffffff         mov eax, dword ptr [ecx - 0xbc]
// 00576a77  8d0c24               lea ecx, [esp]
// 00576a7a  51                   push ecx
// 00576a7b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00576a7f  89442404             mov dword ptr [esp + 4], eax
// 00576a83  e8e8d50300           call 0x5b4070
// 00576a88  59                   pop ecx
// 00576a89  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?getCameraIgnorePrimitives@PartInstance@RBX@@UAEXAAV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
