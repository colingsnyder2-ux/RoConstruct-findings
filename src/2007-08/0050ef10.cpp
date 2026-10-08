// from server: 100% by auto
// roc 2007-08 0050ef10  unit: G3D::TextInput::WrongSymbol  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ef10
//
// 0050ef10  56                   push esi
// 0050ef11  57                   push edi
// 0050ef12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050ef16  57                   push edi
// 0050ef17  8bf1                 mov esi, ecx
// 0050ef19  e852f8ffff           call 0x50e770
// 0050ef1e  c706ac0d7a00         mov dword ptr [esi], 0x7a0dac
// 0050ef24  8b4744               mov eax, dword ptr [edi + 0x44]
// 0050ef27  894644               mov dword ptr [esi + 0x44], eax
// 0050ef2a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0050ef2d  5f                   pop edi
// 0050ef2e  894e48               mov dword ptr [esi + 0x48], ecx
// 0050ef31  8bc6                 mov eax, esi
// 0050ef33  5e                   pop esi
// 0050ef34  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
