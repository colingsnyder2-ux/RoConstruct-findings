// roc 2007-03 005b3ad0  unit: seg_005b0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3ad0
//
// 005b3ad0  8b442404             mov eax, dword ptr [esp + 4]
// 005b3ad4  3981f0000000         cmp dword ptr [ecx + 0xf0], eax
// 005b3ada  7413                 je 0x5b3aef
// 005b3adc  8981f0000000         mov dword ptr [ecx + 0xf0], eax
// 005b3ae2  c7442404e0fc8b00     mov dword ptr [esp + 4], 0x8bfce0
// 005b3aea  e95103e9ff           jmp 0x443e40
// 005b3aef  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setFace@FaceInstance@RBX@@QAEXW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
