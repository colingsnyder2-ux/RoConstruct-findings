// from server: 100% by auto
// roc 2010-06 0055cd20  unit: G3D::TextInput::WrongSymbol  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cd20
//
// 0055cd20  6aff                 push -1
// 0055cd22  6811a69a00           push 0x9aa611
// 0055cd27  64a100000000         mov eax, dword ptr fs:[0]
// 0055cd2d  50                   push eax
// 0055cd2e  64892500000000       mov dword ptr fs:[0], esp
// 0055cd35  51                   push ecx
// 0055cd36  56                   push esi
// 0055cd37  8b742418             mov esi, dword ptr [esp + 0x18]
// 0055cd3b  89742418             mov dword ptr [esp + 0x18], esi
// 0055cd3f  89742404             mov dword ptr [esp + 4], esi
// 0055cd43  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055cd4b  85f6                 test esi, esi
// 0055cd4d  7427                 je 0x55cd76
// 0055cd4f  57                   push edi
// 0055cd50  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055cd54  57                   push edi
// 0055cd55  8bce                 mov ecx, esi
// 0055cd57  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055cd5d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0055cd60  89461c               mov dword ptr [esi + 0x1c], eax
// 0055cd63  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0055cd66  894e20               mov dword ptr [esi + 0x20], ecx
// 0055cd69  8b5724               mov edx, dword ptr [edi + 0x24]
// 0055cd6c  895624               mov dword ptr [esi + 0x24], edx
// 0055cd6f  8b4728               mov eax, dword ptr [edi + 0x28]
// 0055cd72  894628               mov dword ptr [esi + 0x28], eax
// 0055cd75  5f                   pop edi
// 0055cd76  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055cd7a  5e                   pop esi
// 0055cd7b  64890d00000000       mov dword ptr fs:[0], ecx
// 0055cd82  83c410               add esp, 0x10
// 0055cd85  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??$_Construct@VToken@G3D@@V12@@std@@YAXPAVToken@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
