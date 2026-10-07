// roc 2011-06 007b4ad0  unit: RBX::TreeStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b4ad0
//
// 007b4ad0  51                   push ecx
// 007b4ad1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b4ad5  e826d2feff           call 0x7a1d00
// 007b4ada  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Write@VRakString@RakNet@@@BitStream@RakNet@@QAEXABVRakString@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
