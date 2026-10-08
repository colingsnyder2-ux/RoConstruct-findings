// roc 2007-03 004e6190  unit: seg_004e0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e6190
//
// 004e6190  51                   push ecx
// 004e6191  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004e6194  85c0                 test eax, eax
// 004e6196  56                   push esi
// 004e6197  8d7108               lea esi, [ecx + 8]
// 004e619a  741c                 je 0x4e61b8
// 004e619c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e61a0  8b5608               mov edx, dword ptr [esi + 8]
// 004e61a3  51                   push ecx
// 004e61a4  56                   push esi
// 004e61a5  52                   push edx
// 004e61a6  50                   push eax
// 004e61a7  e824f6ffff           call 0x4e57d0
// 004e61ac  8b4604               mov eax, dword ptr [esi + 4]
// 004e61af  50                   push eax
// 004e61b0  e83b7f1300           call 0x61e0f0
// 004e61b5  83c414               add esp, 0x14
// 004e61b8  c7460400000000       mov dword ptr [esi + 4], 0
// 004e61bf  c7460800000000       mov dword ptr [esi + 8], 0
// 004e61c6  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004e61cd  5e                   pop esi
// 004e61ce  59                   pop ecx
// 004e61cf  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??1?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
