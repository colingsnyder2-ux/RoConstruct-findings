// roc 2007-08 004a0660  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0660
//
// 004a0660  56                   push esi
// 004a0661  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a0665  8b4614               mov eax, dword ptr [esi + 0x14]
// 004a0668  57                   push edi
// 004a0669  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a066d  6a01                 push 1
// 004a066f  6a20                 push 0x20
// 004a0671  8d4c2418             lea ecx, [esp + 0x18]
// 004a0675  51                   push ecx
// 004a0676  8bcf                 mov ecx, edi
// 004a0678  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a067c  e80ff7ffff           call 0x49fd90
// 004a0681  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004a0685  8b4614               mov eax, dword ptr [esi + 0x14]
// 004a0688  7205                 jb 0x4a068f
// 004a068a  8b7604               mov esi, dword ptr [esi + 4]
// 004a068d  eb03                 jmp 0x4a0692
// 004a068f  83c604               add esi, 4
// 004a0692  6a00                 push 0
// 004a0694  57                   push edi
// 004a0695  83c001               add eax, 1
// 004a0698  50                   push eax
// 004a0699  56                   push esi
// 004a069a  e8a16f0100           call 0x4b7640
// 004a069f  8bc8                 mov ecx, eax
// 004a06a1  e83a720100           call 0x4b78e0
// 004a06a6  8bc7                 mov eax, edi
// 004a06a8  5f                   pop edi
// 004a06a9  5e                   pop esi
// 004a06aa  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
