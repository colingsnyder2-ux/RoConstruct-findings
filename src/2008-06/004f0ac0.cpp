// roc 2008-06 004f0ac0  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0ac0
//
// 004f0ac0  6aff                 push -1
// 004f0ac2  68c8a57c00           push 0x7ca5c8
// 004f0ac7  64a100000000         mov eax, dword ptr fs:[0]
// 004f0acd  50                   push eax
// 004f0ace  64892500000000       mov dword ptr fs:[0], esp
// 004f0ad5  51                   push ecx
// 004f0ad6  56                   push esi
// 004f0ad7  8bf1                 mov esi, ecx
// 004f0ad9  89742404             mov dword ptr [esp + 4], esi
// 004f0add  c706ec6f8200         mov dword ptr [esi], 0x826fec
// 004f0ae3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f0aeb  e850fdffff           call 0x4f0840
// 004f0af0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f0af4  c706946e8200         mov dword ptr [esi], 0x826e94
// 004f0afa  5e                   pop esi
// 004f0afb  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0b02  83c410               add esp, 0x10
// 004f0b05  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
