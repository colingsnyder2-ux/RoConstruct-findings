// roc 2008-06 005e3c10  unit: RBX::JointInstance  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3c10
//
// 005e3c10  8b442404             mov eax, dword ptr [esp + 4]
// 005e3c14  56                   push esi
// 005e3c15  50                   push eax
// 005e3c16  8bf1                 mov esi, ecx
// 005e3c18  e853fcffff           call 0x5e3870
// 005e3c1d  c706dce58300         mov dword ptr [esi], 0x83e5dc
// 005e3c23  c74610d0e58300       mov dword ptr [esi + 0x10], 0x83e5d0
// 005e3c2a  c74614c8e58300       mov dword ptr [esi + 0x14], 0x83e5c8
// 005e3c31  c74620c0e58300       mov dword ptr [esi + 0x20], 0x83e5c0
// 005e3c38  c74624b0e58300       mov dword ptr [esi + 0x24], 0x83e5b0
// 005e3c3f  c74644a0e58300       mov dword ptr [esi + 0x44], 0x83e5a0
// 005e3c46  c7466490e58300       mov dword ptr [esi + 0x64], 0x83e590
// 005e3c4d  c7868400000080e58300 mov dword ptr [esi + 0x84], 0x83e580
// 005e3c57  c786a400000070e58300 mov dword ptr [esi + 0xa4], 0x83e570
// 005e3c61  c786c400000060e58300 mov dword ptr [esi + 0xc4], 0x83e560
// 005e3c6b  c7863001000048e58300 mov dword ptr [esi + 0x130], 0x83e548
// 005e3c75  8bc6                 mov eax, esi
// 005e3c77  5e                   pop esi
// 005e3c78  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
