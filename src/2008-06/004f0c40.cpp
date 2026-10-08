// roc 2008-06 004f0c40  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0c40
//
// 004f0c40  8b442404             mov eax, dword ptr [esp + 4]
// 004f0c44  56                   push esi
// 004f0c45  57                   push edi
// 004f0c46  8b38                 mov edi, dword ptr [eax]
// 004f0c48  8bf1                 mov esi, ecx
// 004f0c4a  e8f1fbffff           call 0x4f0840
// 004f0c4f  897e04               mov dword ptr [esi + 4], edi
// 004f0c52  85ff                 test edi, edi
// 004f0c54  742e                 je 0x4f0c84
// 004f0c56  6a08                 push 8
// 004f0c58  e8c3fc1a00           call 0x6a0920
// 004f0c5d  83c404               add esp, 4
// 004f0c60  85c0                 test eax, eax
// 004f0c62  7418                 je 0x4f0c7c
// 004f0c64  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f0c67  8b4908               mov ecx, dword ptr [ecx + 8]
// 004f0c6a  8930                 mov dword ptr [eax], esi
// 004f0c6c  894804               mov dword ptr [eax + 4], ecx
// 004f0c6f  8b5604               mov edx, dword ptr [esi + 4]
// 004f0c72  894208               mov dword ptr [edx + 8], eax
// 004f0c75  5f                   pop edi
// 004f0c76  8bc6                 mov eax, esi
// 004f0c78  5e                   pop esi
// 004f0c79  c20400               ret 4
// 004f0c7c  8b5604               mov edx, dword ptr [esi + 4]
// 004f0c7f  33c0                 xor eax, eax
// 004f0c81  894208               mov dword ptr [edx + 8], eax
// 004f0c84  5f                   pop edi
// 004f0c85  8bc6                 mov eax, esi
// 004f0c87  5e                   pop esi
// 004f0c88  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??4?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAEAAV01@ABV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
