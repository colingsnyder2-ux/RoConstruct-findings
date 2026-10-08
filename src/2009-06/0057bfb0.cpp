// from server: 100% by auto
// roc 2009-06 0057bfb0  unit: G3D::TextInput::WrongSymbol  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057bfb0
//
// 0057bfb0  56                   push esi
// 0057bfb1  57                   push edi
// 0057bfb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057bfb6  57                   push edi
// 0057bfb7  8bf1                 mov esi, ecx
// 0057bfb9  e8b2f8ffff           call 0x57b870
// 0057bfbe  c7066cbf8c00         mov dword ptr [esi], 0x8cbf6c
// 0057bfc4  8b4744               mov eax, dword ptr [edi + 0x44]
// 0057bfc7  894644               mov dword ptr [esi + 0x44], eax
// 0057bfca  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0057bfcd  5f                   pop edi
// 0057bfce  894e48               mov dword ptr [esi + 0x48], ecx
// 0057bfd1  8bc6                 mov eax, esi
// 0057bfd3  5e                   pop esi
// 0057bfd4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
