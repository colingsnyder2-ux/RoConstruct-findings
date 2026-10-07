// roc 2010-06 0055cca0  unit: G3D::TextInput::TokenException  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cca0
//
// 0055cca0  6aff                 push -1
// 0055cca2  6884179900           push 0x991784
// 0055cca7  64a100000000         mov eax, dword ptr fs:[0]
// 0055ccad  50                   push eax
// 0055ccae  64892500000000       mov dword ptr fs:[0], esp
// 0055ccb5  51                   push ecx
// 0055ccb6  56                   push esi
// 0055ccb7  8bf1                 mov esi, ecx
// 0055ccb9  89742404             mov dword ptr [esp + 4], esi
// 0055ccbd  8d4e60               lea ecx, [esi + 0x60]
// 0055ccc0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0055ccc8  ff1500a49e00         call dword ptr [0x9ea400]
// 0055ccce  8d4e44               lea ecx, [esi + 0x44]
// 0055ccd1  c644241000           mov byte ptr [esp + 0x10], 0
// 0055ccd6  ff1500a49e00         call dword ptr [0x9ea400]
// 0055ccdc  8bce                 mov ecx, esi
// 0055ccde  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055cce6  e865fbffff           call 0x55c850
// 0055cceb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055ccef  5e                   pop esi
// 0055ccf0  64890d00000000       mov dword ptr fs:[0], ecx
// 0055ccf7  83c410               add esp, 0x10
// 0055ccfa  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1WrongSymbol@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
