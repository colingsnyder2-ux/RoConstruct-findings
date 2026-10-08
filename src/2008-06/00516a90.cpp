// from server: 100% by auto
// roc 2008-06 00516a90  unit: G3D::TextInput::WrongSymbol  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516a90
//
// 00516a90  6aff                 push -1
// 00516a92  6811e87c00           push 0x7ce811
// 00516a97  64a100000000         mov eax, dword ptr fs:[0]
// 00516a9d  50                   push eax
// 00516a9e  64892500000000       mov dword ptr fs:[0], esp
// 00516aa5  51                   push ecx
// 00516aa6  56                   push esi
// 00516aa7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00516aab  89742418             mov dword ptr [esp + 0x18], esi
// 00516aaf  89742404             mov dword ptr [esp + 4], esi
// 00516ab3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00516abb  85f6                 test esi, esi
// 00516abd  7427                 je 0x516ae6
// 00516abf  57                   push edi
// 00516ac0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00516ac4  57                   push edi
// 00516ac5  8bce                 mov ecx, esi
// 00516ac7  ff155c248000         call dword ptr [0x80245c]
// 00516acd  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00516ad0  89461c               mov dword ptr [esi + 0x1c], eax
// 00516ad3  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00516ad6  894e20               mov dword ptr [esi + 0x20], ecx
// 00516ad9  8b5724               mov edx, dword ptr [edi + 0x24]
// 00516adc  895624               mov dword ptr [esi + 0x24], edx
// 00516adf  8b4728               mov eax, dword ptr [edi + 0x28]
// 00516ae2  894628               mov dword ptr [esi + 0x28], eax
// 00516ae5  5f                   pop edi
// 00516ae6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00516aea  5e                   pop esi
// 00516aeb  64890d00000000       mov dword ptr fs:[0], ecx
// 00516af2  83c410               add esp, 0x10
// 00516af5  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??$_Construct@VToken@G3D@@V12@@std@@YAXPAVToken@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
