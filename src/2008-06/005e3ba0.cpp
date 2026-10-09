// roc 2008-06 005e3ba0  unit: RBX::JointInstance  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3ba0
//
// 005e3ba0  8b442404             mov eax, dword ptr [esp + 4]
// 005e3ba4  56                   push esi
// 005e3ba5  50                   push eax
// 005e3ba6  8bf1                 mov esi, ecx
// 005e3ba8  e8c3fcffff           call 0x5e3870
// 005e3bad  c70604e58300         mov dword ptr [esi], 0x83e504
// 005e3bb3  c74610f8e48300       mov dword ptr [esi + 0x10], 0x83e4f8
// 005e3bba  c74614f0e48300       mov dword ptr [esi + 0x14], 0x83e4f0
// 005e3bc1  c74620e8e48300       mov dword ptr [esi + 0x20], 0x83e4e8
// 005e3bc8  c74624d8e48300       mov dword ptr [esi + 0x24], 0x83e4d8
// 005e3bcf  c74644c8e48300       mov dword ptr [esi + 0x44], 0x83e4c8
// 005e3bd6  c74664b8e48300       mov dword ptr [esi + 0x64], 0x83e4b8
// 005e3bdd  c78684000000a8e48300 mov dword ptr [esi + 0x84], 0x83e4a8
// 005e3be7  c786a400000098e48300 mov dword ptr [esi + 0xa4], 0x83e498
// 005e3bf1  c786c400000088e48300 mov dword ptr [esi + 0xc4], 0x83e488
// 005e3bfb  c7863001000070e48300 mov dword ptr [esi + 0x130], 0x83e470
// 005e3c05  8bc6                 mov eax, esi
// 005e3c07  5e                   pop esi
// 005e3c08  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
