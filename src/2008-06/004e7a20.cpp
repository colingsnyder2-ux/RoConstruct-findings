// roc 2008-06 004e7a20  unit: RBX::RenderBase::VAggregateChunk::?$WeakReferenceCountedPointer  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7a20
//
// 004e7a20  6aff                 push -1
// 004e7a22  68c8a57c00           push 0x7ca5c8
// 004e7a27  64a100000000         mov eax, dword ptr fs:[0]
// 004e7a2d  50                   push eax
// 004e7a2e  64892500000000       mov dword ptr fs:[0], esp
// 004e7a35  51                   push ecx
// 004e7a36  56                   push esi
// 004e7a37  8bf1                 mov esi, ecx
// 004e7a39  89742404             mov dword ptr [esp + 4], esi
// 004e7a3d  c706a06e8200         mov dword ptr [esi], 0x826ea0
// 004e7a43  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004e7a4b  e8f08d0000           call 0x4f0840
// 004e7a50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e7a54  c706946e8200         mov dword ptr [esi], 0x826e94
// 004e7a5a  5e                   pop esi
// 004e7a5b  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7a62  83c410               add esp, 0x10
// 004e7a65  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
