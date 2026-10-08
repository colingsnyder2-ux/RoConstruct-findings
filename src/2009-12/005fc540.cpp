// roc 2009-12 005fc540  unit: G3D::TextInput::WrongSymbol  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc540
//
// 005fc540  56                   push esi
// 005fc541  57                   push edi
// 005fc542  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fc546  57                   push edi
// 005fc547  8bf1                 mov esi, ecx
// 005fc549  e8b2f8ffff           call 0x5fbe00
// 005fc54e  c706dc2d9c00         mov dword ptr [esi], 0x9c2ddc
// 005fc554  8b4744               mov eax, dword ptr [edi + 0x44]
// 005fc557  894644               mov dword ptr [esi + 0x44], eax
// 005fc55a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005fc55d  5f                   pop edi
// 005fc55e  894e48               mov dword ptr [esi + 0x48], ecx
// 005fc561  8bc6                 mov eax, esi
// 005fc563  5e                   pop esi
// 005fc564  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
