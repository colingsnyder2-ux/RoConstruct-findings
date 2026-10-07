// roc 2009-06 0057bda0  unit: G3D::TextInput::WrongSymbol  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057bda0
//
// 0057bda0  56                   push esi
// 0057bda1  8bf1                 mov esi, ecx
// 0057bda3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0057bda6  40                   inc eax
// 0057bda7  57                   push edi
// 0057bda8  394614               cmp dword ptr [esi + 0x14], eax
// 0057bdab  7707                 ja 0x57bdb4
// 0057bdad  6a01                 push 1
// 0057bdaf  e84cfbffff           call 0x57b900
// 0057bdb4  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057bdb7  85ff                 test edi, edi
// 0057bdb9  7503                 jne 0x57bdbe
// 0057bdbb  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0057bdbe  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057bdc1  4f                   dec edi
// 0057bdc2  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0057bdc6  7510                 jne 0x57bdd8
// 0057bdc8  6a2c                 push 0x2c
// 0057bdca  e869cc1900           call 0x718a38
// 0057bdcf  8b5610               mov edx, dword ptr [esi + 0x10]
// 0057bdd2  83c404               add esp, 4
// 0057bdd5  8904ba               mov dword ptr [edx + edi*4], eax
// 0057bdd8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057bddc  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057bddf  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 0057bde2  50                   push eax
// 0057bde3  52                   push edx
// 0057bde4  e8d7ebffff           call 0x57a9c0
// 0057bde9  ff461c               inc dword ptr [esi + 0x1c]
// 0057bdec  83c408               add esp, 8
// 0057bdef  897e18               mov dword ptr [esi + 0x18], edi
// 0057bdf2  5f                   pop edi
// 0057bdf3  5e                   pop esi
// 0057bdf4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?push_front@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@QAEXABVToken@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
