// roc 2007-08 004fc0a0  unit: RBX::Render::AggregateChunk  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc0a0
//
// 004fc0a0  51                   push ecx
// 004fc0a1  56                   push esi
// 004fc0a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fc0a6  c70600000000         mov dword ptr [esi], 0
// 004fc0ac  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004fc0af  50                   push eax
// 004fc0b0  8bce                 mov ecx, esi
// 004fc0b2  c744240800000000     mov dword ptr [esp + 8], 0
// 004fc0ba  e8b18ef7ff           call 0x474f70
// 004fc0bf  8bc6                 mov eax, esi
// 004fc0c1  5e                   pop esi
// 004fc0c2  59                   pop ecx
// 004fc0c3  c20400               ret 4
// library rbxgs-render/Chunk.cpp (function ?getMesh@AggregateChunk@Render@RBX@@UAE?AV?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
