// roc 2010-06 0055e100  unit: G3D::TextInput::WrongSymbol  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e100
//
// 0055e100  56                   push esi
// 0055e101  8bf1                 mov esi, ecx
// 0055e103  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0055e106  40                   inc eax
// 0055e107  57                   push edi
// 0055e108  394614               cmp dword ptr [esi + 0x14], eax
// 0055e10b  7707                 ja 0x55e114
// 0055e10d  6a01                 push 1
// 0055e10f  e84cfbffff           call 0x55dc60
// 0055e114  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0055e117  85ff                 test edi, edi
// 0055e119  7503                 jne 0x55e11e
// 0055e11b  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0055e11e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0055e121  4f                   dec edi
// 0055e122  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0055e126  7510                 jne 0x55e138
// 0055e128  6a2c                 push 0x2c
// 0055e12a  e871982400           call 0x7a79a0
// 0055e12f  8b5610               mov edx, dword ptr [esi + 0x10]
// 0055e132  83c404               add esp, 4
// 0055e135  8904ba               mov dword ptr [edx + edi*4], eax
// 0055e138  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055e13c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0055e13f  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 0055e142  50                   push eax
// 0055e143  52                   push edx
// 0055e144  e8d7ebffff           call 0x55cd20
// 0055e149  ff461c               inc dword ptr [esi + 0x1c]
// 0055e14c  83c408               add esp, 8
// 0055e14f  897e18               mov dword ptr [esi + 0x18], edi
// 0055e152  5f                   pop edi
// 0055e153  5e                   pop esi
// 0055e154  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?push_front@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@QAEXABVToken@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
