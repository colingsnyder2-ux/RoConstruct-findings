// roc 2010-06 0052ed40  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052ed40
//
// 0052ed40  6aff                 push -1
// 0052ed42  68a8e49800           push 0x98e4a8
// 0052ed47  64a100000000         mov eax, dword ptr fs:[0]
// 0052ed4d  50                   push eax
// 0052ed4e  64892500000000       mov dword ptr fs:[0], esp
// 0052ed55  51                   push ecx
// 0052ed56  56                   push esi
// 0052ed57  8bf1                 mov esi, ecx
// 0052ed59  89742404             mov dword ptr [esp + 4], esi
// 0052ed5d  c70634eea100         mov dword ptr [esi], 0xa1ee34
// 0052ed63  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052ed6b  e8b00c0100           call 0x53fa20
// 0052ed70  f644241801           test byte ptr [esp + 0x18], 1
// 0052ed75  c70638e8a100         mov dword ptr [esi], 0xa1e838
// 0052ed7b  7409                 je 0x52ed86
// 0052ed7d  56                   push esi
// 0052ed7e  e8178c2700           call 0x7a799a
// 0052ed83  83c404               add esp, 4
// 0052ed86  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052ed8a  8bc6                 mov eax, esi
// 0052ed8c  5e                   pop esi
// 0052ed8d  64890d00000000       mov dword ptr fs:[0], ecx
// 0052ed94  83c410               add esp, 0x10
// 0052ed97  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
