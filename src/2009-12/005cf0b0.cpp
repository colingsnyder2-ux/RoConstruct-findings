// roc 2009-12 005cf0b0  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cf0b0
//
// 005cf0b0  6aff                 push -1
// 005cf0b2  6858d09300           push 0x93d058
// 005cf0b7  64a100000000         mov eax, dword ptr fs:[0]
// 005cf0bd  50                   push eax
// 005cf0be  64892500000000       mov dword ptr fs:[0], esp
// 005cf0c5  51                   push ecx
// 005cf0c6  56                   push esi
// 005cf0c7  8bf1                 mov esi, ecx
// 005cf0c9  89742404             mov dword ptr [esp + 4], esi
// 005cf0cd  c706d4119c00         mov dword ptr [esi], 0x9c11d4
// 005cf0d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cf0db  e8c0f5ffff           call 0x5ce6a0
// 005cf0e0  f644241801           test byte ptr [esp + 0x18], 1
// 005cf0e5  c70630ad9a00         mov dword ptr [esi], 0x9aad30
// 005cf0eb  7409                 je 0x5cf0f6
// 005cf0ed  56                   push esi
// 005cf0ee  e867472200           call 0x7f385a
// 005cf0f3  83c404               add esp, 4
// 005cf0f6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cf0fa  8bc6                 mov eax, esi
// 005cf0fc  5e                   pop esi
// 005cf0fd  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf104  83c410               add esp, 0x10
// 005cf107  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
