// roc 2009-06 0057c2a0  unit: G3D::TextInput::WrongSymbol  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c2a0
//
// 0057c2a0  83ec2c               sub esp, 0x2c
// 0057c2a3  53                   push ebx
// 0057c2a4  8d442404             lea eax, [esp + 4]
// 0057c2a8  50                   push eax
// 0057c2a9  e832ffffff           call 0x57c1e0
// 0057c2ae  83782403             cmp dword ptr [eax + 0x24], 3
// 0057c2b2  8d4c2404             lea ecx, [esp + 4]
// 0057c2b6  0f95c3               setne bl
// 0057c2b9  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057c2bf  8ac3                 mov al, bl
// 0057c2c1  5b                   pop ebx
// 0057c2c2  83c42c               add esp, 0x2c
// 0057c2c5  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?hasMore@TextInput@G3D@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
