// roc 2010-06 00761660  unit: RBX::GroundStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00761660
//
// 00761660  51                   push ecx
// 00761661  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00761665  e876210000           call 0x7637e0
// 0076166a  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Write@VRakString@RakNet@@@BitStream@RakNet@@QAEXABVRakString@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
