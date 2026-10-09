// roc 2008-06 005e4b90  unit: RBX::VGlue::?$FactoryProduct  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4b90
//
// 005e4b90  8b442404             mov eax, dword ptr [esp + 4]
// 005e4b94  56                   push esi
// 005e4b95  50                   push eax
// 005e4b96  8bf1                 mov esi, ecx
// 005e4b98  e833f6ffff           call 0x5e41d0
// 005e4b9d  c706dcf48300         mov dword ptr [esi], 0x83f4dc
// 005e4ba3  c74610d0f48300       mov dword ptr [esi + 0x10], 0x83f4d0
// 005e4baa  c74614c8f48300       mov dword ptr [esi + 0x14], 0x83f4c8
// 005e4bb1  c74620c0f48300       mov dword ptr [esi + 0x20], 0x83f4c0
// 005e4bb8  c74624b0f48300       mov dword ptr [esi + 0x24], 0x83f4b0
// 005e4bbf  c74644a0f48300       mov dword ptr [esi + 0x44], 0x83f4a0
// 005e4bc6  c7466490f48300       mov dword ptr [esi + 0x64], 0x83f490
// 005e4bcd  c7868400000080f48300 mov dword ptr [esi + 0x84], 0x83f480
// 005e4bd7  c786a400000070f48300 mov dword ptr [esi + 0xa4], 0x83f470
// 005e4be1  c786c400000060f48300 mov dword ptr [esi + 0xc4], 0x83f460
// 005e4beb  c7863001000048f48300 mov dword ptr [esi + 0x130], 0x83f448
// 005e4bf5  8bc6                 mov eax, esi
// 005e4bf7  5e                   pop esi
// 005e4bf8  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
