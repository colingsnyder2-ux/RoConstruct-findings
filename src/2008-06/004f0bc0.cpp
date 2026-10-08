// roc 2008-06 004f0bc0  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0bc0
//
// 004f0bc0  6aff                 push -1
// 004f0bc2  68c8a57c00           push 0x7ca5c8
// 004f0bc7  64a100000000         mov eax, dword ptr fs:[0]
// 004f0bcd  50                   push eax
// 004f0bce  64892500000000       mov dword ptr fs:[0], esp
// 004f0bd5  51                   push ecx
// 004f0bd6  56                   push esi
// 004f0bd7  8bf1                 mov esi, ecx
// 004f0bd9  57                   push edi
// 004f0bda  89742408             mov dword ptr [esp + 8], esi
// 004f0bde  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f0be2  c706ec6f8200         mov dword ptr [esi], 0x826fec
// 004f0be8  c7460400000000       mov dword ptr [esi + 4], 0
// 004f0bef  8b7804               mov edi, dword ptr [eax + 4]
// 004f0bf2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004f0bfa  e841fcffff           call 0x4f0840
// 004f0bff  897e04               mov dword ptr [esi + 4], edi
// 004f0c02  85ff                 test edi, edi
// 004f0c04  7423                 je 0x4f0c29
// 004f0c06  6a08                 push 8
// 004f0c08  e813fd1a00           call 0x6a0920
// 004f0c0d  83c404               add esp, 4
// 004f0c10  85c0                 test eax, eax
// 004f0c12  740d                 je 0x4f0c21
// 004f0c14  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f0c17  8b4908               mov ecx, dword ptr [ecx + 8]
// 004f0c1a  8930                 mov dword ptr [eax], esi
// 004f0c1c  894804               mov dword ptr [eax + 4], ecx
// 004f0c1f  eb02                 jmp 0x4f0c23
// 004f0c21  33c0                 xor eax, eax
// 004f0c23  8b5604               mov edx, dword ptr [esi + 4]
// 004f0c26  894208               mov dword ptr [edx + 8], eax
// 004f0c29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f0c2d  5f                   pop edi
// 004f0c2e  8bc6                 mov eax, esi
// 004f0c30  5e                   pop esi
// 004f0c31  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0c38  83c410               add esp, 0x10
// 004f0c3b  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
