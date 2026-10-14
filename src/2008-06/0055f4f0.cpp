// from server: 100% by colin
// roc 2008-06 0055f4f0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f4f0
//
// 0055f4f0  6aff                 push -1
// 0055f4f2  68901c7c00           push 0x7c1c90
// 0055f4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0055f4fd  50                   push eax
// 0055f4fe  64892500000000       mov dword ptr fs:[0], esp
// 0055f505  83ec28               sub esp, 0x28
// 0055f508  8d442438             lea eax, [esp + 0x38]
// 0055f50c  89442418     