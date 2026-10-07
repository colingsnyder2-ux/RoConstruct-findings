// roc 2009-06 006db660  unit: RBX::GroundStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006db660
//
// 006db660  51                   push ecx
// 006db661  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006db665  e8e6a5ffff           call 0x6d5c50
// 006db66a  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Write@VRakString@RakNet@@@BitStream@RakNet@@QAEXABVRakString@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
