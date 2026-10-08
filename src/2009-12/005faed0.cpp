// roc 2009-12 005faed0  unit: G3D::TextInput::TokenException  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005faed0
//
// 005faed0  6aff                 push -1
// 005faed2  6804f99300           push 0x93f904
// 005faed7  64a100000000         mov eax, dword ptr fs:[0]
// 005faedd  50                   push eax
// 005faede  64892500000000       mov dword ptr fs:[0], esp
// 005faee5  51                   push ecx
// 005faee6  56                   push esi
// 005faee7  8bf1                 mov esi, ecx
// 005faee9  89742404             mov dword ptr [esp + 4], esi
// 005faeed  8d4e60               lea ecx, [esi + 0x60]
// 005faef0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005faef8  ff15e4b69800         call dword ptr [0x98b6e4]
// 005faefe  8d4e44               lea ecx, [esi + 0x44]
// 005faf01  c644241000           mov byte ptr [esp + 0x10], 0
// 005faf06  ff15e4b69800         call dword ptr [0x98b6e4]
// 005faf0c  8bce                 mov ecx, esi
// 005faf0e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005faf16  e865fbffff           call 0x5faa80
// 005faf1b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005faf1f  5e                   pop esi
// 005faf20  64890d00000000       mov dword ptr fs:[0], ecx
// 005faf27  83c410               add esp, 0x10
// 005faf2a  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1WrongSymbol@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
