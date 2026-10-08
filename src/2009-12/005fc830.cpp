// roc 2009-12 005fc830  unit: G3D::TextInput::WrongSymbol  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc830
//
// 005fc830  83ec2c               sub esp, 0x2c
// 005fc833  53                   push ebx
// 005fc834  8d442404             lea eax, [esp + 4]
// 005fc838  50                   push eax
// 005fc839  e832ffffff           call 0x5fc770
// 005fc83e  83782403             cmp dword ptr [eax + 0x24], 3
// 005fc842  8d4c2404             lea ecx, [esp + 4]
// 005fc846  0f95c3               setne bl
// 005fc849  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fc84f  8ac3                 mov al, bl
// 005fc851  5b                   pop ebx
// 005fc852  83c42c               add esp, 0x2c
// 005fc855  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?hasMore@TextInput@G3D@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
