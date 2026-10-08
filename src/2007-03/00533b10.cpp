// roc 2007-03 00533b10  unit: seg_00530000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533b10
//
// 00533b10  8b542404             mov edx, dword ptr [esp + 4]
// 00533b14  56                   push esi
// 00533b15  8d8170010000         lea eax, [ecx + 0x170]
// 00533b1b  57                   push edi
// 00533b1c  b909000000           mov ecx, 9
// 00533b21  8bf2                 mov esi, edx
// 00533b23  8bf8                 mov edi, eax
// 00533b25  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00533b27  d94224               fld dword ptr [edx + 0x24]
// 00533b2a  d95824               fstp dword ptr [eax + 0x24]
// 00533b2d  d94228               fld dword ptr [edx + 0x28]
// 00533b30  d95828               fstp dword ptr [eax + 0x28]
// 00533b33  d9422c               fld dword ptr [edx + 0x2c]
// 00533b36  d9582c               fstp dword ptr [eax + 0x2c]
// 00533b39  5f                   pop edi
// 00533b3a  5e                   pop esi
// 00533b3b  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?setModelInPrimary@ModelInstance@RBX@@QAEXABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
