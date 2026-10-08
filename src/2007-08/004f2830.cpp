// roc 2007-08 004f2830  unit: RBX::Render::AggregatingSceneManager  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f2830
//
// 004f2830  51                   push ecx
// 004f2831  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004f2834  85c0                 test eax, eax
// 004f2836  56                   push esi
// 004f2837  8d7108               lea esi, [ecx + 8]
// 004f283a  741c                 je 0x4f2858
// 004f283c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f2840  8b5608               mov edx, dword ptr [esi + 8]
// 004f2843  51                   push ecx
// 004f2844  56                   push esi
// 004f2845  52                   push edx
// 004f2846  50                   push eax
// 004f2847  e814f6ffff           call 0x4f1e60
// 004f284c  8b4604               mov eax, dword ptr [esi + 4]
// 004f284f  50                   push eax
// 004f2850  e80dd41300           call 0x62fc62
// 004f2855  83c414               add esp, 0x14
// 004f2858  c7460400000000       mov dword ptr [esi + 4], 0
// 004f285f  c7460800000000       mov dword ptr [esi + 8], 0
// 004f2866  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004f286d  5e                   pop esi
// 004f286e  59                   pop ecx
// 004f286f  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??1?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
