// roc 2008-06 005e4920  unit: RBX::VWeld::?$FactoryProduct  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4920
//
// 005e4920  8b442404             mov eax, dword ptr [esp + 4]
// 005e4924  56                   push esi
// 005e4925  50                   push eax
// 005e4926  8bf1                 mov esi, ecx
// 005e4928  e8e3f6ffff           call 0x5e4010
// 005e492d  c7062cf38300         mov dword ptr [esi], 0x83f32c
// 005e4933  c7461020f38300       mov dword ptr [esi + 0x10], 0x83f320
// 005e493a  c7461418f38300       mov dword ptr [esi + 0x14], 0x83f318
// 005e4941  c7462010f38300       mov dword ptr [esi + 0x20], 0x83f310
// 005e4948  c7462400f38300       mov dword ptr [esi + 0x24], 0x83f300
// 005e494f  c74644f0f28300       mov dword ptr [esi + 0x44], 0x83f2f0
// 005e4956  c74664e0f28300       mov dword ptr [esi + 0x64], 0x83f2e0
// 005e495d  c78684000000d0f28300 mov dword ptr [esi + 0x84], 0x83f2d0
// 005e4967  c786a4000000c0f28300 mov dword ptr [esi + 0xa4], 0x83f2c0
// 005e4971  c786c4000000b0f28300 mov dword ptr [esi + 0xc4], 0x83f2b0
// 005e497b  c7863001000098f28300 mov dword ptr [esi + 0x130], 0x83f298
// 005e4985  8bc6                 mov eax, esi
// 005e4987  5e                   pop esi
// 005e4988  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0PAVJoint@RBX@@@?$NonFactoryProduct@VJointInstance@RBX@@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
