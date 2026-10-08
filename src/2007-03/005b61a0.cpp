// roc 2007-03 005b61a0  unit: seg_005b0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b61a0
//
// 005b61a0  51                   push ecx
// 005b61a1  56                   push esi
// 005b61a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b61a6  56                   push esi
// 005b61a7  c744240800000000     mov dword ptr [esp + 8], 0
// 005b61af  e87ce9f7ff           call 0x534b30
// 005b61b4  8bc6                 mov eax, esi
// 005b61b6  5e                   pop esi
// 005b61b7  59                   pop ecx
// 005b61b8  c20400               ret 4
// library rbxgs/v8datamodel\PVInstance.cpp (function ??B?$ComputeProp@V?$ReferenceCountedPointer@VController@RBX@@@G3D@@VPVInstance@RBX@@@RBX@@QBE?AV?$ReferenceCountedPointer@VController@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp
