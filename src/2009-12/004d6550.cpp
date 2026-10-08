// roc 2009-12 004d6550  unit: G3D::GWindow  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6550
//
// 004d6550  56                   push esi
// 004d6551  8bf1                 mov esi, ecx
// 004d6553  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d6556  57                   push edi
// 004d6557  8d7801               lea edi, [eax + 1]
// 004d655a  85c0                 test eax, eax
// 004d655c  7e17                 jle 0x4d6575
// 004d655e  85ff                 test edi, edi
// 004d6560  7f0f                 jg 0x4d6571
// 004d6562  8b06                 mov eax, dword ptr [esi]
// 004d6564  8b5074               mov edx, dword ptr [eax + 0x74]
// 004d6567  6a01                 push 1
// 004d6569  ffd2                 call edx
// 004d656b  897e14               mov dword ptr [esi + 0x14], edi
// 004d656e  5f                   pop edi
// 004d656f  5e                   pop esi
// 004d6570  c3                   ret 
// 004d6571  85c0                 test eax, eax
// 004d6573  7f0d                 jg 0x4d6582
// 004d6575  85ff                 test edi, edi
// 004d6577  7e09                 jle 0x4d6582
// 004d6579  8b06                 mov eax, dword ptr [esi]
// 004d657b  8b5074               mov edx, dword ptr [eax + 0x74]
// 004d657e  6a00                 push 0
// 004d6580  ffd2                 call edx
// 004d6582  897e14               mov dword ptr [esi + 0x14], edi
// 004d6585  5f                   pop edi
// 004d6586  5e                   pop esi
// 004d6587  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ?incMouseHideCount@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
