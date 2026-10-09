// roc 2009-12 0044e2e0  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044e2e0
//
// 0044e2e0  6aff                 push -1
// 0044e2e2  6858d09300           push 0x93d058
// 0044e2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0044e2ed  50                   push eax
// 0044e2ee  64892500000000       mov dword ptr fs:[0], esp
// 0044e2f5  51                   push ecx
// 0044e2f6  56                   push esi
// 0044e2f7  8bf1                 mov esi, ecx
// 0044e2f9  89742404             mov dword ptr [esp + 4], esi
// 0044e2fd  c706dcb49a00         mov dword ptr [esi], 0x9ab4dc
// 0044e303  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044e30b  e890031800           call 0x5ce6a0
// 0044e310  f644241801           test byte ptr [esp + 0x18], 1
// 0044e315  c70630ad9a00         mov dword ptr [esi], 0x9aad30
// 0044e31b  7409                 je 0x44e326
// 0044e31d  56                   push esi
// 0044e31e  e837553a00           call 0x7f385a
// 0044e323  83c404               add esp, 4
// 0044e326  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044e32a  8bc6                 mov eax, esi
// 0044e32c  5e                   pop esi
// 0044e32d  64890d00000000       mov dword ptr fs:[0], ecx
// 0044e334  83c410               add esp, 0x10
// 0044e337  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
