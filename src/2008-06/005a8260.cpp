// roc 2008-06 005a8260  unit: RBX::Log  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8260
//
// 005a8260  6aff                 push -1
// 005a8262  6809e77c00           push 0x7ce709
// 005a8267  64a100000000         mov eax, dword ptr fs:[0]
// 005a826d  50                   push eax
// 005a826e  64892500000000       mov dword ptr fs:[0], esp
// 005a8275  83ec1c               sub esp, 0x1c
// 005a8278  8d0c24               lea ecx, [esp]
// 005a827b  ff1560248000         call dword ptr [0x802460]
// 005a8281  8d0424               lea eax, [esp]
// 005a8284  50                   push eax
// 005a8285  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005a828d  e8aefeffff           call 0x5a8140
// 005a8292  8b442408             mov eax, dword ptr [esp + 8]
// 005a8296  83c404               add esp, 4
// 005a8299  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005a829e  7304                 jae 0x5a82a4
// 005a82a0  8d442404             lea eax, [esp + 4]
// 005a82a4  6aff                 push -1
// 005a82a6  50                   push eax
// 005a82a7  e8e4bcfaff           call 0x553f90
// 005a82ac  83c408               add esp, 8
// 005a82af  8d0c24               lea ecx, [esp]
// 005a82b2  a3646b9700           mov dword ptr [0x976b64], eax
// 005a82b7  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a82bf  ff1568248000         call dword ptr [0x802468]
// 005a82c5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a82c9  64890d00000000       mov dword ptr fs:[0], ecx
// 005a82d0  83c428               add esp, 0x28
// 005a82d3  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?initLocalScope@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Guid.cpp
