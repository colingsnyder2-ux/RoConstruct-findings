// roc 2007-08 004fc070  unit: RBX::Render::AggregateChunk  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc070
//
// 004fc070  51                   push ecx
// 004fc071  56                   push esi
// 004fc072  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fc076  c70600000000         mov dword ptr [esi], 0
// 004fc07c  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004fc07f  50                   push eax
// 004fc080  8bce                 mov ecx, esi
// 004fc082  c744240800000000     mov dword ptr [esp + 8], 0
// 004fc08a  e8e18ef7ff           call 0x474f70
// 004fc08f  8bc6                 mov eax, esi
// 004fc091  5e                   pop esi
// 004fc092  59                   pop ecx
// 004fc093  c20400               ret 4
// library rbxgs-render/Chunk.cpp (function ?getMaterial@AggregateChunk@Render@RBX@@UAE?AV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
