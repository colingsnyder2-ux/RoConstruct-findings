// roc 2009-12 005faf50  unit: G3D::TextInput::WrongSymbol  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005faf50
//
// 005faf50  6aff                 push -1
// 005faf52  6891939200           push 0x929391
// 005faf57  64a100000000         mov eax, dword ptr fs:[0]
// 005faf5d  50                   push eax
// 005faf5e  64892500000000       mov dword ptr fs:[0], esp
// 005faf65  51                   push ecx
// 005faf66  56                   push esi
// 005faf67  8b742418             mov esi, dword ptr [esp + 0x18]
// 005faf6b  89742418             mov dword ptr [esp + 0x18], esi
// 005faf6f  89742404             mov dword ptr [esp + 4], esi
// 005faf73  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005faf7b  85f6                 test esi, esi
// 005faf7d  7427                 je 0x5fafa6
// 005faf7f  57                   push edi
// 005faf80  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005faf84  57                   push edi
// 005faf85  8bce                 mov ecx, esi
// 005faf87  ff15f0b69800         call dword ptr [0x98b6f0]
// 005faf8d  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005faf90  89461c               mov dword ptr [esi + 0x1c], eax
// 005faf93  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 005faf96  894e20               mov dword ptr [esi + 0x20], ecx
// 005faf99  8b5724               mov edx, dword ptr [edi + 0x24]
// 005faf9c  895624               mov dword ptr [esi + 0x24], edx
// 005faf9f  8b4728               mov eax, dword ptr [edi + 0x28]
// 005fafa2  894628               mov dword ptr [esi + 0x28], eax
// 005fafa5  5f                   pop edi
// 005fafa6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fafaa  5e                   pop esi
// 005fafab  64890d00000000       mov dword ptr fs:[0], ecx
// 005fafb2  83c410               add esp, 0x10
// 005fafb5  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??$_Construct@VToken@G3D@@V12@@std@@YAXPAVToken@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
