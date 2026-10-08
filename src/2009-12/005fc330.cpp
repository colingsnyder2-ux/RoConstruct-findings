// roc 2009-12 005fc330  unit: G3D::TextInput::WrongSymbol  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc330
//
// 005fc330  56                   push esi
// 005fc331  8bf1                 mov esi, ecx
// 005fc333  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005fc336  40                   inc eax
// 005fc337  57                   push edi
// 005fc338  394614               cmp dword ptr [esi + 0x14], eax
// 005fc33b  7707                 ja 0x5fc344
// 005fc33d  6a01                 push 1
// 005fc33f  e84cfbffff           call 0x5fbe90
// 005fc344  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005fc347  85ff                 test edi, edi
// 005fc349  7503                 jne 0x5fc34e
// 005fc34b  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005fc34e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fc351  4f                   dec edi
// 005fc352  833cb900             cmp dword ptr [ecx + edi*4], 0
// 005fc356  7510                 jne 0x5fc368
// 005fc358  6a2c                 push 0x2c
// 005fc35a  e801751f00           call 0x7f3860
// 005fc35f  8b5610               mov edx, dword ptr [esi + 0x10]
// 005fc362  83c404               add esp, 4
// 005fc365  8904ba               mov dword ptr [edx + edi*4], eax
// 005fc368  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fc36c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fc36f  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005fc372  50                   push eax
// 005fc373  52                   push edx
// 005fc374  e8d7ebffff           call 0x5faf50
// 005fc379  ff461c               inc dword ptr [esi + 0x1c]
// 005fc37c  83c408               add esp, 8
// 005fc37f  897e18               mov dword ptr [esi + 0x18], edi
// 005fc382  5f                   pop edi
// 005fc383  5e                   pop esi
// 005fc384  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?push_front@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@QAEXABVToken@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
