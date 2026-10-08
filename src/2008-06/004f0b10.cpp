// roc 2008-06 004f0b10  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0b10
//
// 004f0b10  6aff                 push -1
// 004f0b12  68c8a57c00           push 0x7ca5c8
// 004f0b17  64a100000000         mov eax, dword ptr fs:[0]
// 004f0b1d  50                   push eax
// 004f0b1e  64892500000000       mov dword ptr fs:[0], esp
// 004f0b25  51                   push ecx
// 004f0b26  56                   push esi
// 004f0b27  8d710c               lea esi, [ecx + 0xc]
// 004f0b2a  89742404             mov dword ptr [esp + 4], esi
// 004f0b2e  c706ec6f8200         mov dword ptr [esi], 0x826fec
// 004f0b34  8bce                 mov ecx, esi
// 004f0b36  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f0b3e  e8fdfcffff           call 0x4f0840
// 004f0b43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f0b47  c706946e8200         mov dword ptr [esi], 0x826e94
// 004f0b4d  5e                   pop esi
// 004f0b4e  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0b55  83c410               add esp, 0x10
// 004f0b58  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
