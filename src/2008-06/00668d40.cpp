// roc 2008-06 00668d40  unit: RBX::JointStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668d40
//
// 00668d40  51                   push ecx
// 00668d41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00668d45  e8f6cafdff           call 0x645840
// 00668d4a  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Write@VRakString@RakNet@@@BitStream@RakNet@@QAEXABVRakString@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
