// roc 2007-03 00575270  unit: seg_00570000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00575270
//
// 00575270  51                   push ecx
// 00575271  8b8144ffffff         mov eax, dword ptr [ecx - 0xbc]
// 00575277  8d0c24               lea ecx, [esp]
// 0057527a  51                   push ecx
// 0057527b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057527f  89442404             mov dword ptr [esp + 4], eax
// 00575283  e8b8ff0000           call 0x585240
// 00575288  59                   pop ecx
// 00575289  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?getCameraIgnorePrimitives@PartInstance@RBX@@UAEXAAV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
