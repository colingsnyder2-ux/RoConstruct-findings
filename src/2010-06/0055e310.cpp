// from server: 100% by auto
// roc 2010-06 0055e310  unit: G3D::TextInput::WrongSymbol  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e310
//
// 0055e310  56                   push esi
// 0055e311  57                   push edi
// 0055e312  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055e316  57                   push edi
// 0055e317  8bf1                 mov esi, ecx
// 0055e319  e8b2f8ffff           call 0x55dbd0
// 0055e31e  c706040ba200         mov dword ptr [esi], 0xa20b04
// 0055e324  8b4744               mov eax, dword ptr [edi + 0x44]
// 0055e327  894644               mov dword ptr [esi + 0x44], eax
// 0055e32a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0055e32d  5f                   pop edi
// 0055e32e  894e48               mov dword ptr [esi + 0x48], ecx
// 0055e331  8bc6                 mov eax, esi
// 0055e333  5e                   pop esi
// 0055e334  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
