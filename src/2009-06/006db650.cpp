// roc 2009-06 006db650  unit: RBX::GroundStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006db650
//
// 006db650  51                   push ecx
// 006db651  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006db655  e816a6ffff           call 0x6d5c70
// 006db65a  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Write@VRakString@RakNet@@@BitStream@RakNet@@QAEXABVRakString@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
