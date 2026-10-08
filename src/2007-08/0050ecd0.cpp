// from server: 100% by auto
// roc 2007-08 0050ecd0  unit: G3D::TextInput::WrongSymbol  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ecd0
//
// 0050ecd0  56                   push esi
// 0050ecd1  8bf1                 mov esi, ecx
// 0050ecd3  8b4610               mov eax, dword ptr [esi + 0x10]
// 0050ecd6  83c001               add eax, 1
// 0050ecd9  394608               cmp dword ptr [esi + 8], eax
// 0050ecdc  57                   push edi
// 0050ecdd  7707                 ja 0x50ece6
// 0050ecdf  6a01                 push 1
// 0050ece1  e88afeffff           call 0x50eb70
// 0050ece6  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0050ece9  85ff                 test edi, edi
// 0050eceb  7503                 jne 0x50ecf0
// 0050eced  8b7e08               mov edi, dword ptr [esi + 8]
// 0050ecf0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050ecf3  83ef01               sub edi, 1
// 0050ecf6  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0050ecfa  7510                 jne 0x50ed0c
// 0050ecfc  6a2c                 push 0x2c
// 0050ecfe  e8f3111200           call 0x62fef6
// 0050ed03  8b5604               mov edx, dword ptr [esi + 4]
// 0050ed06  83c404               add esp, 4
// 0050ed09  8904ba               mov dword ptr [edx + edi*4], eax
// 0050ed0c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050ed10  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050ed13  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 0050ed16  50                   push eax
// 0050ed17  52                   push edx
// 0050ed18  e843ecffff           call 0x50d960
// 0050ed1d  83461001             add dword ptr [esi + 0x10], 1
// 0050ed21  83c408               add esp, 8
// 0050ed24  897e0c               mov dword ptr [esi + 0xc], edi
// 0050ed27  5f                   pop edi
// 0050ed28  5e                   pop esi
// 0050ed29  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?push_front@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@QAEXABVToken@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
