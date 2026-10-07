// roc 2008-06 00518080  unit: G3D::TextInput::WrongSymbol  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518080
//
// 00518080  56                   push esi
// 00518081  57                   push edi
// 00518082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00518086  57                   push edi
// 00518087  8bf1                 mov esi, ecx
// 00518089  e8b2f8ffff           call 0x517940
// 0051808e  c7067c8a8200         mov dword ptr [esi], 0x828a7c
// 00518094  8b4744               mov eax, dword ptr [edi + 0x44]
// 00518097  894644               mov dword ptr [esi + 0x44], eax
// 0051809a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0051809d  5f                   pop edi
// 0051809e  894e48               mov dword ptr [esi + 0x48], ecx
// 005180a1  8bc6                 mov eax, esi
// 005180a3  5e                   pop esi
// 005180a4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
