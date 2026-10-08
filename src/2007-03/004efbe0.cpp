// roc 2007-03 004efbe0  unit: seg_004e0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004efbe0
//
// 004efbe0  51                   push ecx
// 004efbe1  56                   push esi
// 004efbe2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004efbe6  c70600000000         mov dword ptr [esi], 0
// 004efbec  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004efbef  50                   push eax
// 004efbf0  8bce                 mov ecx, esi
// 004efbf2  c744240800000000     mov dword ptr [esp + 8], 0
// 004efbfa  e89154f8ff           call 0x475090
// 004efbff  8bc6                 mov eax, esi
// 004efc01  5e                   pop esi
// 004efc02  59                   pop ecx
// 004efc03  c20400               ret 4
// library rbxgs-render/Chunk.cpp (function ?getMesh@AggregateChunk@Render@RBX@@UAE?AV?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
