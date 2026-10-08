// roc 2007-03 00728840  unit: seg_00720000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728840
//
// 00728840  56                   push esi
// 00728841  8bf1                 mov esi, ecx
// 00728843  c6460c01             mov byte ptr [esi + 0xc], 1
// 00728847  e8a4ffceff           call 0x4187f0
// 0072884c  8b4604               mov eax, dword ptr [esi + 4]
// 0072884f  50                   push eax
// 00728850  e89b58efff           call 0x61e0f0
// 00728855  83c404               add esp, 4
// 00728858  c7460400000000       mov dword ptr [esi + 4], 0
// 0072885f  5e                   pop esi
// 00728860  c3                   ret 
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ??1trackable@signals@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
