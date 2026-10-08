// from server: 100% by auto
// roc 2009-06 0057a9c0  unit: G3D::TextInput::WrongSymbol  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a9c0
//
// 0057a9c0  6aff                 push -1
// 0057a9c2  6851ed8400           push 0x84ed51
// 0057a9c7  64a100000000         mov eax, dword ptr fs:[0]
// 0057a9cd  50                   push eax
// 0057a9ce  64892500000000       mov dword ptr fs:[0], esp
// 0057a9d5  51                   push ecx
// 0057a9d6  56                   push esi
// 0057a9d7  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057a9db  89742418             mov dword ptr [esp + 0x18], esi
// 0057a9df  89742404             mov dword ptr [esp + 4], esi
// 0057a9e3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057a9eb  85f6                 test esi, esi
// 0057a9ed  7427                 je 0x57aa16
// 0057a9ef  57                   push edi
// 0057a9f0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057a9f4  57                   push edi
// 0057a9f5  8bce                 mov ecx, esi
// 0057a9f7  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057a9fd  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0057aa00  89461c               mov dword ptr [esi + 0x1c], eax
// 0057aa03  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0057aa06  894e20               mov dword ptr [esi + 0x20], ecx
// 0057aa09  8b5724               mov edx, dword ptr [edi + 0x24]
// 0057aa0c  895624               mov dword ptr [esi + 0x24], edx
// 0057aa0f  8b4728               mov eax, dword ptr [edi + 0x28]
// 0057aa12  894628               mov dword ptr [esi + 0x28], eax
// 0057aa15  5f                   pop edi
// 0057aa16  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057aa1a  5e                   pop esi
// 0057aa1b  64890d00000000       mov dword ptr fs:[0], ecx
// 0057aa22  83c410               add esp, 0x10
// 0057aa25  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??$_Construct@VToken@G3D@@V12@@std@@YAXPAVToken@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
