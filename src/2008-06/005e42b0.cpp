// roc 2008-06 005e42b0  unit: RBX::VRotateV::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e42b0
//
// 005e42b0  6aff                 push -1
// 005e42b2  6898667d00           push 0x7d6698
// 005e42b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e42bd  50                   push eax
// 005e42be  64892500000000       mov dword ptr fs:[0], esp
// 005e42c5  51                   push ecx
// 005e42c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e42ca  56                   push esi
// 005e42cb  8bf1                 mov esi, ecx
// 005e42cd  50                   push eax
// 005e42ce  89742408             mov dword ptr [esp + 8], esi
// 005e42d2  e889faffff           call 0x5e3d60
// 005e42d7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e42df  e86cf3fdff           call 0x5c3650
// 005e42e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e42e8  89461c               mov dword ptr [esi + 0x1c], eax
// 005e42eb  c706bcef8300         mov dword ptr [esi], 0x83efbc
// 005e42f1  c74610b0ef8300       mov dword ptr [esi + 0x10], 0x83efb0
// 005e42f8  c74614a8ef8300       mov dword ptr [esi + 0x14], 0x83efa8
// 005e42ff  c74620a0ef8300       mov dword ptr [esi + 0x20], 0x83efa0
// 005e4306  c7462490ef8300       mov dword ptr [esi + 0x24], 0x83ef90
// 005e430d  c7464480ef8300       mov dword ptr [esi + 0x44], 0x83ef80
// 005e4314  c7466470ef8300       mov dword ptr [esi + 0x64], 0x83ef70
// 005e431b  c7868400000060ef8300 mov dword ptr [esi + 0x84], 0x83ef60
// 005e4325  c786a400000050ef8300 mov dword ptr [esi + 0xa4], 0x83ef50
// 005e432f  c786c400000040ef8300 mov dword ptr [esi + 0xc4], 0x83ef40
// 005e4339  c7863001000028ef8300 mov dword ptr [esi + 0x130], 0x83ef28
// 005e4343  8bc6                 mov eax, esi
// 005e4345  5e                   pop esi
// 005e4346  64890d00000000       mov dword ptr fs:[0], ecx
// 005e434d  83c410               add esp, 0x10
// 005e4350  c20400               ret 4
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$?0VJoint@RBX@@@?$DescribedNonCreatable@VAutoJoint@RBX@@VJointInstance@2@$1?sAutoJoint@2@3QBDB@RBX@@QAE@PAVJoint@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
