// roc 2009-06 00448070  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00448070
//
// 00448070  6aff                 push -1
// 00448072  68381e8600           push 0x861e38
// 00448077  64a100000000         mov eax, dword ptr fs:[0]
// 0044807d  50                   push eax
// 0044807e  64892500000000       mov dword ptr fs:[0], esp
// 00448085  51                   push ecx
// 00448086  56                   push esi
// 00448087  8bf1                 mov esi, ecx
// 00448089  89742404             mov dword ptr [esp + 4], esi
// 0044808d  c7066c728b00         mov dword ptr [esi], 0x8b726c
// 00448093  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044809b  e8700b0d00           call 0x518c10
// 004480a0  f644241801           test byte ptr [esp + 0x18], 1
// 004480a5  c706c06a8b00         mov dword ptr [esi], 0x8b6ac0
// 004480ab  7409                 je 0x4480b6
// 004480ad  56                   push esi
// 004480ae  e87f092d00           call 0x718a32
// 004480b3  83c404               add esp, 4
// 004480b6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004480ba  8bc6                 mov eax, esi
// 004480bc  5e                   pop esi
// 004480bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004480c4  83c410               add esp, 0x10
// 004480c7  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??_G?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
