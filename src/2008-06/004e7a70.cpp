// roc 2008-06 004e7a70  unit: RBX::RenderBase::VAggregateChunk::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7a70
//
// 004e7a70  6aff                 push -1
// 004e7a72  68c8a57c00           push 0x7ca5c8
// 004e7a77  64a100000000         mov eax, dword ptr fs:[0]
// 004e7a7d  50                   push eax
// 004e7a7e  64892500000000       mov dword ptr fs:[0], esp
// 004e7a85  51                   push ecx
// 004e7a86  56                   push esi
// 004e7a87  8bf1                 mov esi, ecx
// 004e7a89  89742404             mov dword ptr [esp + 4], esi
// 004e7a8d  c706a06e8200         mov dword ptr [esi], 0x826ea0
// 004e7a93  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004e7a9b  e8a08d0000           call 0x4f0840
// 004e7aa0  f644241801           test byte ptr [esp + 0x18], 1
// 004e7aa5  c706946e8200         mov dword ptr [esi], 0x826e94
// 004e7aab  7409                 je 0x4e7ab6
// 004e7aad  56                   push esi
// 004e7aae  e8c78b1b00           call 0x6a067a
// 004e7ab3  83c404               add esp, 4
// 004e7ab6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e7aba  8bc6                 mov eax, esi
// 004e7abc  5e                   pop esi
// 004e7abd  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7ac4  83c410               add esp, 0x10
// 004e7ac7  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
