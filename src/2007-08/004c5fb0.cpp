// roc 2007-08 004c5fb0  unit: RakPeer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5fb0
//
// 004c5fb0  8b4104               mov eax, dword ptr [ecx + 4]
// 004c5fb3  8b542404             mov edx, dword ptr [esp + 4]
// 004c5fb7  3bd0                 cmp edx, eax
// 004c5fb9  732b                 jae 0x4c5fe6
// 004c5fbb  83c0ff               add eax, -1
// 004c5fbe  3bd0                 cmp edx, eax
// 004c5fc0  7320                 jae 0x4c5fe2
// 004c5fc2  56                   push esi
// 004c5fc3  8b01                 mov eax, dword ptr [ecx]
// 004c5fc5  8b74d008             mov esi, dword ptr [eax + edx*8 + 8]
// 004c5fc9  8d04d0               lea eax, [eax + edx*8]
// 004c5fcc  8930                 mov dword ptr [eax], esi
// 004c5fce  8b700c               mov esi, dword ptr [eax + 0xc]
// 004c5fd1  897004               mov dword ptr [eax + 4], esi
// 004c5fd4  8b4104               mov eax, dword ptr [ecx + 4]
// 004c5fd7  83c201               add edx, 1
// 004c5fda  83e801               sub eax, 1
// 004c5fdd  3bd0                 cmp edx, eax
// 004c5fdf  72e2                 jb 0x4c5fc3
// 004c5fe1  5e                   pop esi
// 004c5fe2  834104ff             add dword ptr [ecx + 4], -1
// 004c5fe6  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ?RemoveAtIndex@?$List@UMapNode@?$Map@IUFLR_MemoryBlock@RakNet@@$1??$defaultMapKeyComparison@I@DataStructures@@YAHABI0@Z@DataStructures@@@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
