// roc 2008-06 004f0b60  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0b60
//
// 004f0b60  6aff                 push -1
// 004f0b62  68c8a57c00           push 0x7ca5c8
// 004f0b67  64a100000000         mov eax, dword ptr fs:[0]
// 004f0b6d  50                   push eax
// 004f0b6e  64892500000000       mov dword ptr fs:[0], esp
// 004f0b75  51                   push ecx
// 004f0b76  56                   push esi
// 004f0b77  8bf1                 mov esi, ecx
// 004f0b79  89742404             mov dword ptr [esp + 4], esi
// 004f0b7d  c706ec6f8200         mov dword ptr [esi], 0x826fec
// 004f0b83  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f0b8b  e8b0fcffff           call 0x4f0840
// 004f0b90  f644241801           test byte ptr [esp + 0x18], 1
// 004f0b95  c706946e8200         mov dword ptr [esi], 0x826e94
// 004f0b9b  7409                 je 0x4f0ba6
// 004f0b9d  56                   push esi
// 004f0b9e  e8d7fa1a00           call 0x6a067a
// 004f0ba3  83c404               add esp, 4
// 004f0ba6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f0baa  8bc6                 mov eax, esi
// 004f0bac  5e                   pop esi
// 004f0bad  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0bb4  83c410               add esp, 0x10
// 004f0bb7  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
