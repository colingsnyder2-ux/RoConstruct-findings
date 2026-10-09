// roc 2008-06 00609cd0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609cd0
//
// 00609cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00609cd4  56                   push esi
// 00609cd5  50                   push eax
// 00609cd6  8bf1                 mov esi, ecx
// 00609cd8  e8939bfdff           call 0x5e3870
// 00609cdd  c706642a8400         mov dword ptr [esi], 0x842a64
// 00609ce3  c74610542a8400       mov dword ptr [esi + 0x10], 0x842a54
// 00609cea  c746144c2a8400       mov dword ptr [esi + 0x14], 0x842a4c
// 00609cf1  c74620442a8400       mov dword ptr [esi + 0x20], 0x842a44
// 00609cf8  c74624342a8400       mov dword ptr [esi + 0x24], 0x842a34
// 00609cff  c74644242a8400       mov dword ptr [esi + 0x44], 0x842a24
// 00609d06  c74664142a8400       mov dword ptr [esi + 0x64], 0x842a14
// 00609d0d  c78684000000042a8400 mov dword ptr [esi + 0x84], 0x842a04
// 00609d17  c786a4000000f4298400 mov dword ptr [esi + 0xa4], 0x8429f4
// 00609d21  c786c4000000e4298400 mov dword ptr [esi + 0xc4], 0x8429e4
// 00609d2b  c78630010000cc298400 mov dword ptr [esi + 0x130], 0x8429cc
// 00609d35  8bc6                 mov eax, esi
// 00609d37  5e                   pop esi
// 00609d38  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
