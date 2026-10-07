// roc 2007-08 0050d960  unit: G3D::TextInput::WrongSymbol  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d960
//
// 0050d960  6aff                 push -1
// 0050d962  6841717400           push 0x747141
// 0050d967  64a100000000         mov eax, dword ptr fs:[0]
// 0050d96d  50                   push eax
// 0050d96e  51                   push ecx
// 0050d96f  56                   push esi
// 0050d970  57                   push edi
// 0050d971  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050d976  33c4                 xor eax, esp
// 0050d978  50                   push eax
// 0050d979  8d442410             lea eax, [esp + 0x10]
// 0050d97d  64a300000000         mov dword ptr fs:[0], eax
// 0050d983  8b742420             mov esi, dword ptr [esp + 0x20]
// 0050d987  89742420             mov dword ptr [esp + 0x20], esi
// 0050d98b  8974240c             mov dword ptr [esp + 0xc], esi
// 0050d98f  85f6                 test esi, esi
// 0050d991  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0050d999  7425                 je 0x50d9c0
// 0050d99b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0050d99f  57                   push edi
// 0050d9a0  8bce                 mov ecx, esi
// 0050d9a2  ff159ce67700         call dword ptr [0x77e69c]
// 0050d9a8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0050d9ab  89461c               mov dword ptr [esi + 0x1c], eax
// 0050d9ae  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0050d9b1  894e20               mov dword ptr [esi + 0x20], ecx
// 0050d9b4  8b5724               mov edx, dword ptr [edi + 0x24]
// 0050d9b7  895624               mov dword ptr [esi + 0x24], edx
// 0050d9ba  8b4728               mov eax, dword ptr [edi + 0x28]
// 0050d9bd  894628               mov dword ptr [esi + 0x28], eax
// 0050d9c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050d9c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d9cb  59                   pop ecx
// 0050d9cc  5f                   pop edi
// 0050d9cd  5e                   pop esi
// 0050d9ce  83c410               add esp, 0x10
// 0050d9d1  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??$_Construct@VToken@G3D@@V12@@std@@YAXPAVToken@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
