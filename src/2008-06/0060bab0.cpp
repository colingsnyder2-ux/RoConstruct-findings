// roc 2008-06 0060bab0  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060bab0
//
// 0060bab0  6aff                 push -1
// 0060bab2  68a88a7d00           push 0x7d8aa8
// 0060bab7  64a100000000         mov eax, dword ptr fs:[0]
// 0060babd  50                   push eax
// 0060babe  64892500000000       mov dword ptr fs:[0], esp
// 0060bac5  51                   push ecx
// 0060bac6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060baca  56                   push esi
// 0060bacb  8bf1                 mov esi, ecx
// 0060bacd  50                   push eax
// 0060bace  89742408             mov dword ptr [esp + 8], esi
// 0060bad2  e8f9e1ffff           call 0x609cd0
// 0060bad7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060badf  e81cfcffff           call 0x60b700
// 0060bae4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060bae8  89461c               mov dword ptr [esi + 0x1c], eax
// 0060baeb  c706c4308400         mov dword ptr [esi], 0x8430c4
// 0060baf1  c74610b8308400       mov dword ptr [esi + 0x10], 0x8430b8
// 0060baf8  c74614b0308400       mov dword ptr [esi + 0x14], 0x8430b0
// 0060baff  c74620a8308400       mov dword ptr [esi + 0x20], 0x8430a8
// 0060bb06  c7462498308400       mov dword ptr [esi + 0x24], 0x843098
// 0060bb0d  c7464488308400       mov dword ptr [esi + 0x44], 0x843088
// 0060bb14  c7466478308400       mov dword ptr [esi + 0x64], 0x843078
// 0060bb1b  c7868400000068308400 mov dword ptr [esi + 0x84], 0x843068
// 0060bb25  c786a400000058308400 mov dword ptr [esi + 0xa4], 0x843058
// 0060bb2f  c786c400000048308400 mov dword ptr [esi + 0xc4], 0x843048
// 0060bb39  c7863001000030308400 mov dword ptr [esi + 0x130], 0x843030
// 0060bb43  8bc6                 mov eax, esi
// 0060bb45  5e                   pop esi
// 0060bb46  64890d00000000       mov dword ptr fs:[0], ecx
// 0060bb4d  83c410               add esp, 0x10
// 0060bb50  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
