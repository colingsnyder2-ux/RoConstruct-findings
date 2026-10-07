// roc 2008-06 00518370  unit: G3D::TextInput::WrongSymbol  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518370
//
// 00518370  83ec2c               sub esp, 0x2c
// 00518373  53                   push ebx
// 00518374  8d442404             lea eax, [esp + 4]
// 00518378  50                   push eax
// 00518379  e832ffffff           call 0x5182b0
// 0051837e  83782403             cmp dword ptr [eax + 0x24], 3
// 00518382  8d4c2404             lea ecx, [esp + 4]
// 00518386  0f95c3               setne bl
// 00518389  ff1568248000         call dword ptr [0x802468]
// 0051838f  8ac3                 mov al, bl
// 00518391  5b                   pop ebx
// 00518392  83c42c               add esp, 0x2c
// 00518395  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?hasMore@TextInput@G3D@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
